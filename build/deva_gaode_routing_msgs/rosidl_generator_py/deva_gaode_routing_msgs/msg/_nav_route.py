# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/NavRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'route_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavRoute(type):
    """Metaclass of message 'NavRoute'."""

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
                'deva_gaode_routing_msgs.msg.NavRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_route
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_route
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_route
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_route
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_route

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavRoute(metaclass=Metaclass_NavRoute):
    """Message class 'NavRoute'."""

    __slots__ = [
        '_route_list',
        '_navi_status',
        '_match_status',
        '_remain_distance',
    ]

    _fields_and_field_types = {
        'route_list': 'sequence<uint64>',
        'navi_status': 'uint32',
        'match_status': 'uint32',
        'remain_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.route_list = array.array('Q', kwargs.get('route_list', []))
        self.navi_status = kwargs.get('navi_status', int())
        self.match_status = kwargs.get('match_status', int())
        self.remain_distance = kwargs.get('remain_distance', float())

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
        if self.route_list != other.route_list:
            return False
        if self.navi_status != other.navi_status:
            return False
        if self.match_status != other.match_status:
            return False
        if self.remain_distance != other.remain_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route_list(self):
        """Message field 'route_list'."""
        return self._route_list

    @route_list.setter
    def route_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'route_list' array.array() must have the type code of 'Q'"
            self._route_list = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'route_list' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._route_list = array.array('Q', value)

    @builtins.property
    def navi_status(self):
        """Message field 'navi_status'."""
        return self._navi_status

    @navi_status.setter
    def navi_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'navi_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'navi_status' field must be an unsigned integer in [0, 4294967295]"
        self._navi_status = value

    @builtins.property
    def match_status(self):
        """Message field 'match_status'."""
        return self._match_status

    @match_status.setter
    def match_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'match_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'match_status' field must be an unsigned integer in [0, 4294967295]"
        self._match_status = value

    @builtins.property
    def remain_distance(self):
        """Message field 'remain_distance'."""
        return self._remain_distance

    @remain_distance.setter
    def remain_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remain_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remain_distance = value
