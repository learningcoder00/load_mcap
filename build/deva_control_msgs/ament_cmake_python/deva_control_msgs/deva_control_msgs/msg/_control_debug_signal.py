# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/ControlDebugSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlDebugSignal(type):
    """Metaclass of message 'ControlDebugSignal'."""

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
            module = import_type_support('deva_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_control_msgs.msg.ControlDebugSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_debug_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_debug_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_debug_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_debug_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_debug_signal

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


class ControlDebugSignal(metaclass=Metaclass_ControlDebugSignal):
    """Message class 'ControlDebugSignal'."""

    __slots__ = [
        '_header',
        '_c0_val',
        '_c1_val',
        '_c2_val',
        '_station_error',
        '_speed_offset',
        '_speed_target',
        '_speed_current',
        '_speed_error',
        '_preview_steer_error',
        '_preview_speed_target',
        '_distance_error',
        '_angle_error',
        '_debug_signal_4',
        '_debug_signal_5',
        '_debug_signal_6',
        '_debug_signal_7',
        '_debug_signal_8',
        '_debug_signal_9',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'c0_val': 'double',
        'c1_val': 'double',
        'c2_val': 'double',
        'station_error': 'double',
        'speed_offset': 'double',
        'speed_target': 'double',
        'speed_current': 'double',
        'speed_error': 'double',
        'preview_steer_error': 'double',
        'preview_speed_target': 'double',
        'distance_error': 'double',
        'angle_error': 'double',
        'debug_signal_4': 'double',
        'debug_signal_5': 'double',
        'debug_signal_6': 'double',
        'debug_signal_7': 'double',
        'debug_signal_8': 'double',
        'debug_signal_9': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.c0_val = kwargs.get('c0_val', float())
        self.c1_val = kwargs.get('c1_val', float())
        self.c2_val = kwargs.get('c2_val', float())
        self.station_error = kwargs.get('station_error', float())
        self.speed_offset = kwargs.get('speed_offset', float())
        self.speed_target = kwargs.get('speed_target', float())
        self.speed_current = kwargs.get('speed_current', float())
        self.speed_error = kwargs.get('speed_error', float())
        self.preview_steer_error = kwargs.get('preview_steer_error', float())
        self.preview_speed_target = kwargs.get('preview_speed_target', float())
        self.distance_error = kwargs.get('distance_error', float())
        self.angle_error = kwargs.get('angle_error', float())
        self.debug_signal_4 = kwargs.get('debug_signal_4', float())
        self.debug_signal_5 = kwargs.get('debug_signal_5', float())
        self.debug_signal_6 = kwargs.get('debug_signal_6', float())
        self.debug_signal_7 = kwargs.get('debug_signal_7', float())
        self.debug_signal_8 = kwargs.get('debug_signal_8', float())
        self.debug_signal_9 = kwargs.get('debug_signal_9', float())

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
        if self.c0_val != other.c0_val:
            return False
        if self.c1_val != other.c1_val:
            return False
        if self.c2_val != other.c2_val:
            return False
        if self.station_error != other.station_error:
            return False
        if self.speed_offset != other.speed_offset:
            return False
        if self.speed_target != other.speed_target:
            return False
        if self.speed_current != other.speed_current:
            return False
        if self.speed_error != other.speed_error:
            return False
        if self.preview_steer_error != other.preview_steer_error:
            return False
        if self.preview_speed_target != other.preview_speed_target:
            return False
        if self.distance_error != other.distance_error:
            return False
        if self.angle_error != other.angle_error:
            return False
        if self.debug_signal_4 != other.debug_signal_4:
            return False
        if self.debug_signal_5 != other.debug_signal_5:
            return False
        if self.debug_signal_6 != other.debug_signal_6:
            return False
        if self.debug_signal_7 != other.debug_signal_7:
            return False
        if self.debug_signal_8 != other.debug_signal_8:
            return False
        if self.debug_signal_9 != other.debug_signal_9:
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
    def c0_val(self):
        """Message field 'c0_val'."""
        return self._c0_val

    @c0_val.setter
    def c0_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c0_val' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c0_val' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c0_val = value

    @builtins.property
    def c1_val(self):
        """Message field 'c1_val'."""
        return self._c1_val

    @c1_val.setter
    def c1_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c1_val' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c1_val' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c1_val = value

    @builtins.property
    def c2_val(self):
        """Message field 'c2_val'."""
        return self._c2_val

    @c2_val.setter
    def c2_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c2_val' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c2_val' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c2_val = value

    @builtins.property
    def station_error(self):
        """Message field 'station_error'."""
        return self._station_error

    @station_error.setter
    def station_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'station_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'station_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._station_error = value

    @builtins.property
    def speed_offset(self):
        """Message field 'speed_offset'."""
        return self._speed_offset

    @speed_offset.setter
    def speed_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_offset = value

    @builtins.property
    def speed_target(self):
        """Message field 'speed_target'."""
        return self._speed_target

    @speed_target.setter
    def speed_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_target = value

    @builtins.property
    def speed_current(self):
        """Message field 'speed_current'."""
        return self._speed_current

    @speed_current.setter
    def speed_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_current = value

    @builtins.property
    def speed_error(self):
        """Message field 'speed_error'."""
        return self._speed_error

    @speed_error.setter
    def speed_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_error = value

    @builtins.property
    def preview_steer_error(self):
        """Message field 'preview_steer_error'."""
        return self._preview_steer_error

    @preview_steer_error.setter
    def preview_steer_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_steer_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_steer_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_steer_error = value

    @builtins.property
    def preview_speed_target(self):
        """Message field 'preview_speed_target'."""
        return self._preview_speed_target

    @preview_speed_target.setter
    def preview_speed_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_speed_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_speed_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_speed_target = value

    @builtins.property
    def distance_error(self):
        """Message field 'distance_error'."""
        return self._distance_error

    @distance_error.setter
    def distance_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_error = value

    @builtins.property
    def angle_error(self):
        """Message field 'angle_error'."""
        return self._angle_error

    @angle_error.setter
    def angle_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_error = value

    @builtins.property
    def debug_signal_4(self):
        """Message field 'debug_signal_4'."""
        return self._debug_signal_4

    @debug_signal_4.setter
    def debug_signal_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_4 = value

    @builtins.property
    def debug_signal_5(self):
        """Message field 'debug_signal_5'."""
        return self._debug_signal_5

    @debug_signal_5.setter
    def debug_signal_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_5 = value

    @builtins.property
    def debug_signal_6(self):
        """Message field 'debug_signal_6'."""
        return self._debug_signal_6

    @debug_signal_6.setter
    def debug_signal_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_6 = value

    @builtins.property
    def debug_signal_7(self):
        """Message field 'debug_signal_7'."""
        return self._debug_signal_7

    @debug_signal_7.setter
    def debug_signal_7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_7' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_7' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_7 = value

    @builtins.property
    def debug_signal_8(self):
        """Message field 'debug_signal_8'."""
        return self._debug_signal_8

    @debug_signal_8.setter
    def debug_signal_8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_8' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_8' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_8 = value

    @builtins.property
    def debug_signal_9(self):
        """Message field 'debug_signal_9'."""
        return self._debug_signal_9

    @debug_signal_9.setter
    def debug_signal_9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_signal_9' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'debug_signal_9' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._debug_signal_9 = value
