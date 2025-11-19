# Parsed Best Position or Omnistar XP or HP pos data from Novatel OEM6 receiver
std_msgs/Header header

string solution_status # 结算状态 
string position_type #位置类型

float64 lat #纬度
float64 lon #经度
float64 height_msl #海平面高度

float32 undulation #高程异常值
string datum_id #坐标系 id

float32 lat_sigma #纬度标准差
float32 lon_sigma #经度标准差
float32 height_sigma #高度标准差
float32 diff_age #差分延迟时间 (s)
float32 solution_age #计算延迟时间 (s)
uint8 num_satellites_tracked #跟踪卫星数目
uint8 num_satellites_used_in_solution  #解算卫星数目
uint8 num_gps_and_glonass_l1_used_in_solution  # l1/b1/b1 解算卫星数目
uint8 num_gps_and_glonass_l1_and_l2_used_in_solution #多频计算卫星数目
    
uint32 extended_solution_status #扩展结算状态
uint32 gps_glonass_used_mask    #GPS和Glonass信号使用标志
uint32 galileo_beidou_used_mask #galileo 和北斗信号使用标志
geometry_msgs/Point linear_velocity #东北天速度
float32 velocity_latency #速度延迟
