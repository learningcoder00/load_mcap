deva_common_msgs/Header header
string protocol_version "2.11"  # 消息协议版本号，更改消息后需要增加版本号，保持默认值方式

float64 unix_ts
float32 speed  # 车速 km/h
bool speed_valid  # 车速是否有效
bool speed_directivity  # 车速是否具有方向性

bool wheelspeed_directivity # 轮速是否具有方向性
bool[4] wheelspeed_valid    # 轮速是否有效，顺序为[FL,FR,RL,RR]
uint8[4] wheelspeed_dir     # 轮速方向，顺序为[FL, FR, RL, RR]。 0:无效，1:静止，2:前向，3:后向
float32[4] wheelspeed       # 四个轮的轮速 km/h, 顺序为[FL, FR, RL ,RR]

bool gear_enable  # 档位控制使能状态
uint8 gear        # 当前档位值 0:无效 1:P, 2:R, 3:N, 4:D

uint8 epb_state   # 电子手刹状态： 0：无效，1：释放中，2：制动状态，3：制动生效中，4：释放状态
uint8 epb_flt     # 电子手刹控制响应故障码：0：无故障，1：下发命令无效，2：多节点控制冲突，3：与挡位冲突，4：车辆未响应，5：车辆反馈错误，6：其他

bool late_enable        # 横向控制线控使能状态
bool late_driveover     # 横向控制人工接管状态
bool steer_angle_valid  #方向盘角度是否有效
float32 steer_angle     # 当前方向盘角度值 deg, 左转时为正值，右转时为负值
float32 steer_rotate_angle_speed  # 方向盘转动角速度
bool steer_torque_valid           # 方向盘力矩是否有效
float32 steer_torque              # 方向盘力矩
float32 steer_rotate_torque_speed # 方向盘转动力矩速度, 预留
uint8 late_flt  # 横向控制故障码，预留

bool longit_enable       # 纵向控制线控使能状态
bool longit_driveover    # 纵向控制人工接管状态
bool longit_torque_valid # 纵向控制力矩有效性
float32 longit_torque    # 纵向控制实际力矩值
bool longit_acc_valid    # 纵向控制加速度值有效性
float32 longit_acc       # 纵向控制实际加速度
uint8 longit_flt         # 纵向控制故障码, 预留

uint8 turn_lamp_lever_state  # 转向拨杆状态：0：默认，1：左转，2：右转，other：无效
bool turn_lamp_left  # 左转向灯点亮状态
bool turn_lamp_right # 右转向灯点亮状态
bool hazard_lamp     # 告警灯点亮状态
bool wiper_front     # 前雨刷器启动状态
bool[4] door_open_state # 四车门关闭状态，顺序为[FL, FR, RL, RR]

float32 late_acc # 车辆运行横向加速度
float32 yaw_rate # yawrate
float32 slope    # 坡度单位rad

# 车辆运行状态，0:本车辆不反馈此信号，1:无效值，2:停止状态，3:运行状态（非停止状态），4:前向运行，5:后向运行
uint8 standstill

bool pedal_valid  # 踏板数据有效
VehicleReportPedal pedal  # 踏板数据

bool wheelspeed_rc_valid    # 轮速计数据是否有效
WheelSpeed wheelspeed_rc  # 轮速数据

bool belt_valid  # ASE3特有数据有效
VehicleReportBelt belt  # 安全带数据

string bywire_exit_reason # 退出线控原因

# 请求或取消信号：
# 0x00：无请求；0x01：横纵向同时; 0x02：单独横向；0x03：单独纵向； 0x04：独立横向和纵向（预留）
# 0x11：取消所有请求；0x12: 取消横向（预留）；0x13: 取消纵向（预留）；
uint8 request_cancel
uint8 action_brake     # 司机有操作刹车踏板动作
uint8 action_throttle  # 司机有操作加速踏板动作
uint8 action_steer     # 司机有操作方向盘动作
uint8 heavy_action_steer      # 司机有重掰方向盘动作（预留）
uint8 sustain_action_throttle # 司机持续120s操作加速踏板
uint8 sustain_action_steer    # 司机持续120s操作方向盘



