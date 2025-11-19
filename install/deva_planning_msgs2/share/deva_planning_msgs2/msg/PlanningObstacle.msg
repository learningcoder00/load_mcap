string id # 障碍物id

int32[] current_line_id
int32[] target_line_id

# 增加新tag不必须修改msg文件，在文档中约定好uint8数字对应的tag即可
uint8 TAG_UNKNOWN = 0
uint8 TAG_FOLLOW = 1
uint8 TAG_OVERTAKE = 2
uint8 TAG_LEFT_PASS = 3
uint8 TAG_RIGHT_PASS = 4
uint8 TAG_PRE_DECELERATE = 5
uint8 TAG_PRE_OVERTAKE_LEFT = 6
uint8 TAG_PRE_OVERTAKE_RIGHT = 7
uint8[] decision_tag # 只在最终被选中的PolicyScenario中会被填值

uint8 SCENE_CUTIN = 1
uint8 SCENE_CUTOUT = 2
uint8 SCENE_CROSS = 3
uint8 SCENE_ONCOMING = 4
uint8 SCENE_DEAD_CAR = 5
uint8 SCENE_BLOCK = 6
uint8[] scene_understanding

float64 cutin_time
float64 cutout_time

float64 distance
float64 ttc

uint8 PRIORITY_LOW = 1
uint8 PRIORITY_EQUAL = 2
uint8 PRIORITY_HIGH = 3
uint8 priority

# 可扩展的标志位
uint8[] scalable_flags
# 可扩展的键值对
String2String[] scalable_multimap