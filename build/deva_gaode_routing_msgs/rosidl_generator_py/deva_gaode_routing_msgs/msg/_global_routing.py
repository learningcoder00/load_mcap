# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalRouting(type):
    """Metaclass of message 'GlobalRouting'."""

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
                'deva_gaode_routing_msgs.msg.GlobalRouting')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_routing
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_routing
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_routing
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_routing
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_routing

            from deva_gaode_routing_msgs.msg import GlobalPathMsg
            if GlobalPathMsg.__class__._TYPE_SUPPORT is None:
                GlobalPathMsg.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebCallBack
            if WebCallBack.__class__._TYPE_SUPPORT is None:
                WebCallBack.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebStep
            if WebStep.__class__._TYPE_SUPPORT is None:
                WebStep.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebVocalRecMsg
            if WebVocalRecMsg.__class__._TYPE_SUPPORT is None:
                WebVocalRecMsg.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalRouting(metaclass=Metaclass_GlobalRouting):
    """Message class 'GlobalRouting'."""

    __slots__ = [
        '_header',
        '_version',
        '_status',
        '_md5',
        '_mode',
        '_start_point',
        '_way_points',
        '_end_point',
        '_distance',
        '_time',
        '_step_num',
        '_locate_step',
        '_forward_step',
        '_traffic_light_count',
        '_call_back',
        '_vocal_info',
        '_global_path',
        '_cur_point',
        '_orientation',
        '_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version': 'string',
        'status': 'boolean',
        'md5': 'string',
        'mode': 'uint32',
        'start_point': 'deva_gaode_routing_msgs/WebPoint',
        'way_points': 'sequence<deva_gaode_routing_msgs/WebPoint>',
        'end_point': 'deva_gaode_routing_msgs/WebPoint',
        'distance': 'float',
        'time': 'float',
        'step_num': 'int32',
        'locate_step': 'deva_gaode_routing_msgs/WebStep',
        'forward_step': 'deva_gaode_routing_msgs/WebStep',
        'traffic_light_count': 'int32',
        'call_back': 'deva_gaode_routing_msgs/WebCallBack',
        'vocal_info': 'deva_gaode_routing_msgs/WebVocalRecMsg',
        'global_path': 'deva_gaode_routing_msgs/GlobalPathMsg',
        'cur_point': 'deva_gaode_routing_msgs/WebPoint',
        'orientation': 'double',
        'speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebStep'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebStep'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebCallBack'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebVocalRecMsg'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'GlobalPathMsg'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.version = kwargs.get('version', str())
        self.status = kwargs.get('status', bool())
        self.md5 = kwargs.get('md5', str())
        self.mode = kwargs.get('mode', int())
        from deva_gaode_routing_msgs.msg import WebPoint
        self.start_point = kwargs.get('start_point', WebPoint())
        self.way_points = kwargs.get('way_points', [])
        from deva_gaode_routing_msgs.msg import WebPoint
        self.end_point = kwargs.get('end_point', WebPoint())
        self.distance = kwargs.get('distance', float())
        self.time = kwargs.get('time', float())
        self.step_num = kwargs.get('step_num', int())
        from deva_gaode_routing_msgs.msg import WebStep
        self.locate_step = kwargs.get('locate_step', WebStep())
        from deva_gaode_routing_msgs.msg import WebStep
        self.forward_step = kwargs.get('forward_step', WebStep())
        self.traffic_light_count = kwargs.get('traffic_light_count', int())
        from deva_gaode_routing_msgs.msg import WebCallBack
        self.call_back = kwargs.get('call_back', WebCallBack())
        from deva_gaode_routing_msgs.msg import WebVocalRecMsg
        self.vocal_info = kwargs.get('vocal_info', WebVocalRecMsg())
        from deva_gaode_routing_msgs.msg import GlobalPathMsg
        self.global_path = kwargs.get('global_path', GlobalPathMsg())
        from deva_gaode_routing_msgs.msg import WebPoint
        self.cur_point = kwargs.get('cur_point', WebPoint())
        self.orientation = kwargs.get('orientation', float())
        self.speed = kwargs.get('speed', float())

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
        if self.header != other.header:
            return False
        if self.version != other.version:
            return False
        if self.status != other.status:
            return False
        if self.md5 != other.md5:
            return False
        if self.mode != other.mode:
            return False
        if self.start_point != other.start_point:
            return False
        if self.way_points != other.way_points:
            return False
        if self.end_point != other.end_point:
            return False
        if self.distance != other.distance:
            return False
        if self.time != other.time:
            return False
        if self.step_num != other.step_num:
            return False
        if self.locate_step != other.locate_step:
            return False
        if self.forward_step != other.forward_step:
            return False
        if self.traffic_light_count != other.traffic_light_count:
            return False
        if self.call_back != other.call_back:
            return False
        if self.vocal_info != other.vocal_info:
            return False
        if self.global_path != other.global_path:
            return False
        if self.cur_point != other.cur_point:
            return False
        if self.orientation != other.orientation:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version' field must be of type 'str'"
        self._version = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value

    @builtins.property
    def md5(self):
        """Message field 'md5'."""
        return self._md5

    @md5.setter
    def md5(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'md5' field must be of type 'str'"
        self._md5 = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode' field must be an unsigned integer in [0, 4294967295]"
        self._mode = value

    @builtins.property
    def start_point(self):
        """Message field 'start_point'."""
        return self._start_point

    @start_point.setter
    def start_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'start_point' field must be a sub message of type 'WebPoint'"
        self._start_point = value

    @builtins.property
    def way_points(self):
        """Message field 'way_points'."""
        return self._way_points

    @way_points.setter
    def way_points(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
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
                 all(isinstance(v, WebPoint) for v in value) and
                 True), \
                "The 'way_points' field must be a set or sequence and each value of type 'WebPoint'"
        self._way_points = value

    @builtins.property
    def end_point(self):
        """Message field 'end_point'."""
        return self._end_point

    @end_point.setter
    def end_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'end_point' field must be a sub message of type 'WebPoint'"
        self._end_point = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time = value

    @builtins.property
    def step_num(self):
        """Message field 'step_num'."""
        return self._step_num

    @step_num.setter
    def step_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step_num' field must be an integer in [-2147483648, 2147483647]"
        self._step_num = value

    @builtins.property
    def locate_step(self):
        """Message field 'locate_step'."""
        return self._locate_step

    @locate_step.setter
    def locate_step(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebStep
            assert \
                isinstance(value, WebStep), \
                "The 'locate_step' field must be a sub message of type 'WebStep'"
        self._locate_step = value

    @builtins.property
    def forward_step(self):
        """Message field 'forward_step'."""
        return self._forward_step

    @forward_step.setter
    def forward_step(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebStep
            assert \
                isinstance(value, WebStep), \
                "The 'forward_step' field must be a sub message of type 'WebStep'"
        self._forward_step = value

    @builtins.property
    def traffic_light_count(self):
        """Message field 'traffic_light_count'."""
        return self._traffic_light_count

    @traffic_light_count.setter
    def traffic_light_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_light_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'traffic_light_count' field must be an integer in [-2147483648, 2147483647]"
        self._traffic_light_count = value

    @builtins.property
    def call_back(self):
        """Message field 'call_back'."""
        return self._call_back

    @call_back.setter
    def call_back(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebCallBack
            assert \
                isinstance(value, WebCallBack), \
                "The 'call_back' field must be a sub message of type 'WebCallBack'"
        self._call_back = value

    @builtins.property
    def vocal_info(self):
        """Message field 'vocal_info'."""
        return self._vocal_info

    @vocal_info.setter
    def vocal_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebVocalRecMsg
            assert \
                isinstance(value, WebVocalRecMsg), \
                "The 'vocal_info' field must be a sub message of type 'WebVocalRecMsg'"
        self._vocal_info = value

    @builtins.property
    def global_path(self):
        """Message field 'global_path'."""
        return self._global_path

    @global_path.setter
    def global_path(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import GlobalPathMsg
            assert \
                isinstance(value, GlobalPathMsg), \
                "The 'global_path' field must be a sub message of type 'GlobalPathMsg'"
        self._global_path = value

    @builtins.property
    def cur_point(self):
        """Message field 'cur_point'."""
        return self._cur_point

    @cur_point.setter
    def cur_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'cur_point' field must be a sub message of type 'WebPoint'"
        self._cur_point = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orientation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orientation = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value
