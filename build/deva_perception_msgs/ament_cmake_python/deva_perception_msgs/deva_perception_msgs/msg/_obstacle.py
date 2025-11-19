# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Obstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacle(type):
    """Metaclass of message 'Obstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAR': 1,
        'TRUCK': 2,
        'CONSTRUCTION_VEHICLE': 3,
        'BUS': 4,
        'MOTORCYCLE': 5,
        'BICYCLE': 6,
        'TRICYCLE': 7,
        'CYCLIST': 8,
        'PEDESTRIAN': 9,
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
                'deva_perception_msgs.msg.Obstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

            from deva_perception_msgs.msg import DictInfo
            if DictInfo.__class__._TYPE_SUPPORT is None:
                DictInfo.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'CONSTRUCTION_VEHICLE': cls.__constants['CONSTRUCTION_VEHICLE'],
            'BUS': cls.__constants['BUS'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'TRICYCLE': cls.__constants['TRICYCLE'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
        }

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_Obstacle.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_Obstacle.__constants['TRUCK']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_Obstacle.__constants['CONSTRUCTION_VEHICLE']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_Obstacle.__constants['BUS']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_Obstacle.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_Obstacle.__constants['BICYCLE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_Obstacle.__constants['TRICYCLE']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_Obstacle.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_Obstacle.__constants['PEDESTRIAN']


class Obstacle(metaclass=Metaclass_Obstacle):
    """
    Message class 'Obstacle'.

    Constants:
      CAR
      TRUCK
      CONSTRUCTION_VEHICLE
      BUS
      MOTORCYCLE
      BICYCLE
      TRICYCLE
      CYCLIST
      PEDESTRIAN
    """

    __slots__ = [
        '_header',
        '_id',
        '_pose',
        '_dimensions',
        '_detection_velocity',
        '_velocity',
        '_velocity_variance',
        '_acceleration',
        '_acceleration_variance',
        '_tracking_time',
        '_track_length',
        '_score',
        '_is_predict',
        '_type',
        '_bbox2d',
        '_extra_info',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint32',
        'pose': 'geometry_msgs/Pose',
        'dimensions': 'geometry_msgs/Vector3',
        'detection_velocity': 'geometry_msgs/Twist',
        'velocity': 'geometry_msgs/Twist',
        'velocity_variance': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Twist',
        'acceleration_variance': 'geometry_msgs/Twist',
        'tracking_time': 'double',
        'track_length': 'uint32',
        'score': 'double',
        'is_predict': 'boolean',
        'type': 'uint32',
        'bbox2d': 'deva_common_msgs/BoundingBox2d',
        'extra_info': 'sequence<deva_perception_msgs/DictInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'DictInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.dimensions = kwargs.get('dimensions', Vector3())
        from geometry_msgs.msg import Twist
        self.detection_velocity = kwargs.get('detection_velocity', Twist())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        from geometry_msgs.msg import Twist
        self.velocity_variance = kwargs.get('velocity_variance', Twist())
        from geometry_msgs.msg import Twist
        self.acceleration = kwargs.get('acceleration', Twist())
        from geometry_msgs.msg import Twist
        self.acceleration_variance = kwargs.get('acceleration_variance', Twist())
        self.tracking_time = kwargs.get('tracking_time', float())
        self.track_length = kwargs.get('track_length', int())
        self.score = kwargs.get('score', float())
        self.is_predict = kwargs.get('is_predict', bool())
        self.type = kwargs.get('type', int())
        from deva_common_msgs.msg import BoundingBox2d
        self.bbox2d = kwargs.get('bbox2d', BoundingBox2d())
        self.extra_info = kwargs.get('extra_info', [])

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
        if self.id != other.id:
            return False
        if self.pose != other.pose:
            return False
        if self.dimensions != other.dimensions:
            return False
        if self.detection_velocity != other.detection_velocity:
            return False
        if self.velocity != other.velocity:
            return False
        if self.velocity_variance != other.velocity_variance:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.acceleration_variance != other.acceleration_variance:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.track_length != other.track_length:
            return False
        if self.score != other.score:
            return False
        if self.is_predict != other.is_predict:
            return False
        if self.type != other.type:
            return False
        if self.bbox2d != other.bbox2d:
            return False
        if self.extra_info != other.extra_info:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'dimensions' field must be a sub message of type 'Vector3'"
        self._dimensions = value

    @builtins.property
    def detection_velocity(self):
        """Message field 'detection_velocity'."""
        return self._detection_velocity

    @detection_velocity.setter
    def detection_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'detection_velocity' field must be a sub message of type 'Twist'"
        self._detection_velocity = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

    @builtins.property
    def velocity_variance(self):
        """Message field 'velocity_variance'."""
        return self._velocity_variance

    @velocity_variance.setter
    def velocity_variance(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_variance' field must be a sub message of type 'Twist'"
        self._velocity_variance = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'acceleration' field must be a sub message of type 'Twist'"
        self._acceleration = value

    @builtins.property
    def acceleration_variance(self):
        """Message field 'acceleration_variance'."""
        return self._acceleration_variance

    @acceleration_variance.setter
    def acceleration_variance(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'acceleration_variance' field must be a sub message of type 'Twist'"
        self._acceleration_variance = value

    @builtins.property
    def tracking_time(self):
        """Message field 'tracking_time'."""
        return self._tracking_time

    @tracking_time.setter
    def tracking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_time = value

    @builtins.property
    def track_length(self):
        """Message field 'track_length'."""
        return self._track_length

    @track_length.setter
    def track_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track_length' field must be an unsigned integer in [0, 4294967295]"
        self._track_length = value

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._score = value

    @builtins.property
    def is_predict(self):
        """Message field 'is_predict'."""
        return self._is_predict

    @is_predict.setter
    def is_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_predict' field must be of type 'bool'"
        self._is_predict = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def bbox2d(self):
        """Message field 'bbox2d'."""
        return self._bbox2d

    @bbox2d.setter
    def bbox2d(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'bbox2d' field must be a sub message of type 'BoundingBox2d'"
        self._bbox2d = value

    @builtins.property
    def extra_info(self):
        """Message field 'extra_info'."""
        return self._extra_info

    @extra_info.setter
    def extra_info(self, value):
        if __debug__:
            from deva_perception_msgs.msg import DictInfo
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DictInfo) for v in value) and
                 True), \
                "The 'extra_info' field must be a set or sequence and each value of type 'DictInfo'"
        self._extra_info = value
