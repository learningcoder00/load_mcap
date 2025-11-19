uint64 id
# 车道引导标识方向
uint32 lane_arrow_type
uint32 category_location
uint32 category_vehicle
uint32 category_special
# 车道编号，从右到左增加，从1开始
int32 lane_num
int32 length
int32 direction
SdProLaneTopo[] next_lanes
SdProLaneTopo[] pre_lanes
# UNKNOWN = 0, CONTINUE = 1 // 直行, MERGE = 2 // 并道,  SPLIT = 3 // 岔道
uint32 transition