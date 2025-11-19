deva_common_msgs/Header header

uint64 framenum
uint64 timestamp

float32 abs_vel_x
float32 abs_acc_x
uint8 vel_motion
uint8 acc_motion

uint8 f120_object_num
uint8 f30_object_num
TrafficObject[64] f120trafficobjects
TrafficObject[64] f30trafficobjects
E2eResult e2eobjects
uint8 time_of_day
uint8[2] reserved
