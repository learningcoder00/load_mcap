# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/WheelInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelInfo(type):
    """Metaclass of message 'WheelInfo'."""

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
                'deva_function_msgs.msg.WheelInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelInfo(metaclass=Metaclass_WheelInfo):
    """Message class 'WheelInfo'."""

    __slots__ = [
        '_speed',
        '_counter',
        '_direction',
        '_is_slip',
        '_is_brake',
        '_is_valid',
    ]

    _fields_and_field_types = {
        'speed': 'float',
        'counter': 'uint8',
        'direction': 'uint8',
        'is_slip': 'boolean',
        'is_brake': 'boolean',
        'is_valid': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed = kwargs.get('speed', float())
        self.counter = kwargs.get('counter', int())
        self.direction = kwargs.get('direction', int())
        self.is_slip = kwargs.get('is_slip', bool())
        self.is_brake = kwargs.get('is_brake', bool())
        self.is_valid = kwargs.get('is_valid', int())

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
        if self.speed != other.speed:
            return False
        if self.counter != other.counter:
            return False
        if self.direction != other.direction:
            return False
        if self.is_slip != other.is_slip:
            return False
        if self.is_brake != other.is_brake:
            return False
        if self.is_valid != other.is_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'counter' field must be an unsigned integer in [0, 255]"
        self._counter = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @builtins.property
    def is_slip(self):
        """Message field 'is_slip'."""
        return self._is_slip

    @is_slip.setter
    def is_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_slip' field must be of type 'bool'"
        self._is_slip = value

    @builtins.property
    def is_brake(self):
        """Message field 'is_brake'."""
        return self._is_brake

    @is_brake.setter
    def is_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_brake' field must be of type 'bool'"
        self._is_brake = value

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_valid' field must be an unsigned integer in [0, 255]"
        self._is_valid = value
