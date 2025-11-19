int8 path_type

TrajectoryPoint[] trajectory_points
deva_common_msgs/EquationCurve curve
float64 total_path_length
float64 total_path_time

string gear

bool is_estop
string estop_reason

bool is_stop
string stop_reason
geometry_msgs/Point stop_pose

bool is_replan
string replan_reason

bool car_in_dead_end

uint8 trace_type

bool high_beam
bool low_beam
bool horn
bool emergency_light

int8 vehicle_gear
geometry_msgs/Point circle_center
float64 radius
uint32 id