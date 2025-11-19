# points：点集   ego坐标
#  - point: 仅取第一点即可
#  - circle: 取第一点为圆心
#  - polyline: 取所有点连成线
#  - polygon :n个点 连线成的底面 比如四个点代表车障碍物的底面 ads会和高度拼接成一个box
#  - text: 取第一个点为文本位置
geometry_msgs/Point[] points

# string type专属值
string text

# 是否可点击  当前协议在障碍物和车道线使用  比如障碍物点击 显示物体信息的框
bool clickable

# 如果可点击 则展示里面的详细信息 k-v结构
AdsInfo[] detail
