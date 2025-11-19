deva_common_msgs/Header header
SensorTime sensor_time

PlanningTrajectory[] trajectories

int8 SUCCESS = 1
int8 FAILED = 2
int8 FREEZE = 3
int8 QUIT = 4
int8 pilot_planning_state

# 新增字段：规划工作状态
uint8 MANUAL = 0
uint8 ACC = 1
uint8 ICC = 2
uint8 NOA = 3
uint8 D2D = 4
uint8 OFF = 5
uint8 planning_work_state  # 规划工作状态

# 功能状态组合，使用 bitmask 表示以下四个模式是否可用
# bit0 (0001): ACC_AVAILABLE
# bit1 (0010): ICC_AVAILABLE
# bit2 (0100): NOA_AVAILABLE
# bit3 (1000): D2D_AVAILABLE
uint8 function_state_available

PlanningFail[] fail_reason