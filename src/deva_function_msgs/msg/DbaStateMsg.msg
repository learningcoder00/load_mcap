float64 publish_timestamp
uint8 epb_state
float32 speed
bool acc_enable
bool brake_enable
bool[4] door_open_state  # 四车门关闭状态，顺序为[FL, FR, RL, RR]
uint8 turn_lamp_lever_state
bool late_enable
bool late_driveover
bool longit_enable
bool longit_driveover
uint8 gear
bool[5] belt  # 安全带是否系上 ，顺序为[驾驶位，副驾驶位，后左，后中，后右]
# 泊车指令
uint8 COMMAND_NONE=0
uint8 SEARCH_SLOT=1
uint8 PARK_IN=2
uint8 PARK_OUT=3
uint8 CRUISE=4
uint8 QUIT=5
uint8 command 
bool save_map
uint64 slot_id  
# 泊出方向
uint8 DIRECTION_NONE=0
uint8 LEFT=1
uint8 LEFT_FRONT=2
uint8 FRONT=3
uint8 RIGHT_FRONT=4
uint8 RIGHT=5
uint8 RIGHT_LEFT=6
uint8 LEFT_RIGHT=7
uint8 park_out_direction  # 只有当指令为PARK_OUT 时有效
uint8 APA=1   # APA模式
uint8 HPP=3   # HPP模式
uint8 run_mode