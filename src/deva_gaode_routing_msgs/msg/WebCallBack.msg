# 标志回调信息更新与否, 实时更新
int32 index
# 获取当前大路段索引, 实时更新
int32 cur_step
# 获取自车所在小路段索引（对于巡航模式默认road是0）, 实时更新
int32 cur_road
# 获取当前位置所在link上的点索引, 实时更新
int32 cur_point
# 获取当前road剩余距离，实时更新
float64 cur_road_retain_dis
# 获取当前路段剩余距离, 实时更新
float64 cur_step_retain_dis
# 获取当前路段剩余时间, 实时更新
float64 cur_step_retain_time
# 获取到途经点距离，实时更新
float64[] via_retain_dis
# 获取路线剩余距离, 实时更新
float64 path_retain_dis
# 获取路线剩余时间, 实时更新
float64 path_retain_time
# 当前道路转向图标, 实时更新
int32 trun_icon
# 与trun_icon位置对应的剩余距离
float64 trun_icon_retain_dis
# 回调的lane info, 实时更新
WebLane lane_info
# 道路限速抓拍信息
CameraCallbackInfo camera_callback
# 环岛出口序号，不是个数
int32 ring_out_cnt
# 环岛出口度数（0~360）
int32 roundabout_out_angle
# 当前link的历史行驶速度
int32 cur_link_speed
# 未避开的设施和禁行
WebNotAvoidInfo not_avoid_info
# 路口转向ID，使用SDKStepForwardDirection
int32 cross_maneuver_id
# 下个路口信息，需配置语音配置表才有
WebCrossNaviInfo[] next_cross_info
# 红绿灯状态
WebTrafficLight traffic_light_cd
# 平行道路/高架上下信息
WebParallelRoad parallel_road
# Ownership 判断内外部道路  0: 公共道路 1：内部道路 2：私有道路 3：地下停车场道路 4：立体停车场道路 
int32 ownership
# 当前道路限速
uint32 cur_road_limit_speed
# 路口放大图 
WebCrossImage cross_image
# 当前路口行驶方向
uint32 cur_cross_dir
# 自车到当前路口距离
float64 cur_cross_dist
