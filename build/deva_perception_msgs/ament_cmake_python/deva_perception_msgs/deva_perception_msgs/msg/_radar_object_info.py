# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RadarObjectInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarObjectInfo(type):
    """Metaclass of message 'RadarObjectInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MNTPAT_UNKNOWN': 0,
        'MNTPAT_STATIONARY': 1,
        'MNTPAT_STATIONARY_FROM_MOVING': 2,
        'MNTPAT_MOVING': 3,
        'MNTPAT_RECEDING': 4,
        'MNTPAT_ONCOMING': 5,
        'MNTPAT_CROSSINGN_FROM_LE': 6,
        'MNTPAT_CROSSINGN_FROM_RI': 7,
        'MNTPAT_CROSSINGN_STATIONARY': 8,
        'MNTPAT_STOPED': 9,
        'UNKNOWN': 0,
        'POINT': 1,
        'CAR': 2,
        'TRUCK': 3,
        'PEDESTRIAN': 4,
        'BICYCLE': 5,
        'WIDE': 6,
        'MOTORCYCLE': 7,
        'VEHICLE_UNKNOWN_CLASS': 8,
        'ANIMAL': 9,
        'TRACK_STATUS_INVALID': 0,
        'TRACK_STATUS_UPDATED': 1,
        'TRACK_STATUS_NEW': 2,
        'TRACK_STATUS_COASTED': 3,
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
                'deva_perception_msgs.msg.RadarObjectInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_object_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_object_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_object_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_object_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_object_info

            from geometry_msgs.msg import Accel
            if Accel.__class__._TYPE_SUPPORT is None:
                Accel.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MNTPAT_UNKNOWN': cls.__constants['MNTPAT_UNKNOWN'],
            'MNTPAT_STATIONARY': cls.__constants['MNTPAT_STATIONARY'],
            'MNTPAT_STATIONARY_FROM_MOVING': cls.__constants['MNTPAT_STATIONARY_FROM_MOVING'],
            'MNTPAT_MOVING': cls.__constants['MNTPAT_MOVING'],
            'MNTPAT_RECEDING': cls.__constants['MNTPAT_RECEDING'],
            'MNTPAT_ONCOMING': cls.__constants['MNTPAT_ONCOMING'],
            'MNTPAT_CROSSINGN_FROM_LE': cls.__constants['MNTPAT_CROSSINGN_FROM_LE'],
            'MNTPAT_CROSSINGN_FROM_RI': cls.__constants['MNTPAT_CROSSINGN_FROM_RI'],
            'MNTPAT_CROSSINGN_STATIONARY': cls.__constants['MNTPAT_CROSSINGN_STATIONARY'],
            'MNTPAT_STOPED': cls.__constants['MNTPAT_STOPED'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'POINT': cls.__constants['POINT'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'WIDE': cls.__constants['WIDE'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'VEHICLE_UNKNOWN_CLASS': cls.__constants['VEHICLE_UNKNOWN_CLASS'],
            'ANIMAL': cls.__constants['ANIMAL'],
            'TRACK_STATUS_INVALID': cls.__constants['TRACK_STATUS_INVALID'],
            'TRACK_STATUS_UPDATED': cls.__constants['TRACK_STATUS_UPDATED'],
            'TRACK_STATUS_NEW': cls.__constants['TRACK_STATUS_NEW'],
            'TRACK_STATUS_COASTED': cls.__constants['TRACK_STATUS_COASTED'],
        }

    @property
    def MNTPAT_UNKNOWN(self):
        """Message constant 'MNTPAT_UNKNOWN'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_UNKNOWN']

    @property
    def MNTPAT_STATIONARY(self):
        """Message constant 'MNTPAT_STATIONARY'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_STATIONARY']

    @property
    def MNTPAT_STATIONARY_FROM_MOVING(self):
        """Message constant 'MNTPAT_STATIONARY_FROM_MOVING'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_STATIONARY_FROM_MOVING']

    @property
    def MNTPAT_MOVING(self):
        """Message constant 'MNTPAT_MOVING'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_MOVING']

    @property
    def MNTPAT_RECEDING(self):
        """Message constant 'MNTPAT_RECEDING'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_RECEDING']

    @property
    def MNTPAT_ONCOMING(self):
        """Message constant 'MNTPAT_ONCOMING'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_ONCOMING']

    @property
    def MNTPAT_CROSSINGN_FROM_LE(self):
        """Message constant 'MNTPAT_CROSSINGN_FROM_LE'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_CROSSINGN_FROM_LE']

    @property
    def MNTPAT_CROSSINGN_FROM_RI(self):
        """Message constant 'MNTPAT_CROSSINGN_FROM_RI'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_CROSSINGN_FROM_RI']

    @property
    def MNTPAT_CROSSINGN_STATIONARY(self):
        """Message constant 'MNTPAT_CROSSINGN_STATIONARY'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_CROSSINGN_STATIONARY']

    @property
    def MNTPAT_STOPED(self):
        """Message constant 'MNTPAT_STOPED'."""
        return Metaclass_RadarObjectInfo.__constants['MNTPAT_STOPED']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_RadarObjectInfo.__constants['UNKNOWN']

    @property
    def POINT(self):
        """Message constant 'POINT'."""
        return Metaclass_RadarObjectInfo.__constants['POINT']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_RadarObjectInfo.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_RadarObjectInfo.__constants['TRUCK']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_RadarObjectInfo.__constants['PEDESTRIAN']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_RadarObjectInfo.__constants['BICYCLE']

    @property
    def WIDE(self):
        """Message constant 'WIDE'."""
        return Metaclass_RadarObjectInfo.__constants['WIDE']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_RadarObjectInfo.__constants['MOTORCYCLE']

    @property
    def VEHICLE_UNKNOWN_CLASS(self):
        """Message constant 'VEHICLE_UNKNOWN_CLASS'."""
        return Metaclass_RadarObjectInfo.__constants['VEHICLE_UNKNOWN_CLASS']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_RadarObjectInfo.__constants['ANIMAL']

    @property
    def TRACK_STATUS_INVALID(self):
        """Message constant 'TRACK_STATUS_INVALID'."""
        return Metaclass_RadarObjectInfo.__constants['TRACK_STATUS_INVALID']

    @property
    def TRACK_STATUS_UPDATED(self):
        """Message constant 'TRACK_STATUS_UPDATED'."""
        return Metaclass_RadarObjectInfo.__constants['TRACK_STATUS_UPDATED']

    @property
    def TRACK_STATUS_NEW(self):
        """Message constant 'TRACK_STATUS_NEW'."""
        return Metaclass_RadarObjectInfo.__constants['TRACK_STATUS_NEW']

    @property
    def TRACK_STATUS_COASTED(self):
        """Message constant 'TRACK_STATUS_COASTED'."""
        return Metaclass_RadarObjectInfo.__constants['TRACK_STATUS_COASTED']


