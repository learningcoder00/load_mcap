# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/StaticObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StaticObstacle(type):
    """Metaclass of message 'StaticObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBJECT_TYPE_UNKNOWN': 0,
        'OBJECT_TYPE_STOPLINE': 1,
        'OBJECT_TYPE_JUNCTION': 2,
        'OBJECT_TYPE_LEFTTURN': 3,
        'OBJECT_TYPE_RIGHTTURN': 4,
        'OBJECT_TYPE_CROSSWALK': 5,
        'OBJECT_TYPE_SPEED_CONTROL': 6,
        'OBJECT_TYPE_CURB': 7,
        'OBJECT_TYPE_BARRIER': 8,
        'OBJECT_TYPE_SIGNAL': 9,
        'UNKOWN': 0,
        'PILLAR': 1,
        'SLOT_LIMITTER': 2,
        'SLOT_LOCK': 3,
        'CONE': 4,
        'SPEED_BUMP': 5,
        'SIGNAL': 6,
        'PARKING_WALLEDGE': 7,
        'PARKING_CURB': 8,
        'ULTRAOBS': 9,
        'FREE': 0,
        'LOCKED': 1,
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
                'deva_perception_msgs.msg.StaticObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__static_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__static_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__static_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__static_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__static_obstacle

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBJECT_TYPE_UNKNOWN': cls.__constants['OBJECT_TYPE_UNKNOWN'],
            'OBJECT_TYPE_STOPLINE': cls.__constants['OBJECT_TYPE_STOPLINE'],
            'OBJECT_TYPE_JUNCTION': cls.__constants['OBJECT_TYPE_JUNCTION'],
            'OBJECT_TYPE_LEFTTURN': cls.__constants['OBJECT_TYPE_LEFTTURN'],
            'OBJECT_TYPE_RIGHTTURN': cls.__constants['OBJECT_TYPE_RIGHTTURN'],
            'OBJECT_TYPE_CROSSWALK': cls.__constants['OBJECT_TYPE_CROSSWALK'],
            'OBJECT_TYPE_SPEED_CONTROL': cls.__constants['OBJECT_TYPE_SPEED_CONTROL'],
            'OBJECT_TYPE_CURB': cls.__constants['OBJECT_TYPE_CURB'],
            'OBJECT_TYPE_BARRIER': cls.__constants['OBJECT_TYPE_BARRIER'],
            'OBJECT_TYPE_SIGNAL': cls.__constants['OBJECT_TYPE_SIGNAL'],
            'UNKOWN': cls.__constants['UNKOWN'],
            'PILLAR': cls.__constants['PILLAR'],
            'SLOT_LIMITTER': cls.__constants['SLOT_LIMITTER'],
            'SLOT_LOCK': cls.__constants['SLOT_LOCK'],
            'CONE': cls.__constants['CONE'],
            'SPEED_BUMP': cls.__constants['SPEED_BUMP'],
            'SIGNAL': cls.__constants['SIGNAL'],
            'PARKING_WALLEDGE': cls.__constants['PARKING_WALLEDGE'],
            'PARKING_CURB': cls.__constants['PARKING_CURB'],
            'ULTRAOBS': cls.__constants['ULTRAOBS'],
            'FREE': cls.__constants['FREE'],
            'LOCKED': cls.__constants['LOCKED'],
        }

    @property
    def OBJECT_TYPE_UNKNOWN(self):
        """Message constant 'OBJECT_TYPE_UNKNOWN'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_UNKNOWN']

    @property
    def OBJECT_TYPE_STOPLINE(self):
        """Message constant 'OBJECT_TYPE_STOPLINE'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_STOPLINE']

    @property
    def OBJECT_TYPE_JUNCTION(self):
        """Message constant 'OBJECT_TYPE_JUNCTION'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_JUNCTION']

    @property
    def OBJECT_TYPE_LEFTTURN(self):
        """Message constant 'OBJECT_TYPE_LEFTTURN'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_LEFTTURN']

    @property
    def OBJECT_TYPE_RIGHTTURN(self):
        """Message constant 'OBJECT_TYPE_RIGHTTURN'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_RIGHTTURN']

    @property
    def OBJECT_TYPE_CROSSWALK(self):
        """Message constant 'OBJECT_TYPE_CROSSWALK'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_CROSSWALK']

    @property
    def OBJECT_TYPE_SPEED_CONTROL(self):
        """Message constant 'OBJECT_TYPE_SPEED_CONTROL'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_SPEED_CONTROL']

    @property
    def OBJECT_TYPE_CURB(self):
        """Message constant 'OBJECT_TYPE_CURB'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_CURB']

    @property
    def OBJECT_TYPE_BARRIER(self):
        """Message constant 'OBJECT_TYPE_BARRIER'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_BARRIER']

    @property
    def OBJECT_TYPE_SIGNAL(self):
        """Message constant 'OBJECT_TYPE_SIGNAL'."""
        return Metaclass_StaticObstacle.__constants['OBJECT_TYPE_SIGNAL']

    @property
    def UNKOWN(self):
        """Message constant 'UNKOWN'."""
        return Metaclass_StaticObstacle.__constants['UNKOWN']

    @property
    def PILLAR(self):
        """Message constant 'PILLAR'."""
        return Metaclass_StaticObstacle.__constants['PILLAR']

    @property
    def SLOT_LIMITTER(self):
        """Message constant 'SLOT_LIMITTER'."""
        return Metaclass_StaticObstacle.__constants['SLOT_LIMITTER']

    @property
    def SLOT_LOCK(self):
        """Message constant 'SLOT_LOCK'."""
        return Metaclass_StaticObstacle.__constants['SLOT_LOCK']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_StaticObstacle.__constants['CONE']

    @property
    def SPEED_BUMP(self):
        """Message constant 'SPEED_BUMP'."""
        return Metaclass_StaticObstacle.__constants['SPEED_BUMP']

    @property
    def SIGNAL(self):
        """Message constant 'SIGNAL'."""
        return Metaclass_StaticObstacle.__constants['SIGNAL']

    @property
    def PARKING_WALLEDGE(self):
        """Message constant 'PARKING_WALLEDGE'."""
        return Metaclass_StaticObstacle.__constants['PARKING_WALLEDGE']

    @property
    def PARKING_CURB(self):
        """Message constant 'PARKING_CURB'."""
        return Metaclass_StaticObstacle.__constants['PARKING_CURB']

    @property
    def ULTRAOBS(self):
        """Message constant 'ULTRAOBS'."""
        return Metaclass_StaticObstacle.__constants['ULTRAOBS']

    @property
    def FREE(self):
        """Message constant 'FREE'."""
        return Metaclass_StaticObstacle.__constants['FREE']

    @property
    def LOCKED(self):
        """Message constant 'LOCKED'."""
        return Metaclass_StaticObstacle.__constants['LOCKED']


