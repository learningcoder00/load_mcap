LinkIDType link_id
int32 length
uint8 link_direction
uint8 lane_num_sum
uint8 lane_num_s2e
uint8 lane_num_e2s
uint8 speed_limit_s2e
uint8 speed_limit_e2s
int8 road_class               # 道路等级  
uint8  toll_type               # 收费属性 
uint8[] road_kinds             # 道路类型   0x12 提前道路
uint16 coverage_status         # link数据hdair覆盖状态
uint8  function_class          # 功能类别
uint8  construction_type       # 在建状态
uint8  condition_type          #铺设状态
uint8  speed_class             #速度等级
uint32 admin_code              #行政区代码
uint8[] vehicle_types            #可通行车辆类型
uint8 compacity                #通行能力
bool is_special              #特殊交通类型 为了控制进入道路车流量的近似环形道路
bool is_in_city              #是否城市区域
bool is_cross_tile           #是否跨tile
