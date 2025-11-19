deva_perception_msgs/MovingObstacle perception_obstacle
deva_planning_msgs/TrajectoryPoint[] trajectory
uint8[] decision

int32 obs_id
float64 score
float64[] cov

# StaticIntent
uint8 NOT_STATIC = 0
uint8 WAIT_TO_MOVE = 1
uint8 DEAD_CAR = 2

uint8 is_static

AccHeadingSteeringStats[] acc_heading_steering_stats
DebugInfo[] prediction_debug_info
