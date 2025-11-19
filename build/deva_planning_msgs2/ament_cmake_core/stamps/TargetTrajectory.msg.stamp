std_msgs/Header header
SensorTime sensor_timestamp
float64 start_gnss_time

float64 total_path_length # in meters​​
float64 total_path_time # in seconds​​

# ============================================
TrajectoryPoint[] trajectory_point
PathPoint[] path_point
string gear 
# ============================================

bool is_estop
string estop_reason

bool is_stop
PathPoint stop_pose
string stop_reason

bool is_replan
string replan_reason

bool car_in_dead_end

# ============================================
uint8 TRACETYPE_GO_STRAIGHT=0 
uint8 TRACETYPE_TURN_LEFT=1
uint8 TRACETYPE_TURN_RIGHT=2
uint8 TRACETYPE_CHANGELINE_LEFT=3
uint8 TRACETYPE_CHANGELINE_RIGHT=4

bool high_beam
bool low_beam
bool horn
bool emergency_light
uint8 trace_type