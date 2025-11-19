# 本消息用于读取安卓高德地图导航信息，发送到planning
std_msgs/Header header
#版本信息
string version
# 可用状态, 一次更新
bool status
# 策略更新标志，用于rerouting更新, 一次更新
string md5
# 巡航模式，导航模式等, 一次更新
uint32 mode
# 起点, 一次更新
WebPoint start_point
# 途经点, 一次更新
WebPoint[] way_points
# 终点, 一次更新
WebPoint end_point
# 全局行驶距离, 一次更新
float32 distance
# 全局行驶时间, 一次更新
float32 time
# 总共的step的步数, 一次更新
int32 step_num
# 当前所在的大的导航位置（对应高德里的step）, 阶段更新
WebStep locate_step
# 下一个大的导航位置（对应高德里的step）, 阶段更新
WebStep forward_step
# 总的经过红绿灯的数目, 一次更新
int32 traffic_light_count
# 全程回调信息, 实时更新
WebCallBack call_back
#语音回调,实时更新
WebVocalRecMsg vocal_info
# 全局导航信息
GlobalPathMsg global_path
# SD_PRO信息
# SdProMap sd_pro_map
# adasis v2
# AdasisMap adasis_v2
# 当前车辆坐标点
WebPoint cur_point
# 轨迹航向角，取值范围：【0，360】，其中0度表示正北方向，90度表示正东，180度表示正南，270度表示正西
float64 orientation
# 当前车速，单位： m/s
float32 speed