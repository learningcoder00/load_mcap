# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/TrafficStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficStatus(type):
    """Metaclass of message 'TrafficStatus'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.TrafficStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficStatus(metaclass=Metaclass_TrafficStatus):
    """Message class 'TrafficStatus'."""

    __slots__ = [
        '_color',
        '_shape',
        '_color_confidence',
        '_shape_confidence',
        '_blink',
        '_countdown_value',
    ]

    _fields_and_field_types = {
        'color': 'uint8',
        'shape': 'uint8',
        'color_confidence': 'float',
        'shape_confidence': 'float',
        'blink': 'boolean',
        'countdown_value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', int())
        self.shape = kwargs.get('shape', int())
        self.color_confidence = kwargs.get('color_confidence', float())
        self.shape_confidence = kwargs.get('shape_confidence', float())
        self.blink = kwargs.get('blink', bool())
        self.countdown_value = kwargs.get('countdown_value', int())

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
        if self.color != other.color:
            return False
        if self.shape != other.shape:
            return False
        if self.color_confidence != other.color_confidence:
            return False
        if self.shape_confidence != other.shape_confidence:
            return False
        if self.blink != other.blink:
            return False
        if self.countdown_value != other.countdown_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shape' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shape' field must be an unsigned integer in [0, 255]"
        self._shape = value

    @builtins.property
    def color_confidence(self):
        """Message field 'color_confidence'."""
        return self._color_confidence

    @color_confidence.setter
    def color_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'color_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'color_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._color_confidence = value

    @builtins.property
    def shape_confidence(self):
        """Message field 'shape_confidence'."""
        return self._shape_confidence

    @shape_confidence.setter
    def shape_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'shape_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'shape_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._shape_confidence = value

    @builtins.property
    def blink(self):
        """Message field 'blink'."""
        return self._blink

    @blink.setter
    def blink(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blink' field must be of type 'bool'"
        self._blink = value

    @builtins.property
    def countdown_value(self):
        """Message field 'countdown_value'."""
        return self._countdown_value

    @countdown_value.setter
    def countdown_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'countdown_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'countdown_value' field must be an integer in [-2147483648, 2147483647]"
        self._countdown_value = value
