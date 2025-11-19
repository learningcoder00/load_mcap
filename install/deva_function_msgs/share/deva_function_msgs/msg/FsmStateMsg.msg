# FSM sends out the current state and the state of the sub-state machine.
# Driving and Parking state machine and sub-state machine state

deva_common_msgs/Header header
float64 publish_timestamp

string fsm_state
uint8 top_state
uint8 acc_state
uint8 icc_state
uint8 noa_state
uint8 d2d_state
uint8 calibra_state
uint8 mapping_state
uint8 parking_state
