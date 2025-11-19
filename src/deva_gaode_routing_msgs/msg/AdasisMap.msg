deva_common_msgs/Header header
uint8 is_update_ehp_position  # 0|no update 1|update
EhpPosition ehp_position
uint8 is_update_ehp_meta_data
EhpMetaData ehp_meta_data
uint8 is_update_ehp_segments
EhpSegment[] ehp_segments
uint8 is_update_ehp_stubs
EhpStub[] ehp_stubs
uint8 is_update_ehp_profile_shorts
EhpProfileShort[] ehp_profile_shorts
uint8 is_update_ehp_profile_longs
EhpProfileLong[] ehp_profile_longs
Link[] link                                                                         # links 
Node[] node                                                                         # link node  
FeaturePointById[] feature_points                                                   # feature_point
LANE[] lanes                                                                    # lanes 
StopLine[] stoplines                                                                # stop line 
IntersectionRoadNode[] intersection_road_nodes                                      # 交叉口节点
IntersectionRoad[]     intersection_roads                                           # 交叉点道路
PositionMatchLink position_match_link                                               
HeterogeneousMatchLink heterogeneous_match_link                                     # 异源匹配links
RouteGuideResponse   route_guide_response                                           # guide response 
J6mData               j6m_data                                                        # j6m data
