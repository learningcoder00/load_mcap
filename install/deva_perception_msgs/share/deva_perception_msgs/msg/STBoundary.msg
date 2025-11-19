bool has_equation
deva_common_msgs/EquationCurve[] equation_curves

bool has_disperse
geometry_msgs/Point[] disperse_curve

bool has_extend_equation
deva_common_msgs/EquationCurve extend_equation_curve

bool has_extend_disperse
geometry_msgs/Point[] extend_disperse_curve

LaneType[] lane_type

int8 POSITION_BOLLARD_LEFT = -5
int8 POSITION_FOURTH_LEFT = -4
int8 POSITION_THIRD_LEFT = -3
int8 POSITION_ADJACENT_LEFT = -2
int8 POSITION_EGO_LEFT = -1
int8 POSITION_EGO_RIGHT = 1
int8 POSITION_ADJACENT_RIGHT = 2
int8 POSITION_THIRD_RIGHT = 3
int8 POSITION_FOURTH_RIGHT = 4
int8 POSITION_BOLLARD_RIGHT = 5
int8 POSITION_OTHER = 6
int8 POSITION_UNKNOWN = 7
int8 position


int32 id

int32 left_id
int32 right_id

float32 confidence

int32 reserve
int32 global_track_id
