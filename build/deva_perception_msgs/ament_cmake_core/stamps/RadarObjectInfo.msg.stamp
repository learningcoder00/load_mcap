# 目标id
uint32 id

# 目标框中心点位置，单位m
geometry_msgs/Pose position
# 目标框中心点位置的标准差
geometry_msgs/Pose position_std

# 目标最近点位置，单位m
geometry_msgs/Pose nearest_point
# 目标最近点位置的标准差
geometry_msgs/Pose nearest_point_std

# 目标相对速度，单位m/s
geometry_msgs/Twist velocity_rel
# 目标相对速度的标准差
geometry_msgs/Twist velocity_rel_std
# 目标绝对速度，单位m/s
geometry_msgs/Twist velocity_abs
# 目标绝对速度的标准差
geometry_msgs/Twist velocity_abs_std

# 目标相对加速度，单位m/s^2
geometry_msgs/Accel acceleration_rel
# 目标绝对加速度，单位m/s^2
geometry_msgs/Accel acceleration_abs

# 目标动态特性
uint8 MNTPAT_UNKNOWN = 0x0
uint8 MNTPAT_STATIONARY = 0x1
uint8 MNTPAT_STATIONARY_FROM_MOVING = 0x2
uint8 MNTPAT_MOVING = 0x3
uint8 MNTPAT_RECEDING = 0x4
uint8 MNTPAT_ONCOMING = 0x5
uint8 MNTPAT_CROSSINGN_FROM_LE = 0x6
uint8 MNTPAT_CROSSINGN_FROM_RI = 0x7
uint8 MNTPAT_CROSSINGN_STATIONARY = 0x8
uint8 MNTPAT_STOPED = 0x9
uint32 dynamic_property

# 目标朝向，单位degree
float64 heading_angle

# 目标存活周期
uint32 life_cycles

# 目标的长宽高，单位m
geometry_msgs/Point box_lwh

# 目标框的中心点相对于最近点的横向距离
float64 box_center_lat
# 目标框的中心点相对于最近点的纵向距离
float64 box_center_lgt

# 信噪比
float64 snr

# 目标类别
uint8 UNKNOWN = 0x0
uint8 POINT = 0x1
uint8 CAR = 0x2
uint8 TRUCK = 0x3
uint8 PEDESTRIAN = 0x4
uint8 BICYCLE = 0x5
uint8 WIDE = 0x6
uint8 MOTORCYCLE = 0x7
uint8 VEHICLE_UNKNOWN_CLASS = 0x8
uint8 ANIMAL = 0x9
uint32 classification

# 目标是障碍物的可能性，单位%
float64 obstacle_probability
# 目标置信度，单位%
float64 probability_of_existence
# 目标是镜像目标可能性，单位%
float64 mirror_probability
# 目标是鬼点可能性，单位%
float64 not_real_probability
# 雷达散射截面
float64 rcs
# 目标类别的置信度，单位%
float64 target_classification_confidence

# 目标的跟踪状态
uint8 TRACK_STATUS_INVALID = 0x0
uint8 TRACK_STATUS_UPDATED = 0x1
uint8 TRACK_STATUS_NEW = 0x2
uint8 TRACK_STATUS_COASTED = 0x3
uint32 track_status