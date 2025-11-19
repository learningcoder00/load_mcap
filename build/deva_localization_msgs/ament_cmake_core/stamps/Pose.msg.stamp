# UTM zone id, -1代表自定义坐标系
int32 utm_id
# 车辆参考点(vehicle reference point)在地图参考系中的位置. 
# VRP是车辆IMU中心点.
geometry_msgs/Point position

# 表征IMU坐标旋转的四元数.
geometry_msgs/Quaternion orientation

# VRP在地图参考系中的线性速度.
# East/north/up in meters per second.
geometry_msgs/Point linear_velocity

# VRP在地图参考系中的线性加速度.
# East/north/up in meters per square second.
geometry_msgs/Point linear_acceleration

# VRP在地图参考系中的角速度.
# Around east/north/up axes in radians per second.
geometry_msgs/Point angular_velocity

# Heading
# The heading is zero when the car is facing East and positive when facing North.
float64 heading

# VRP在车辆参考系中的线性加速度.
# forward/left/up in meters per square second.
geometry_msgs/Point linear_acceleration_vrf

# VRP在车辆参考系中的角速度.
# Around forward/left/up axes in radians per second.
geometry_msgs/Point angular_velocity_vrf

# The roll, in (-pi/2, pi/2), corresponds to a rotation around the x-axis.
# The pitch, in [-pi, pi), corresponds to a rotation around the y-axis.
# The yaw, in [-pi, pi), corresponds to a rotation around the z-axis.
# The direction of rotation follows the right-hand rule.
geometry_msgs/Point euler_angles
