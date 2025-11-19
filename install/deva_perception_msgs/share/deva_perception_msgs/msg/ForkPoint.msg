# 分叉线属性，取值如下:
uint8 NORMAL = 0         # 0x0: 非叉线
uint8 SPLIT = 1          # 0x1: 分叉线
uint8 MERGE = 2          # 0x2: 合流线
uint8 SPLIT_DIVERSION = 3
uint8 MERGE_DIVERSION = 4

uint8 fork_property_type
int32 fork_id
int16[] lane_ids
geometry_msgs/Point fork_point
