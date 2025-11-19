# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/MovingObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovingObstacle(type):
    """Metaclass of message 'MovingObstacle'."""

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
                'deva_perception_msgs.msg.MovingObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__moving_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__moving_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__moving_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__moving_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__moving_obstacle

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

            from geometry_msgs.msg import Accel
            if Accel.__class__._TYPE_SUPPORT is None:
                Accel.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

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
        return Metaclass_MovingObstacle.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_MovingObstacle.__constants['TRUCK']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_MovingObstacle.__constants['CONSTRUCTION_VEHICLE']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_MovingObstacle.__constants['BUS']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_MovingObstacle.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_MovingObstacle.__constants['BICYCLE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_MovingObstacle.__constants['TRICYCLE']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_MovingObstacle.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_MovingObstacle.__constants['PEDESTRIAN']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MovingObstacle.__constants['UNKNOWN']


class MovingObstacle(metaclass=Metaclass_MovingObstacle):
    """
    Message class 'MovingObstacle'.

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
        '_moving_obstacle_type',
        '_det_type',
        '_velocity',
        '_acceleration',
        '_velocity_var',
        '_acceleration_var',
        '_is_predict',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'moving_obstacle_type': 'uint8',
        'det_type': 'string',
        'velocity': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Accel',
        'velocity_var': 'geometry_msgs/Twist',
        'acceleration_var': 'geometry_msgs/Accel',
        'is_predict': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.moving_obstacle_type = kwargs.get('moving_obstacle_type', int())
        self.det_type = kwargs.get('det_type', str())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration = kwargs.get('acceleration', Accel())
        from geometry_msgs.msg import Twist
        self.velocity_var = kwargs.get('velocity_var', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration_var = kwargs.get('acceleration_var', Accel())
        self.is_predict = kwargs.get('is_predict', bool())

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
        if self.moving_obstacle_type != other.moving_obstacle_type:
            return False
        if self.det_type != other.det_type:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.velocity_var != other.velocity_var:
            return False
        if self.acceleration_var != other.acceleration_var:
            return False
        if self.is_predict != other.is_predict:
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
    def moving_obstacle_type(self):
        """Message field 'moving_obstacle_type'."""
        return self._moving_obstacle_type

    @moving_obstacle_type.setter
    def moving_obstacle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_obstacle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'moving_obstacle_type' field must be an unsigned integer in [0, 255]"
        self._moving_obstacle_type = value

    @builtins.property
    def det_type(self):
        """Message field 'det_type'."""
        return self._det_type

    @det_type.setter
    def det_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'det_type' field must be of type 'str'"
        self._det_type = value

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
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration' field must be a sub message of type 'Accel'"
        self._acceleration = value

    @builtins.property
    def velocity_var(self):
        """Message field 'velocity_var'."""
        return self._velocity_var

    @velocity_var.setter
    def velocity_var(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity_var' field must be a sub message of type 'Twist'"
        self._velocity_var = value

    @builtins.property
    def acceleration_var(self):
        """Message field 'acceleration_var'."""
        return self._acceleration_var

    @acceleration_var.setter
    def acceleration_var(self, value):
        if __debug__:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration_var' field must be a sub message of type 'Accel'"
        self._acceleration_var = value

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
