# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/OddParkingVehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OddParkingVehicleState(type):
    """Metaclass of message 'OddParkingVehicleState'."""

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
                'deva_function_msgs.msg.OddParkingVehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odd_parking_vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odd_parking_vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odd_parking_vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odd_parking_vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odd_parking_vehicle_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OddParkingVehicleState(metaclass=Metaclass_OddParkingVehicleState):
    """Message class 'OddParkingVehicleState'."""

    __slots__ = [
        '_publish_timestamp',
        '_odd_apa_illumination_pass_flag',
        '_odd_apa_gradient_pass_flag',
        '_odd_apa_standby_hu_speed_pass_flag',
    ]

    _fields_and_field_types = {
        'publish_timestamp': 'double',
        'odd_apa_illumination_pass_flag': 'uint8',
        'odd_apa_gradient_pass_flag': 'uint8',
        'odd_apa_standby_hu_speed_pass_flag': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.publish_timestamp = kwargs.get('publish_timestamp', float())
        self.odd_apa_illumination_pass_flag = kwargs.get('odd_apa_illumination_pass_flag', int())
        self.odd_apa_gradient_pass_flag = kwargs.get('odd_apa_gradient_pass_flag', int())
        self.odd_apa_standby_hu_speed_pass_flag = kwargs.get('odd_apa_standby_hu_speed_pass_flag', int())

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
        if self.publish_timestamp != other.publish_timestamp:
            return False
        if self.odd_apa_illumination_pass_flag != other.odd_apa_illumination_pass_flag:
            return False
        if self.odd_apa_gradient_pass_flag != other.odd_apa_gradient_pass_flag:
            return False
        if self.odd_apa_standby_hu_speed_pass_flag != other.odd_apa_standby_hu_speed_pass_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def publish_timestamp(self):
        """Message field 'publish_timestamp'."""
        return self._publish_timestamp

    @publish_timestamp.setter
    def publish_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'publish_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'publish_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._publish_timestamp = value

    @builtins.property
    def odd_apa_illumination_pass_flag(self):
        """Message field 'odd_apa_illumination_pass_flag'."""
        return self._odd_apa_illumination_pass_flag

    @odd_apa_illumination_pass_flag.setter
    def odd_apa_illumination_pass_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odd_apa_illumination_pass_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'odd_apa_illumination_pass_flag' field must be an unsigned integer in [0, 255]"
        self._odd_apa_illumination_pass_flag = value

    @builtins.property
    def odd_apa_gradient_pass_flag(self):
        """Message field 'odd_apa_gradient_pass_flag'."""
        return self._odd_apa_gradient_pass_flag

    @odd_apa_gradient_pass_flag.setter
    def odd_apa_gradient_pass_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odd_apa_gradient_pass_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'odd_apa_gradient_pass_flag' field must be an unsigned integer in [0, 255]"
        self._odd_apa_gradient_pass_flag = value

    @builtins.property
    def odd_apa_standby_hu_speed_pass_flag(self):
        """Message field 'odd_apa_standby_hu_speed_pass_flag'."""
        return self._odd_apa_standby_hu_speed_pass_flag

    @odd_apa_standby_hu_speed_pass_flag.setter
    def odd_apa_standby_hu_speed_pass_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odd_apa_standby_hu_speed_pass_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'odd_apa_standby_hu_speed_pass_flag' field must be an unsigned integer in [0, 255]"
        self._odd_apa_standby_hu_speed_pass_flag = value
