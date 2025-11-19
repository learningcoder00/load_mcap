# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RVDynObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RVDynObstacle(type):
    """Metaclass of message 'RVDynObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CAR': 1,
        'TRUCK': 2,
        'CONSTRUCTION_VEHICLE': 3,
        'BUS': 4,
        'MOTORCYCLE': 5,
        'BICYCLE': 6,
        'TRICYCLE': 7,
        'CYCLIST': 8,
        'PEDESTRIAN': 9,
        'ANIMAL': 10,
        'NO_DIRECTION': 0,
        'TURN_LEFT': 1,
        'TURN_RIGHT': 2,
        'DIRECTION_UNKNOWN': 3,
        'BRAKE_UNKNOWN': 0,
        'BRAKE_OFF': 1,
        'BRAKE_ON': 2,
        'HAZARD_UNKNOWN': 0,
        'HAZARD_OFF': 1,
        'HAZARD_ON': 2,
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
                'deva_perception_msgs.msg.RVDynObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_dyn_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_dyn_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_dyn_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_dyn_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_dyn_obstacle

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

            from deva_common_msgs.msg import GroundPoint
            if GroundPoint.__class__._TYPE_SUPPORT is None:
                GroundPoint.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

            from deva_perception_msgs.msg import SubclassificationType
            if SubclassificationType.__class__._TYPE_SUPPORT is None:
                SubclassificationType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'CONSTRUCTION_VEHICLE': cls.__constants['CONSTRUCTION_VEHICLE'],
            'BUS': cls.__constants['BUS'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'TRICYCLE': cls.__constants['TRICYCLE'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'ANIMAL': cls.__constants['ANIMAL'],
            'NO_DIRECTION': cls.__constants['NO_DIRECTION'],
            'TURN_LEFT': cls.__constants['TURN_LEFT'],
            'TURN_RIGHT': cls.__constants['TURN_RIGHT'],
            'DIRECTION_UNKNOWN': cls.__constants['DIRECTION_UNKNOWN'],
            'BRAKE_UNKNOWN': cls.__constants['BRAKE_UNKNOWN'],
            'BRAKE_OFF': cls.__constants['BRAKE_OFF'],
            'BRAKE_ON': cls.__constants['BRAKE_ON'],
            'HAZARD_UNKNOWN': cls.__constants['HAZARD_UNKNOWN'],
            'HAZARD_OFF': cls.__constants['HAZARD_OFF'],
            'HAZARD_ON': cls.__constants['HAZARD_ON'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_RVDynObstacle.__constants['UNKNOWN']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_RVDynObstacle.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_RVDynObstacle.__constants['TRUCK']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_RVDynObstacle.__constants['CONSTRUCTION_VEHICLE']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_RVDynObstacle.__constants['BUS']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_RVDynObstacle.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_RVDynObstacle.__constants['BICYCLE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_RVDynObstacle.__constants['TRICYCLE']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_RVDynObstacle.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_RVDynObstacle.__constants['PEDESTRIAN']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_RVDynObstacle.__constants['ANIMAL']

    @property
    def NO_DIRECTION(self):
        """Message constant 'NO_DIRECTION'."""
        return Metaclass_RVDynObstacle.__constants['NO_DIRECTION']

    @property
    def TURN_LEFT(self):
        """Message constant 'TURN_LEFT'."""
        return Metaclass_RVDynObstacle.__constants['TURN_LEFT']

    @property
    def TURN_RIGHT(self):
        """Message constant 'TURN_RIGHT'."""
        return Metaclass_RVDynObstacle.__constants['TURN_RIGHT']

    @property
    def DIRECTION_UNKNOWN(self):
        """Message constant 'DIRECTION_UNKNOWN'."""
        return Metaclass_RVDynObstacle.__constants['DIRECTION_UNKNOWN']

    @property
    def BRAKE_UNKNOWN(self):
        """Message constant 'BRAKE_UNKNOWN'."""
        return Metaclass_RVDynObstacle.__constants['BRAKE_UNKNOWN']

    @property
    def BRAKE_OFF(self):
        """Message constant 'BRAKE_OFF'."""
        return Metaclass_RVDynObstacle.__constants['BRAKE_OFF']

    @property
    def BRAKE_ON(self):
        """Message constant 'BRAKE_ON'."""
        return Metaclass_RVDynObstacle.__constants['BRAKE_ON']

    @property
    def HAZARD_UNKNOWN(self):
        """Message constant 'HAZARD_UNKNOWN'."""
        return Metaclass_RVDynObstacle.__constants['HAZARD_UNKNOWN']

    @property
    def HAZARD_OFF(self):
        """Message constant 'HAZARD_OFF'."""
        return Metaclass_RVDynObstacle.__constants['HAZARD_OFF']

    @property
    def HAZARD_ON(self):
        """Message constant 'HAZARD_ON'."""
        return Metaclass_RVDynObstacle.__constants['HAZARD_ON']


class RVDynObstacle(metaclass=Metaclass_RVDynObstacle):
    """
    Message class 'RVDynObstacle'.

    Constants:
      UNKNOWN
      CAR
      TRUCK
      CONSTRUCTION_VEHICLE
      BUS
      MOTORCYCLE
      BICYCLE
      TRICYCLE
      CYCLIST
      PEDESTRIAN
      ANIMAL
      NO_DIRECTION
      TURN_LEFT
      TURN_RIGHT
      DIRECTION_UNKNOWN
      BRAKE_UNKNOWN
      BRAKE_OFF
      BRAKE_ON
      HAZARD_UNKNOWN
      HAZARD_OFF
      HAZARD_ON
    """

    __slots__ = [
        '_obstacle',
        '_dynamic_obstacle_type',
        '_det_score',
        '_bbox',
        '_head_bbox',
        '_tail_bbox',
        '_ground_points',
        '_full_occ_score',
        '_head_occ_score',
        '_tail_occ_score',
        '_full_trunc_score',
        '_head_trunc_score',
        '_tail_trunc_score',
        '_ped_bbox',
        '_subclassification_type',
        '_subclass_score',
        '_light_valid',
        '_turn_type',
        '_turn_score',
        '_brake_type',
        '_brake_score',
        '_hazard_type',
        '_hazard_score',
        '_extra_infos',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'dynamic_obstacle_type': 'uint8',
        'det_score': 'float',
        'bbox': 'deva_common_msgs/BoundingBox2d',
        'head_bbox': 'deva_common_msgs/BoundingBox2d',
        'tail_bbox': 'deva_common_msgs/BoundingBox2d',
        'ground_points': 'sequence<deva_common_msgs/GroundPoint>',
        'full_occ_score': 'float',
        'head_occ_score': 'float',
        'tail_occ_score': 'float',
        'full_trunc_score': 'float',
        'head_trunc_score': 'float',
        'tail_trunc_score': 'float',
        'ped_bbox': 'deva_common_msgs/BoundingBox2d',
        'subclassification_type': 'deva_perception_msgs/SubclassificationType',
        'subclass_score': 'float',
        'light_valid': 'boolean',
        'turn_type': 'uint8',
        'turn_score': 'float',
        'brake_type': 'uint8',
        'brake_score': 'float',
        'hazard_type': 'uint8',
        'hazard_score': 'float',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'GroundPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'SubclassificationType'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.dynamic_obstacle_type = kwargs.get('dynamic_obstacle_type', int())
        self.det_score = kwargs.get('det_score', float())
        from deva_common_msgs.msg import BoundingBox2d
        self.bbox = kwargs.get('bbox', BoundingBox2d())
        from deva_common_msgs.msg import BoundingBox2d
        self.head_bbox = kwargs.get('head_bbox', BoundingBox2d())
        from deva_common_msgs.msg import BoundingBox2d
        self.tail_bbox = kwargs.get('tail_bbox', BoundingBox2d())
        self.ground_points = kwargs.get('ground_points', [])
        self.full_occ_score = kwargs.get('full_occ_score', float())
        self.head_occ_score = kwargs.get('head_occ_score', float())
        self.tail_occ_score = kwargs.get('tail_occ_score', float())
        self.full_trunc_score = kwargs.get('full_trunc_score', float())
        self.head_trunc_score = kwargs.get('head_trunc_score', float())
        self.tail_trunc_score = kwargs.get('tail_trunc_score', float())
        from deva_common_msgs.msg import BoundingBox2d
        self.ped_bbox = kwargs.get('ped_bbox', BoundingBox2d())
        from deva_perception_msgs.msg import SubclassificationType
        self.subclassification_type = kwargs.get('subclassification_type', SubclassificationType())
        self.subclass_score = kwargs.get('subclass_score', float())
        self.light_valid = kwargs.get('light_valid', bool())
        self.turn_type = kwargs.get('turn_type', int())
        self.turn_score = kwargs.get('turn_score', float())
        self.brake_type = kwargs.get('brake_type', int())
        self.brake_score = kwargs.get('brake_score', float())
        self.hazard_type = kwargs.get('hazard_type', int())
        self.hazard_score = kwargs.get('hazard_score', float())
        self.extra_infos = kwargs.get('extra_infos', [])

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
        if self.obstacle != other.obstacle:
            return False
        if self.dynamic_obstacle_type != other.dynamic_obstacle_type:
            return False
        if self.det_score != other.det_score:
            return False
        if self.bbox != other.bbox:
            return False
        if self.head_bbox != other.head_bbox:
            return False
        if self.tail_bbox != other.tail_bbox:
            return False
        if self.ground_points != other.ground_points:
            return False
        if self.full_occ_score != other.full_occ_score:
            return False
        if self.head_occ_score != other.head_occ_score:
            return False
        if self.tail_occ_score != other.tail_occ_score:
            return False
        if self.full_trunc_score != other.full_trunc_score:
            return False
        if self.head_trunc_score != other.head_trunc_score:
            return False
        if self.tail_trunc_score != other.tail_trunc_score:
            return False
        if self.ped_bbox != other.ped_bbox:
            return False
        if self.subclassification_type != other.subclassification_type:
            return False
        if self.subclass_score != other.subclass_score:
            return False
        if self.light_valid != other.light_valid:
            return False
        if self.turn_type != other.turn_type:
            return False
        if self.turn_score != other.turn_score:
            return False
        if self.brake_type != other.brake_type:
            return False
        if self.brake_score != other.brake_score:
            return False
        if self.hazard_type != other.hazard_type:
            return False
        if self.hazard_score != other.hazard_score:
            return False
        if self.extra_infos != other.extra_infos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obstacle(self):
        """Message field 'obstacle'."""
        return self._obstacle

    @obstacle.setter
    def obstacle(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ObstacleCommon
            assert \
                isinstance(value, ObstacleCommon), \
                "The 'obstacle' field must be a sub message of type 'ObstacleCommon'"
        self._obstacle = value

    @builtins.property
    def dynamic_obstacle_type(self):
        """Message field 'dynamic_obstacle_type'."""
        return self._dynamic_obstacle_type

    @dynamic_obstacle_type.setter
    def dynamic_obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynamic_obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dynamic_obstacle_type' field must be an unsigned integer in [0, 255]"
        self._dynamic_obstacle_type = value

    @builtins.property
    def det_score(self):
        """Message field 'det_score'."""
        return self._det_score

    @det_score.setter
    def det_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'det_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'det_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._det_score = value

    @builtins.property
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'bbox' field must be a sub message of type 'BoundingBox2d'"
        self._bbox = value

    @builtins.property
    def head_bbox(self):
        """Message field 'head_bbox'."""
        return self._head_bbox

    @head_bbox.setter
    def head_bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'head_bbox' field must be a sub message of type 'BoundingBox2d'"
        self._head_bbox = value

    @builtins.property
    def tail_bbox(self):
        """Message field 'tail_bbox'."""
        return self._tail_bbox

    @tail_bbox.setter
    def tail_bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'tail_bbox' field must be a sub message of type 'BoundingBox2d'"
        self._tail_bbox = value

    @builtins.property
    def ground_points(self):
        """Message field 'ground_points'."""
        return self._ground_points

    @ground_points.setter
    def ground_points(self, value):
        if __debug__:
            from deva_common_msgs.msg import GroundPoint
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
                 all(isinstance(v, GroundPoint) for v in value) and
                 True), \
                "The 'ground_points' field must be a set or sequence and each value of type 'GroundPoint'"
        self._ground_points = value

    @builtins.property
    def full_occ_score(self):
        """Message field 'full_occ_score'."""
        return self._full_occ_score

    @full_occ_score.setter
    def full_occ_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_occ_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_occ_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_occ_score = value

    @builtins.property
    def head_occ_score(self):
        """Message field 'head_occ_score'."""
        return self._head_occ_score

    @head_occ_score.setter
    def head_occ_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_occ_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'head_occ_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._head_occ_score = value

    @builtins.property
    def tail_occ_score(self):
        """Message field 'tail_occ_score'."""
        return self._tail_occ_score

    @tail_occ_score.setter
    def tail_occ_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tail_occ_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tail_occ_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tail_occ_score = value

    @builtins.property
    def full_trunc_score(self):
        """Message field 'full_trunc_score'."""
        return self._full_trunc_score

    @full_trunc_score.setter
    def full_trunc_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_trunc_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_trunc_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_trunc_score = value

    @builtins.property
    def head_trunc_score(self):
        """Message field 'head_trunc_score'."""
        return self._head_trunc_score

    @head_trunc_score.setter
    def head_trunc_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_trunc_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'head_trunc_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._head_trunc_score = value

    @builtins.property
    def tail_trunc_score(self):
        """Message field 'tail_trunc_score'."""
        return self._tail_trunc_score

    @tail_trunc_score.setter
    def tail_trunc_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tail_trunc_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tail_trunc_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tail_trunc_score = value

    @builtins.property
    def ped_bbox(self):
        """Message field 'ped_bbox'."""
        return self._ped_bbox

    @ped_bbox.setter
    def ped_bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'ped_bbox' field must be a sub message of type 'BoundingBox2d'"
        self._ped_bbox = value

    @builtins.property
    def subclassification_type(self):
        """Message field 'subclassification_type'."""
        return self._subclassification_type

    @subclassification_type.setter
    def subclassification_type(self, value):
        if __debug__:
            from deva_perception_msgs.msg import SubclassificationType
            assert \
                isinstance(value, SubclassificationType), \
                "The 'subclassification_type' field must be a sub message of type 'SubclassificationType'"
        self._subclassification_type = value

    @builtins.property
    def subclass_score(self):
        """Message field 'subclass_score'."""
        return self._subclass_score

    @subclass_score.setter
    def subclass_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'subclass_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'subclass_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._subclass_score = value

    @builtins.property
    def light_valid(self):
        """Message field 'light_valid'."""
        return self._light_valid

    @light_valid.setter
    def light_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'light_valid' field must be of type 'bool'"
        self._light_valid = value

    @builtins.property
    def turn_type(self):
        """Message field 'turn_type'."""
        return self._turn_type

    @turn_type.setter
    def turn_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_type' field must be an unsigned integer in [0, 255]"
        self._turn_type = value

    @builtins.property
    def turn_score(self):
        """Message field 'turn_score'."""
        return self._turn_score

    @turn_score.setter
    def turn_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turn_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turn_score = value

    @builtins.property
    def brake_type(self):
        """Message field 'brake_type'."""
        return self._brake_type

    @brake_type.setter
    def brake_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_type' field must be an unsigned integer in [0, 255]"
        self._brake_type = value

    @builtins.property
    def brake_score(self):
        """Message field 'brake_score'."""
        return self._brake_score

    @brake_score.setter
    def brake_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_score = value

    @builtins.property
    def hazard_type(self):
        """Message field 'hazard_type'."""
        return self._hazard_type

    @hazard_type.setter
    def hazard_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hazard_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hazard_type' field must be an unsigned integer in [0, 255]"
        self._hazard_type = value

    @builtins.property
    def hazard_score(self):
        """Message field 'hazard_score'."""
        return self._hazard_score

    @hazard_score.setter
    def hazard_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hazard_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hazard_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hazard_score = value

    @builtins.property
    def extra_infos(self):
        """Message field 'extra_infos'."""
        return self._extra_infos

    @extra_infos.setter
    def extra_infos(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ExtraInfo
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
                 all(isinstance(v, ExtraInfo) for v in value) and
                 True), \
                "The 'extra_infos' field must be a set or sequence and each value of type 'ExtraInfo'"
        self._extra_infos = value
