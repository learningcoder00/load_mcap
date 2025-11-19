# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/TrafficRount.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficRount(type):
    """Metaclass of message 'TrafficRount'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.TrafficRount')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_rount
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_rount
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_rount
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_rount
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_rount

            from deva_perception_msgs.msg import LaneInfo
            if LaneInfo.__class__._TYPE_SUPPORT is None:
                LaneInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import RoadInfo
            if RoadInfo.__class__._TYPE_SUPPORT is None:
                RoadInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficRount(metaclass=Metaclass_TrafficRount):
    """Message class 'TrafficRount'."""

    __slots__ = [
        '_timestamp',
        '_lane_info',
        '_cur_road',
        '_road_info',
    ]

    _fields_and_field_types = {
        'timestamp': 'double',
        'lane_info': 'deva_perception_msgs/LaneInfo',
        'cur_road': 'int32',
        'road_info': 'deva_perception_msgs/RoadInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'LaneInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'RoadInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', float())
        from deva_perception_msgs.msg import LaneInfo
        self.lane_info = kwargs.get('lane_info', LaneInfo())
        self.cur_road = kwargs.get('cur_road', int())
        from deva_perception_msgs.msg import RoadInfo
        self.road_info = kwargs.get('road_info', RoadInfo())

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
        if self.timestamp != other.timestamp:
            return False
        if self.lane_info != other.lane_info:
            return False
        if self.cur_road != other.cur_road:
            return False
        if self.road_info != other.road_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def lane_info(self):
        """Message field 'lane_info'."""
        return self._lane_info

    @lane_info.setter
    def lane_info(self, value):
        if __debug__:
            from deva_perception_msgs.msg import LaneInfo
            assert \
                isinstance(value, LaneInfo), \
                "The 'lane_info' field must be a sub message of type 'LaneInfo'"
        self._lane_info = value

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
    def road_info(self):
        """Message field 'road_info'."""
        return self._road_info

    @road_info.setter
    def road_info(self, value):
        if __debug__:
            from deva_perception_msgs.msg import RoadInfo
            assert \
                isinstance(value, RoadInfo), \
                "The 'road_info' field must be a sub message of type 'RoadInfo'"
        self._road_info = value
