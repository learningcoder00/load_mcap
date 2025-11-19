uint64 id
uint64 out_road
uint64[] pass_road_ids
uint32 arrow_info
# 可通行车道 转为16位2进制 从左到右标识车道
int32 lane_info
# 公交车可通行车道 转为16位2进制 从左到右标识车道 1标识只有公交车可通过车道实现箭头信息的转向，结合valid_period时间段使用
int32 bus_lane
# 总车道数
int32 lane_num
# 左侧附加车道
int32 lane_left
# 右侧附加车道
int32 lane_right
# 进入点sdnode_id，与road中s_node_id对应，lane与road是同时打断，对应的sdnode也一样
uint64 node_id
# 条件限制车道，使用16位0/1表达从左向右为各车道的标识位，标识为1时，表示该车道具有条件限制
int32 limit_lane
# 车道条件限制，顺序对应limit_lane标识为1的车道（从左向右），这里RestrictionDetail中字段period_approx set 1
RestrictionDetail[] connect_restriction