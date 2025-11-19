geometry_msgs/Point pos

float64 heading
float64 speed
# direction on the x-y plane
float64 theta
# curvature on the x-y planning
float64 kappa
# accumulated distance from beginning of the path
float64 s

# derivative of kappa w.r.t s.
float64 dkappa
# derivative of derivative of kappa w.r.t s.
float64 ddkappa
# The lane ID where the path point is on
string lane_id

# derivative of x and y w.r.t parametric parameter t in CosThetareferenceline
float64 x_derivative
float64 y_derivative 

float64 lane_width
bool is_junction
float64 distance2obs