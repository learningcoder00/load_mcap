# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_localization_msgs:msg/GnssBestPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GnssBestPose(type):
    """Metaclass of message 'GnssBestPose'."""

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
            module = import_type_support('deva_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_localization_msgs.msg.GnssBestPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_best_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_best_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_best_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_best_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_best_pose

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class GnssBestPose(metaclass=Metaclass_GnssBestPose):
    """Message class 'GnssBestPose'."""

    __slots__ = [
        '_header',
        '_solution_status',
        '_position_type',
        '_lat',
        '_lon',
        '_height_msl',
        '_undulation',
        '_datum_id',
        '_lat_sigma',
        '_lon_sigma',
        '_height_sigma',
        '_diff_age',
        '_solution_age',
        '_num_satellites_tracked',
        '_num_satellites_used_in_solution',
        '_num_gps_and_glonass_l1_used_in_solution',
        '_num_gps_and_glonass_l1_and_l2_used_in_solution',
        '_extended_solution_status',
        '_gps_glonass_used_mask',
        '_galileo_beidou_used_mask',
        '_linear_velocity',
        '_velocity_latency',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'solution_status': 'string',
        'position_type': 'string',
        'lat': 'double',
        'lon': 'double',
        'height_msl': 'double',
        'undulation': 'float',
        'datum_id': 'string',
        'lat_sigma': 'float',
        'lon_sigma': 'float',
        'height_sigma': 'float',
        'diff_age': 'float',
        'solution_age': 'float',
        'num_satellites_tracked': 'uint8',
        'num_satellites_used_in_solution': 'uint8',
        'num_gps_and_glonass_l1_used_in_solution': 'uint8',
        'num_gps_and_glonass_l1_and_l2_used_in_solution': 'uint8',
        'extended_solution_status': 'uint32',
        'gps_glonass_used_mask': 'uint32',
        'galileo_beidou_used_mask': 'uint32',
        'linear_velocity': 'geometry_msgs/Point',
        'velocity_latency': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.solution_status = kwargs.get('solution_status', str())
        self.position_type = kwargs.get('position_type', str())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.height_msl = kwargs.get('height_msl', float())
        self.undulation = kwargs.get('undulation', float())
        self.datum_id = kwargs.get('datum_id', str())
        self.lat_sigma = kwargs.get('lat_sigma', float())
        self.lon_sigma = kwargs.get('lon_sigma', float())
        self.height_sigma = kwargs.get('height_sigma', float())
        self.diff_age = kwargs.get('diff_age', float())
        self.solution_age = kwargs.get('solution_age', float())
        self.num_satellites_tracked = kwargs.get('num_satellites_tracked', int())
        self.num_satellites_used_in_solution = kwargs.get('num_satellites_used_in_solution', int())
        self.num_gps_and_glonass_l1_used_in_solution = kwargs.get('num_gps_and_glonass_l1_used_in_solution', int())
        self.num_gps_and_glonass_l1_and_l2_used_in_solution = kwargs.get('num_gps_and_glonass_l1_and_l2_used_in_solution', int())
        self.extended_solution_status = kwargs.get('extended_solution_status', int())
        self.gps_glonass_used_mask = kwargs.get('gps_glonass_used_mask', int())
        self.galileo_beidou_used_mask = kwargs.get('galileo_beidou_used_mask', int())
        from geometry_msgs.msg import Point
        self.linear_velocity = kwargs.get('linear_velocity', Point())
        self.velocity_latency = kwargs.get('velocity_latency', float())

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
        if self.solution_status != other.solution_status:
            return False
        if self.position_type != other.position_type:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.height_msl != other.height_msl:
            return False
        if self.undulation != other.undulation:
            return False
        if self.datum_id != other.datum_id:
            return False
        if self.lat_sigma != other.lat_sigma:
            return False
        if self.lon_sigma != other.lon_sigma:
            return False
        if self.height_sigma != other.height_sigma:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.solution_age != other.solution_age:
            return False
        if self.num_satellites_tracked != other.num_satellites_tracked:
            return False
        if self.num_satellites_used_in_solution != other.num_satellites_used_in_solution:
            return False
        if self.num_gps_and_glonass_l1_used_in_solution != other.num_gps_and_glonass_l1_used_in_solution:
            return False
        if self.num_gps_and_glonass_l1_and_l2_used_in_solution != other.num_gps_and_glonass_l1_and_l2_used_in_solution:
            return False
        if self.extended_solution_status != other.extended_solution_status:
            return False
        if self.gps_glonass_used_mask != other.gps_glonass_used_mask:
            return False
        if self.galileo_beidou_used_mask != other.galileo_beidou_used_mask:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.velocity_latency != other.velocity_latency:
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
    def solution_status(self):
        """Message field 'solution_status'."""
        return self._solution_status

    @solution_status.setter
    def solution_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'solution_status' field must be of type 'str'"
        self._solution_status = value

    @builtins.property
    def position_type(self):
        """Message field 'position_type'."""
        return self._position_type

    @position_type.setter
    def position_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'position_type' field must be of type 'str'"
        self._position_type = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def height_msl(self):
        """Message field 'height_msl'."""
        return self._height_msl

    @height_msl.setter
    def height_msl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_msl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_msl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_msl = value

    @builtins.property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def datum_id(self):
        """Message field 'datum_id'."""
        return self._datum_id

    @datum_id.setter
    def datum_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'datum_id' field must be of type 'str'"
        self._datum_id = value

    @builtins.property
    def lat_sigma(self):
        """Message field 'lat_sigma'."""
        return self._lat_sigma

    @lat_sigma.setter
    def lat_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_sigma' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lat_sigma' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lat_sigma = value

    @builtins.property
    def lon_sigma(self):
        """Message field 'lon_sigma'."""
        return self._lon_sigma

    @lon_sigma.setter
    def lon_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_sigma' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lon_sigma' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lon_sigma = value

    @builtins.property
    def height_sigma(self):
        """Message field 'height_sigma'."""
        return self._height_sigma

    @height_sigma.setter
    def height_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_sigma' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_sigma' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_sigma = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_age = value

    @builtins.property
    def solution_age(self):
        """Message field 'solution_age'."""
        return self._solution_age

    @solution_age.setter
    def solution_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'solution_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'solution_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._solution_age = value

    @builtins.property
    def num_satellites_tracked(self):
        """Message field 'num_satellites_tracked'."""
        return self._num_satellites_tracked

    @num_satellites_tracked.setter
    def num_satellites_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_tracked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_tracked' field must be an unsigned integer in [0, 255]"
        self._num_satellites_tracked = value

    @builtins.property
    def num_satellites_used_in_solution(self):
        """Message field 'num_satellites_used_in_solution'."""
        return self._num_satellites_used_in_solution

    @num_satellites_used_in_solution.setter
    def num_satellites_used_in_solution(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_satellites_used_in_solution = value

    @builtins.property
    def num_gps_and_glonass_l1_used_in_solution(self):
        """Message field 'num_gps_and_glonass_l1_used_in_solution'."""
        return self._num_gps_and_glonass_l1_used_in_solution

    @num_gps_and_glonass_l1_used_in_solution.setter
    def num_gps_and_glonass_l1_used_in_solution(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_gps_and_glonass_l1_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_gps_and_glonass_l1_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_gps_and_glonass_l1_used_in_solution = value

    @builtins.property
    def num_gps_and_glonass_l1_and_l2_used_in_solution(self):
        """Message field 'num_gps_and_glonass_l1_and_l2_used_in_solution'."""
        return self._num_gps_and_glonass_l1_and_l2_used_in_solution

    @num_gps_and_glonass_l1_and_l2_used_in_solution.setter
    def num_gps_and_glonass_l1_and_l2_used_in_solution(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_gps_and_glonass_l1_and_l2_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_gps_and_glonass_l1_and_l2_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_gps_and_glonass_l1_and_l2_used_in_solution = value

    @builtins.property
    def extended_solution_status(self):
        """Message field 'extended_solution_status'."""
        return self._extended_solution_status

    @extended_solution_status.setter
    def extended_solution_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extended_solution_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'extended_solution_status' field must be an unsigned integer in [0, 4294967295]"
        self._extended_solution_status = value

    @builtins.property
    def gps_glonass_used_mask(self):
        """Message field 'gps_glonass_used_mask'."""
        return self._gps_glonass_used_mask

    @gps_glonass_used_mask.setter
    def gps_glonass_used_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_glonass_used_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_glonass_used_mask' field must be an unsigned integer in [0, 4294967295]"
        self._gps_glonass_used_mask = value

    @builtins.property
    def galileo_beidou_used_mask(self):
        """Message field 'galileo_beidou_used_mask'."""
        return self._galileo_beidou_used_mask

    @galileo_beidou_used_mask.setter
    def galileo_beidou_used_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'galileo_beidou_used_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'galileo_beidou_used_mask' field must be an unsigned integer in [0, 4294967295]"
        self._galileo_beidou_used_mask = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'linear_velocity' field must be a sub message of type 'Point'"
        self._linear_velocity = value

    @builtins.property
    def velocity_latency(self):
        """Message field 'velocity_latency'."""
        return self._velocity_latency

    @velocity_latency.setter
    def velocity_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_latency = value
