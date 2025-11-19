# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebRoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebRoad(type):
    """Metaclass of message 'WebRoad'."""

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
                'deva_gaode_routing_msgs.msg.WebRoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_road
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_road
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_road
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_road
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_road

            from deva_gaode_routing_msgs.msg import WebIntersection
            if WebIntersection.__class__._TYPE_SUPPORT is None:
                WebIntersection.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebRoad(metaclass=Metaclass_WebRoad):
    """Message class 'WebRoad'."""

    __slots__ = [
        '_has_traffic_light',
        '_distance',
        '_time',
        '_road_type',
        '_road_class',
        '_specific_type',
        '_road_direction',
        '_link_direction',
        '_coord_list',
        '_traffic_status',
        '_intersection_msg',
        '_lane_num',
    ]

    _fields_and_field_types = {
        'has_traffic_light': 'boolean',
        'distance': 'float',
        'time': 'float',
        'road_type': 'uint32',
        'road_class': 'uint32',
        'specific_type': 'uint32',
        'road_direction': 'uint32',
        'link_direction': 'uint32',
        'coord_list': 'sequence<deva_gaode_routing_msgs/WebPoint>',
        'traffic_status': 'uint32',
        'intersection_msg': 'sequence<deva_gaode_routing_msgs/WebIntersection>',
        'lane_num': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebIntersection')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_traffic_light = kwargs.get('has_traffic_light', bool())
        self.distance = kwargs.get('distance', float())
        self.time = kwargs.get('time', float())
        self.road_type = kwargs.get('road_type', int())
        self.road_class = kwargs.get('road_class', int())
        self.specific_type = kwargs.get('specific_type', int())
        self.road_direction = kwargs.get('road_direction', int())
        self.link_direction = kwargs.get('link_direction', int())
        self.coord_list = kwargs.get('coord_list', [])
        self.traffic_status = kwargs.get('traffic_status', int())
        self.intersection_msg = kwargs.get('intersection_msg', [])
        self.lane_num = kwargs.get('lane_num', int())

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
        if self.has_traffic_light != other.has_traffic_light:
            return False
        if self.distance != other.distance:
            return False
        if self.time != other.time:
            return False
        if self.road_type != other.road_type:
            return False
        if self.road_class != other.road_class:
            return False
        if self.specific_type != other.specific_type:
            return False
        if self.road_direction != other.road_direction:
            return False
        if self.link_direction != other.link_direction:
            return False
        if self.coord_list != other.coord_list:
            return False
        if self.traffic_status != other.traffic_status:
            return False
        if self.intersection_msg != other.intersection_msg:
            return False
        if self.lane_num != other.lane_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_traffic_light(self):
        """Message field 'has_traffic_light'."""
        return self._has_traffic_light

    @has_traffic_light.setter
    def has_traffic_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_traffic_light' field must be of type 'bool'"
        self._has_traffic_light = value

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
    def road_type(self):
        """Message field 'road_type'."""
        return self._road_type

    @road_type.setter
    def road_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'road_type' field must be an unsigned integer in [0, 4294967295]"
        self._road_type = value

    @builtins.property
    def road_class(self):
        """Message field 'road_class'."""
        return self._road_class

    @road_class.setter
    def road_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_class' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'road_class' field must be an unsigned integer in [0, 4294967295]"
        self._road_class = value

    @builtins.property
    def specific_type(self):
        """Message field 'specific_type'."""
        return self._specific_type

    @specific_type.setter
    def specific_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'specific_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'specific_type' field must be an unsigned integer in [0, 4294967295]"
        self._specific_type = value

    @builtins.property
    def road_direction(self):
        """Message field 'road_direction'."""
        return self._road_direction

    @road_direction.setter
    def road_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_direction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'road_direction' field must be an unsigned integer in [0, 4294967295]"
        self._road_direction = value

    @builtins.property
    def link_direction(self):
        """Message field 'link_direction'."""
        return self._link_direction

    @link_direction.setter
    def link_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_direction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'link_direction' field must be an unsigned integer in [0, 4294967295]"
        self._link_direction = value

    @builtins.property
    def coord_list(self):
        """Message field 'coord_list'."""
        return self._coord_list

    @coord_list.setter
    def coord_list(self, value):
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
                "The 'coord_list' field must be a set or sequence and each value of type 'WebPoint'"
        self._coord_list = value

    @builtins.property
    def traffic_status(self):
        """Message field 'traffic_status'."""
        return self._traffic_status

    @traffic_status.setter
    def traffic_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'traffic_status' field must be an unsigned integer in [0, 4294967295]"
        self._traffic_status = value

    @builtins.property
    def intersection_msg(self):
        """Message field 'intersection_msg'."""
        return self._intersection_msg

    @intersection_msg.setter
    def intersection_msg(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebIntersection
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
                 all(isinstance(v, WebIntersection) for v in value) and
                 True), \
                "The 'intersection_msg' field must be a set or sequence and each value of type 'WebIntersection'"
        self._intersection_msg = value

    @builtins.property
    def lane_num(self):
        """Message field 'lane_num'."""
        return self._lane_num

    @lane_num.setter
    def lane_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_num' field must be an unsigned integer in [0, 4294967295]"
        self._lane_num = value