class RadarObjectInfo(metaclass=Metaclass_RadarObjectInfo):
    """
    Message class 'RadarObjectInfo'.

    Constants:
      MNTPAT_UNKNOWN
      MNTPAT_STATIONARY
      MNTPAT_STATIONARY_FROM_MOVING
      MNTPAT_MOVING
      MNTPAT_RECEDING
      MNTPAT_ONCOMING
      MNTPAT_CROSSINGN_FROM_LE
      MNTPAT_CROSSINGN_FROM_RI
      MNTPAT_CROSSINGN_STATIONARY
      MNTPAT_STOPED
      UNKNOWN
      POINT
      CAR
      TRUCK
      PEDESTRIAN
      BICYCLE
      WIDE
      MOTORCYCLE
      VEHICLE_UNKNOWN_CLASS
      ANIMAL
      TRACK_STATUS_INVALID
      TRACK_STATUS_UPDATED
      TRACK_STATUS_NEW
      TRACK_STATUS_COASTED
    """

    __slots__ = [
        '_id',
        '_position',
        '_position_std',
        '_nearest_point',
        '_nearest_point_std',
        '_velocity_rel',
        '_velocity_rel_std',
        '_velocity_abs',
        '_velocity_abs_std',
        '_acceleration_rel',
        '_acceleration_abs',
        '_dynamic_property',
        '_heading_angle',
        '_life_cycles',
        '_box_lwh',
        '_box_center_lat',
        '_box_center_lgt',
        '_snr',
        '_classification',
        '_obstacle_probability',
        '_probability_of_existence',
        '_mirror_probability',
        '_not_real_probability',
        '_rcs',
        '_target_classification_confidence',
        '_track_status',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'position': 'geometry_msgs/Pose',
        'position_std': 'geometry_msgs/Pose',
        'nearest_point': 'geometry_msgs/Pose',
        'nearest_point_std': 'geometry_msgs/Pose',
        'velocity_rel': 'geometry_msgs/Twist',
        'velocity_rel_std': 'geometry_msgs/Twist',
        'velocity_abs': 'geometry_msgs/Twist',
        'velocity_abs_std': 'geometry_msgs/Twist',
        'acceleration_rel': 'geometry_msgs/Accel',
        'acceleration_abs': 'geometry_msgs/Accel',
        'dynamic_property': 'uint32',
        'heading_angle': 'double',
        'life_cycles': 'uint32',
        'box_lwh': 'geometry_msgs/Point',
        'box_center_lat': 'double',
        'box_center_lgt': 'double',
        'snr': 'double',
        'classification': 'uint32',
        'obstacle_probability': 'double',
        'probability_of_existence': 'double',
        'mirror_probability': 'double',
        'not_real_probability': 'double',
        'rcs': 'double',
        'target_classification_confidence': 'double',
        'track_status': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.position = kwargs.get('position', Pose())
        from geometry_msgs.msg import Pose
        self.position_std = kwargs.get('position_std', Pose())
        from geometry_msgs.msg import Pose
        self.nearest_point = kwargs.get('nearest_point', Pose())
        from geometry_msgs.msg import Pose
        self.nearest_point_std = kwargs.get('nearest_point_std', Pose())
        from geometry_msgs.msg import Twist
        self.velocity_rel = kwargs.get('velocity_rel', Twist())
        from geometry_msgs.msg import Twist
        self.velocity_rel_std = kwargs.get('velocity_rel_std', Twist())
        from geometry_msgs.msg import Twist
        self.velocity_abs = kwargs.get('velocity_abs', Twist())
        from geometry_msgs.msg import Twist
        self.velocity_abs_std = kwargs.get('velocity_abs_std', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration_rel = kwargs.get('acceleration_rel', Accel())
        from geometry_msgs.msg import Accel
        self.acceleration_abs = kwargs.get('acceleration_abs', Accel())
        self.dynamic_property = kwargs.get('dynamic_property', int())
        self.heading_angle = kwargs.get('heading_angle', float())
        self.life_cycles = kwargs.get('life_cycles', int())
        from geometry_msgs.msg import Point
        self.box_lwh = kwargs.get('box_lwh', Point())
        self.box_center_lat = kwargs.get('box_center_lat', float())
        self.box_center_lgt = kwargs.get('box_center_lgt', float())
        self.snr = kwargs.get('snr', float())
        self.classification = kwargs.get('classification', int())
        self.obstacle_probability = kwargs.get('obstacle_probability', float())
        self.probability_of_existence = kwargs.get('probability_of_existence', float())
        self.mirror_probability = kwargs.get('mirror_probability', float())
        self.not_real_probability = kwargs.get('not_real_probability', float())
        self.rcs = kwargs.get('rcs', float())
        self.target_classification_confidence = kwargs.get('target_classification_confidence', float())
        self.track_status = kwargs.get('track_status', int())

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
        if self.position_std != other.position_std:
            return False
        if self.nearest_point != other.nearest_point:
            return False
        if self.nearest_point_std != other.nearest_point_std:
            return False
        if self.velocity_rel != other.velocity_rel:
            return False
        if self.velocity_rel_std != other.velocity_rel_std:
            return False
        if self.velocity_abs != other.velocity_abs:
            return False
        if self.velocity_abs_std != other.velocity_abs_std:
            return False
        if self.acceleration_rel != other.acceleration_rel:
            return False
        if self.acceleration_abs != other.acceleration_abs:
            return False
        if self.dynamic_property != other.dynamic_property:
            return False
        if self.heading_angle != other.heading_angle:
            return False
        if self.life_cycles != other.life_cycles:
            return False
        if self.box_lwh != other.box_lwh:
            return False
        if self.box_center_lat != other.box_center_lat:
            return False
        if self.box_center_lgt != other.box_center_lgt:
            return False
        if self.snr != other.snr:
            return False
        if self.classification != other.classification:
            return False
        if self.obstacle_probability != other.obstacle_probability:
            return False
        if self.probability_of_existence != other.probability_of_existence:
            return False
        if self.mirror_probability != other.mirror_probability:
            return False
        if self.not_real_probability != other.not_real_probability:
            return False
        if self.rcs != other.rcs:
            return False
        if self.target_classification_confidence != other.target_classification_confidence:
            return False
        if self.track_status != other.track_status:
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
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'position' field must be a sub message of type 'Pose'"
        self._position = value

    @builtins.property
    def position_std(self):
        """Message field 'position_std'."""
        return self._position_std

    @position_std.setter
    def position_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'position_std' field must be a sub message of type 'Pose'"
        self._position_std = value

    @builtins.property
    def nearest_point(self):
        """Message field 'nearest_point'."""
        return self._nearest_point

    @nearest_point.setter
    def nearest_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'nearest_point' field must be a sub message of type 'Pose'"
        self._nearest_point = value

    @builtins.property
    def nearest_point_std(self):
        """Message field 'nearest_point_std'."""
        return self._nearest_point_std

    @nearest_point_std.setter
    def nearest_point_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'nearest_point_std' field must be a sub message of type 'Pose'"
        self._nearest_point_std = value

    @builtins.property
    def velocity_rel(self):
        """Message field 'velocity_rel'."""
        return self._velocity_rel

    @velocity_rel.setter
    def velocity_rel(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_rel' field must be a sub message of type 'Twist'"
        self._velocity_rel = value

    @builtins.property
    def velocity_rel_std(self):
        """Message field 'velocity_rel_std'."""
        return self._velocity_rel_std

    @velocity_rel_std.setter
    def velocity_rel_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_rel_std' field must be a sub message of type 'Twist'"
        self._velocity_rel_std = value

    @builtins.property
    def velocity_abs(self):
        """Message field 'velocity_abs'."""
        return self._velocity_abs

    @velocity_abs.setter
    def velocity_abs(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_abs' field must be a sub message of type 'Twist'"
        self._velocity_abs = value

    @builtins.property
    def velocity_abs_std(self):
        """Message field 'velocity_abs_std'."""
        return self._velocity_abs_std

    @velocity_abs_std.setter
    def velocity_abs_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_abs_std' field must be a sub message of type 'Twist'"
        self._velocity_abs_std = value

    @builtins.property
    def acceleration_rel(self):
        """Message field 'acceleration_rel'."""
        return self._acceleration_rel

    @acceleration_rel.setter
    def acceleration_rel(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration_rel' field must be a sub message of type 'Accel'"
        self._acceleration_rel = value

    @builtins.property
    def acceleration_abs(self):
        """Message field 'acceleration_abs'."""
        return self._acceleration_abs

    @acceleration_abs.setter
    def acceleration_abs(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration_abs' field must be a sub message of type 'Accel'"
        self._acceleration_abs = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'dynamic_property' field must be an unsigned integer in [0, 4294967295]"
        self._dynamic_property = value

    @builtins.property
    def heading_angle(self):
        """Message field 'heading_angle'."""
        return self._heading_angle

    @heading_angle.setter
    def heading_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_angle = value

    @builtins.property
    def life_cycles(self):
        """Message field 'life_cycles'."""
        return self._life_cycles

    @life_cycles.setter
    def life_cycles(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'life_cycles' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'life_cycles' field must be an unsigned integer in [0, 4294967295]"
        self._life_cycles = value

    @builtins.property
    def box_lwh(self):
        """Message field 'box_lwh'."""
        return self._box_lwh

    @box_lwh.setter
    def box_lwh(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'box_lwh' field must be a sub message of type 'Point'"
        self._box_lwh = value

    @builtins.property
    def box_center_lat(self):
        """Message field 'box_center_lat'."""
        return self._box_center_lat

    @box_center_lat.setter
    def box_center_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'box_center_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'box_center_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._box_center_lat = value

    @builtins.property
    def box_center_lgt(self):
        """Message field 'box_center_lgt'."""
        return self._box_center_lgt

    @box_center_lgt.setter
    def box_center_lgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'box_center_lgt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'box_center_lgt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._box_center_lgt = value

    @builtins.property
    def snr(self):
        """Message field 'snr'."""
        return self._snr

    @snr.setter
    def snr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'snr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'snr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._snr = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'classification' field must be an unsigned integer in [0, 4294967295]"
        self._classification = value

    @builtins.property
    def obstacle_probability(self):
        """Message field 'obstacle_probability'."""
        return self._obstacle_probability

    @obstacle_probability.setter
    def obstacle_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'obstacle_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._obstacle_probability = value

    @builtins.property
    def probability_of_existence(self):
        """Message field 'probability_of_existence'."""
        return self._probability_of_existence

    @probability_of_existence.setter
    def probability_of_existence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability_of_existence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'probability_of_existence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._probability_of_existence = value

    @builtins.property
    def mirror_probability(self):
        """Message field 'mirror_probability'."""
        return self._mirror_probability

    @mirror_probability.setter
    def mirror_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mirror_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mirror_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mirror_probability = value

    @builtins.property
    def not_real_probability(self):
        """Message field 'not_real_probability'."""
        return self._not_real_probability

    @not_real_probability.setter
    def not_real_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'not_real_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'not_real_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._not_real_probability = value

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
    def target_classification_confidence(self):
        """Message field 'target_classification_confidence'."""
        return self._target_classification_confidence

    @target_classification_confidence.setter
    def target_classification_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_classification_confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_classification_confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_classification_confidence = value

    @builtins.property
    def track_status(self):
        """Message field 'track_status'."""
        return self._track_status

    @track_status.setter
    def track_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track_status' field must be an unsigned integer in [0, 4294967295]"
        self._track_status = value
