# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RVObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RVObstacle(type):
    """Metaclass of message 'RVObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAR': 0,
        'BUS': 1,
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
                'deva_perception_msgs.msg.RVObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_obstacle

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAR': cls.__constants['CAR'],
            'BUS': cls.__constants['BUS'],
        }

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_RVObstacle.__constants['CAR']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_RVObstacle.__constants['BUS']


class RVObstacle(metaclass=Metaclass_RVObstacle):
    """
    Message class 'RVObstacle'.

    Constants:
      CAR
      BUS
    """

    __slots__ = [
        '_type',
        '_score',
        '_distance',
        '_bbox2d',
    ]

    _fields_and_field_types = {
        'type': 'uint32',
        'score': 'double',
        'distance': 'double',
        'bbox2d': 'deva_common_msgs/BoundingBox2d',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.score = kwargs.get('score', float())
        self.distance = kwargs.get('distance', float())
        from deva_common_msgs.msg import BoundingBox2d
        self.bbox2d = kwargs.get('bbox2d', BoundingBox2d())

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
        if self.type != other.type:
            return False
        if self.score != other.score:
            return False
        if self.distance != other.distance:
            return False
        if self.bbox2d != other.bbox2d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

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
