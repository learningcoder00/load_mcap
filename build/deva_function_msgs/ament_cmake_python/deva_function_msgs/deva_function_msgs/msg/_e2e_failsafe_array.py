# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/E2eFailsafeArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_E2eFailsafeArray(type):
    """Metaclass of message 'E2eFailsafeArray'."""

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
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.E2eFailsafeArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__e2e_failsafe_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__e2e_failsafe_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__e2e_failsafe_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__e2e_failsafe_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__e2e_failsafe_array

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_function_msgs.msg import E2eFailsafe
            if E2eFailsafe.__class__._TYPE_SUPPORT is None:
                E2eFailsafe.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class E2eFailsafeArray(metaclass=Metaclass_E2eFailsafeArray):
    """Message class 'E2eFailsafeArray'."""

    __slots__ = [
        '_header',
        '_index',
        '_e2e_failsafe_array',
        '_sum_result',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'index': 'uint8',
        'e2e_failsafe_array': 'sequence<deva_function_msgs/E2eFailsafe>',
        'sum_result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_function_msgs', 'msg'], 'E2eFailsafe')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.index = kwargs.get('index', int())
        self.e2e_failsafe_array = kwargs.get('e2e_failsafe_array', [])
        self.sum_result = kwargs.get('sum_result', int())

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
        if self.header != other.header:
            return False
        if self.index != other.index:
            return False
        if self.e2e_failsafe_array != other.e2e_failsafe_array:
            return False
        if self.sum_result != other.sum_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index' field must be an unsigned integer in [0, 255]"
        self._index = value

    @builtins.property
    def e2e_failsafe_array(self):
        """Message field 'e2e_failsafe_array'."""
        return self._e2e_failsafe_array

    @e2e_failsafe_array.setter
    def e2e_failsafe_array(self, value):
        if __debug__:
            from deva_function_msgs.msg import E2eFailsafe
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
                 all(isinstance(v, E2eFailsafe) for v in value) and
                 True), \
                "The 'e2e_failsafe_array' field must be a set or sequence and each value of type 'E2eFailsafe'"
        self._e2e_failsafe_array = value

    @builtins.property
    def sum_result(self):
        """Message field 'sum_result'."""
        return self._sum_result

    @sum_result.setter
    def sum_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum_result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sum_result' field must be an unsigned integer in [0, 255]"
        self._sum_result = value
