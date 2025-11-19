ObstacleCommon obstacle

# object_type
uint8 OBJECT_TYPE_UNKNOWN       = 0
uint8 OBJECT_TYPE_STOPLINE      = 1
uint8 OBJECT_TYPE_JUNCTION      = 2
uint8 OBJECT_TYPE_LEFTTURN      = 3
uint8 OBJECT_TYPE_RIGHTTURN     = 4
uint8 OBJECT_TYPE_CROSSWALK     = 5
uint8 OBJECT_TYPE_SPEED_CONTROL = 6
uint8 OBJECT_TYPE_CURB          = 7
uint8 OBJECT_TYPE_BARRIER       = 8
uint8 OBJECT_TYPE_SIGNAL        = 9

uint8 object_type

#static_obstacle_type
uint8 UNKOWN                    = 0
uint8 PILLAR                    = 1
uint8 SLOT_LIMITTER             = 2
uint8 SLOT_LOCK                 = 3
uint8 CONE                      = 4
uint8 SPEED_BUMP                = 5
uint8 SIGNAL                    = 6
uint8 PARKING_WALLEDGE          = 7
uint8 PARKING_CURB              = 8
uint8 ULTRAOBS                  = 9
uint8 static_obstacle_type

# slot_lock_type
uint8 FREE                      = 0
uint8 LOCKED                    = 1
uint8 slot_lock_type