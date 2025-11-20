#include<rclcpp/rclcpp.hpp>
#include<rclcpp/serialization.hpp>
#include<rclcpp/serialized_message.hpp>
#include<std_msgs/msg/string.hpp>
#include<deva_control_msgs/msg/control_monitor_msg.hpp>
#include<deva_control_msgs/msg/control_result.hpp>
#include<deva_control_msgs/msg/vehicle_status_command.hpp>
#include<deva_control_msgs/msg/vehicle_report_common.hpp>
#include<rviz_plug_msg/msg/exception_monitor.hpp>
#include<fault_diagnosis/msg/diag_state.hpp>
#include<deva_function_msgs/msg/fsm_module_running_state_msg.hpp>
#include<deva_common_msgs/msg/serialize.hpp>
#include<deva_localization_msgs/msg/localization_estimate.hpp>
#include<deva_perception_msgs/msg/rv_dyn_obstacle_result.hpp>
#include<deva_aeb_msgs/msg/fusion_info_for_aeb.hpp>
#include<visualization_msgs/msg/marker_array.hpp>
#include<deva_map_msgs/msg/local_map.hpp>
#include<deva_perception_msgs/msg/entrance_array.hpp>
#include<deva_perception_msgs/msg/lane_arrayv2.hpp>
#include<deva_mdriver_msgs/msg/mdriver_result.hpp>
#include<deva_mdriver_msgs/msg/mdriver_ref_lines.hpp>
#include<deva_gaode_routing_msgs/msg/adasis_map.hpp>
#include<deva_navi_msgs/msg/navi_socket_stream.hpp>
#include<serialize_msgs/msg/serialize_proto.hpp>
#include<rcl_interfaces/msg/parameter_event.hpp>
#include<deva_perception_msgs/msg/occ_visualization.hpp>
#include<deva_perception_msgs/msg/virtual_cams.hpp>
#include<deva_perception_msgs/msg/rv_lane_result.hpp>
#include<deva_perception_msgs/msg/rv_static_obstacle_array.hpp>
#include<deva_aeb_msgs/msg/fusion_info_for_aeb_obstracle_list.hpp>
#include<deva_ads_msgs/msg/ads_marker_array_vec.hpp>
#include<deva_planning_msgs/msg/driving_mode.hpp>
#include<environment_model_msgs/msg/env_info.hpp>
#include<environment_model_msgs/msg/env_lane_array.hpp>
#include<deva_planning_msgs2/msg/planning_log.hpp>
#include<deva_planning_msgs2/msg/navi_action.hpp>
#include<deva_planning_msgs2/msg/planning_command.hpp>
#include<deva_planning_msgs2/msg/planning_result.hpp>
#include<deva_planning_msgs2/msg/reference_lines.hpp>
#include<deva_planning_msgs2/msg/state_context.hpp>
#include<deva_planning_msgs2/msg/virtual_wall_array.hpp>
#include<rcl_interfaces/msg/log.hpp>
#include<deva_gaode_routing_msgs/msg/global_routing.hpp>
#include<foxglove_msgs/msg/compressed_video.hpp>
#include<deva_localization_msgs/msg/gnss_best_pose.hpp>
#include<deva_localization_msgs/msg/ins.hpp>
#include<deva_perception_msgs/msg/radar_object_array.hpp>
#include<deva_perception_msgs/msg/radar_object_message.hpp>
#include<deva_localization_msgs/msg/raw_imu.hpp>
#include<deva_localization_msgs/msg/corrected_imu.hpp>
#include<sensor_msgs/msg/point_cloud2.hpp>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <functional>
#include <set>
#include <chrono>
#include <type_traits>
#include <iostream>
#include "mcap_streamer/ros_message_converter.hpp"

