# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/ChannelMarkingType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChannelMarkingType(type):
    """Metaclass of message 'ChannelMarkingType'."""

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
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.ChannelMarkingType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__channel_marking_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__channel_marking_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__channel_marking_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__channel_marking_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__channel_marking_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChannelMarkingType(metaclass=Metaclass_ChannelMarkingType):
    """Message class 'ChannelMarkingType'."""

    __slots__ = [
        '_s_start',
        '_s_end',
        '_markingtype',
        '_markingcolor',
    ]

    _fields_and_field_types = {
        's_start': 'double',
        's_end': 'double',
        'markingtype': 'uint8',
        'markingcolor': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.s_start = kwargs.get('s_start', float())
        self.s_end = kwargs.get('s_end', float())
        self.markingtype = kwargs.get('markingtype', int())
        self.markingcolor = kwargs.get('markingcolor', int())

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
        if self.s_start != other.s_start:
            return False
        if self.s_end != other.s_end:
            return False
        if self.markingtype != other.markingtype:
            return False
        if self.markingcolor != other.markingcolor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def s_start(self):
        """Message field 's_start'."""
        return self._s_start

    @s_start.setter
    def s_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_start' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's_start' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s_start = value

    @builtins.property
    def s_end(self):
        """Message field 's_end'."""
        return self._s_end

    @s_end.setter
    def s_end(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_end' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's_end' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s_end = value

    @builtins.property
    def markingtype(self):
        """Message field 'markingtype'."""
        return self._markingtype

    @markingtype.setter
    def markingtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'markingtype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'markingtype' field must be an unsigned integer in [0, 255]"
        self._markingtype = value

    @builtins.property
    def markingcolor(self):
        """Message field 'markingcolor'."""
        return self._markingcolor

    @markingcolor.setter
    def markingcolor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'markingcolor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'markingcolor' field must be an unsigned integer in [0, 255]"
        self._markingcolor = value
