# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/FixedObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'match_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixedObstacle(type):
    """Metaclass of message 'FixedObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CONE': 1,
        'BAR': 2,
        'BUCKET': 3,
        'WATERHORSE': 4,
        'CONSTRUCTION_SIGN': 5,
        'TRIANGLE': 6,
        'SPEED_BUMP': 7,
        'BRAKE_LEVER': 8,
        'FENCE': 9,
        'COVER': 10,
        'FOV120': 0,
        'FOV30': 1,
        'TRANS': 2,
        'FUSION': 3,
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
                'deva_perception_msgs.msg.FixedObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fixed_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fixed_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fixed_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fixed_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fixed_obstacle

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CONE': cls.__constants['CONE'],
            'BAR': cls.__constants['BAR'],
            'BUCKET': cls.__constants['BUCKET'],
            'WATERHORSE': cls.__constants['WATERHORSE'],
            'CONSTRUCTION_SIGN': cls.__constants['CONSTRUCTION_SIGN'],
            'TRIANGLE': cls.__constants['TRIANGLE'],
            'SPEED_BUMP': cls.__constants['SPEED_BUMP'],
            'BRAKE_LEVER': cls.__constants['BRAKE_LEVER'],
            'FENCE': cls.__constants['FENCE'],
            'COVER': cls.__constants['COVER'],
            'FOV120': cls.__constants['FOV120'],
            'FOV30': cls.__constants['FOV30'],
            'TRANS': cls.__constants['TRANS'],
            'FUSION': cls.__constants['FUSION'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_FixedObstacle.__constants['UNKNOWN']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_FixedObstacle.__constants['CONE']

    @property
    def BAR(self):
        """Message constant 'BAR'."""
        return Metaclass_FixedObstacle.__constants['BAR']

    @property
    def BUCKET(self):
        """Message constant 'BUCKET'."""
        return Metaclass_FixedObstacle.__constants['BUCKET']

    @property
    def WATERHORSE(self):
        """Message constant 'WATERHORSE'."""
        return Metaclass_FixedObstacle.__constants['WATERHORSE']

    @property
    def CONSTRUCTION_SIGN(self):
        """Message constant 'CONSTRUCTION_SIGN'."""
        return Metaclass_FixedObstacle.__constants['CONSTRUCTION_SIGN']

    @property
    def TRIANGLE(self):
        """Message constant 'TRIANGLE'."""
        return Metaclass_FixedObstacle.__constants['TRIANGLE']

    @property
    def SPEED_BUMP(self):
        """Message constant 'SPEED_BUMP'."""
        return Metaclass_FixedObstacle.__constants['SPEED_BUMP']

    @property
    def BRAKE_LEVER(self):
        """Message constant 'BRAKE_LEVER'."""
        return Metaclass_FixedObstacle.__constants['BRAKE_LEVER']

    @property
    def FENCE(self):
        """Message constant 'FENCE'."""
        return Metaclass_FixedObstacle.__constants['FENCE']

    @property
    def COVER(self):
        """Message constant 'COVER'."""
        return Metaclass_FixedObstacle.__constants['COVER']

    @property
    def FOV120(self):
        """Message constant 'FOV120'."""
        return Metaclass_FixedObstacle.__constants['FOV120']

    @property
    def FOV30(self):
        """Message constant 'FOV30'."""
        return Metaclass_FixedObstacle.__constants['FOV30']

    @property
    def TRANS(self):
        """Message constant 'TRANS'."""
        return Metaclass_FixedObstacle.__constants['TRANS']

    @property
    def FUSION(self):
        """Message constant 'FUSION'."""
        return Metaclass_FixedObstacle.__constants['FUSION']


class FixedObstacle(metaclass=Metaclass_FixedObstacle):
    """
    Message class 'FixedObstacle'.

    Constants:
      UNKNOWN
      CONE
      BAR
      BUCKET
      WATERHORSE
      CONSTRUCTION_SIGN
      TRIANGLE
      SPEED_BUMP
      BRAKE_LEVER
      FENCE
      COVER
      FOV120
      FOV30
      TRANS
      FUSION
    """

    __slots__ = [
        '_obstacle',
        '_fixed_obstacle_type',
        '_det_score',
        '_source',
        '_match_indices',
        '_extra_infos',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'fixed_obstacle_type': 'uint8',
        'det_score': 'float',
        'source': 'uint8',
        'match_indices': 'sequence<int32>',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.fixed_obstacle_type = kwargs.get('fixed_obstacle_type', int())
        self.det_score = kwargs.get('det_score', float())
        self.source = kwargs.get('source', int())
        self.match_indices = array.array('i', kwargs.get('match_indices', []))
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
        if self.fixed_obstacle_type != other.fixed_obstacle_type:
            return False
        if self.det_score != other.det_score:
            return False
        if self.source != other.source:
            return False
        if self.match_indices != other.match_indices:
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
    def fixed_obstacle_type(self):
        """Message field 'fixed_obstacle_type'."""
        return self._fixed_obstacle_type

    @fixed_obstacle_type.setter
    def fixed_obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fixed_obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fixed_obstacle_type' field must be an unsigned integer in [0, 255]"
        self._fixed_obstacle_type = value

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
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def match_indices(self):
        """Message field 'match_indices'."""
        return self._match_indices

    @match_indices.setter
    def match_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'match_indices' array.array() must have the type code of 'i'"
            self._match_indices = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'match_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._match_indices = array.array('i', value)

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
