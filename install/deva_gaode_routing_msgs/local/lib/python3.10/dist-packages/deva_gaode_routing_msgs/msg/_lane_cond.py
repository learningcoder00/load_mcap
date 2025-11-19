# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LaneCond.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'vehicles'
# Member 'special_times'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneCond(type):
    """Metaclass of message 'LaneCond'."""

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
                'deva_gaode_routing_msgs.msg.LaneCond')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_cond
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_cond
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_cond
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_cond
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_cond

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneCond(metaclass=Metaclass_LaneCond):
    """Message class 'LaneCond'."""

    __slots__ = [
        '_laneinfo_cond',
        '_link_direction',
        '_date',
        '_vehicles',
        '_special_times',
    ]

    _fields_and_field_types = {
        'laneinfo_cond': 'uint16',
        'link_direction': 'uint8',
        'date': 'string',
        'vehicles': 'sequence<uint8>',
        'special_times': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.laneinfo_cond = kwargs.get('laneinfo_cond', int())
        self.link_direction = kwargs.get('link_direction', int())
        self.date = kwargs.get('date', str())
        self.vehicles = array.array('B', kwargs.get('vehicles', []))
        self.special_times = array.array('B', kwargs.get('special_times', []))

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
        if self.laneinfo_cond != other.laneinfo_cond:
            return False
        if self.link_direction != other.link_direction:
            return False
        if self.date != other.date:
            return False
        if self.vehicles != other.vehicles:
            return False
        if self.special_times != other.special_times:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def laneinfo_cond(self):
        """Message field 'laneinfo_cond'."""
        return self._laneinfo_cond

    @laneinfo_cond.setter
    def laneinfo_cond(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laneinfo_cond' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'laneinfo_cond' field must be an unsigned integer in [0, 65535]"
        self._laneinfo_cond = value

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
            assert value >= 0 and value < 256, \
                "The 'link_direction' field must be an unsigned integer in [0, 255]"
        self._link_direction = value

    @builtins.property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

    @builtins.property
    def vehicles(self):
        """Message field 'vehicles'."""
        return self._vehicles

    @vehicles.setter
    def vehicles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'vehicles' array.array() must have the type code of 'B'"
            self._vehicles = value
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
                "The 'vehicles' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._vehicles = array.array('B', value)

    @builtins.property
    def special_times(self):
        """Message field 'special_times'."""
        return self._special_times

    @special_times.setter
    def special_times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'special_times' array.array() must have the type code of 'B'"
            self._special_times = value
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
                "The 'special_times' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._special_times = array.array('B', value)
