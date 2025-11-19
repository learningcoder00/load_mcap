# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/TrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLight(type):
    """Metaclass of message 'TrafficLight'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RED': 0,
        'YELLOW': 1,
        'GREEN': 2,
        'UNKNOW': 3,
        'CIRCLE': 0,
        'TURNLEFT': 1,
        'TURNRIGHT': 2,
        'GOSTRAIGHT': 3,
        'TURNAROUND': 4,
        'TURNLEFTANDAROUND': 5,
        'BICYCLE': 6,
        'SIDEWALK': 7,
        'COUNDDOWN': 8,
        'OTHERS': 9,
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
                'deva_perception_msgs.msg.TrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RED': cls.__constants['RED'],
            'YELLOW': cls.__constants['YELLOW'],
            'GREEN': cls.__constants['GREEN'],
            'UNKNOW': cls.__constants['UNKNOW'],
            'CIRCLE': cls.__constants['CIRCLE'],
            'TURNLEFT': cls.__constants['TURNLEFT'],
            'TURNRIGHT': cls.__constants['TURNRIGHT'],
            'GOSTRAIGHT': cls.__constants['GOSTRAIGHT'],
            'TURNAROUND': cls.__constants['TURNAROUND'],
            'TURNLEFTANDAROUND': cls.__constants['TURNLEFTANDAROUND'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'SIDEWALK': cls.__constants['SIDEWALK'],
            'COUNDDOWN': cls.__constants['COUNDDOWN'],
            'OTHERS': cls.__constants['OTHERS'],
        }

    @property
    def RED(self):
        """Message constant 'RED'."""
        return Metaclass_TrafficLight.__constants['RED']

    @property
    def YELLOW(self):
        """Message constant 'YELLOW'."""
        return Metaclass_TrafficLight.__constants['YELLOW']

    @property
    def GREEN(self):
        """Message constant 'GREEN'."""
        return Metaclass_TrafficLight.__constants['GREEN']

    @property
    def UNKNOW(self):
        """Message constant 'UNKNOW'."""
        return Metaclass_TrafficLight.__constants['UNKNOW']

    @property
    def CIRCLE(self):
        """Message constant 'CIRCLE'."""
        return Metaclass_TrafficLight.__constants['CIRCLE']

    @property
    def TURNLEFT(self):
        """Message constant 'TURNLEFT'."""
        return Metaclass_TrafficLight.__constants['TURNLEFT']

    @property
    def TURNRIGHT(self):
        """Message constant 'TURNRIGHT'."""
        return Metaclass_TrafficLight.__constants['TURNRIGHT']

    @property
    def GOSTRAIGHT(self):
        """Message constant 'GOSTRAIGHT'."""
        return Metaclass_TrafficLight.__constants['GOSTRAIGHT']

    @property
    def TURNAROUND(self):
        """Message constant 'TURNAROUND'."""
        return Metaclass_TrafficLight.__constants['TURNAROUND']

    @property
    def TURNLEFTANDAROUND(self):
        """Message constant 'TURNLEFTANDAROUND'."""
        return Metaclass_TrafficLight.__constants['TURNLEFTANDAROUND']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_TrafficLight.__constants['BICYCLE']

    @property
    def SIDEWALK(self):
        """Message constant 'SIDEWALK'."""
        return Metaclass_TrafficLight.__constants['SIDEWALK']

    @property
    def COUNDDOWN(self):
        """Message constant 'COUNDDOWN'."""
        return Metaclass_TrafficLight.__constants['COUNDDOWN']

    @property
    def OTHERS(self):
        """Message constant 'OTHERS'."""
        return Metaclass_TrafficLight.__constants['OTHERS']


class TrafficLight(metaclass=Metaclass_TrafficLight):
    """
    Message class 'TrafficLight'.

    Constants:
      RED
      YELLOW
      GREEN
      UNKNOW
      CIRCLE
      TURNLEFT
      TURNRIGHT
      GOSTRAIGHT
      TURNAROUND
      TURNLEFTANDAROUND
      BICYCLE
      SIDEWALK
      COUNDDOWN
      OTHERS
    """

    __slots__ = [
        '_perception_obstacle',
        '_color_type',
        '_shape_type',
        '_blink',
        '_remaining_time',
        '_bind_id',
    ]

    _fields_and_field_types = {
        'perception_obstacle': 'deva_perception_msgs/ObstacleCommon',
        'color_type': 'uint8',
        'shape_type': 'uint8',
        'blink': 'boolean',
        'remaining_time': 'double',
        'bind_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.perception_obstacle = kwargs.get('perception_obstacle', ObstacleCommon())
        self.color_type = kwargs.get('color_type', int())
        self.shape_type = kwargs.get('shape_type', int())
        self.blink = kwargs.get('blink', bool())
        self.remaining_time = kwargs.get('remaining_time', float())
        self.bind_id = kwargs.get('bind_id', str())

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
        if self.perception_obstacle != other.perception_obstacle:
            return False
        if self.color_type != other.color_type:
            return False
        if self.shape_type != other.shape_type:
            return False
        if self.blink != other.blink:
            return False
        if self.remaining_time != other.remaining_time:
            return False
        if self.bind_id != other.bind_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def perception_obstacle(self):
        """Message field 'perception_obstacle'."""
        return self._perception_obstacle

    @perception_obstacle.setter
    def perception_obstacle(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ObstacleCommon
            assert \
                isinstance(value, ObstacleCommon), \
                "The 'perception_obstacle' field must be a sub message of type 'ObstacleCommon'"
        self._perception_obstacle = value

    @builtins.property
    def color_type(self):
        """Message field 'color_type'."""
        return self._color_type

    @color_type.setter
    def color_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color_type' field must be an unsigned integer in [0, 255]"
        self._color_type = value

    @builtins.property
    def shape_type(self):
        """Message field 'shape_type'."""
        return self._shape_type

    @shape_type.setter
    def shape_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shape_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shape_type' field must be an unsigned integer in [0, 255]"
        self._shape_type = value

    @builtins.property
    def blink(self):
        """Message field 'blink'."""
        return self._blink

    @blink.setter
    def blink(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blink' field must be of type 'bool'"
        self._blink = value

    @builtins.property
    def remaining_time(self):
        """Message field 'remaining_time'."""
        return self._remaining_time

    @remaining_time.setter
    def remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remaining_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remaining_time = value

    @builtins.property
    def bind_id(self):
        """Message field 'bind_id'."""
        return self._bind_id

    @bind_id.setter
    def bind_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bind_id' field must be of type 'str'"
        self._bind_id = value
