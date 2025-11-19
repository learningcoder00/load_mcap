# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SolidLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pass_list'
# Member 'lane_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolidLine(type):
    """Metaclass of message 'SolidLine'."""

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
                'deva_gaode_routing_msgs.msg.SolidLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solid_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solid_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solid_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solid_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solid_line

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SolidLine(metaclass=Metaclass_SolidLine):
    """Message class 'SolidLine'."""

    __slots__ = [
        '_id',
        '_in_road',
        '_pass_list',
        '_out_road',
        '_lane_num',
        '_seq_num',
        '_lane_list',
        '_type',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'in_road': 'uint64',
        'pass_list': 'sequence<uint64>',
        'out_road': 'uint64',
        'lane_num': 'int32',
        'seq_num': 'int32',
        'lane_list': 'sequence<int32>',
        'type': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.in_road = kwargs.get('in_road', int())
        self.pass_list = array.array('Q', kwargs.get('pass_list', []))
        self.out_road = kwargs.get('out_road', int())
        self.lane_num = kwargs.get('lane_num', int())
        self.seq_num = kwargs.get('seq_num', int())
        self.lane_list = array.array('i', kwargs.get('lane_list', []))
        self.type = kwargs.get('type', int())

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
        if self.in_road != other.in_road:
            return False
        if self.pass_list != other.pass_list:
            return False
        if self.out_road != other.out_road:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.seq_num != other.seq_num:
            return False
        if self.lane_list != other.lane_list:
            return False
        if self.type != other.type:
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
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def in_road(self):
        """Message field 'in_road'."""
        return self._in_road

    @in_road.setter
    def in_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'in_road' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'in_road' field must be an unsigned integer in [0, 18446744073709551615]"
        self._in_road = value

    @builtins.property
    def pass_list(self):
        """Message field 'pass_list'."""
        return self._pass_list

    @pass_list.setter
    def pass_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'pass_list' array.array() must have the type code of 'Q'"
            self._pass_list = value
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
                "The 'pass_list' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._pass_list = array.array('Q', value)

    @builtins.property
    def out_road(self):
        """Message field 'out_road'."""
        return self._out_road

    @out_road.setter
    def out_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'out_road' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'out_road' field must be an unsigned integer in [0, 18446744073709551615]"
        self._out_road = value

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
    def seq_num(self):
        """Message field 'seq_num'."""
        return self._seq_num

    @seq_num.setter
    def seq_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seq_num' field must be an integer in [-2147483648, 2147483647]"
        self._seq_num = value

    @builtins.property
    def lane_list(self):
        """Message field 'lane_list'."""
        return self._lane_list

    @lane_list.setter
    def lane_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'lane_list' array.array() must have the type code of 'i'"
            self._lane_list = value
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
                "The 'lane_list' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._lane_list = array.array('i', value)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value
