ObstacleCommon obstacle

# MovingObstacle
uint8 CAR = 0
uint8 TRUCK = 1
uint8 CONSTRUCTION_VEHICLE = 2
uint8 BUS = 3
uint8 MOTORCYCLE = 4
uint8 BICYCLE = 5
uint8 TRICYCLE = 6
uint8 CYCLIST = 7
uint8 PEDESTRIAN = 8
uint8 UNKNOWN = 9

uint8 moving_obstacle_type
string det_type

geometry_msgs/Twist velocity
geometry_msgs/Accel acceleration
geometry_msgs/Twist velocity_var
geometry_msgs/Accel acceleration_var

bool is_predict