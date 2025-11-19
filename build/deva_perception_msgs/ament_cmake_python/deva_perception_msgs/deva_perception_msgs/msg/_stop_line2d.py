# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/StopLine2d.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopLine2d(type):
    """Metaclass of message 'StopLine2d'."""

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
                'deva_perception_msgs.msg.StopLine2d')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_line2d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_line2d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_line2d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_line2d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_line2d

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopLine2d(metaclass=Metaclass_StopLine2d):
    """Message class 'StopLine2d'."""

    __slots__ = [
        '_lane_id',
        '_confidence',
        '_pixel_points',
        '_left_point_pos_lgt',
        '_left_point_pos_lat',
        '_right_point_pos_lgt',
        '_right_point_pos_lat',
    ]

    _fields_and_field_types = {
        'lane_id': 'uint32',
        'confidence': 'float',
        'pixel_points': 'sequence<deva_common_msgs/Point2d>',
        'left_point_pos_lgt': 'float',
        'left_point_pos_lat': 'float',
        'right_point_pos_lgt': 'float',
        'right_point_pos_lat': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_id = kwargs.get('lane_id', int())
        self.confidence = kwargs.get('confidence', float())
        self.pixel_points = kwargs.get('pixel_points', [])
        self.left_point_pos_lgt = kwargs.get('left_point_pos_lgt', float())
        self.left_point_pos_lat = kwargs.get('left_point_pos_lat', float())
        self.right_point_pos_lgt = kwargs.get('right_point_pos_lgt', float())
        self.right_point_pos_lat = kwargs.get('right_point_pos_lat', float())

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
        if self.lane_id != other.lane_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.pixel_points != other.pixel_points:
            return False
        if self.left_point_pos_lgt != other.left_point_pos_lgt:
            return False
        if self.left_point_pos_lat != other.left_point_pos_lat:
            return False
        if self.right_point_pos_lgt != other.right_point_pos_lgt:
            return False
        if self.right_point_pos_lat != other.right_point_pos_lat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._lane_id = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def pixel_points(self):
        """Message field 'pixel_points'."""
        return self._pixel_points

    @pixel_points.setter
    def pixel_points(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
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
                 all(isinstance(v, Point2d) for v in value) and
                 True), \
                "The 'pixel_points' field must be a set or sequence and each value of type 'Point2d'"
        self._pixel_points = value

    @builtins.property
    def left_point_pos_lgt(self):
        """Message field 'left_point_pos_lgt'."""
        return self._left_point_pos_lgt

    @left_point_pos_lgt.setter
    def left_point_pos_lgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_point_pos_lgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_point_pos_lgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_point_pos_lgt = value

    @builtins.property
    def left_point_pos_lat(self):
        """Message field 'left_point_pos_lat'."""
        return self._left_point_pos_lat

    @left_point_pos_lat.setter
    def left_point_pos_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_point_pos_lat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_point_pos_lat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_point_pos_lat = value

    @builtins.property
    def right_point_pos_lgt(self):
        """Message field 'right_point_pos_lgt'."""
        return self._right_point_pos_lgt

    @right_point_pos_lgt.setter
    def right_point_pos_lgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_point_pos_lgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_point_pos_lgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_point_pos_lgt = value

    @builtins.property
    def right_point_pos_lat(self):
        """Message field 'right_point_pos_lat'."""
        return self._right_point_pos_lat

    @right_point_pos_lat.setter
    def right_point_pos_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_point_pos_lat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_point_pos_lat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_point_pos_lat = value
