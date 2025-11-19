int32 ref_id

uint8 BIND_ONLANE_BLOCK = 1
uint8 BIND_ONLANE_NOT_BLOCK = 2
uint8 BIND_CUTIN = 3
uint8 BIND_CUTOUT = 4
uint8 BIND_CROSS = 5
uint8 BIND_NEAR = 6
uint8 BIND_NUDGE = 7
UInt2String[] binded_obs

String2SLBoundary[] sl_boundary

# 可扩展的标志位
uint8[] scalable_flags
# 可扩展的键值对
String2String[] scalable_multimap