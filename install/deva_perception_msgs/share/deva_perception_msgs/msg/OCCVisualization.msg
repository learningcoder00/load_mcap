# cam_front_120的时间戳 
deva_common_msgs/Header header

# lidar时间戳，用于和/perception/detection/static_obstacle_result对齐
deva_common_msgs/Header lidar_header

# shape: n个type值, n = 304x816, 每个值为[0,1,2,3]其中的一个，代表该点的type. 
# freespace 1， 动态 2， 静态 3, unknow 0 
uint8[] points_type

# points_type index 到 rfu坐标映射参数
# voxel_size = {0.1, 0.1}
# pc_range = {-15.2, 0}
# 共4个element，前两个为voxel_size，后两个为pc_range。
# points_type index to rfu的映射方式为：
# int x = i % 304; (304为points_type的width)
# int y = i / 304;
# float xs = x * 0.1 - 15.2;（这里的0.1为voxel_size[0]，也就是voxel_pc_params[0]; -15.2为pc_range[0], 也就是voxel_pc_params[2]）
# float ys = y * 0.1 + 0.0; （这里的0.1为voxel_size[1]，也就是voxel_pc_params[1]; 0.0为pc_range[1], 也就是voxel_pc_params[3]）
# 其中i为points_type的index，范围为0～248064（816x304）；xs和ys分别为rfu坐标的x和y
float32[4] voxel_pc_params


# shape: nx2个uint16, n不固定
float64[] image_points_contours

# rfu坐标 到 pixel坐标的转换矩阵, 4x4 matrix, 也就是camera_front_120相机的 内参*外参
float64[16] rfu_pixel_matrix

# rfu坐标 到 世界坐标的转换矩阵
float64[16] rfu_utm_matrix
