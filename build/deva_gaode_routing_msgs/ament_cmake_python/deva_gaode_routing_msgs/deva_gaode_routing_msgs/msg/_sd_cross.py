# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SDCross.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'sub_node'
# Member 'inner_roads'
# Member 'in_roads'
# Member 'out_roads'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SDCross(type):
    """Metaclass of message 'SDCross'."""

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
                'deva_gaode_routing_msgs.msg.SDCross')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_cross
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_cross
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_cross
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_cross
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_cross

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SDCross(metaclass=Metaclass_SDCross):
    """Message class 'SDCross'."""

    __slots__ = [
        '_id',
        '_type',
        '_main_node',
        '_sub_node',
        '_inner_roads',
        '_in_roads',
        '_out_roads',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'type': 'int32',
        'main_node': 'uint64',
        'sub_node': 'sequence<uint64>',
        'inner_roads': 'sequence<uint64>',
        'in_roads': 'sequence<uint64>',
        'out_roads': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.main_node = kwargs.get('main_node', int())
        self.sub_node = array.array('Q', kwargs.get('sub_node', []))
        self.inner_roads = array.array('Q', kwargs.get('inner_roads', []))
        self.in_roads = array.array('Q', kwargs.get('in_roads', []))
        self.out_roads = array.array('Q', kwargs.get('out_roads', []))

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
        if self.type != other.type:
            return False
        if self.main_node != other.main_node:
            return False
        if self.sub_node != other.sub_node:
            return False
        if self.inner_roads != other.inner_roads:
            return False
        if self.in_roads != other.in_roads:
            return False
        if self.out_roads != other.out_roads:
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
    def main_node(self):
        """Message field 'main_node'."""
        return self._main_node

    @main_node.setter
    def main_node(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_node' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'main_node' field must be an unsigned integer in [0, 18446744073709551615]"
        self._main_node = value

    @builtins.property
    def sub_node(self):
        """Message field 'sub_node'."""
        return self._sub_node

    @sub_node.setter
    def sub_node(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'sub_node' array.array() must have the type code of 'Q'"
            self._sub_node = value
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
                "The 'sub_node' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._sub_node = array.array('Q', value)

    @builtins.property
    def inner_roads(self):
        """Message field 'inner_roads'."""
        return self._inner_roads

    @inner_roads.setter
    def inner_roads(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'inner_roads' array.array() must have the type code of 'Q'"
            self._inner_roads = value
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
                "The 'inner_roads' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._inner_roads = array.array('Q', value)

    @builtins.property
    def in_roads(self):
        """Message field 'in_roads'."""
        return self._in_roads

    @in_roads.setter
    def in_roads(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'in_roads' array.array() must have the type code of 'Q'"
            self._in_roads = value
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
                "The 'in_roads' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._in_roads = array.array('Q', value)

    @builtins.property
    def out_roads(self):
        """Message field 'out_roads'."""
        return self._out_roads

    @out_roads.setter
    def out_roads(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'out_roads' array.array() must have the type code of 'Q'"
            self._out_roads = value
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
                "The 'out_roads' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._out_roads = array.array('Q', value)
