# the message which will be used by ultrasonic radar

uint8 radar_identify_id # radar的序列号，用于标识当前使用的radar

string radar_name # 当前radar的名字

string radar_type # 当前radar的型号，与该雷达的性能进行映射

bool radar_state # 当前radar的状态

bool radar_tx_status # 当前radar是否正在发声
bool radar_rx_status # 当前radar是否正在收声

# 障碍物相对于radar的角度
#
#               x axis
#		       ^
#                     |
#                  *  |  *
#               *     |     *
#        \    *       |       *    /
#          \ *     range(i)    * /
#            \        |        /
#              \      |      /
#                \    |    /
#       y axis     \  |  /
#      <---------------
#        ooooooooooooo   #ultrasonic radar front surface
#
float32 range

uint16 MAX_RADAR_DISTANCE=510
uint16 max_radar_distance # 雷达可以探测的最大距离

float64 radar_distance # radar探测到的障碍物的距离
bool radar_distance_vaild # radar探测到的障碍物的距离是否有效
