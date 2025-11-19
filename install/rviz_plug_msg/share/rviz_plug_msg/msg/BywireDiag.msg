std_msgs/Header header

string node_name    # 定值"bywire_node"

BywireMsgType type  # 当前三种类型msg 分别为 ["STATUS", "INFO", "ERROR"] 同种类型覆盖显示最新消息,不同类型消息同时展示使用颜色区分

uint8 code          # 消息信息的数字编码根据 上方[type]字段取值不同解释含义不同，具体含义对照["StatusEnum.msg", "InfoEnum.msg", "ErrorEnum.msg"],无特殊需求可以不关注
string detail       # utf-8编码中文，消息详细信息用于展示
