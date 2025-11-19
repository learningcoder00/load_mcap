# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RadarObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarObject(type):
    """Metaclass of message 'RadarObject'."""

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
                'deva_perception_msgs.msg.RadarObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_object

            from geometry_msgs.msg import AccelWithCovariance
            if AccelWithCovariance.__class__._TYPE_SUPPORT is None:
                AccelWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovariance
            if PoseWithCovariance.__class__._TYPE_SUPPORT is None:
                PoseWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarObject(metaclass=Metaclass_RadarObject):
    """Message class 'RadarObject'."""

    __slots__ = [
        '_id',
        '_position',
        '_relative_velocity',
        '_relative_acceleration',
        '_rcs',
        '_dynamic_property',
        '_quality_valid',
        '_meas_state',
        '_prob_of_exist',
        '_extended_valid',
        '_length',
        '_width',
        '_center_latitude',
        '_center_longitude',
        '_orientation_angle',
        '_class_type',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'position': 'geometry_msgs/PoseWithCovariance',
        'relative_velocity': 'geometry_msgs/TwistWithCovariance',
        'relative_acceleration': 'geometry_msgs/AccelWithCovariance',
        'rcs': 'double',
        'dynamic_property': 'uint8',
        'quality_valid': 'boolean',
        'meas_state': 'uint8',
        'prob_of_exist': 'uint8',
        'extended_valid': 'boolean',
        'length': 'double',
        'width': 'double',
        'center_latitude': 'double',
        'center_longitude': 'double',
        'orientation_angle': 'double',
        'class_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import PoseWithCovariance
        self.position = kwargs.get('position', PoseWithCovariance())
        from geometry_msgs.msg import TwistWithCovariance
        self.relative_velocity = kwargs.get('relative_velocity', TwistWithCovariance())
        from geometry_msgs.msg import AccelWithCovariance
        self.relative_acceleration = kwargs.get('relative_acceleration', AccelWithCovariance())
        self.rcs = kwargs.get('rcs', float())
        self.dynamic_property = kwargs.get('dynamic_property', int())
        self.quality_valid = kwargs.get('quality_valid', bool())
        self.meas_state = kwargs.get('meas_state', int())
        self.prob_of_exist = kwargs.get('prob_of_exist', int())
        self.extended_valid = kwargs.get('extended_valid', bool())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.center_latitude = kwargs.get('center_latitude', float())
        self.center_longitude = kwargs.get('center_longitude', float())
        self.orientation_angle = kwargs.get('orientation_angle', float())
        self.class_type = kwargs.get('class_type', int())

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
        if self.position != other.position:
            return False
        if self.relative_velocity != other.relative_velocity:
            return False
        if self.relative_acceleration != other.relative_acceleration:
            return False
        if self.rcs != other.rcs:
            return False
        if self.dynamic_property != other.dynamic_property:
            return False
        if self.quality_valid != other.quality_valid:
            return False
        if self.meas_state != other.meas_state:
            return False
        if self.prob_of_exist != other.prob_of_exist:
            return False
        if self.extended_valid != other.extended_valid:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.center_latitude != other.center_latitude:
            return False
        if self.center_longitude != other.center_longitude:
            return False
        if self.orientation_angle != other.orientation_angle:
            return False
        if self.class_type != other.class_type:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovariance
            assert \
                isinstance(value, PoseWithCovariance), \
                "The 'position' field must be a sub message of type 'PoseWithCovariance'"
        self._position = value

    @builtins.property
    def relative_velocity(self):
        """Message field 'relative_velocity'."""
        return self._relative_velocity

    @relative_velocity.setter
    def relative_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'relative_velocity' field must be a sub message of type 'TwistWithCovariance'"
        self._relative_velocity = value

    @builtins.property
    def relative_acceleration(self):
        """Message field 'relative_acceleration'."""
        return self._relative_acceleration

    @relative_acceleration.setter
    def relative_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelWithCovariance
            assert \
                isinstance(value, AccelWithCovariance), \
                "The 'relative_acceleration' field must be a sub message of type 'AccelWithCovariance'"
        self._relative_acceleration = value

    @builtins.property
    def rcs(self):
        """Message field 'rcs'."""
        return self._rcs

    @rcs.setter
    def rcs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rcs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rcs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rcs = value

    @builtins.property
    def dynamic_property(self):
        """Message field 'dynamic_property'."""
        return self._dynamic_property

    @dynamic_property.setter
    def dynamic_property(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynamic_property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dynamic_property' field must be an unsigned integer in [0, 255]"
        self._dynamic_property = value

    @builtins.property
    def quality_valid(self):
        """Message field 'quality_valid'."""
        return self._quality_valid

    @quality_valid.setter
    def quality_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quality_valid' field must be of type 'bool'"
        self._quality_valid = value

    @builtins.property
    def meas_state(self):
        """Message field 'meas_state'."""
        return self._meas_state

    @meas_state.setter
    def meas_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meas_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meas_state' field must be an unsigned integer in [0, 255]"
        self._meas_state = value

    @builtins.property
    def prob_of_exist(self):
        """Message field 'prob_of_exist'."""
        return self._prob_of_exist

    @prob_of_exist.setter
    def prob_of_exist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prob_of_exist' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prob_of_exist' field must be an unsigned integer in [0, 255]"
        self._prob_of_exist = value

    @builtins.property
    def extended_valid(self):
        """Message field 'extended_valid'."""
        return self._extended_valid

    @extended_valid.setter
    def extended_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'extended_valid' field must be of type 'bool'"
        self._extended_valid = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._width = value

    @builtins.property
    def center_latitude(self):
        """Message field 'center_latitude'."""
        return self._center_latitude

    @center_latitude.setter
    def center_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_latitude = value

    @builtins.property
    def center_longitude(self):
        """Message field 'center_longitude'."""
        return self._center_longitude

    @center_longitude.setter
    def center_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_longitude = value

    @builtins.property
    def orientation_angle(self):
        """Message field 'orientation_angle'."""
        return self._orientation_angle

    @orientation_angle.setter
    def orientation_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orientation_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orientation_angle = value

    @builtins.property
    def class_type(self):
        """Message field 'class_type'."""
        return self._class_type

    @class_type.setter
    def class_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'class_type' field must be an unsigned integer in [0, 255]"
        self._class_type = value
