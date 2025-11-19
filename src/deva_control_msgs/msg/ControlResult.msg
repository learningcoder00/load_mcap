
deva_common_msgs/Header header
string protocol_version "2.10"  # 消息协议版本号，更改消息后需要增加版本号，保持默认值方式

# 横向控制目标模式，可使用以下几种模式，之外的值无效：
# 1：方向盘角度目标控制；控制量为steering_target字段；
# 2：前轮角度目标控制; 控制量为front_wheel_target字段；
# 3：力矩目标控制；控制量为eps_torque字段；
int8 late_mode     
float64 eps_torque          # EPS力矩控制目标值（Nm）
float64 front_wheel_target  # 前轮控制目标角度（deg）
float64 steering_target     # 方向盘控制目标角度 (deg)

# 纵向控制目标模式，可使用以下几种模式，之外的值无效：
# 1：加速度为控制目标；控制量为acceleration字段；
# 2：速度为控制目标; 控制量为speed字段；
# 3: 力矩控制; 控制量为longit_torque字段；
# 4: 目标距离和速度控制，控制量为target_distance和speed字段
# 5：踏板开度控制模式；控制量为throttle和brake字段
int8 long_mode
float64 speed            # 速度控制目标速度（km/h）
float64 acceleration     # 纵向控制加速度值 (m/s2)
float64 longit_torque    # 纵向控制力矩输出值 (Nm)
float64 target_distance  # 纵向控制距离 (m)
float64 throttle         # 油门控制值 [0.0, 1.0]
float64 brake            # 制动控制值 [0.0, 1.0]

# 限制值控制是否使能，默认false不使能限制值，下面所有的ControlValidLimit限制类型都无效
# 需要设置某一项限制值是，将limit_command_enable设置为true，并将对应的限制字段设置有效
bool limit_command_enable  false 
ControlValidLimit steer_angle_rate_limit   # 方向盘转动角速度限制，具体限制值单位为deg/s
ControlValidLimit steer_tq_limit           # 方向盘转动力矩限制, 具体限制值的单位为Nm
ControlValidLimit longit_tq_limit          # 纵向驱动力矩限制, 具体限制值的单位为Nm
# 纵向急动度（加加速度，加速度变化率）限制, 具体限制值的单位为m/s3
ControlValidLimit longit_jerk_limit

string control_ready_false_reason # 控制接口失败原因
bool ready  # 控制算法是否准备好接入线控
# 控制模式，在行车和泊车分开控制的车辆上有效。0：无效；1：行车控制；2：泊车控制；3：AVP模式；其他无效
uint8 control_mode

bool gear_en # 档位控制使能
int32 gear_cmd_val # 档位控制输出档位值 1:P, 2:R, 3:N, 4:D
bool lateral_en # 横向控制使能
bool longitudinal_en # 纵向控制使能
float64 steering_rate # 方向盘控制目标角速度 (deg/s)