// Topic 名称到消息类型的映射
static std::map<std::string, std::string> topic_types_ = {
    {"/calib/params", "std_msgs/msg/String"},
    {"/control/control_signal_monitor", "deva_control_msgs/msg/ControlMonitorMsg"},
    {"/control/vehicle_control_command", "deva_control_msgs/msg/ControlResult"},
    {"/control/vehicle_status_command", "deva_control_msgs/msg/VehicleStatusCommand"},
    {"/exception_monitor", "rviz_plug_msg/msg/ExceptionMonitor"},
    {"/fault_diagnosis", "fault_diagnosis/msg/DiagState"},
    {"/function/fsm_module_running_state", "deva_function_msgs/msg/FsmModuleRunningStateMsg"},
    {"/fusion_frame", "deva_common_msgs/msg/Serialize"},
    {"/localization/localization_estimate", "deva_localization_msgs/msg/LocalizationEstimate"},
    {"/map/admap_l0", "deva_aeb_msgs/msg/FusionInfoForAEB"},
    {"/map/e2emap_visualize", "visualization_msgs/msg/MarkerArray"},
    {"/map/entrance_array_result", "deva_perception_msgs/msg/EntranceArray"},
    {"/map/lane_marker", "visualization_msgs/msg/MarkerArray"},
    {"/map/local_map_v2", "deva_map_msgs/msg/LocalMap"},
    {"/map/local_map_visualize", "visualization_msgs/msg/MarkerArray"},
    {"/map/map_merger", "deva_perception_msgs/msg/LaneArrayv2"},
    {"/mdriver/agents_planning_pos", "visualization_msgs/msg/MarkerArray"},
    {"/mdriver/agents_planning_traj", "visualization_msgs/msg/MarkerArray"},
    {"/mdriver/ego_planning_traj", "visualization_msgs/msg/MarkerArray"},
    {"/mdriver/input_data_frame", "deva_common_msgs/msg/Serialize"},
    {"/mdriver/mworld_array_result", "deva_mdriver_msgs/msg/MdriverResult"},
    {"/mdriver/output_data_frame", "deva_common_msgs/msg/Serialize"},
    {"/mdriver/reference_lines", "deva_mdriver_msgs/msg/MdriverRefLines"},
    {"/mdriver/version", "std_msgs/msg/String"},
    {"/navi/adasis_v2_map", "deva_gaode_routing_msgs/msg/AdasisMap"},
    {"/navi/socket_stream", "deva_navi_msgs/msg/NaviSocketStream"},
    {"/offline/obstacle_perceptor_proto_data", "serialize_msgs/msg/SerializeProto"},
    {"/offline/obstacle_perceptor_version_info", "std_msgs/msg/String"},
    {"/offline/occ_perceptor_proto_data", "serialize_msgs/msg/SerializeProto"},
    {"/parameter_events", "rcl_interfaces/msg/ParameterEvent"},
    {"/perception/aeb_adb", "deva_perception_msgs/msg/RVADB"},
    {"/perception/aeb_dynamic_obs_array", "deva_perception_msgs/msg/RVDynamicObstacleArray"},
    {"/perception/aeb_lidar_obstacle_array", "deva_perception_msgs/msg/AEBObstacleArray"},
    {"/perception/aeb_lights", "deva_perception_msgs/msg/RVADB"},
    {"/perception/aeb_rv_dyn_result", "deva_perception_msgs/msg/RVDynObstacleResult"},
    {"/perception/aeb_rv_dyn_subclass", "deva_perception_msgs/msg/RVDynObstacleResult"},
    {"/perception/aeb_rv_obstacle_array", "deva_perception_msgs/msg/AEBObstacleArray"},
    {"/perception/aeb_rv_result", "deva_perception_msgs/msg/RVResult"},
    {"/perception/detection/dynamic_obstacle_result", "deva_perception_msgs/msg/FreespaceMatrix"},
    {"/perception/detection/dynamic_obstacle_result_second", "deva_perception_msgs/msg/FreespaceMatrix"},
    {"/perception/detection/obstacle_array_result", "deva_perception_msgs/msg/PerceptionResult"},
    {"/perception/detection/obstacle_timestamp_result", "deva_perception_msgs/msg/ObstacleTimestamp"},
    {"/perception/detection/static_obstacle_result", "deva_perception_msgs/msg/FreespaceMatrix"},
    {"/perception/detection/static_obstacle_result_second", "deva_perception_msgs/msg/FreespaceMatrix"},
    {"/perception/entrance_array_result", "deva_perception_msgs/msg/EntranceArray"},
    {"/perception/fusion/version", "std_msgs/msg/String"},
    {"/perception/lane_array_result", "deva_perception_msgs/msg/LaneArrayv2"},
    {"/perception/lane_array_result_fused", "deva_perception_msgs/msg/LaneArrayv2"},
    {"/perception/lane_array_result_raw", "deva_perception_msgs/msg/LaneArrayv2"},
    {"/perception/occ/input_timestamps", "deva_perception_msgs/msg/ObstacleTimestamp"},
    {"/perception/occ/visualization", "deva_perception_msgs/msg/OCCVisualization"},
    {"/perception/occ/visualization_3d", "deva_perception_msgs/msg/OCCVisualization"},
    {"/perception/perception_map", "deva_perception_msgs/msg/PerceptionResult"},
    {"/perception/rv_virtual_cams", "deva_perception_msgs/msg/VirtualCams"},
    {"/perception/rvlane_result_array", "deva_perception_msgs/msg/RvLaneResult"},
    {"/perception/rvstatic_drive_result", "deva_perception_msgs/msg/RvStaticObstacleArray"},
    {"/perception/rvstatic_result", "deva_aeb_msgs/msg/FusionInfoForAEBObstracleList"},
    {"/perception/rvstatic_word_result", "deva_aeb_msgs/msg/FusionInfoForAEBObstracleList"},
    {"/perception/tracking/obstacle_array_result", "deva_perception_msgs/msg/PerceptionResult"},
    {"/perception/traffic_lights_3in1_result", "deva_perception_msgs/msg/SFFusionTFLListNOA"},
    {"/perception/traffic_raw_result", "deva_perception_msgs/msg/TrafficDetectData"},
    {"/perception/traffic_signs_result", "deva_perception_msgs/msg/SFFusionTSListNOA"},
    {"/perception_visualize/god_obstacle_result_marker_array", "visualization_msgs/msg/MarkerArray"},
    {"/planning/ads_circle_marker_array_vec", "deva_ads_msgs/msg/AdsMarkerArrayVec"},
    {"/planning/ads_polygon_marker_array_vec", "deva_ads_msgs/msg/AdsMarkerArrayVec"},
    {"/planning/ads_polyline_marker_array_vec", "deva_ads_msgs/msg/AdsMarkerArrayVec"},
    {"/planning/ads_text_marker_array_vec", "deva_ads_msgs/msg/AdsMarkerArrayVec"},
    {"/planning/debug_json", "std_msgs/msg/String"},
    {"/planning/driving_mode", "deva_planning_msgs/msg/DrivingMode"},
    {"/planning/env_info", "environment_model_msgs/msg/EnvInfo"},
    {"/planning/env_lane", "environment_model_msgs/msg/EnvLaneArray"},
    {"/planning/log2", "deva_planning_msgs2/msg/PlanningLog"},
    {"/planning/navigator_action2", "deva_planning_msgs2/msg/NaviAction"},
    {"/planning/pilot_planning_command2", "deva_planning_msgs2/msg/PlanningCommand"},
    {"/planning/planning_result2", "deva_planning_msgs2/msg/PlanningResult"},
    {"/planning/reference_lines2", "deva_planning_msgs2/msg/ReferenceLines"},
    {"/planning/state_info2", "deva_planning_msgs2/msg/StateContext"},
    {"/planning/virtual_walls2", "deva_planning_msgs2/msg/VirtualWallArray"},
    {"/planning_visualize/reference_lines_markers", "visualization_msgs/msg/MarkerArray"},
    {"/rosout", "rcl_interfaces/msg/Log"},
    {"/routing_gaode/gaode_global_routing", "deva_gaode_routing_msgs/msg/GlobalRouting"},
    {"/sensor/cam_back_70/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_back_left_100/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_back_right_100/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_front_120/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_front_30/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_front_left_100/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/cam_front_right_100/h264", "foxglove_msgs/msg/CompressedVideo"},
    {"/sensor/corr_imu", "deva_localization_msgs/msg/CorrectedImu"},
    {"/sensor/front_lidar_points", "sensor_msgs/msg/PointCloud2"},
    {"/sensor/front_rslidar_points", "sensor_msgs/msg/PointCloud2"},
    {"/sensor/front_warp_rslidar_points", "sensor_msgs/msg/PointCloud2"},
    {"/sensor/gps", "deva_localization_msgs/msg/GnssBestPose"},
    {"/sensor/ins_pose", "deva_localization_msgs/msg/Ins"},
    {"/sensor/radar0_object", "deva_perception_msgs/msg/RadarObjectArray"},
    {"/sensor/radar1_object", "deva_perception_msgs/msg/RadarObjectArray"},
    {"/sensor/radar2_object", "deva_perception_msgs/msg/RadarObjectArray"},
    {"/sensor/radar3_object", "deva_perception_msgs/msg/RadarObjectArray"},
    {"/sensor/radar4_object", "deva_perception_msgs/msg/RadarObjectArray"},
    {"/sensor/radar_front_left", "deva_perception_msgs/msg/RadarObjectMessage"},
    {"/sensor/radar_front_middle", "deva_perception_msgs/msg/RadarObjectMessage"},
    {"/sensor/radar_front_right", "deva_perception_msgs/msg/RadarObjectMessage"},
    {"/sensor/radar_rear_left", "deva_perception_msgs/msg/RadarObjectMessage"},
    {"/sensor/radar_rear_right", "deva_perception_msgs/msg/RadarObjectMessage"},
    {"/sensor/raw_imu", "deva_localization_msgs/msg/RawImu"},
    {"/sensor/vehicle_report_common", "deva_control_msgs/msg/VehicleReportCommon"},
    {"/track_frame", "deva_common_msgs/msg/Serialize"},
    {"/track_pred_frame", "deva_common_msgs/msg/Serialize"}
};


