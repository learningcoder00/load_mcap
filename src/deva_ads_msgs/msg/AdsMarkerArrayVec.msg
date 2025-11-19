std_msgs/Header header

# stream：ads左边想要展示的命名  /planning/planning_box
string stream

# 0: point, 1: circle, 2: polyline, 3: polygon, 4: text
uint8 POINT=0
uint8 CIRCLE=1
uint8 POLYLINE=2
uint8 POLYGON=3
uint8 TEXT=4
uint8 marker_type

AdsMarkerArray[] ads_marker_arrays
