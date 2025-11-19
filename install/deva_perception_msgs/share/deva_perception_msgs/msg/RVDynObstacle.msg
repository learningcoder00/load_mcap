# 通用障碍物
ObstacleCommon obstacle

# 动态障碍物类型
uint8 UNKNOWN = 0
uint8 CAR = 1
uint8 TRUCK = 2
uint8 CONSTRUCTION_VEHICLE = 3
uint8 BUS = 4
uint8 MOTORCYCLE = 5
uint8 BICYCLE = 6
uint8 TRICYCLE = 7
uint8 CYCLIST = 8
uint8 PEDESTRIAN = 9
uint8 ANIMAL = 10
uint8 dynamic_obstacle_type

# 2d检测框得分
float32 det_score

# 检测框及头尾框
deva_common_msgs/BoundingBox2d bbox
deva_common_msgs/BoundingBox2d head_bbox
deva_common_msgs/BoundingBox2d tail_bbox

# 接地点
deva_common_msgs/GroundPoint[] ground_points

# 遮挡/截断
float32 full_occ_score
float32 head_occ_score
float32 tail_occ_score
float32 full_trunc_score
float32 head_trunc_score
float32 tail_trunc_score

# 二阶段行人扩框
deva_common_msgs/BoundingBox2d ped_bbox

# 二阶段细分类
SubclassificationType subclassification_type
float32 subclass_score

bool light_valid

# 转向灯
uint8 NO_DIRECTION = 0
uint8 TURN_LEFT = 1
uint8 TURN_RIGHT = 2
uint8 DIRECTION_UNKNOWN = 3
uint8 turn_type
float32 turn_score

# 刹车灯
uint8 BRAKE_UNKNOWN = 0
uint8 BRAKE_OFF = 1
uint8 BRAKE_ON = 2
uint8 brake_type
float32 brake_score

# 双闪灯
uint8 HAZARD_UNKNOWN = 0
uint8 HAZARD_OFF = 1
uint8 HAZARD_ON = 2
uint8 hazard_type
float32 hazard_score

# 补充信息
ExtraInfo[] extra_infos