class MCapExample : public rclcpp::Node
{
public:
    MCapExample() : Node("mcap_example")
    {
        // 声明参数
        this->declare_parameter<std::vector<std::string>>("topics", std::vector<std::string>());
        this->declare_parameter<double>("max_duration", 0.0);
        this->declare_parameter<int>("max_messages_per_topic", 0);
        
        // 读取配置文件中的 topics
        std::vector<std::string> topics;
        try 
        {
            topics = this->get_parameter("topics").as_string_array();
            RCLCPP_INFO(this->get_logger(), "从配置文件读取到 %zu 个 topics", topics.size());
        } 
        catch (const std::exception & e) 
        {
            RCLCPP_WARN(this->get_logger(), "无法读取 topics 参数: %s", e.what());
        }
        
        // 读取限制参数
        max_duration_ = this->get_parameter("max_duration").as_double();
        max_messages_per_topic_ = this->get_parameter("max_messages_per_topic").as_int();
        
        // 记录开始时间
        start_time_ = this->now();
        all_stopped_ = false;
        
        RCLCPP_INFO(this->get_logger(), 
            "配置限制: max_duration=%.2f秒, max_messages_per_topic=%d", 
            max_duration_, max_messages_per_topic_);
        
        std::set<std::string> used_types;
        for (const auto & topic : topics) 
        {
            auto it = topic_types_.find(topic);
            if (it != topic_types_.end()) 
            {
                used_types.insert(it->second);
            }
        }
        
        init_deserialize_handlers(used_types);
        
        // 为每个 topic 创建订阅者
        for (const auto & topic : topics) 
        {
            // 从 topic_types_ map 中查找对应的消息类型
            auto it = topic_types_.find(topic);
            if (it != topic_types_.end()) 
            {
                add_generic_subscriber(topic, it->second);
            } 
            else 
            {
                RCLCPP_WARN(this->get_logger(), "Topic %s 在 topic_types_ 中未找到对应的消息类型，跳过", topic.c_str());
            }
        }
        
        if (topics.empty()) 
        {
            RCLCPP_INFO(this->get_logger(), "配置文件为空，请配置topics参数");
            return;
        }
    }

private:
    // 保存 subscription，不然会被析构
    std::vector<rclcpp::GenericSubscription::SharedPtr> subscriptions_;
    
