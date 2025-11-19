# This message defines meta information for a obstacle status
std_msgs/Header header

# obstacle id. 区别不同实体
uint32 id

# 单位都是标准单位. m, m/s, m/s^2, radian/s, radian/s^2
# 位置 朝向
geometry_msgs/Pose              pose
# 尺寸. 即长宽高
geometry_msgs/Vector3           dimensions
# 速度/速度方差
geometry_msgs/Twist             detection_velocity
geometry_msgs/Twist             velocity
geometry_msgs/Twist             velocity_variance
# 加速度/加速度方差
geometry_msgs/Twist             acceleration
geometry_msgs/Twist             acceleration_variance

# tracking time. 追踪时间 单位 s
float64 tracking_time

# 轨迹长度
uint32 track_length

# 置信度
float64 score

#补miss
bool is_predict


# TODO(huchong): complete enum type definition
# # enum
# uint32 UNKNOWN = 0
# uint32 UNKNOWN_MOVABLE = 1
# uint32 UNKNOWN_UNMOVABLE = 2
# uint32 PEDESTRIAN = 3   # Pedestrian, usually determined by moving behavior.
# uint32 BICYCLE = 4      # bike, motor bike
# uint32 VEHICLE = 5      # Passenger car or truck.

uint32 CAR = 1
uint32 TRUCK = 2
uint32 CONSTRUCTION_VEHICLE = 3
uint32 BUS = 4
uint32 MOTORCYCLE = 5
uint32 BICYCLE = 6
uint32 TRICYCLE = 7
uint32 CYCLIST = 8
uint32 PEDESTRIAN = 9

# 障碍物属性
uint32 type

# 障碍物2d 框. 如果需要的话
deva_common_msgs/BoundingBox2d bbox2d
deva_perception_msgs/DictInfo[] extra_info
