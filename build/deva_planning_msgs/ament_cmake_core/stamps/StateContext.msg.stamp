std_msgs/Header header
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

uint8 MAP_NULL = 0
uint8 ACC = 1
uint8 ICC = 2
uint8 NOA = 3
uint8 navi_map_mode

uint8 ROUTING_NULL = 0
uint8 INCREASED_ROAD = 1
uint8 LANE = 2
uint8 OSM = 3
uint8 ROAD = 4
uint8 SDK_NAVI = 5
uint8 SDK_CRUISE = 6
uint8 WEB = 7
uint8 routing_mode

float64 target_lane_seq_score
float64 state_score 
float64 score 
int32 use_mdriver_ego

int32 target_line_id
int32 current_line_id

int32 gap_id
int32 gap_line_id
float64 start_s
float64 end_s
float64 length
float64 future_length

# gap info: 暂时用string后面会改成uint32和感知对齐
string front_obstacle_id
string rear_obstacle_id
# string merge_front_obstacle_id
# string merge_rear_obstacle_id
# uint32 front_obstacle_id
# uint32 rear_obstacle_id

uint32[] cipv_obstacle_id
uint32[] nudge_obstacle_id
uint32[] cutin_follow_obstacle_id
uint32[] cutin_overtake_obstacle_id

uint8 NONE = 0
uint8 TURN_LEVER = 1
uint8 OVERTAKE = 2
uint8 NAVIGATION = 3
uint8 OBSTACLE = 4
uint8 lane_change_task