    // 类型字符串到反序列化函数的映射
    std::unordered_map<std::string, std::function<void(std::shared_ptr<rclcpp::SerializedMessage>, const std::string&)>> deserialize_handlers_;
    
    // 限制参数
    double max_duration_;  // 最大持续时间（秒），0表示无限制
    int max_messages_per_topic_;  // 每个topic最大消息数，0表示无限制
    
    // 跟踪状态
    rclcpp::Time start_time_;  // 开始接收消息的时间
    std::unordered_map<std::string, int> topic_message_counts_;  // 每个topic的消息计数
    std::set<std::string> stopped_topics_;  // 已停止的topics（达到限制）
    bool all_stopped_;  // 是否所有topics都已停止（达到max_duration限制）

    // 按需初始化反序列化处理器映射（只初始化实际使用的类型）
    void init_deserialize_handlers(const std::set<std::string> & used_types)
    {
        // 类型到初始化函数的映射表
        static const std::unordered_map<std::string, 
            std::function<void(MCapExample*)>> type_initializers = {
            {"std_msgs/msg/String", [](MCapExample* self) {
                self->deserialize_handlers_["std_msgs/msg/String"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<std_msgs::msg::String>(msg, topic); 
                    };
            }},
            {"deva_control_msgs/msg/ControlMonitorMsg", [](MCapExample* self) {
                self->deserialize_handlers_["deva_control_msgs/msg/ControlMonitorMsg"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_control_msgs::msg::ControlMonitorMsg>(msg, topic); 
                    };
            }},
            {"deva_control_msgs/msg/ControlResult", [](MCapExample* self) {
                self->deserialize_handlers_["deva_control_msgs/msg/ControlResult"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_control_msgs::msg::ControlResult>(msg, topic); 
                    };
            }},
            {"deva_control_msgs/msg/VehicleStatusCommand", [](MCapExample* self) {
                self->deserialize_handlers_["deva_control_msgs/msg/VehicleStatusCommand"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_control_msgs::msg::VehicleStatusCommand>(msg, topic); 
                    };
            }},
            {"rviz_plug_msg/msg/ExceptionMonitor", [](MCapExample* self) {
                self->deserialize_handlers_["rviz_plug_msg/msg/ExceptionMonitor"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<rviz_plug_msg::msg::ExceptionMonitor>(msg, topic); 
                    };
            }},
            {"fault_diagnosis/msg/DiagState", [](MCapExample* self) {
                self->deserialize_handlers_["fault_diagnosis/msg/DiagState"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<fault_diagnosis::msg::DiagState>(msg, topic); 
                    };
            }},
            {"deva_function_msgs/msg/FsmModuleRunningStateMsg", [](MCapExample* self) {
                self->deserialize_handlers_["deva_function_msgs/msg/FsmModuleRunningStateMsg"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_function_msgs::msg::FsmModuleRunningStateMsg>(msg, topic); 
                    };
            }},
            {"deva_common_msgs/msg/Serialize", [](MCapExample* self) {
                self->deserialize_handlers_["deva_common_msgs/msg/Serialize"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_common_msgs::msg::Serialize>(msg, topic); 
                    };
            }},
            {"deva_localization_msgs/msg/LocalizationEstimate", [](MCapExample* self) {
                self->deserialize_handlers_["deva_localization_msgs/msg/LocalizationEstimate"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_localization_msgs::msg::LocalizationEstimate>(msg, topic); 
                    };
            }},
            {"deva_aeb_msgs/msg/FusionInfoForAEB", [](MCapExample* self) {
                self->deserialize_handlers_["deva_aeb_msgs/msg/FusionInfoForAEB"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_aeb_msgs::msg::FusionInfoForAEB>(msg, topic); 
                    };
            }},
            {"visualization_msgs/msg/MarkerArray", [](MCapExample* self) {
                self->deserialize_handlers_["visualization_msgs/msg/MarkerArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<visualization_msgs::msg::MarkerArray>(msg, topic); 
                    };
            }},
            {"deva_map_msgs/msg/LocalMap", [](MCapExample* self) {
                self->deserialize_handlers_["deva_map_msgs/msg/LocalMap"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_map_msgs::msg::LocalMap>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/EntranceArray", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/EntranceArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::EntranceArray>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/LaneArrayv2", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/LaneArrayv2"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::LaneArrayv2>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/OCCVisualization", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/OCCVisualization"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::OCCVisualization>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/VirtualCams", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/VirtualCams"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::VirtualCams>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/RvLaneResult", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/RvLaneResult"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::RvLaneResult>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/RvStaticObstacleArray", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/RvStaticObstacleArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::RvStaticObstacleArray>(msg, topic); 
                    };
            }},
            {"deva_aeb_msgs/msg/FusionInfoForAEBObstracleList", [](MCapExample* self) {
                self->deserialize_handlers_["deva_aeb_msgs/msg/FusionInfoForAEBObstracleList"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_aeb_msgs::msg::FusionInfoForAEBObstracleList>(msg, topic); 
                    };
            }},
            {"deva_ads_msgs/msg/AdsMarkerArrayVec", [](MCapExample* self) {
                self->deserialize_handlers_["deva_ads_msgs/msg/AdsMarkerArrayVec"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_ads_msgs::msg::AdsMarkerArrayVec>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs/msg/DrivingMode", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs/msg/DrivingMode"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs::msg::DrivingMode>(msg, topic); 
                    };
            }},
            {"environment_model_msgs/msg/EnvInfo", [](MCapExample* self) {
                self->deserialize_handlers_["environment_model_msgs/msg/EnvInfo"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<environment_model_msgs::msg::EnvInfo>(msg, topic); 
                    };
            }},
            {"environment_model_msgs/msg/EnvLaneArray", [](MCapExample* self) {
                self->deserialize_handlers_["environment_model_msgs/msg/EnvLaneArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<environment_model_msgs::msg::EnvLaneArray>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/PlanningLog", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/PlanningLog"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::PlanningLog>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/NaviAction", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/NaviAction"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::NaviAction>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/PlanningCommand", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/PlanningCommand"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::PlanningCommand>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/PlanningResult", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/PlanningResult"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::PlanningResult>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/ReferenceLines", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/ReferenceLines"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::ReferenceLines>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/StateContext", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/StateContext"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::StateContext>(msg, topic); 
                    };
            }},
            {"deva_planning_msgs2/msg/VirtualWallArray", [](MCapExample* self) {
                self->deserialize_handlers_["deva_planning_msgs2/msg/VirtualWallArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_planning_msgs2::msg::VirtualWallArray>(msg, topic); 
                    };
            }},
            {"rcl_interfaces/msg/Log", [](MCapExample* self) {
                self->deserialize_handlers_["rcl_interfaces/msg/Log"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<rcl_interfaces::msg::Log>(msg, topic); 
                    };
            }},
            {"deva_gaode_routing_msgs/msg/GlobalRouting", [](MCapExample* self) {
                self->deserialize_handlers_["deva_gaode_routing_msgs/msg/GlobalRouting"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_gaode_routing_msgs::msg::GlobalRouting>(msg, topic); 
                    };
            }},
            {"foxglove_msgs/msg/CompressedVideo", [](MCapExample* self) {
                self->deserialize_handlers_["foxglove_msgs/msg/CompressedVideo"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<foxglove_msgs::msg::CompressedVideo>(msg, topic); 
                    };
            }},
            {"deva_localization_msgs/msg/GnssBestPose", [](MCapExample* self) {
                self->deserialize_handlers_["deva_localization_msgs/msg/GnssBestPose"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_localization_msgs::msg::GnssBestPose>(msg, topic); 
                    };
            }},
            {"deva_localization_msgs/msg/Ins", [](MCapExample* self) {
                self->deserialize_handlers_["deva_localization_msgs/msg/Ins"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_localization_msgs::msg::Ins>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/RadarObjectArray", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/RadarObjectArray"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::RadarObjectArray>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/RadarObjectMessage", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/RadarObjectMessage"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::RadarObjectMessage>(msg, topic); 
                    };
            }},
            {"deva_localization_msgs/msg/RawImu", [](MCapExample* self) {
                self->deserialize_handlers_["deva_localization_msgs/msg/RawImu"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_localization_msgs::msg::RawImu>(msg, topic); 
                    };
            }},
            {"deva_control_msgs/msg/VehicleReportCommon", [](MCapExample* self) {
                self->deserialize_handlers_["deva_control_msgs/msg/VehicleReportCommon"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_control_msgs::msg::VehicleReportCommon>(msg, topic); 
                    };
            }},
            {"deva_perception_msgs/msg/RVDynObstacleResult", [](MCapExample* self) {
                self->deserialize_handlers_["deva_perception_msgs/msg/RVDynObstacleResult"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_perception_msgs::msg::RVDynObstacleResult>(msg, topic); 
                    };
            }},
            {"deva_localization_msgs/msg/CorrectedImu", [](MCapExample* self) {
                self->deserialize_handlers_["deva_localization_msgs/msg/CorrectedImu"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_localization_msgs::msg::CorrectedImu>(msg, topic); 
                    };
            }},
            {"sensor_msgs/msg/PointCloud2", [](MCapExample* self) {
                self->deserialize_handlers_["sensor_msgs/msg/PointCloud2"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<sensor_msgs::msg::PointCloud2>(msg, topic); 
                    };
            }},
            {"deva_gaode_routing_msgs/msg/AdasisMap", [](MCapExample* self) {
                self->deserialize_handlers_["deva_gaode_routing_msgs/msg/AdasisMap"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_gaode_routing_msgs::msg::AdasisMap>(msg, topic); 
                    };
            }},
            {"deva_navi_msgs/msg/NaviSocketStream", [](MCapExample* self) {
                self->deserialize_handlers_["deva_navi_msgs/msg/NaviSocketStream"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_navi_msgs::msg::NaviSocketStream>(msg, topic); 
                    };
            }},
            {"serialize_msgs/msg/SerializeProto", [](MCapExample* self) {
                self->deserialize_handlers_["serialize_msgs/msg/SerializeProto"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<serialize_msgs::msg::SerializeProto>(msg, topic); 
                    };
            }},
            {"rcl_interfaces/msg/ParameterEvent", [](MCapExample* self) {
                self->deserialize_handlers_["rcl_interfaces/msg/ParameterEvent"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<rcl_interfaces::msg::ParameterEvent>(msg, topic); 
                    };
            }},
            {"deva_mdriver_msgs/msg/MdriverResult", [](MCapExample* self) {
                self->deserialize_handlers_["deva_mdriver_msgs/msg/MdriverResult"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_mdriver_msgs::msg::MdriverResult>(msg, topic); 
                    };
            }},
            {"deva_mdriver_msgs/msg/MdriverRefLines", [](MCapExample* self) {
                self->deserialize_handlers_["deva_mdriver_msgs/msg/MdriverRefLines"] = 
                    [self](auto msg, auto topic) { 
                        self->deserialize_and_print<deva_mdriver_msgs::msg::MdriverRefLines>(msg, topic); 
                    };
            }},
        };
        
        // 只初始化实际使用的类型
        for (const auto & type : used_types) 
        {
            auto it = type_initializers.find(type);
            if (it != type_initializers.end()) 
            {
                it->second(this);
            } else {
                RCLCPP_WARN(this->get_logger(), 
                    "类型 %s 未找到对应的反序列化处理器", type.c_str());
            }
        }
        
        RCLCPP_INFO(this->get_logger(), 
            "按需初始化了 %zu 个反序列化处理器（共 %zu 个可用类型）", 
            deserialize_handlers_.size(), type_initializers.size());
    }

