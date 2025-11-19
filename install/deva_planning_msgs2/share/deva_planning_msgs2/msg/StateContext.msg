std_msgs/Header header

# 最终被选中的PolicyScenario的behavior_type
uint8 LANE_KEEPING = 0
uint8 RIGHT_CHANGE = 1
uint8 LEFT_CHANGE = 2
uint8 HOLD = 3
uint8 CANCEL = 4
uint8 LANE_CHANGE = 5
uint8 RIGHT_CHANGE_PREPARE = 6
uint8 LEFT_CHANGE_PREPARE = 7
uint8 UNKNOWN = 8
uint8 TAKE_OVER = 9
uint8 behavior_type

uint8 ROUTING_NULL = 0
uint8 INCREASED_ROAD = 1
uint8 LANE = 2
uint8 OSM = 3
uint8 ROAD = 4
uint8 SDK_NAVI = 5
uint8 SDK_CRUISE = 6
uint8 WEB = 7
uint8 routing_mode

uint8 U_TURN = 0
uint8 TURN_LEFT = 1
uint8 TURN_RIGHT = 2
uint8 LEFT_TURN_WAITING_AREA = 3
uint8 RIGHT_TURN_WAITING_AREA = 4
uint8 STRAIGHT_AHEAD_WAITING_AREA = 5
uint8 GO_STRAIGHT = 6
uint8 current_turn_type

int32 use_mdriver_ego

int32 target_line_id
int32 current_line_id

# gap info
string front_obstacle_id
string rear_obstacle_id

uint8 NONE = 0
uint8 TURN_LEVER = 1
uint8 OVERTAKE = 2
uint8 NAVIGATION = 3
uint8 OBSTACLE = 4
uint8 lane_change_task

# 【核心决策信息】
int32 best_tree_id
PolicyScenario[] mcts_trees

# 最终被选中的PolicyScenario的障碍物决策tag
# 增加新tag不必须修改msg文件，在文档中约定好uint8数字对应的tag即可
uint8 TAG_UNKNOWN = 0
uint8 TAG_FOLLOW = 1
uint8 TAG_OVERTAKE = 2
uint8 TAG_LEFT_PASS = 3
uint8 TAG_RIGHT_PASS = 4
uint8 TAG_PRE_DECELERATE = 5
uint8 TAG_PRE_OVERTAKE_LEFT = 6
uint8 TAG_PRE_OVERTAKE_RIGHT = 7
UInt2String[] tagged_obstacle # [key: tag, value: obs_id]

# 车道线绑定关系和sl投影
LaneBindInfo[] lane_bind_infos
Ref2SLBoundary[] ego_sl_on_ref_lines # 自车在每条被关注的车道上的SL

# 变道取消原因，使用 bitmask 表示
# bit0 (0001): NAVIGATION_CANCEL
# bit1 (0010): RISK_CANCEL
# bit2 (0100): LINE_VIOLATION_CANCEL
uint8 lane_change_cancel_reason

# 可扩展的标志位
uint8[] scalable_flags
# 可扩展的键值对
String2String[] scalable_multimap
# 可扩展的二进制流
String2UInt[] scalable_stream