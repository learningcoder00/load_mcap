# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_common_msgs:msg/EquationCurve.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EquationCurve(type):
    """Metaclass of message 'EquationCurve'."""

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
            module = import_type_support('deva_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_common_msgs.msg.EquationCurve')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__equation_curve
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__equation_curve
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__equation_curve
            cls._TYPE_SUPPORT = module.type_support_msg__msg__equation_curve
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__equation_curve

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EquationCurve(metaclass=Metaclass_EquationCurve):
    """Message class 'EquationCurve'."""

    __slots__ = [
        '_type',
        '_a3',
        '_a2',
        '_a1',
        '_a0',
        '_b3',
        '_b2',
        '_b1',
        '_b0',
        '_c3',
        '_c2',
        '_c1',
        '_c0',
        '_s_start',
        '_s_end',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'a3': 'double',
        'a2': 'double',
        'a1': 'double',
        'a0': 'double',
        'b3': 'double',
        'b2': 'double',
        'b1': 'double',
        'b0': 'double',
        'c3': 'double',
        'c2': 'double',
        'c1': 'double',
        'c0': 'double',
        's_start': 'double',
        's_end': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.a3 = kwargs.get('a3', float())
        self.a2 = kwargs.get('a2', float())
        self.a1 = kwargs.get('a1', float())
        self.a0 = kwargs.get('a0', float())
        self.b3 = kwargs.get('b3', float())
        self.b2 = kwargs.get('b2', float())
        self.b1 = kwargs.get('b1', float())
        self.b0 = kwargs.get('b0', float())
        self.c3 = kwargs.get('c3', float())
        self.c2 = kwargs.get('c2', float())
        self.c1 = kwargs.get('c1', float())
        self.c0 = kwargs.get('c0', float())
        self.s_start = kwargs.get('s_start', float())
        self.s_end = kwargs.get('s_end', float())

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
        if self.type != other.type:
            return False
        if self.a3 != other.a3:
            return False
        if self.a2 != other.a2:
            return False
        if self.a1 != other.a1:
            return False
        if self.a0 != other.a0:
            return False
        if self.b3 != other.b3:
            return False
        if self.b2 != other.b2:
            return False
        if self.b1 != other.b1:
            return False
        if self.b0 != other.b0:
            return False
        if self.c3 != other.c3:
            return False
        if self.c2 != other.c2:
            return False
        if self.c1 != other.c1:
            return False
        if self.c0 != other.c0:
            return False
        if self.s_start != other.s_start:
            return False
        if self.s_end != other.s_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def a3(self):
        """Message field 'a3'."""
        return self._a3

    @a3.setter
    def a3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a3 = value

    @builtins.property
    def a2(self):
        """Message field 'a2'."""
        return self._a2

    @a2.setter
    def a2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a2 = value

    @builtins.property
    def a1(self):
        """Message field 'a1'."""
        return self._a1

    @a1.setter
    def a1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a1 = value

    @builtins.property
    def a0(self):
        """Message field 'a0'."""
        return self._a0

    @a0.setter
    def a0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'a0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._a0 = value

    @builtins.property
    def b3(self):
        """Message field 'b3'."""
        return self._b3

    @b3.setter
    def b3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b3 = value

    @builtins.property
    def b2(self):
        """Message field 'b2'."""
        return self._b2

    @b2.setter
    def b2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b2 = value

    @builtins.property
    def b1(self):
        """Message field 'b1'."""
        return self._b1

    @b1.setter
    def b1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b1 = value

    @builtins.property
    def b0(self):
        """Message field 'b0'."""
        return self._b0

    @b0.setter
    def b0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'b0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._b0 = value

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
