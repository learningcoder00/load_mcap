int32 id
uint8 UNKNOWN = 0
uint8 CROSSWALK = 1
uint8 JUNCTION = 2
uint8 VERTICAL_SLOT = 3
uint8 SIDE_SLOT = 4
uint8 SLANTED_SLOT = 5
uint8 ULTRASONIC_VERTICAL_SLOT = 6
uint8 ULTRASONIC_SIDE_SLOT = 7
uint8 type
geometry_msgs/Point dims
deva_localization_msgs/Pose pose
uint8 LINE_SEGMENT = 0
uint8 EQUATION_CURVE = 1
uint8 DISPERSE_CURVE = 2
uint8 segment_type

EdgeLineSegment[] line_segments
EdgeEquationCurve[] equation_curves
EdgeDisperseCurve[] disperse_curves

geometry_msgs/Point[] corner_points
deva_common_msgs/Point2d direction_pixcoord
float32 confidence
float32 depth_carcoord

bool is_occupied
bool is_stable_tracked
float32 occupied_confidence

StaticObstacle[] static_obstacles

# Only used by MVIZ
deva_common_msgs/Point2d[] pixel_points