std_msgs/Header header


# 锥桶2d框
# deva_common_msgs/BoundingBox bbox
PerceptionResult result

# obstacle id. 区别不同实体
uint32 id



# 是否有3D框
bool with_bev_info

# 位置 朝向
geometry_msgs/Pose              pose

# 尺寸. 即长宽高
geometry_msgs/Vector3           dimensions


# 锥桶绑定属性，取值如下:
uint8 FAIL = 0         # 0x0: 绑定车道线失败
uint8 LEFT = 1         # 0x1: 绑定左车道线
uint8 MID = 2          # 0x2: 绑定中间
uint8 RIGHT = 3          # 0x3: 绑定右车道线
uint8 bind_type

# 置信度
float64 score
# 纵向距离
float64 vertical_distance


# 锥桶左右车道线id和距离
uint32 left_lane_id             # id为0表示无左/右车道！！！
uint32 right_lane_id
float64 left_lane_distance
float64 right_lane_distance





