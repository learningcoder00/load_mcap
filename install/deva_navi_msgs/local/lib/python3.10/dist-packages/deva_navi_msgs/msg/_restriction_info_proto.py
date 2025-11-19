# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'rule_ids'
# Member 'tail_nums'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RestrictionInfoProto(type):
    """Metaclass of message 'RestrictionInfoProto'."""

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
            module = import_type_support('deva_navi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_navi_msgs.msg.RestrictionInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__restriction_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__restriction_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__restriction_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__restriction_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__restriction_info_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RestrictionInfoProto(metaclass=Metaclass_RestrictionInfoProto):
    """Message class 'RestrictionInfoProto'."""

    __slots__ = [
        '_title',
        '_desc',
        '_tipc',
        '_city_code',
        '_type',
        '_title_type',
        '_rule_ids',
        '_tail_nums',
    ]

    _fields_and_field_types = {
        'title': 'string',
        'desc': 'string',
        'tipc': 'string',
        'city_code': 'int32',
        'type': 'int32',
        'title_type': 'int32',
        'rule_ids': 'sequence<int64>',
        'tail_nums': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.title = kwargs.get('title', str())
        self.desc = kwargs.get('desc', str())
        self.tipc = kwargs.get('tipc', str())
        self.city_code = kwargs.get('city_code', int())
        self.type = kwargs.get('type', int())
        self.title_type = kwargs.get('title_type', int())
        self.rule_ids = array.array('q', kwargs.get('rule_ids', []))
        self.tail_nums = array.array('i', kwargs.get('tail_nums', []))

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
        if self.title != other.title:
            return False
        if self.desc != other.desc:
            return False
        if self.tipc != other.tipc:
            return False
        if self.city_code != other.city_code:
            return False
        if self.type != other.type:
            return False
        if self.title_type != other.title_type:
            return False
        if self.rule_ids != other.rule_ids:
            return False
        if self.tail_nums != other.tail_nums:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def title(self):
        """Message field 'title'."""
        return self._title

    @title.setter
    def title(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'title' field must be of type 'str'"
        self._title = value

    @builtins.property
    def desc(self):
        """Message field 'desc'."""
        return self._desc

    @desc.setter
    def desc(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'desc' field must be of type 'str'"
        self._desc = value

    @builtins.property
    def tipc(self):
        """Message field 'tipc'."""
        return self._tipc

    @tipc.setter
    def tipc(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tipc' field must be of type 'str'"
        self._tipc = value

    @builtins.property
    def city_code(self):
        """Message field 'city_code'."""
        return self._city_code

    @city_code.setter
    def city_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'city_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'city_code' field must be an integer in [-2147483648, 2147483647]"
        self._city_code = value

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

    @builtins.property
    def title_type(self):
        """Message field 'title_type'."""
        return self._title_type

    @title_type.setter
    def title_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'title_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'title_type' field must be an integer in [-2147483648, 2147483647]"
        self._title_type = value

    @builtins.property
    def rule_ids(self):
        """Message field 'rule_ids'."""
        return self._rule_ids

    @rule_ids.setter
    def rule_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'rule_ids' array.array() must have the type code of 'q'"
            self._rule_ids = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'rule_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._rule_ids = array.array('q', value)

    @builtins.property
    def tail_nums(self):
        """Message field 'tail_nums'."""
        return self._tail_nums

    @tail_nums.setter
    def tail_nums(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'tail_nums' array.array() must have the type code of 'i'"
            self._tail_nums = value
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
                "The 'tail_nums' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._tail_nums = array.array('i', value)
