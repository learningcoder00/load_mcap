deva_common_msgs/Header header
# SUCCESS, FAILED, FREEZE[预留], QUIT[预留]
string pilot_planning_state
# ERROR[预留], NOA_NOT_AVAILABLE[planning不支持NOA], NOA_AVAILABLE
string navi_state
PlanningFail[] fail_reason