# ECU Status
# to do

# Radar Status
# 点云数量
uint32 num_detection
# 目标数量
uint32 num_object
# 当前雷达的使能状态
uint32 status_enable
# 当前雷达错误状态
uint32 status_faulty
uint32 status_latency
# 当前雷达的安全级别错误状态
uint32 status_safety_fault
# 当前雷达消息的时间戳timestamp = timestamp_h + timestamp_l
float64 timestamp_h
float64 timestamp_l

# Radar VDY
# 雷达动态补偿信息：自车车速
float64 vdy_velocity
# 雷达动态补偿信息：自车横摆角速度
float64 vdy_yawrate
# 雷达动态补偿信息的时间戳
float64 vdy_timestamp