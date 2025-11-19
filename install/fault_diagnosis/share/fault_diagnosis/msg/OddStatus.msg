# OddStatus.msg
# 单个功能状态

string ACC = "ACC"
string ICC = "ICC"
string ALCA = "ALCA"
string HWA = "HWA"
string NOA = "NOA"
string D2D = "D2D"

# 状态枚举
uint8 UNACTAVABLE = 0              # 功能不可激活，不可运行（存在阻止条件）
uint8 WORKABLE = 1                 # 功能不可激活，可运行（满足运行条件）
uint8 ACTIVABLE = 2                # 功能可激活（满足激活条件）

string function_id                 # 功能标识
uint8 state
string[] fault_reasons             # 模块专属故障列表