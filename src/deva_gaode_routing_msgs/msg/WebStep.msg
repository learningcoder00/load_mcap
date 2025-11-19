# step index, 阶段更新
int32 id
# 当前路段所有的road集合，对于hwa模式，也将只填写该字段，并且road只写当前搜索的road就行, 阶段更新
WebRoad[] roads
# 当前路段经过的红绿灯数目, 阶段更新
int32 traffic_light_count
# 	当前路段行驶距离, 阶段更新
float32 distance
# 当前路段行驶时间, 阶段更新
float32 time
# 当前路段前方行驶方向, 阶段更新
uint32 forward_direction
# 当前路段前方road类型（隧道环岛等）, 阶段更新
uint32 forward_type
# 引导动作
uint32 main_action
# 辅助引导动作
uint32 assistant_action