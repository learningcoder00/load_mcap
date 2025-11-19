# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/GodObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GodObstacle(type):
    """Metaclass of message 'GodObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBJECT_TYPE_UNKNOWN': 0,
        'OBJECT_TYPE_BAR': 1,
        'OBJECT_TYPE_CONE': 2,
        'OBJECT_TYPE_WATERHORSE': 3,
        'OBJECT_TYPE_BOARD': 4,
        'OBJECT_TYPE_BUCKET': 5,
        'OBJECT_TYPE_OTHER': 6,
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
                'deva_perception_msgs.msg.GodObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__god_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__god_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__god_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__god_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__god_obstacle

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
            'OBJECT_TYPE_BAR': cls.__constants['OBJECT_TYPE_BAR'],
            'OBJECT_TYPE_CONE': cls.__constants['OBJECT_TYPE_CONE'],
            'OBJECT_TYPE_WATERHORSE': cls.__constants['OBJECT_TYPE_WATERHORSE'],
            'OBJECT_TYPE_BOARD': cls.__constants['OBJECT_TYPE_BOARD'],
            'OBJECT_TYPE_BUCKET': cls.__constants['OBJECT_TYPE_BUCKET'],
            'OBJECT_TYPE_OTHER': cls.__constants['OBJECT_TYPE_OTHER'],
        }

    @property
    def OBJECT_TYPE_UNKNOWN(self):
        """Message constant 'OBJECT_TYPE_UNKNOWN'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_UNKNOWN']

    @property
    def OBJECT_TYPE_BAR(self):
        """Message constant 'OBJECT_TYPE_BAR'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_BAR']

    @property
    def OBJECT_TYPE_CONE(self):
        """Message constant 'OBJECT_TYPE_CONE'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_CONE']

    @property
    def OBJECT_TYPE_WATERHORSE(self):
        """Message constant 'OBJECT_TYPE_WATERHORSE'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_WATERHORSE']

    @property
    def OBJECT_TYPE_BOARD(self):
        """Message constant 'OBJECT_TYPE_BOARD'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_BOARD']

    @property
    def OBJECT_TYPE_BUCKET(self):
        """Message constant 'OBJECT_TYPE_BUCKET'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_BUCKET']

    @property
    def OBJECT_TYPE_OTHER(self):
        """Message constant 'OBJECT_TYPE_OTHER'."""
        return Metaclass_GodObstacle.__constants['OBJECT_TYPE_OTHER']


class GodObstacle(metaclass=Metaclass_GodObstacle):
    """
    Message class 'GodObstacle'.

    Constants:
      OBJECT_TYPE_UNKNOWN
      OBJECT_TYPE_BAR
      OBJECT_TYPE_CONE
      OBJECT_TYPE_WATERHORSE
      OBJECT_TYPE_BOARD
      OBJECT_TYPE_BUCKET
      OBJECT_TYPE_OTHER
    """

    __slots__ = [
        '_obstacle',
        '_object_type',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'object_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.object_type = kwargs.get('object_type', int())

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