    void add_generic_subscriber(const std::string & topic, const std::string & type)
    {
        RCLCPP_INFO(this->get_logger(), "Creating generic subscriber: %s (%s)", topic.c_str(), type.c_str());

        auto sub = this->create_generic_subscription(
            topic,
            type,
            rclcpp::QoS(10),
            [this, topic, type](std::shared_ptr<rclcpp::SerializedMessage> serialized_msg)
            {
                // 检查是否所有topics都已停止（达到max_duration限制）
                if (all_stopped_) {
                    return;
                }
                
                // 检查是否已停止该topic（达到max_messages_per_topic限制）
                if (stopped_topics_.find(topic) != stopped_topics_.end()) {
                    return;  // 该topic已达到限制，不再处理
                }
                
                // 检查持续时间限制（全局限制）
                if (max_duration_ > 0.0) {
                    auto elapsed = (this->now() - start_time_).seconds();
                    if (elapsed >= max_duration_) {
                        RCLCPP_INFO(this->get_logger(), 
                            "达到最大持续时间限制 (%.2f秒)，停止处理所有消息", max_duration_);
                        all_stopped_ = true;
                        return;
                    }
                }
                
                // 检查消息数量限制（每个topic独立）
                if (max_messages_per_topic_ > 0) {
                    // 先检查是否已经达到限制
                    if (topic_message_counts_[topic] >= max_messages_per_topic_) {
                        RCLCPP_INFO(this->get_logger(), 
                            "Topic %s 已达到最大消息数限制 (%d)，停止处理该topic", 
                            topic.c_str(), max_messages_per_topic_);
                        stopped_topics_.insert(topic);
                        return;
                    }
                    // 未达到限制，增加计数并处理消息
                    topic_message_counts_[topic]++;
                }
                
                // 使用映射表查找并执行对应的反序列化函数
                auto it = deserialize_handlers_.find(type);
                if (it != deserialize_handlers_.end()) 
                {
                    it->second(serialized_msg, topic);
                } 
                else 
                {
                    RCLCPP_WARN(this->get_logger(), 
                        "未处理的 type: %s ，无法反序列化", type.c_str());
                }
            }
        );
        subscriptions_.push_back(sub);
    }

