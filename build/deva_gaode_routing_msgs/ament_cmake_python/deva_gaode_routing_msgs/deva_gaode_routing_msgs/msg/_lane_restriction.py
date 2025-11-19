# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'limit_vehicle_type'
# Member 'special_time_type'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneRestriction(type):
    """Metaclass of message 'LaneRestriction'."""

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
                'deva_gaode_routing_msgs.msg.LaneRestriction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_restriction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_restriction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_restriction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_restriction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_restriction

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneRestriction(metaclass=Metaclass_LaneRestriction):
    """Message class 'LaneRestriction'."""

    __slots__ = [
        '_id',
        '_limit_vehicle_type',
        '_special_time_type',
        '_restrict_time_period',
        '_lane_direction',
        '_lane_retriction_type',
        '_lane_range_start',
        '_lane_range_end',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'limit_vehicle_type': 'sequence<uint8>',
        'special_time_type': 'sequence<uint8>',
        'restrict_time_period': 'string',
        'lane_direction': 'uint8',
        'lane_retriction_type': 'uint8',
        'lane_range_start': 'uint16',
        'lane_range_end': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.id = kwargs.get('id', FeatureIDType())
        self.limit_vehicle_type = array.array('B', kwargs.get('limit_vehicle_type', []))
        self.special_time_type = array.array('B', kwargs.get('special_time_type', []))
        self.restrict_time_period = kwargs.get('restrict_time_period', str())
        self.lane_direction = kwargs.get('lane_direction', int())
        self.lane_retriction_type = kwargs.get('lane_retriction_type', int())
        self.lane_range_start = kwargs.get('lane_range_start', int())
        self.lane_range_end = kwargs.get('lane_range_end', int())

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
        if self.id != other.id:
            return False
        if self.limit_vehicle_type != other.limit_vehicle_type:
            return False
        if self.special_time_type != other.special_time_type:
            return False
        if self.restrict_time_period != other.restrict_time_period:
            return False
        if self.lane_direction != other.lane_direction:
            return False
        if self.lane_retriction_type != other.lane_retriction_type:
            return False
        if self.lane_range_start != other.lane_range_start:
            return False
        if self.lane_range_end != other.lane_range_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'id' field must be a sub message of type 'FeatureIDType'"
        self._id = value

    @builtins.property
    def limit_vehicle_type(self):
        """Message field 'limit_vehicle_type'."""
        return self._limit_vehicle_type

    @limit_vehicle_type.setter
    def limit_vehicle_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'limit_vehicle_type' array.array() must have the type code of 'B'"
            self._limit_vehicle_type = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'limit_vehicle_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._limit_vehicle_type = array.array('B', value)

    @builtins.property
    def special_time_type(self):
        """Message field 'special_time_type'."""
        return self._special_time_type

    @special_time_type.setter
    def special_time_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'special_time_type' array.array() must have the type code of 'B'"
            self._special_time_type = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'special_time_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._special_time_type = array.array('B', value)

    @builtins.property
    def restrict_time_period(self):
        """Message field 'restrict_time_period'."""
        return self._restrict_time_period

    @restrict_time_period.setter
    def restrict_time_period(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'restrict_time_period' field must be of type 'str'"
        self._restrict_time_period = value

    @builtins.property
    def lane_direction(self):
        """Message field 'lane_direction'."""
        return self._lane_direction

    @lane_direction.setter
    def lane_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_direction' field must be an unsigned integer in [0, 255]"
        self._lane_direction = value

    @builtins.property
    def lane_retriction_type(self):
        """Message field 'lane_retriction_type'."""
        return self._lane_retriction_type

    @lane_retriction_type.setter
    def lane_retriction_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_retriction_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_retriction_type' field must be an unsigned integer in [0, 255]"
        self._lane_retriction_type = value

    @builtins.property
    def lane_range_start(self):
        """Message field 'lane_range_start'."""
        return self._lane_range_start

    @lane_range_start.setter
    def lane_range_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_range_start' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_range_start' field must be an unsigned integer in [0, 65535]"
        self._lane_range_start = value

    @builtins.property
    def lane_range_end(self):
        """Message field 'lane_range_end'."""
        return self._lane_range_end

    @lane_range_end.setter
    def lane_range_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_range_end' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_range_end' field must be an unsigned integer in [0, 65535]"
        self._lane_range_end = value
