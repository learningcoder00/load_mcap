# input
float64 x_s
float64 y_s
float64 theta_s
float64 x_e
float64 y_e
float64 theta_e
float64[] xy_bounds
NavOpenspaceObstacle[] obstacles_info
NavOpenspaceParkingSlot[] parking_slots
uint32 start_gear # 初始挡位, 0 为 D 挡, 1 为 R 挡位
float64 speed
float64 keep_start_gear_distance
float64 kappa
float64 timestamp
PathData[] ref_points

# status
uint32 openspace_planning_status
TargetTrajectory last_trajectory
float64 last_trajectory_timestamp
TargetTrajectory[] last_internal_trajectory_paths
uint32 current_path_index
bool is_arrived_path_end
PathData[] last_ref_points

# internal results
TargetTrajectory[] hybrid_astar_search_results
TargetTrajectory[] optimization_results
