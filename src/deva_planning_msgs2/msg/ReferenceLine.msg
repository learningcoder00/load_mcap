nav_msgs/Path reference_line
int32 line_id
nav_msgs/Path original_merge_point   #未填写
nav_msgs/Path merge_point   #未填写

# 参考线状态，需要时可加4\8\16
int32 IS_REVERSE = 1
int32 IS_NOT_CURRENT_ROAD = 2
int32 IS_UNREACHABLE = 4
int32 reference_line_type

bool line_is_model
bool line_is_virtual  #未填写
int32 left_line_nums  #未填写
int32 right_line_nums  #未填写
string[] cipv_ids  #未填写
string[] cutin_cipv_ids  #未填写
string[] nearest_cipv_ids  #未填写

float64 navi_score
float64 effic_score
int32 turn_scenario