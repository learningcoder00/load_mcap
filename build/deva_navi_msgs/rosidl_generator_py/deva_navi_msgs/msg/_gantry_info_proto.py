# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/GantryInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GantryInfoProto(type):
    """Metaclass of message 'GantryInfoProto'."""

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
                'deva_navi_msgs.msg.GantryInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gantry_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gantry_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gantry_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gantry_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gantry_info_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GantryInfoProto(metaclass=Metaclass_GantryInfoProto):
    """Message class 'GantryInfoProto'."""

    __slots__ = [
        '_flag',
        '_type',
        '_dist_end',
        '_num',
        '_name',
    ]

    _fields_and_field_types = {
        'flag': 'int32',
        'type': 'int32',
        'dist_end': 'int64',
        'num': 'string',
        'name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.flag = kwargs.get('flag', int())
        self.type = kwargs.get('type', int())
        self.dist_end = kwargs.get('dist_end', int())
        self.num = kwargs.get('num', str())
        self.name = kwargs.get('name', str())

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
        if self.flag != other.flag:
            return False
        if self.type != other.type:
            return False
        if self.dist_end != other.dist_end:
            return False
        if self.num != other.num:
            return False
        if self.name != other.name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'flag' field must be an integer in [-2147483648, 2147483647]"
        self._flag = value

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
    def dist_end(self):
        """Message field 'dist_end'."""
        return self._dist_end

    @dist_end.setter
    def dist_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dist_end' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'dist_end' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._dist_end = value

    @builtins.property
    def num(self):
        """Message field 'num'."""
        return self._num

    @num.setter
    def num(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'num' field must be of type 'str'"
        self._num = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value
