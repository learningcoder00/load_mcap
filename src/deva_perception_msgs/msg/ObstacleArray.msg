std_msgs/Header header
Obstacle[] obstacle_array

# ego transform information
geometry_msgs/Point position
geometry_msgs/Quaternion orientation

string state_message # GOOD: Safe to use. The INS has fully converged; 
# CONVERGIN: Use with caution. The covariance matrix may be unavailable or incorrect. High-variance result due to aligning, insufficient vehicle dynamics, ...
# INVALID: Invalid solution due to insufficient observations, no initial GNSS, ...