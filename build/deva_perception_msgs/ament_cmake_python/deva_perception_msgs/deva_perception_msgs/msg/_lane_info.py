# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/LaneInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'actual_turn'
# Member 'navi_turn'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneInfo(type):
    """Metaclass of message 'LaneInfo'."""

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
                'deva_perception_msgs.msg.LaneInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneInfo(metaclass=Metaclass_LaneInfo):
    """Message class 'LaneInfo'."""

    __slots__ = [
        '_lane_num',
        '_actual_turn',
        '_navi_turn',
        '_md5',
    ]

    _fields_and_field_types = {
        'lane_num': 'int32',
        'actual_turn': 'sequence<uint8>',
        'navi_turn': 'sequence<uint8>',
        'md5': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_num = kwargs.get('lane_num', int())
        self.actual_turn = array.array('B', kwargs.get('actual_turn', []))
        self.navi_turn = array.array('B', kwargs.get('navi_turn', []))
        self.md5 = kwargs.get('md5', str())

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
        if self.lane_num != other.lane_num:
            return False
        if self.actual_turn != other.actual_turn:
            return False
        if self.navi_turn != other.navi_turn:
            return False
        if self.md5 != other.md5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_num' field must be an integer in [-2147483648, 2147483647]"
        self._lane_num = value

    @builtins.property
    def actual_turn(self):
        """Message field 'actual_turn'."""
        return self._actual_turn

    @actual_turn.setter
    def actual_turn(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'actual_turn' array.array() must have the type code of 'B'"
            self._actual_turn = value
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
                "The 'actual_turn' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._actual_turn = array.array('B', value)

    @builtins.property
    def navi_turn(self):
        """Message field 'navi_turn'."""
        return self._navi_turn

    @navi_turn.setter
    def navi_turn(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'navi_turn' array.array() must have the type code of 'B'"
            self._navi_turn = value
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
                "The 'navi_turn' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._navi_turn = array.array('B', value)

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
