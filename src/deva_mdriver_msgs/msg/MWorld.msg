int32 world_id

# META_ACTION
uint8 UNKNOWN = 0
uint8 WAIT = 1
uint8 SPEED_UP = 2
uint8 SLOW_DOWN = 3
uint8 SLOW_DOWN_RAPIDLY = 4
uint8 GO_STRAIGHT_SLOWLY = 5
uint8 GO_STRAIGHT_AT_A_CONSTANT_SPEED = 6
uint8 REVERSE = 7
uint8 TURN_LEFT = 8
uint8 TURN_RIGHT = 9
uint8 STOP = 10
uint8 CHANGE_LANE_TO_THE_LEFT = 11
uint8 CHANGE_LANE_TO_THE_RIGHT = 12
uint8 SHIFT_SLIGHTLY_TO_THE_LEFT = 13
uint8 SHIFT_SLIGHTLY_TO_THE_RIGHT = 14
uint8 AROUND_LEFT = 15
uint8 AROUND_RIGHT = 16
uint8 SPLIT_LEFT = 17
uint8 SPLIT_RIGHT = 18

uint8 meta_action

MPredictionObstacle[] all_obstacles
NudgeBuffer nudge_buffer
float64[] ego_ref_v
MdriverMetaAction[] mdriver_meta_actions
float32 score
geometry_msgs/Point[17] refline_points