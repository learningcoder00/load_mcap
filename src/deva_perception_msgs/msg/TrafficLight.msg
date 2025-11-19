deva_perception_msgs/ObstacleCommon perception_obstacle

uint8 RED    = 0
uint8 YELLOW = 1
uint8 GREEN  = 2
uint8 UNKNOW = 3

# 红绿灯状态
uint8 color_type

uint8 CIRCLE = 0
uint8 TURNLEFT = 1
uint8 TURNRIGHT = 2
uint8 GOSTRAIGHT = 3
uint8 TURNAROUND = 4
uint8 TURNLEFTANDAROUND = 5
uint8 BICYCLE = 6
uint8 SIDEWALK = 7
uint8 COUNDDOWN = 8
uint8 OTHERS = 9

# 红绿灯形状
uint8 shape_type

# 是否闪烁
bool blink

float64 remaining_time
string bind_id