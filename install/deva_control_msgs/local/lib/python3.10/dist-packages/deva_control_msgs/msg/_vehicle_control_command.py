# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/VehicleControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleControlCommand(type):
    """Metaclass of message 'VehicleControlCommand'."""

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
                'deva_control_msgs.msg.VehicleControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_control_command

            from deva_control_msgs.msg import ControlValidLimit
            if ControlValidLimit.__class__._TYPE_SUPPORT is None:
                ControlValidLimit.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROTOCOL_VERSION__DEFAULT': '2.2',
            'LIMIT_COMMAND_ENABLE__DEFAULT': False,
        }

    @property
    def PROTOCOL_VERSION__DEFAULT(cls):
        """Return default value for message field 'protocol_version'."""
        return '2.2'

    @property
    def LIMIT_COMMAND_ENABLE__DEFAULT(cls):
        """Return default value for message field 'limit_command_enable'."""
        return False


class VehicleControlCommand(metaclass=Metaclass_VehicleControlCommand):
    """Message class 'VehicleControlCommand'."""

    __slots__ = [
        '_header',
        '_protocol_version',
        '_late_mode',
        '_eps_torque',
        '_front_wheel_target',
        '_steering_target',
        '_long_mode',
        '_speed',
        '_acceleration',
        '_longit_torque',
        '_target_distance',
        '_throttle',
        '_brake',
        '_limit_command_enable',
        '_steer_angle_rate_limit',
        '_steer_tq_limit',
        '_longit_tq_limit',
        '_longit_jerk_limit',
        '_ready',
        '_control_ready_false_reason',
        '_control_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'protocol_version': 'string',
        'late_mode': 'int8',
        'eps_torque': 'double',
        'front_wheel_target': 'double',
        'steering_target': 'double',
        'long_mode': 'int8',
        'speed': 'double',
        'acceleration': 'double',
        'longit_torque': 'double',
        'target_distance': 'double',
        'throttle': 'double',
        'brake': 'double',
        'limit_command_enable': 'boolean',
        'steer_angle_rate_limit': 'deva_control_msgs/ControlValidLimit',
        'steer_tq_limit': 'deva_control_msgs/ControlValidLimit',
        'longit_tq_limit': 'deva_control_msgs/ControlValidLimit',
        'longit_jerk_limit': 'deva_control_msgs/ControlValidLimit',
        'ready': 'boolean',
        'control_ready_false_reason': 'string',
        'control_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'ControlValidLimit'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'ControlValidLimit'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'ControlValidLimit'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'ControlValidLimit'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.protocol_version = kwargs.get(
            'protocol_version', VehicleControlCommand.PROTOCOL_VERSION__DEFAULT)
        self.late_mode = kwargs.get('late_mode', int())
        self.eps_torque = kwargs.get('eps_torque', float())
        self.front_wheel_target = kwargs.get('front_wheel_target', float())
        self.steering_target = kwargs.get('steering_target', float())
        self.long_mode = kwargs.get('long_mode', int())
        self.speed = kwargs.get('speed', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.longit_torque = kwargs.get('longit_torque', float())
        self.target_distance = kwargs.get('target_distance', float())
        self.throttle = kwargs.get('throttle', float())
        self.brake = kwargs.get('brake', float())
        self.limit_command_enable = kwargs.get(
            'limit_command_enable', VehicleControlCommand.LIMIT_COMMAND_ENABLE__DEFAULT)
        from deva_control_msgs.msg import ControlValidLimit
        self.steer_angle_rate_limit = kwargs.get('steer_angle_rate_limit', ControlValidLimit())
        from deva_control_msgs.msg import ControlValidLimit
        self.steer_tq_limit = kwargs.get('steer_tq_limit', ControlValidLimit())
        from deva_control_msgs.msg import ControlValidLimit
        self.longit_tq_limit = kwargs.get('longit_tq_limit', ControlValidLimit())
        from deva_control_msgs.msg import ControlValidLimit
        self.longit_jerk_limit = kwargs.get('longit_jerk_limit', ControlValidLimit())
        self.ready = kwargs.get('ready', bool())
        self.control_ready_false_reason = kwargs.get('control_ready_false_reason', str())
        self.control_mode = kwargs.get('control_mode', int())

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
        if self.protocol_version != other.protocol_version:
            return False
        if self.late_mode != other.late_mode:
            return False
        if self.eps_torque != other.eps_torque:
            return False
        if self.front_wheel_target != other.front_wheel_target:
            return False
        if self.steering_target != other.steering_target:
            return False
        if self.long_mode != other.long_mode:
            return False
        if self.speed != other.speed:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.longit_torque != other.longit_torque:
            return False
        if self.target_distance != other.target_distance:
            return False
        if self.throttle != other.throttle:
            return False
        if self.brake != other.brake:
            return False
        if self.limit_command_enable != other.limit_command_enable:
            return False
        if self.steer_angle_rate_limit != other.steer_angle_rate_limit:
            return False
        if self.steer_tq_limit != other.steer_tq_limit:
            return False
        if self.longit_tq_limit != other.longit_tq_limit:
            return False
        if self.longit_jerk_limit != other.longit_jerk_limit:
            return False
        if self.ready != other.ready:
            return False
        if self.control_ready_false_reason != other.control_ready_false_reason:
            return False
        if self.control_mode != other.control_mode:
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
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'protocol_version' field must be of type 'str'"
        self._protocol_version = value

    @builtins.property
    def late_mode(self):
        """Message field 'late_mode'."""
        return self._late_mode

    @late_mode.setter
    def late_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'late_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'late_mode' field must be an integer in [-128, 127]"
        self._late_mode = value

    @builtins.property
    def eps_torque(self):
        """Message field 'eps_torque'."""
        return self._eps_torque

    @eps_torque.setter
    def eps_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eps_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'eps_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._eps_torque = value

    @builtins.property
    def front_wheel_target(self):
        """Message field 'front_wheel_target'."""
        return self._front_wheel_target

    @front_wheel_target.setter
    def front_wheel_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_wheel_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'front_wheel_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._front_wheel_target = value

    @builtins.property
    def steering_target(self):
        """Message field 'steering_target'."""
        return self._steering_target

    @steering_target.setter
    def steering_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_target' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering_target' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering_target = value

    @builtins.property
    def long_mode(self):
        """Message field 'long_mode'."""
        return self._long_mode

    @long_mode.setter
    def long_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'long_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'long_mode' field must be an integer in [-128, 127]"
        self._long_mode = value

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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value

    @builtins.property
    def longit_torque(self):
        """Message field 'longit_torque'."""
        return self._longit_torque

    @longit_torque.setter
    def longit_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longit_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longit_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longit_torque = value

    @builtins.property
    def target_distance(self):
        """Message field 'target_distance'."""
        return self._target_distance

    @target_distance.setter
    def target_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_distance = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'brake' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._brake = value

    @builtins.property
    def limit_command_enable(self):
        """Message field 'limit_command_enable'."""
        return self._limit_command_enable

    @limit_command_enable.setter
    def limit_command_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'limit_command_enable' field must be of type 'bool'"
        self._limit_command_enable = value

    @builtins.property
    def steer_angle_rate_limit(self):
        """Message field 'steer_angle_rate_limit'."""
        return self._steer_angle_rate_limit

    @steer_angle_rate_limit.setter
    def steer_angle_rate_limit(self, value):
        if __debug__:
            from deva_control_msgs.msg import ControlValidLimit
            assert \
                isinstance(value, ControlValidLimit), \
                "The 'steer_angle_rate_limit' field must be a sub message of type 'ControlValidLimit'"
        self._steer_angle_rate_limit = value

    @builtins.property
    def steer_tq_limit(self):
        """Message field 'steer_tq_limit'."""
        return self._steer_tq_limit

    @steer_tq_limit.setter
    def steer_tq_limit(self, value):
        if __debug__:
            from deva_control_msgs.msg import ControlValidLimit
            assert \
                isinstance(value, ControlValidLimit), \
                "The 'steer_tq_limit' field must be a sub message of type 'ControlValidLimit'"
        self._steer_tq_limit = value

    @builtins.property
    def longit_tq_limit(self):
        """Message field 'longit_tq_limit'."""
        return self._longit_tq_limit

    @longit_tq_limit.setter
    def longit_tq_limit(self, value):
        if __debug__:
            from deva_control_msgs.msg import ControlValidLimit
            assert \
                isinstance(value, ControlValidLimit), \
                "The 'longit_tq_limit' field must be a sub message of type 'ControlValidLimit'"
        self._longit_tq_limit = value

    @builtins.property
    def longit_jerk_limit(self):
        """Message field 'longit_jerk_limit'."""
        return self._longit_jerk_limit

    @longit_jerk_limit.setter
    def longit_jerk_limit(self, value):
        if __debug__:
            from deva_control_msgs.msg import ControlValidLimit
            assert \
                isinstance(value, ControlValidLimit), \
                "The 'longit_jerk_limit' field must be a sub message of type 'ControlValidLimit'"
        self._longit_jerk_limit = value

    @builtins.property
    def ready(self):
        """Message field 'ready'."""
        return self._ready

    @ready.setter
    def ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ready' field must be of type 'bool'"
        self._ready = value

    @builtins.property
    def control_ready_false_reason(self):
        """Message field 'control_ready_false_reason'."""
        return self._control_ready_false_reason

    @control_ready_false_reason.setter
    def control_ready_false_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_ready_false_reason' field must be of type 'str'"
        self._control_ready_false_reason = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_mode' field must be an unsigned integer in [0, 255]"
        self._control_mode = value
