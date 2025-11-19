# 本消息用于收发导航信息，发送到高德node
std_msgs/Header header
#版本信息
string version
# 可用状态
bool status
# 策略更新标志，用于rerouting更新,md5值
string md5
# 策略更新标志，用于rerouting更新,index值
uint32 index
# 起点
WebPoint start_point
# 途经点
WebPoint[] way_points
# 终点
WebPoint end_point
