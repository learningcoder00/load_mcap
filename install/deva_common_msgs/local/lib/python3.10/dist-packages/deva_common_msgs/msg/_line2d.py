# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_common_msgs:msg/Line2d.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Line2d(type):
    """Metaclass of message 'Line2d'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POLY': 0,
        'ARC': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_common_msgs.msg.Line2d')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line2d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line2d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line2d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line2d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line2d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POLY': cls.__constants['POLY'],
            'ARC': cls.__constants['ARC'],
        }

    @property
    def POLY(self):
        """Message constant 'POLY'."""
        return Metaclass_Line2d.__constants['POLY']

    @property
    def ARC(self):
        """Message constant 'ARC'."""
        return Metaclass_Line2d.__constants['ARC']


class Line2d(metaclass=Metaclass_Line2d):
    """
    Message class 'Line2d'.

    Constants:
      POLY
      ARC
    """

    __slots__ = [
        '_fit_property',
        '_c3',
        '_c2',
        '_c1',
        '_c0',
    ]

    _fields_and_field_types = {
        'fit_property': 'uint8',
        'c3': 'double',
        'c2': 'double',
        'c1': 'double',
        'c0': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fit_property = kwargs.get('fit_property', int())
        self.c3 = kwargs.get('c3', float())
        self.c2 = kwargs.get('c2', float())
        self.c1 = kwargs.get('c1', float())
        self.c0 = kwargs.get('c0', float())

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
        if self.fit_property != other.fit_property:
            return False
        if self.c3 != other.c3:
            return False
        if self.c2 != other.c2:
            return False
        if self.c1 != other.c1:
            return False
        if self.c0 != other.c0:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fit_property(self):
        """Message field 'fit_property'."""
        return self._fit_property

    @fit_property.setter
    def fit_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fit_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fit_property' field must be an unsigned integer in [0, 255]"
        self._fit_property = value

    @builtins.property
    def c3(self):
        """Message field 'c3'."""
        return self._c3

    @c3.setter
    def c3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c3 = value

    @builtins.property
    def c2(self):
        """Message field 'c2'."""
        return self._c2

    @c2.setter
    def c2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c2 = value

    @builtins.property
    def c1(self):
        """Message field 'c1'."""
        return self._c1

    @c1.setter
    def c1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c1 = value

    @builtins.property
    def c0(self):
        """Message field 'c0'."""
        return self._c0

    @c0.setter
    def c0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c0 = value
