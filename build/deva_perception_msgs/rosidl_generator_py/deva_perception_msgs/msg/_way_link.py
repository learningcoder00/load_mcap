# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/WayLink.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'corner_points_idx'
# Member 'point_confidences'
# Member 'corner_confidences'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WayLink(type):
    """Metaclass of message 'WayLink'."""

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
                'deva_perception_msgs.msg.WayLink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__way_link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__way_link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__way_link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__way_link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__way_link

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WayLink(metaclass=Metaclass_WayLink):
    """Message class 'WayLink'."""

    __slots__ = [
        '_car_coord_points',
        '_corner_points_idx',
        '_point_confidences',
        '_corner_confidences',
        '_pixel_points',
    ]

    _fields_and_field_types = {
        'car_coord_points': 'sequence<geometry_msgs/Point>',
        'corner_points_idx': 'sequence<int32>',
        'point_confidences': 'sequence<float>',
        'corner_confidences': 'sequence<float>',
        'pixel_points': 'sequence<deva_common_msgs/Point2d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.car_coord_points = kwargs.get('car_coord_points', [])
        self.corner_points_idx = array.array('i', kwargs.get('corner_points_idx', []))
        self.point_confidences = array.array('f', kwargs.get('point_confidences', []))
        self.corner_confidences = array.array('f', kwargs.get('corner_confidences', []))
        self.pixel_points = kwargs.get('pixel_points', [])

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
        if self.car_coord_points != other.car_coord_points:
            return False
        if self.corner_points_idx != other.corner_points_idx:
            return False
        if self.point_confidences != other.point_confidences:
            return False
        if self.corner_confidences != other.corner_confidences:
            return False
        if self.pixel_points != other.pixel_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def car_coord_points(self):
        """Message field 'car_coord_points'."""
        return self._car_coord_points

    @car_coord_points.setter
    def car_coord_points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'car_coord_points' field must be a set or sequence and each value of type 'Point'"
        self._car_coord_points = value

    @builtins.property
    def corner_points_idx(self):
        """Message field 'corner_points_idx'."""
        return self._corner_points_idx

    @corner_points_idx.setter
    def corner_points_idx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'corner_points_idx' array.array() must have the type code of 'i'"
            self._corner_points_idx = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'corner_points_idx' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._corner_points_idx = array.array('i', value)

    @builtins.property
    def point_confidences(self):
        """Message field 'point_confidences'."""
        return self._point_confidences

    @point_confidences.setter
    def point_confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'point_confidences' array.array() must have the type code of 'f'"
            self._point_confidences = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'point_confidences' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._point_confidences = array.array('f', value)

    @builtins.property
    def corner_confidences(self):
        """Message field 'corner_confidences'."""
        return self._corner_confidences

    @corner_confidences.setter
    def corner_confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'corner_confidences' array.array() must have the type code of 'f'"
            self._corner_confidences = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'corner_confidences' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._corner_confidences = array.array('f', value)

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
