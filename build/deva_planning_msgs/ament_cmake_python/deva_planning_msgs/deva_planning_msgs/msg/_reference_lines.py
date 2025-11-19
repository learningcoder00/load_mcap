# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/ReferenceLines.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReferenceLines(type):
    """Metaclass of message 'ReferenceLines'."""

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
            module = import_type_support('deva_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs.msg.ReferenceLines')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reference_lines
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reference_lines
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reference_lines
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reference_lines
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reference_lines

            from deva_planning_msgs.msg import ReferenceLine
            if ReferenceLine.__class__._TYPE_SUPPORT is None:
                ReferenceLine.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReferenceLines(metaclass=Metaclass_ReferenceLines):
    """Message class 'ReferenceLines'."""

    __slots__ = [
        '_header',
        '_reference_lines',
        '_curr_id',
        '_tar_id',
        '_curr_line_virtual',
        '_curr_left_nums',
        '_curr_right_nums',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'reference_lines': 'sequence<deva_planning_msgs/ReferenceLine>',
        'curr_id': 'int32',
        'tar_id': 'int32',
        'curr_line_virtual': 'boolean',
        'curr_left_nums': 'int32',
        'curr_right_nums': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'ReferenceLine')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.reference_lines = kwargs.get('reference_lines', [])
        self.curr_id = kwargs.get('curr_id', int())
        self.tar_id = kwargs.get('tar_id', int())
        self.curr_line_virtual = kwargs.get('curr_line_virtual', bool())
        self.curr_left_nums = kwargs.get('curr_left_nums', int())
        self.curr_right_nums = kwargs.get('curr_right_nums', int())

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
        if self.reference_lines != other.reference_lines:
            return False
        if self.curr_id != other.curr_id:
            return False
        if self.tar_id != other.tar_id:
            return False
        if self.curr_line_virtual != other.curr_line_virtual:
            return False
        if self.curr_left_nums != other.curr_left_nums:
            return False
        if self.curr_right_nums != other.curr_right_nums:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def reference_lines(self):
        """Message field 'reference_lines'."""
        return self._reference_lines

    @reference_lines.setter
    def reference_lines(self, value):
        if __debug__:
            from deva_planning_msgs.msg import ReferenceLine
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
                 all(isinstance(v, ReferenceLine) for v in value) and
                 True), \
                "The 'reference_lines' field must be a set or sequence and each value of type 'ReferenceLine'"
        self._reference_lines = value

    @builtins.property
    def curr_id(self):
        """Message field 'curr_id'."""
        return self._curr_id

    @curr_id.setter
    def curr_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curr_id' field must be an integer in [-2147483648, 2147483647]"
        self._curr_id = value

    @builtins.property
    def tar_id(self):
        """Message field 'tar_id'."""
        return self._tar_id

    @tar_id.setter
    def tar_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tar_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tar_id' field must be an integer in [-2147483648, 2147483647]"
        self._tar_id = value

    @builtins.property
    def curr_line_virtual(self):
        """Message field 'curr_line_virtual'."""
        return self._curr_line_virtual

    @curr_line_virtual.setter
    def curr_line_virtual(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'curr_line_virtual' field must be of type 'bool'"
        self._curr_line_virtual = value

    @builtins.property
    def curr_left_nums(self):
        """Message field 'curr_left_nums'."""
        return self._curr_left_nums

    @curr_left_nums.setter
    def curr_left_nums(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_left_nums' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curr_left_nums' field must be an integer in [-2147483648, 2147483647]"
        self._curr_left_nums = value

    @builtins.property
    def curr_right_nums(self):
        """Message field 'curr_right_nums'."""
        return self._curr_right_nums

    @curr_right_nums.setter
    def curr_right_nums(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'curr_right_nums' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'curr_right_nums' field must be an integer in [-2147483648, 2147483647]"
        self._curr_right_nums = value
