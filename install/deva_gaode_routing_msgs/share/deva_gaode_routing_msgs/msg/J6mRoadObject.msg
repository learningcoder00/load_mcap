LinkIDType   road_object_id                    # 道路对象Id
uint8        road_object_type                  # 对象类型
uint8        road_object_subtype               # 对象子类型
Coordinate   road_object_center_point          # 对象中心点
uint16       road_object_heading               # 对象朝向，单位为度，与正北方向的夹角，顺时针为正 [0, 360]
string       road_attributes                   # 对象属性
uint32       confidence                        # 对象置信度，单位为百分之（返回 5 表示 5%）
uint32       offset                            # 基于link_geometry起点的偏移距离
Coordinate[] coordinates                       # 对象几何形状
LinkIDType[] referenced_lane_ids               # 道路对象关联laneId列表