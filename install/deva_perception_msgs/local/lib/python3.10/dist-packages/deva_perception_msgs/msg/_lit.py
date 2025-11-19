# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Lit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lit(type):
    """Metaclass of message 'Lit'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'DARK': 1,
        'BRIGHT': 2,
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
                'deva_perception_msgs.msg.Lit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lit

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'DARK': cls.__constants['DARK'],
            'BRIGHT': cls.__constants['BRIGHT'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_Lit.__constants['NONE']

    @property
    def DARK(self):
        """Message constant 'DARK'."""
        return Metaclass_Lit.__constants['DARK']

    @property
    def BRIGHT(self):
        """Message constant 'BRIGHT'."""
        return Metaclass_Lit.__constants['BRIGHT']


class Lit(metaclass=Metaclass_Lit):
    """
    Message class 'Lit'.

    Constants:
      NONE
      DARK
      BRIGHT
    """

    __slots__ = [
        '_header',
        '_lit_area',
        '_brightness',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'lit_area': 'uint8',
        'brightness': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lit_area = kwargs.get('lit_area', int())
        self.brightness = kwargs.get('brightness', float())

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
        if self.lit_area != other.lit_area:
            return False
        if self.brightness != other.brightness:
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
    def lit_area(self):
        """Message field 'lit_area'."""
        return self._lit_area

    @lit_area.setter
    def lit_area(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lit_area' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lit_area' field must be an unsigned integer in [0, 255]"
        self._lit_area = value

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brightness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightness = value