    template<typename T>
    void deserialize_and_print(std::shared_ptr<rclcpp::SerializedMessage> serialized_msg,
                               const std::string & topic)
    {
        rclcpp::Serialization<T> serializer;
        T msg;
        serializer.deserialize_message(serialized_msg.get(), &msg);
        
        // 使用类型检查确保只有RVDynObstacleResult类型才转换为map
        if constexpr (std::is_same_v<T, deva_perception_msgs::msg::RVDynObstacleResult>)
        {
            // 将ROS消息转换为嵌套map结构
            mcap_streamer::MessageMap msg_map = mcap_streamer::message_to_map(msg);
            
            // 现在您可以使用msg_map进行后续处理
            // 例如：打印、存储、序列化等
            
            // 示例：打印转换后的map结构
            // 方式1：使用YAML格式输出（推荐，更易读）
            std::cout << "=== 消息转换为Map结构 (YAML格式) ===" << std::endl;
            std::cout << "Topic: " << topic << std::endl;
            mcap_streamer::print_message_map_yaml_full(msg_map);
            std::cout << "=====================================" << std::endl;
            
            // 方式2：使用树状格式输出（带层级标识）
            // std::cout << "=== 消息转换为Map结构 (树状格式) ===" << std::endl;
            // std::cout << "Topic: " << topic << std::endl;
            // mcap_streamer::print_message_map_full(msg_map);
            // std::cout << "=====================================" << std::endl;
            
            // 示例：访问特定字段
            // 注意：访问std::any需要使用std::any_cast
            try {
                const auto& header_any = msg_map.at("header");
                const mcap_streamer::MessageMap& header_map = 
                    std::any_cast<const mcap_streamer::MessageMap&>(header_any);
                const auto& index_any = header_map.at("index");
                uint32_t index = std::any_cast<uint32_t>(index_any);
                std::cout << "Header index (从map获取): " << index << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "访问map字段时出错: " << e.what() << std::endl;
            }
        }
        (void)topic;
        (void)msg;
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MCapExample>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}