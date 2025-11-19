int32 tree_id

uint8 LANE_KEEPING = 0
uint8 RIGHT_CHANGE = 1
uint8 LEFT_CHANGE = 2
uint8 HOLD = 3
uint8 CANCEL = 4
uint8 LANE_CHANGE = 5
uint8 RIGHT_CHANGE_PREPARE = 6
uint8 LEFT_CHANGE_PREPARE = 7
uint8 UNKNOWN = 8
uint8 behavior_type

int32 target_line_id
int32 current_line_id

bool is_from_mdriver

# gap info
string front_obstacle_id
string rear_obstacle_id

uint8 TREE_NON_GAMING = 1
uint8 TREE_GAMED = 2
uint8 TREE_CANDIDATE = 3
uint8 TREE_LATERAL = 4
uint8 TREE_PRE_DECELERATE = 5
UInt2String[] game_obstacles

# 关键障碍物
PlanningObstacle[] critical_obstacles

# score类型改动较为频繁，故不作为常量
String2Double[] tree_score # [key: score_type, value：score]

float64 rollout_start_time

SemanticTreeNode[] tree_nodes

TreeTrajectory[] tree_output_trajs

# 可扩展的标志位
uint8[] scalable_flags
# 可扩展的键值对
String2String[] scalable_multimap

