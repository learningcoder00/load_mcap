# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarVehicleInfo(type):
    """Metaclass of message 'RadarVehicleInfo'."""

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
                'deva_perception_msgs.msg.RadarVehicleInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_vehicle_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_vehicle_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_vehicle_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_vehicle_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_vehicle_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarVehicleInfo(metaclass=Metaclass_RadarVehicleInfo):
    """Message class 'RadarVehicleInfo'."""

    __slots__ = [
        '_id',
        '_position_x',
        '_position_y',
        '_rel_vel_x',
        '_rel_vel_y',
        '_abs_vel_x',
        '_abs_vel_y',
        '_rel_acc_x',
        '_rel_acc_y',
        '_abs_acc_x',
        '_abs_acc_y',
        '_speed',
        '_yaw_rate',
        '_radar_time',
        '_vehicle_time',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'position_x': 'double',
        'position_y': 'double',
        'rel_vel_x': 'double',
        'rel_vel_y': 'double',
        'abs_vel_x': 'double',
        'abs_vel_y': 'double',
        'rel_acc_x': 'double',
        'rel_acc_y': 'double',
        'abs_acc_x': 'double',
        'abs_acc_y': 'double',
        'speed': 'double',
        'yaw_rate': 'double',
        'radar_time': 'double',
        'vehicle_time': 'double',
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
        self.id = kwargs.get('id', int())
        self.position_x = kwargs.get('position_x', float())
        self.position_y = kwargs.get('position_y', float())
        self.rel_vel_x = kwargs.get('rel_vel_x', float())
        self.rel_vel_y = kwargs.get('rel_vel_y', float())
        self.abs_vel_x = kwargs.get('abs_vel_x', float())
        self.abs_vel_y = kwargs.get('abs_vel_y', float())
        self.rel_acc_x = kwargs.get('rel_acc_x', float())
        self.rel_acc_y = kwargs.get('rel_acc_y', float())
        self.abs_acc_x = kwargs.get('abs_acc_x', float())
        self.abs_acc_y = kwargs.get('abs_acc_y', float())
        self.speed = kwargs.get('speed', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.radar_time = kwargs.get('radar_time', float())
        self.vehicle_time = kwargs.get('vehicle_time', float())

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
        if self.id != other.id:
            return False
        if self.position_x != other.position_x:
            return False
        if self.position_y != other.position_y:
            return False
        if self.rel_vel_x != other.rel_vel_x:
            return False
        if self.rel_vel_y != other.rel_vel_y:
            return False
        if self.abs_vel_x != other.abs_vel_x:
            return False
        if self.abs_vel_y != other.abs_vel_y:
            return False
        if self.rel_acc_x != other.rel_acc_x:
            return False
        if self.rel_acc_y != other.rel_acc_y:
            return False
        if self.abs_acc_x != other.abs_acc_x:
            return False
        if self.abs_acc_y != other.abs_acc_y:
            return False
        if self.speed != other.speed:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.radar_time != other.radar_time:
            return False
        if self.vehicle_time != other.vehicle_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def position_x(self):
        """Message field 'position_x'."""
        return self._position_x

    @position_x.setter
    def position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position_x = value

    @builtins.property
    def position_y(self):
        """Message field 'position_y'."""
        return self._position_y

    @position_y.setter
    def position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position_y = value

    @builtins.property
    def rel_vel_x(self):
        """Message field 'rel_vel_x'."""
        return self._rel_vel_x

    @rel_vel_x.setter
    def rel_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_vel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_vel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_vel_x = value

    @builtins.property
    def rel_vel_y(self):
        """Message field 'rel_vel_y'."""
        return self._rel_vel_y

    @rel_vel_y.setter
    def rel_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_vel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_vel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_vel_y = value

    @builtins.property
    def abs_vel_x(self):
        """Message field 'abs_vel_x'."""
        return self._abs_vel_x

    @abs_vel_x.setter
    def abs_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_vel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'abs_vel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._abs_vel_x = value

    @builtins.property
    def abs_vel_y(self):
        """Message field 'abs_vel_y'."""
        return self._abs_vel_y

    @abs_vel_y.setter
    def abs_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_vel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'abs_vel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._abs_vel_y = value

    @builtins.property
    def rel_acc_x(self):
        """Message field 'rel_acc_x'."""
        return self._rel_acc_x

    @rel_acc_x.setter
    def rel_acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_acc_x = value

    @builtins.property
    def rel_acc_y(self):
        """Message field 'rel_acc_y'."""
        return self._rel_acc_y

    @rel_acc_y.setter
    def rel_acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_acc_y = value

    @builtins.property
    def abs_acc_x(self):
        """Message field 'abs_acc_x'."""
        return self._abs_acc_x

    @abs_acc_x.setter
    def abs_acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_acc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'abs_acc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._abs_acc_x = value

    @builtins.property
    def abs_acc_y(self):
        """Message field 'abs_acc_y'."""
        return self._abs_acc_y

    @abs_acc_y.setter
    def abs_acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_acc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'abs_acc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._abs_acc_y = value

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
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def radar_time(self):
        """Message field 'radar_time'."""
        return self._radar_time

    @radar_time.setter
    def radar_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radar_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radar_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radar_time = value

    @builtins.property
    def vehicle_time(self):
        """Message field 'vehicle_time'."""
        return self._vehicle_time

    @vehicle_time.setter
    def vehicle_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vehicle_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vehicle_time = value
