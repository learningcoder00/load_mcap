# 通用障碍物
ObstacleCommon obstacle

# 车灯类型
uint8 UNKNOWN = 0
uint8 CAR_LIGHT = 1
uint8 VAN_LIGHT = 2
uint8 MOTOR_LIGHT = 3
uint8 TRAFFIC_SIGN =4
uint8 light_type

# 车灯朝向
uint8 HEAD = 100
uint8 TAIL = 101
uint8 heading_type

# 深度
float32 depth

# traffic sign
uint8 NO_OCC = 151
uint8 MINOR_OCC = 152
uint8 PARTIAL_OCC = 153
uint8 SEVERE_OCC = 154
uint8 sign_occ_type

uint8 NO_TRUN = 201
uint8 MINOR_TRUN = 202
uint8 PARTIAL_TRUN = 203
uint8 SEVERE_TRUN = 204
uint8 sign_trun_type

# 补充信息
ExtraInfo[] extra_infos
