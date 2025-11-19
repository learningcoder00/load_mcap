int32 id

uint8 UNKNOWN = 0
uint8 STATIC_BOUNDARY = 1
uint8 CURB = 2
uint8 GUARDRAIL = 3
uint8 WALLEDGE = 4
uint8 CONE_LINE = 5
uint8 STOP_LINE = 6
uint8 type

uint8 LINE_SEGMENT = 0
uint8 EQUATION_CURVE = 1
uint8 DISPERSE_CURVE = 2
uint8 segment_type

EdgeLineSegment[] line_segments
EdgeEquationCurve[] equation_curves
EdgeDisperseCurve[] disperse_curves

geometry_msgs/Point[] corner_points

WayLink waylink
bool is_stable_tracked
