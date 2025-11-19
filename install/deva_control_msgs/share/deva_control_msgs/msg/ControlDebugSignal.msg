std_msgs/Header header

float64 c0_val                  #for debug 横向偏差反馈
float64 c1_val                  #for debug 航向角偏差反馈
float64 c2_val                  #for debug 轨迹曲率前馈

float64 station_error           #for debug 纵向偏差
float64 speed_offset            #for debug 位置补偿
float64 speed_target            #for debug 目标速度
float64 speed_current           #for debug 当前速度
float64 speed_error             #for debug 速度偏差+位置补偿

float64 preview_steer_error     #for debug 预瞄方向盘转角与当前转角偏差
float64 preview_speed_target    #for debug 预瞄点速度
float64 distance_error          #for debug 横向距离偏差
float64 angle_error             #for debug 航向角偏差
float64 debug_signal_4          #for debug 预留
float64 debug_signal_5          #for debug 预留
float64 debug_signal_6          #for debug 预留
float64 debug_signal_7          #for debug 预留
float64 debug_signal_8          #for debug 预留
float64 debug_signal_9          #for debug 预留