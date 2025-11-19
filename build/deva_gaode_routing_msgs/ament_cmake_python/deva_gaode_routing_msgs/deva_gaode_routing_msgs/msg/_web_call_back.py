# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'via_retain_dis'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebCallBack(type):
    """Metaclass of message 'WebCallBack'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.WebCallBack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_call_back
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_call_back
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_call_back
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_call_back
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_call_back

            from deva_gaode_routing_msgs.msg import CameraCallbackInfo
            if CameraCallbackInfo.__class__._TYPE_SUPPORT is None:
                CameraCallbackInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebCrossImage
            if WebCrossImage.__class__._TYPE_SUPPORT is None:
                WebCrossImage.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebCrossNaviInfo
            if WebCrossNaviInfo.__class__._TYPE_SUPPORT is None:
                WebCrossNaviInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebLane
            if WebLane.__class__._TYPE_SUPPORT is None:
                WebLane.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebNotAvoidInfo
            if WebNotAvoidInfo.__class__._TYPE_SUPPORT is None:
                WebNotAvoidInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebParallelRoad
            if WebParallelRoad.__class__._TYPE_SUPPORT is None:
                WebParallelRoad.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebTrafficLight
            if WebTrafficLight.__class__._TYPE_SUPPORT is None:
                WebTrafficLight.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebCallBack(metaclass=Metaclass_WebCallBack):
    """Message class 'WebCallBack'."""

    __slots__ = [
        '_index',
        '_cur_step',
        '_cur_road',
        '_cur_point',
        '_cur_road_retain_dis',
        '_cur_step_retain_dis',
        '_cur_step_retain_time',
        '_via_retain_dis',
        '_path_retain_dis',
        '_path_retain_time',
        '_trun_icon',
        '_trun_icon_retain_dis',
        '_lane_info',
        '_camera_callback',
        '_ring_out_cnt',
        '_roundabout_out_angle',
        '_cur_link_speed',
        '_not_avoid_info',
        '_cross_maneuver_id',
        '_next_cross_info',
        '_traffic_light_cd',
        '_parallel_road',
        '_ownership',
        '_cur_road_limit_speed',
        '_cross_image',
        '_cur_cross_dir',
        '_cur_cross_dist',
    ]

    _fields_and_field_types = {
        'index': 'int32',
        'cur_step': 'int32',
        'cur_road': 'int32',
        'cur_point': 'int32',
        'cur_road_retain_dis': 'double',
        'cur_step_retain_dis': 'double',
        'cur_step_retain_time': 'double',
        'via_retain_dis': 'sequence<double>',
        'path_retain_dis': 'double',
        'path_retain_time': 'double',
        'trun_icon': 'int32',
        'trun_icon_retain_dis': 'double',
        'lane_info': 'deva_gaode_routing_msgs/WebLane',
        'camera_callback': 'deva_gaode_routing_msgs/CameraCallbackInfo',
        'ring_out_cnt': 'int32',
        'roundabout_out_angle': 'int32',
        'cur_link_speed': 'int32',
        'not_avoid_info': 'deva_gaode_routing_msgs/WebNotAvoidInfo',
        'cross_maneuver_id': 'int32',
        'next_cross_info': 'sequence<deva_gaode_routing_msgs/WebCrossNaviInfo>',
        'traffic_light_cd': 'deva_gaode_routing_msgs/WebTrafficLight',
        'parallel_road': 'deva_gaode_routing_msgs/WebParallelRoad',
        'ownership': 'int32',
        'cur_road_limit_speed': 'uint32',
        'cross_image': 'deva_gaode_routing_msgs/WebCrossImage',
        'cur_cross_dir': 'uint32',
        'cur_cross_dist': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebLane'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'CameraCallbackInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebNotAvoidInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebCrossNaviInfo')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebTrafficLight'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebParallelRoad'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebCrossImage'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', int())
        self.cur_step = kwargs.get('cur_step', int())
        self.cur_road = kwargs.get('cur_road', int())
        self.cur_point = kwargs.get('cur_point', int())
        self.cur_road_retain_dis = kwargs.get('cur_road_retain_dis', float())
        self.cur_step_retain_dis = kwargs.get('cur_step_retain_dis', float())
        self.cur_step_retain_time = kwargs.get('cur_step_retain_time', float())
        self.via_retain_dis = array.array('d', kwargs.get('via_retain_dis', []))
        self.path_retain_dis = kwargs.get('path_retain_dis', float())
        self.path_retain_time = kwargs.get('path_retain_time', float())
        self.trun_icon = kwargs.get('trun_icon', int())
        self.trun_icon_retain_dis = kwargs.get('trun_icon_retain_dis', float())
        from deva_gaode_routing_msgs.msg import WebLane
        self.lane_info = kwargs.get('lane_info', WebLane())
        from deva_gaode_routing_msgs.msg import CameraCallbackInfo
        self.camera_callback = kwargs.get('camera_callback', CameraCallbackInfo())
        self.ring_out_cnt = kwargs.get('ring_out_cnt', int())
        self.roundabout_out_angle = kwargs.get('roundabout_out_angle', int())
        self.cur_link_speed = kwargs.get('cur_link_speed', int())
        from deva_gaode_routing_msgs.msg import WebNotAvoidInfo
        self.not_avoid_info = kwargs.get('not_avoid_info', WebNotAvoidInfo())
        self.cross_maneuver_id = kwargs.get('cross_maneuver_id', int())
        self.next_cross_info = kwargs.get('next_cross_info', [])
        from deva_gaode_routing_msgs.msg import WebTrafficLight
        self.traffic_light_cd = kwargs.get('traffic_light_cd', WebTrafficLight())
        from deva_gaode_routing_msgs.msg import WebParallelRoad
        self.parallel_road = kwargs.get('parallel_road', WebParallelRoad())
        self.ownership = kwargs.get('ownership', int())
        self.cur_road_limit_speed = kwargs.get('cur_road_limit_speed', int())
        from deva_gaode_routing_msgs.msg import WebCrossImage
        self.cross_image = kwargs.get('cross_image', WebCrossImage())
        self.cur_cross_dir = kwargs.get('cur_cross_dir', int())
        self.cur_cross_dist = kwargs.get('cur_cross_dist', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.index != other.index:
            return False
        if self.cur_step != other.cur_step:
            return False
        if self.cur_road != other.cur_road:
            return False
        if self.cur_point != other.cur_point:
            return False
        if self.cur_road_retain_dis != other.cur_road_retain_dis:
            return False
        if self.cur_step_retain_dis != other.cur_step_retain_dis:
            return False
        if self.cur_step_retain_time != other.cur_step_retain_time:
            return False
        if self.via_retain_dis != other.via_retain_dis:
            return False
        if self.path_retain_dis != other.path_retain_dis:
            return False
        if self.path_retain_time != other.path_retain_time:
            return False
        if self.trun_icon != other.trun_icon:
            return False
        if self.trun_icon_retain_dis != other.trun_icon_retain_dis:
            return False
        if self.lane_info != other.lane_info:
            return False
        if self.camera_callback != other.camera_callback:
            return False
        if self.ring_out_cnt != other.ring_out_cnt:
            return False
        if self.roundabout_out_angle != other.roundabout_out_angle:
            return False
        if self.cur_link_speed != other.cur_link_speed:
            return False
        if self.not_avoid_info != other.not_avoid_info:
            return False
        if self.cross_maneuver_id != other.cross_maneuver_id:
            return False
        if self.next_cross_info != other.next_cross_info:
            return False
        if self.traffic_light_cd != other.traffic_light_cd:
            return False
        if self.parallel_road != other.parallel_road:
            return False
        if self.ownership != other.ownership:
            return False
        if self.cur_road_limit_speed != other.cur_road_limit_speed:
            return False
        if self.cross_image != other.cross_image:
            return False
        if self.cur_cross_dir != other.cur_cross_dir:
            return False
        if self.cur_cross_dist != other.cur_cross_dist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'index' field must be an integer in [-2147483648, 2147483647]"
        self._index = value

    @builtins.property
    def cur_step(self):
        """Message field 'cur_step'."""
        return self._cur_step

    @cur_step.setter
    def cur_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_step' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_step' field must be an integer in [-2147483648, 2147483647]"
        self._cur_step = value

    @builtins.property
    def cur_road(self):
        """Message field 'cur_road'."""
        return self._cur_road

    @cur_road.setter
    def cur_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_road' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_road' field must be an integer in [-2147483648, 2147483647]"
        self._cur_road = value

    @builtins.property
    def cur_point(self):
        """Message field 'cur_point'."""
        return self._cur_point

    @cur_point.setter
    def cur_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_point' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_point' field must be an integer in [-2147483648, 2147483647]"
        self._cur_point = value

    @builtins.property
    def cur_road_retain_dis(self):
        """Message field 'cur_road_retain_dis'."""
        return self._cur_road_retain_dis

    @cur_road_retain_dis.setter
    def cur_road_retain_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_road_retain_dis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_road_retain_dis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_road_retain_dis = value

    @builtins.property
    def cur_step_retain_dis(self):
        """Message field 'cur_step_retain_dis'."""
        return self._cur_step_retain_dis

    @cur_step_retain_dis.setter
    def cur_step_retain_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_step_retain_dis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_step_retain_dis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_step_retain_dis = value

    @builtins.property
    def cur_step_retain_time(self):
        """Message field 'cur_step_retain_time'."""
        return self._cur_step_retain_time

    @cur_step_retain_time.setter
    def cur_step_retain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_step_retain_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_step_retain_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_step_retain_time = value

    @builtins.property
    def via_retain_dis(self):
        """Message field 'via_retain_dis'."""
        return self._via_retain_dis

    @via_retain_dis.setter
    def via_retain_dis(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'via_retain_dis' array.array() must have the type code of 'd'"
            self._via_retain_dis = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'via_retain_dis' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._via_retain_dis = array.array('d', value)

    @builtins.property
    def path_retain_dis(self):
        """Message field 'path_retain_dis'."""
        return self._path_retain_dis

    @path_retain_dis.setter
    def path_retain_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_retain_dis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_retain_dis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_retain_dis = value

    @builtins.property
    def path_retain_time(self):
        """Message field 'path_retain_time'."""
        return self._path_retain_time

    @path_retain_time.setter
    def path_retain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_retain_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_retain_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_retain_time = value

    @builtins.property
    def trun_icon(self):
        """Message field 'trun_icon'."""
        return self._trun_icon

    @trun_icon.setter
    def trun_icon(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trun_icon' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trun_icon' field must be an integer in [-2147483648, 2147483647]"
        self._trun_icon = value

    @builtins.property
    def trun_icon_retain_dis(self):
        """Message field 'trun_icon_retain_dis'."""
        return self._trun_icon_retain_dis

    @trun_icon_retain_dis.setter
    def trun_icon_retain_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trun_icon_retain_dis' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'trun_icon_retain_dis' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._trun_icon_retain_dis = value

    @builtins.property
    def lane_info(self):
        """Message field 'lane_info'."""
        return self._lane_info

    @lane_info.setter
    def lane_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebLane
            assert \
                isinstance(value, WebLane), \
                "The 'lane_info' field must be a sub message of type 'WebLane'"
        self._lane_info = value

    @builtins.property
    def camera_callback(self):
        """Message field 'camera_callback'."""
        return self._camera_callback

    @camera_callback.setter
    def camera_callback(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import CameraCallbackInfo
            assert \
                isinstance(value, CameraCallbackInfo), \
                "The 'camera_callback' field must be a sub message of type 'CameraCallbackInfo'"
        self._camera_callback = value

    @builtins.property
    def ring_out_cnt(self):
        """Message field 'ring_out_cnt'."""
        return self._ring_out_cnt

    @ring_out_cnt.setter
    def ring_out_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ring_out_cnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ring_out_cnt' field must be an integer in [-2147483648, 2147483647]"
        self._ring_out_cnt = value

    @builtins.property
    def roundabout_out_angle(self):
        """Message field 'roundabout_out_angle'."""
        return self._roundabout_out_angle

    @roundabout_out_angle.setter
    def roundabout_out_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roundabout_out_angle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roundabout_out_angle' field must be an integer in [-2147483648, 2147483647]"
        self._roundabout_out_angle = value

    @builtins.property
    def cur_link_speed(self):
        """Message field 'cur_link_speed'."""
        return self._cur_link_speed

    @cur_link_speed.setter
    def cur_link_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_link_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_link_speed' field must be an integer in [-2147483648, 2147483647]"
        self._cur_link_speed = value

    @builtins.property
    def not_avoid_info(self):
        """Message field 'not_avoid_info'."""
        return self._not_avoid_info

    @not_avoid_info.setter
    def not_avoid_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebNotAvoidInfo
            assert \
                isinstance(value, WebNotAvoidInfo), \
                "The 'not_avoid_info' field must be a sub message of type 'WebNotAvoidInfo'"
        self._not_avoid_info = value

    @builtins.property
    def cross_maneuver_id(self):
        """Message field 'cross_maneuver_id'."""
        return self._cross_maneuver_id

    @cross_maneuver_id.setter
    def cross_maneuver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cross_maneuver_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cross_maneuver_id' field must be an integer in [-2147483648, 2147483647]"
        self._cross_maneuver_id = value

    @builtins.property
    def next_cross_info(self):
        """Message field 'next_cross_info'."""
        return self._next_cross_info

    @next_cross_info.setter
    def next_cross_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebCrossNaviInfo
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, WebCrossNaviInfo) for v in value) and
                 True), \
                "The 'next_cross_info' field must be a set or sequence and each value of type 'WebCrossNaviInfo'"
        self._next_cross_info = value

    @builtins.property
    def traffic_light_cd(self):
        """Message field 'traffic_light_cd'."""
        return self._traffic_light_cd

    @traffic_light_cd.setter
    def traffic_light_cd(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebTrafficLight
            assert \
                isinstance(value, WebTrafficLight), \
                "The 'traffic_light_cd' field must be a sub message of type 'WebTrafficLight'"
        self._traffic_light_cd = value

    @builtins.property
    def parallel_road(self):
        """Message field 'parallel_road'."""
        return self._parallel_road

    @parallel_road.setter
    def parallel_road(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebParallelRoad
            assert \
                isinstance(value, WebParallelRoad), \
                "The 'parallel_road' field must be a sub message of type 'WebParallelRoad'"
        self._parallel_road = value

    @builtins.property
    def ownership(self):
        """Message field 'ownership'."""
        return self._ownership

    @ownership.setter
    def ownership(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ownership' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ownership' field must be an integer in [-2147483648, 2147483647]"
        self._ownership = value

    @builtins.property
    def cur_road_limit_speed(self):
        """Message field 'cur_road_limit_speed'."""
        return self._cur_road_limit_speed

    @cur_road_limit_speed.setter
    def cur_road_limit_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_road_limit_speed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_road_limit_speed' field must be an unsigned integer in [0, 4294967295]"
        self._cur_road_limit_speed = value

    @builtins.property
    def cross_image(self):
        """Message field 'cross_image'."""
        return self._cross_image

    @cross_image.setter
    def cross_image(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebCrossImage
            assert \
                isinstance(value, WebCrossImage), \
                "The 'cross_image' field must be a sub message of type 'WebCrossImage'"
        self._cross_image = value

    @builtins.property
    def cur_cross_dir(self):
        """Message field 'cur_cross_dir'."""
        return self._cur_cross_dir

    @cur_cross_dir.setter
    def cur_cross_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_cross_dir' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cur_cross_dir' field must be an unsigned integer in [0, 4294967295]"
        self._cur_cross_dir = value

    @builtins.property
    def cur_cross_dist(self):
        """Message field 'cur_cross_dist'."""
        return self._cur_cross_dist

    @cur_cross_dist.setter
    def cur_cross_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_cross_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_cross_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_cross_dist = value