class StaticObstacle(metaclass=Metaclass_StaticObstacle):
    """
    Message class 'StaticObstacle'.

    Constants:
      OBJECT_TYPE_UNKNOWN
      OBJECT_TYPE_STOPLINE
      OBJECT_TYPE_JUNCTION
      OBJECT_TYPE_LEFTTURN
      OBJECT_TYPE_RIGHTTURN
      OBJECT_TYPE_CROSSWALK
      OBJECT_TYPE_SPEED_CONTROL
      OBJECT_TYPE_CURB
      OBJECT_TYPE_BARRIER
      OBJECT_TYPE_SIGNAL
      UNKOWN
      PILLAR
      SLOT_LIMITTER
      SLOT_LOCK
      CONE
      SPEED_BUMP
      SIGNAL
      PARKING_WALLEDGE
      PARKING_CURB
      ULTRAOBS
      FREE
      LOCKED
    """

    __slots__ = [
        '_obstacle',
        '_object_type',
        '_static_obstacle_type',
        '_slot_lock_type',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'object_type': 'uint8',
        'static_obstacle_type': 'uint8',
        'slot_lock_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.object_type = kwargs.get('object_type', int())
        self.static_obstacle_type = kwargs.get('static_obstacle_type', int())
        self.slot_lock_type = kwargs.get('slot_lock_type', int())

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
        if self.object_type != other.object_type:
            return False
        if self.static_obstacle_type != other.static_obstacle_type:
            return False
        if self.slot_lock_type != other.slot_lock_type:
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
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_type' field must be an unsigned integer in [0, 255]"
        self._object_type = value

    @builtins.property
    def static_obstacle_type(self):
        """Message field 'static_obstacle_type'."""
        return self._static_obstacle_type

    @static_obstacle_type.setter
    def static_obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'static_obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'static_obstacle_type' field must be an unsigned integer in [0, 255]"
        self._static_obstacle_type = value

    @builtins.property
    def slot_lock_type(self):
        """Message field 'slot_lock_type'."""
        return self._slot_lock_type

    @slot_lock_type.setter
    def slot_lock_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot_lock_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'slot_lock_type' field must be an unsigned integer in [0, 255]"
        self._slot_lock_type = value
