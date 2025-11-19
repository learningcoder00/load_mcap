# This message defines meta information for traffic channel status
std_msgs/Header header

# id. 区别不同实体
uint32 id

# 单位都是标准单位. m
# 位置 朝向
geometry_msgs/Pose              pose
# 尺寸. 即长宽高
geometry_msgs/Vector3           dimensions

# 置信度
float64 score

uint32 ETC = 1
uint32 MANUAL = 2
uint32 ETCORMANUAL = 3
uint32 CLOSE = 4
uint32 REVERSE = 5

# 交通通道属性
uint32 type

# 2d 框. 如果需要的话
deva_common_msgs/BoundingBox2d bbox2d
ExtraInfo[] extra_info
