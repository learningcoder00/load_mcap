LinkIDType id 
uint8  road_type
uint32 length                                 # cm 
uint32 confidence                             # 取道路置信度，单位为百分之（返回 5 表示 5%）
uint8  travel_direction                       # 道路行驶方向
Coordinate[] coordinates                       # 道路几何形状
LinkIDType[] successor_linkid_s               # 道路后继linkId列表
LinkIDType[] predecessor_linkid_s             # 道路前驱linkId列表  
LinkIDType[] referenced_lane_id_s                 # 道路关联lane
LinkIDType[] referenced_intersection_id_s         # 道路关联路口
LinkIDType[] referenced_lanemarking_id_s          # 道路关联laneMarking
