string obs_name
geometry_msgs/Point[] points
int32 obs_id
geometry_msgs/Point dims
deva_localization_msgs/Pose pose
float32 score
int32 track_length
float64 tracking_time
deva_common_msgs/BoundingBox bounding_box
int32 miss_length
bool is_stable_tracked
# 障碍物是否在车位内
bool in_parking_slot

AssociatedInfo[] associated_infos
ExtraInfo[] extra_infos

# Only used by MVIZ
deva_common_msgs/Point2d[] pixel_points