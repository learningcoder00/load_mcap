# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/VehicleSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSignal(type):
    """Metaclass of message 'VehicleSignal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_TURN': 0,
        'TURN_LEFT': 1,
        'TURN_RIGHT': 2,
        'EMERGENCY_FLASHERS': 3,
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
                'deva_planning_msgs.msg.VehicleSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_signal

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_TURN': cls.__constants['NO_TURN'],
            'TURN_LEFT': cls.__constants['TURN_LEFT'],
            'TURN_RIGHT': cls.__constants['TURN_RIGHT'],
            'EMERGENCY_FLASHERS': cls.__constants['EMERGENCY_FLASHERS'],
        }

    @property
    def NO_TURN(self):
        """Message constant 'NO_TURN'."""
        return Metaclass_VehicleSignal.__constants['NO_TURN']

    @property
    def TURN_LEFT(self):
        """Message constant 'TURN_LEFT'."""
        return Metaclass_VehicleSignal.__constants['TURN_LEFT']

    @property
    def TURN_RIGHT(self):
        """Message constant 'TURN_RIGHT'."""
        return Metaclass_VehicleSignal.__constants['TURN_RIGHT']

    @property
    def EMERGENCY_FLASHERS(self):
        """Message constant 'EMERGENCY_FLASHERS'."""
        return Metaclass_VehicleSignal.__constants['EMERGENCY_FLASHERS']


class VehicleSignal(metaclass=Metaclass_VehicleSignal):
    """
    Message class 'VehicleSignal'.

    Constants:
      NO_TURN
      TURN_LEFT
      TURN_RIGHT
      EMERGENCY_FLASHERS
    """

    __slots__ = [
        '_header',
        '_high_beam',
        '_low_beam',
        '_horn',
        '_emergency_light',
        '_turn_light',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'high_beam': 'boolean',
        'low_beam': 'boolean',
        'horn': 'boolean',
        'emergency_light': 'boolean',
        'turn_light': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.high_beam = kwargs.get('high_beam', bool())
        self.low_beam = kwargs.get('low_beam', bool())
        self.horn = kwargs.get('horn', bool())
        self.emergency_light = kwargs.get('emergency_light', bool())
        self.turn_light = kwargs.get('turn_light', int())

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
        if self.high_beam != other.high_beam:
            return False
        if self.low_beam != other.low_beam:
            return False
        if self.horn != other.horn:
            return False
        if self.emergency_light != other.emergency_light:
            return False
        if self.turn_light != other.turn_light:
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
    def high_beam(self):
        """Message field 'high_beam'."""
        return self._high_beam

    @high_beam.setter
    def high_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'high_beam' field must be of type 'bool'"
        self._high_beam = value

    @builtins.property
    def low_beam(self):
        """Message field 'low_beam'."""
        return self._low_beam

    @low_beam.setter
    def low_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_beam' field must be of type 'bool'"
        self._low_beam = value

    @builtins.property
    def horn(self):
        """Message field 'horn'."""
        return self._horn

    @horn.setter
    def horn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horn' field must be of type 'bool'"
        self._horn = value

    @builtins.property
    def emergency_light(self):
        """Message field 'emergency_light'."""
        return self._emergency_light

    @emergency_light.setter
    def emergency_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_light' field must be of type 'bool'"
        self._emergency_light = value

    @builtins.property
    def turn_light(self):
        """Message field 'turn_light'."""
        return self._turn_light

    @turn_light.setter
    def turn_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_light' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_light' field must be an unsigned integer in [0, 255]"
        self._turn_light = value
