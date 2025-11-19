# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/AEBObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AEBObstacle(type):
    """Metaclass of message 'AEBObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAR': 0,
        'TRUCK': 1,
        'CONSTRUCTION_VEHICLE': 2,
        'BUS': 3,
        'MOTORCYCLE': 4,
        'BICYCLE': 5,
        'TRICYCLE': 6,
        'CYCLIST': 7,
        'PEDESTRIAN': 8,
        'UNKNOWN': 9,
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
                'deva_perception_msgs.msg.AEBObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aeb_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aeb_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aeb_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aeb_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aeb_obstacle

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

            from deva_common_msgs.msg import GroundPoint
            if GroundPoint.__class__._TYPE_SUPPORT is None:
                GroundPoint.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

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
            'UNKNOWN': cls.__constants['UNKNOWN'],
        }

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_AEBObstacle.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_AEBObstacle.__constants['TRUCK']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_AEBObstacle.__constants['CONSTRUCTION_VEHICLE']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_AEBObstacle.__constants['BUS']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_AEBObstacle.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_AEBObstacle.__constants['BICYCLE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_AEBObstacle.__constants['TRICYCLE']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_AEBObstacle.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_AEBObstacle.__constants['PEDESTRIAN']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_AEBObstacle.__constants['UNKNOWN']


class AEBObstacle(metaclass=Metaclass_AEBObstacle):
    """
    Message class 'AEBObstacle'.

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
      UNKNOWN
    """

    __slots__ = [
        '_obstacle',
        '_obstacle_type',
        '_head_bbox',
        '_tail_bbox',
        '_ground_points',
        '_full_occ_score',
        '_head_occ_score',
        '_tail_occ_score',
        '_full_trunc_score',
        '_head_trunc_score',
        '_tail_trunc_score',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'obstacle_type': 'uint8',
        'head_bbox': 'deva_common_msgs/BoundingBox2d',
        'tail_bbox': 'deva_common_msgs/BoundingBox2d',
        'ground_points': 'sequence<deva_common_msgs/GroundPoint>',
        'full_occ_score': 'float',
        'head_occ_score': 'float',
        'tail_occ_score': 'float',
        'full_trunc_score': 'float',
        'head_trunc_score': 'float',
        'tail_trunc_score': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'GroundPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.obstacle_type = kwargs.get('obstacle_type', int())
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
        if self.obstacle_type != other.obstacle_type:
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
    def obstacle_type(self):
        """Message field 'obstacle_type'."""
        return self._obstacle_type

    @obstacle_type.setter
    def obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obstacle_type' field must be an unsigned integer in [0, 255]"
        self._obstacle_type = value

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
