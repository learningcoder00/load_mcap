# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RadarStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarStatus(type):
    """Metaclass of message 'RadarStatus'."""

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
                'deva_perception_msgs.msg.RadarStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarStatus(metaclass=Metaclass_RadarStatus):
    """Message class 'RadarStatus'."""

    __slots__ = [
        '_num_detection',
        '_num_object',
        '_status_enable',
        '_status_faulty',
        '_status_latency',
        '_status_safety_fault',
        '_timestamp_h',
        '_timestamp_l',
        '_vdy_velocity',
        '_vdy_yawrate',
        '_vdy_timestamp',
    ]

    _fields_and_field_types = {
        'num_detection': 'uint32',
        'num_object': 'uint32',
        'status_enable': 'uint32',
        'status_faulty': 'uint32',
        'status_latency': 'uint32',
        'status_safety_fault': 'uint32',
        'timestamp_h': 'double',
        'timestamp_l': 'double',
        'vdy_velocity': 'double',
        'vdy_yawrate': 'double',
        'vdy_timestamp': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.num_detection = kwargs.get('num_detection', int())
        self.num_object = kwargs.get('num_object', int())
        self.status_enable = kwargs.get('status_enable', int())
        self.status_faulty = kwargs.get('status_faulty', int())
        self.status_latency = kwargs.get('status_latency', int())
        self.status_safety_fault = kwargs.get('status_safety_fault', int())
        self.timestamp_h = kwargs.get('timestamp_h', float())
        self.timestamp_l = kwargs.get('timestamp_l', float())
        self.vdy_velocity = kwargs.get('vdy_velocity', float())
        self.vdy_yawrate = kwargs.get('vdy_yawrate', float())
        self.vdy_timestamp = kwargs.get('vdy_timestamp', float())

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
        if self.num_detection != other.num_detection:
            return False
        if self.num_object != other.num_object:
            return False
        if self.status_enable != other.status_enable:
            return False
        if self.status_faulty != other.status_faulty:
            return False
        if self.status_latency != other.status_latency:
            return False
        if self.status_safety_fault != other.status_safety_fault:
            return False
        if self.timestamp_h != other.timestamp_h:
            return False
        if self.timestamp_l != other.timestamp_l:
            return False
        if self.vdy_velocity != other.vdy_velocity:
            return False
        if self.vdy_yawrate != other.vdy_yawrate:
            return False
        if self.vdy_timestamp != other.vdy_timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_detection(self):
        """Message field 'num_detection'."""
        return self._num_detection

    @num_detection.setter
    def num_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_detection' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_detection' field must be an unsigned integer in [0, 4294967295]"
        self._num_detection = value

    @builtins.property
    def num_object(self):
        """Message field 'num_object'."""
        return self._num_object

    @num_object.setter
    def num_object(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_object' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_object' field must be an unsigned integer in [0, 4294967295]"
        self._num_object = value

    @builtins.property
    def status_enable(self):
        """Message field 'status_enable'."""
        return self._status_enable

    @status_enable.setter
    def status_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_enable' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_enable' field must be an unsigned integer in [0, 4294967295]"
        self._status_enable = value

    @builtins.property
    def status_faulty(self):
        """Message field 'status_faulty'."""
        return self._status_faulty

    @status_faulty.setter
    def status_faulty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_faulty' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_faulty' field must be an unsigned integer in [0, 4294967295]"
        self._status_faulty = value

    @builtins.property
    def status_latency(self):
        """Message field 'status_latency'."""
        return self._status_latency

    @status_latency.setter
    def status_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_latency' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_latency' field must be an unsigned integer in [0, 4294967295]"
        self._status_latency = value

    @builtins.property
    def status_safety_fault(self):
        """Message field 'status_safety_fault'."""
        return self._status_safety_fault

    @status_safety_fault.setter
    def status_safety_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_safety_fault' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_safety_fault' field must be an unsigned integer in [0, 4294967295]"
        self._status_safety_fault = value

    @builtins.property
    def timestamp_h(self):
        """Message field 'timestamp_h'."""
        return self._timestamp_h

    @timestamp_h.setter
    def timestamp_h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp_h' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp_h' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp_h = value

    @builtins.property
    def timestamp_l(self):
        """Message field 'timestamp_l'."""
        return self._timestamp_l

    @timestamp_l.setter
    def timestamp_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp_l = value

    @builtins.property
    def vdy_velocity(self):
        """Message field 'vdy_velocity'."""
        return self._vdy_velocity

    @vdy_velocity.setter
    def vdy_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vdy_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vdy_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vdy_velocity = value

    @builtins.property
    def vdy_yawrate(self):
        """Message field 'vdy_yawrate'."""
        return self._vdy_yawrate

    @vdy_yawrate.setter
    def vdy_yawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vdy_yawrate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vdy_yawrate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vdy_yawrate = value

    @builtins.property
    def vdy_timestamp(self):
        """Message field 'vdy_timestamp'."""
        return self._vdy_timestamp

    @vdy_timestamp.setter
    def vdy_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vdy_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vdy_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vdy_timestamp = value
