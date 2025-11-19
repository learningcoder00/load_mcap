
std_msgs/Header header
string protocol_version "2.0"  # 消息协议版本号，更改消息后需要增加版本号，保持默认值方式

string node_name   #发送命令节点的节点名

bool use_gear_cmd false  #使用档位控制命令，为true时下面的档位控制命令字段有效
bool gear_en          #档位控制使能
int8 gear_cmd_val     #档位控制输出档位值 1:P, 2:R, 3:N, 4:D

bool use_epb_cmd false   #使用EPB控制命令，为true时下面的EPB控制命令字段有效
bool epb_en              #EPB控制使能
int8 epb_cmd_val         #EPB控制值，0:无效，1:释放EPB，2:拉紧EPB

bool use_turn_light_cmd false  #使用转向灯控制命令，为true时下面的转向灯控制命令字段有效
bool turn_light_en    #转向灯控制使能
uint8 turn_light_cmd  #转向灯控制值 0：关闭转向灯， 1：左转， 2：右转，3：双闪

bool use_wiper_cmd false   #使用雨刷器控制命令，为true时下面的雨刷器控制命令字段有效
bool wiper_en         #雨刷器控制使能
bool wiper_cmd        #雨刷器控制命令 0：关闭， 1：打开

bool use_bywire_enable_cmd false  #使用线控使能命令，为true时下面的线控使能字段有效
bool lateral_en       #横向控制使能
bool longitudinal_en  #纵向控制使能

bool use_park_cmd false # 使用泊车命令，为true时下面的字段有效
# 泊车动作：
# 0：无效，
# 1：准备状态，
# 2：开始泊车，
# 3：泊车中，
# 4：泊车完成，
# 5：泊车中止，
# 6：泊车中取消，
# 7：泊车中错误，
# 8： 其他错误
uint8 park_action
