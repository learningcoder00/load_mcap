# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/UltrasonicRadar.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UltrasonicRadar(type):
    """Metaclass of message 'UltrasonicRadar'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_RADAR_DISTANCE': 510,
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
                'deva_perception_msgs.msg.UltrasonicRadar')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ultrasonic_radar
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ultrasonic_radar
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ultrasonic_radar
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ultrasonic_radar
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ultrasonic_radar

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_RADAR_DISTANCE': cls.__constants['MAX_RADAR_DISTANCE'],
        }

    @property
    def MAX_RADAR_DISTANCE(self):
        """Message constant 'MAX_RADAR_DISTANCE'."""
        return Metaclass_UltrasonicRadar.__constants['MAX_RADAR_DISTANCE']


class UltrasonicRadar(metaclass=Metaclass_UltrasonicRadar):
    """
    Message class 'UltrasonicRadar'.

    Constants:
      MAX_RADAR_DISTANCE
    """

    __slots__ = [
        '_radar_identify_id',
        '_radar_name',
        '_radar_type',
        '_radar_state',
        '_radar_tx_status',
        '_radar_rx_status',
        '_range',
        '_max_radar_distance',
        '_radar_distance',
        '_radar_distance_vaild',
    ]

    _fields_and_field_types = {
        'radar_identify_id': 'uint8',
        'radar_name': 'string',
        'radar_type': 'string',
        'radar_state': 'boolean',
        'radar_tx_status': 'boolean',
        'radar_rx_status': 'boolean',
        'range': 'float',
        'max_radar_distance': 'uint16',
        'radar_distance': 'double',
        'radar_distance_vaild': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.radar_identify_id = kwargs.get('radar_identify_id', int())
        self.radar_name = kwargs.get('radar_name', str())
        self.radar_type = kwargs.get('radar_type', str())
        self.radar_state = kwargs.get('radar_state', bool())
        self.radar_tx_status = kwargs.get('radar_tx_status', bool())
        self.radar_rx_status = kwargs.get('radar_rx_status', bool())
        self.range = kwargs.get('range', float())
        self.max_radar_distance = kwargs.get('max_radar_distance', int())
        self.radar_distance = kwargs.get('radar_distance', float())
        self.radar_distance_vaild = kwargs.get('radar_distance_vaild', bool())

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
        if self.radar_identify_id != other.radar_identify_id:
            return False
        if self.radar_name != other.radar_name:
            return False
        if self.radar_type != other.radar_type:
            return False
        if self.radar_state != other.radar_state:
            return False
        if self.radar_tx_status != other.radar_tx_status:
            return False
        if self.radar_rx_status != other.radar_rx_status:
            return False
        if self.range != other.range:
            return False
        if self.max_radar_distance != other.max_radar_distance:
            return False
        if self.radar_distance != other.radar_distance:
            return False
        if self.radar_distance_vaild != other.radar_distance_vaild:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def radar_identify_id(self):
        """Message field 'radar_identify_id'."""
        return self._radar_identify_id

    @radar_identify_id.setter
    def radar_identify_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radar_identify_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radar_identify_id' field must be an unsigned integer in [0, 255]"
        self._radar_identify_id = value

    @builtins.property
    def radar_name(self):
        """Message field 'radar_name'."""
        return self._radar_name

    @radar_name.setter
    def radar_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'radar_name' field must be of type 'str'"
        self._radar_name = value

    @builtins.property
    def radar_type(self):
        """Message field 'radar_type'."""
        return self._radar_type

    @radar_type.setter
    def radar_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'radar_type' field must be of type 'str'"
        self._radar_type = value

    @builtins.property
    def radar_state(self):
        """Message field 'radar_state'."""
        return self._radar_state

    @radar_state.setter
    def radar_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_state' field must be of type 'bool'"
        self._radar_state = value

    @builtins.property
    def radar_tx_status(self):
        """Message field 'radar_tx_status'."""
        return self._radar_tx_status

    @radar_tx_status.setter
    def radar_tx_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_tx_status' field must be of type 'bool'"
        self._radar_tx_status = value

    @builtins.property
    def radar_rx_status(self):
        """Message field 'radar_rx_status'."""
        return self._radar_rx_status

    @radar_rx_status.setter
    def radar_rx_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_rx_status' field must be of type 'bool'"
        self._radar_rx_status = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def max_radar_distance(self):
        """Message field 'max_radar_distance'."""
        return self._max_radar_distance

    @max_radar_distance.setter
    def max_radar_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_radar_distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_radar_distance' field must be an unsigned integer in [0, 65535]"
        self._max_radar_distance = value

    @builtins.property
    def radar_distance(self):
        """Message field 'radar_distance'."""
        return self._radar_distance

    @radar_distance.setter
    def radar_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radar_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radar_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radar_distance = value

    @builtins.property
    def radar_distance_vaild(self):
        """Message field 'radar_distance_vaild'."""
        return self._radar_distance_vaild

    @radar_distance_vaild.setter
    def radar_distance_vaild(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'radar_distance_vaild' field must be of type 'bool'"
        self._radar_distance_vaild = value
