# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/SteeringArrow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SteeringArrow(type):
    """Metaclass of message 'SteeringArrow'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'GUIDE_TURN': 1,
        'GUIDE_TURN_THROUGH': 2,
        'GUIDE_TURN_LEFT': 3,
        'GUIDE_TURN_RIGHT': 4,
        'GUIDE_LEFT': 5,
        'GUIDE_LEFT_THROUGH': 6,
        'GUIDE_LEFT_RIGHT': 7,
        'GUIDE_LEFT_THROUGH_RIGHT': 8,
        'GUIDE_THROUGH': 9,
        'GUIDE_THROUGH_RIGHT': 10,
        'GUIDE_RIGHT': 11,
        'FORBID_TURN': 12,
        'FORBID_LEFT': 13,
        'FORBID_LEFT_RIGHT': 14,
        'FORBID_THROUGH': 15,
        'FORBID_THROUGH_RIGHT': 16,
        'FORBID_THROUGH_LEFT': 17,
        'FORBID_RIGHT': 18,
        'MERGE_LEFT': 19,
        'MERGE_RIGHT': 20,
        'FORBID_LEFT_TURN': 21,
        'BUS_LANE': 22,
        'REVERSIBLE_LANE': 23,
        'NONMOTOR_LANE': 24,
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
                'deva_perception_msgs.msg.SteeringArrow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_arrow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_arrow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_arrow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_arrow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_arrow

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'GUIDE_TURN': cls.__constants['GUIDE_TURN'],
            'GUIDE_TURN_THROUGH': cls.__constants['GUIDE_TURN_THROUGH'],
            'GUIDE_TURN_LEFT': cls.__constants['GUIDE_TURN_LEFT'],
            'GUIDE_TURN_RIGHT': cls.__constants['GUIDE_TURN_RIGHT'],
            'GUIDE_LEFT': cls.__constants['GUIDE_LEFT'],
            'GUIDE_LEFT_THROUGH': cls.__constants['GUIDE_LEFT_THROUGH'],
            'GUIDE_LEFT_RIGHT': cls.__constants['GUIDE_LEFT_RIGHT'],
            'GUIDE_LEFT_THROUGH_RIGHT': cls.__constants['GUIDE_LEFT_THROUGH_RIGHT'],
            'GUIDE_THROUGH': cls.__constants['GUIDE_THROUGH'],
            'GUIDE_THROUGH_RIGHT': cls.__constants['GUIDE_THROUGH_RIGHT'],
            'GUIDE_RIGHT': cls.__constants['GUIDE_RIGHT'],
            'FORBID_TURN': cls.__constants['FORBID_TURN'],
            'FORBID_LEFT': cls.__constants['FORBID_LEFT'],
            'FORBID_LEFT_RIGHT': cls.__constants['FORBID_LEFT_RIGHT'],
            'FORBID_THROUGH': cls.__constants['FORBID_THROUGH'],
            'FORBID_THROUGH_RIGHT': cls.__constants['FORBID_THROUGH_RIGHT'],
            'FORBID_THROUGH_LEFT': cls.__constants['FORBID_THROUGH_LEFT'],
            'FORBID_RIGHT': cls.__constants['FORBID_RIGHT'],
            'MERGE_LEFT': cls.__constants['MERGE_LEFT'],
            'MERGE_RIGHT': cls.__constants['MERGE_RIGHT'],
            'FORBID_LEFT_TURN': cls.__constants['FORBID_LEFT_TURN'],
            'BUS_LANE': cls.__constants['BUS_LANE'],
            'REVERSIBLE_LANE': cls.__constants['REVERSIBLE_LANE'],
            'NONMOTOR_LANE': cls.__constants['NONMOTOR_LANE'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_SteeringArrow.__constants['UNKNOWN']

    @property
    def GUIDE_TURN(self):
        """Message constant 'GUIDE_TURN'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_TURN']

    @property
    def GUIDE_TURN_THROUGH(self):
        """Message constant 'GUIDE_TURN_THROUGH'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_TURN_THROUGH']

    @property
    def GUIDE_TURN_LEFT(self):
        """Message constant 'GUIDE_TURN_LEFT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_TURN_LEFT']

    @property
    def GUIDE_TURN_RIGHT(self):
        """Message constant 'GUIDE_TURN_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_TURN_RIGHT']

    @property
    def GUIDE_LEFT(self):
        """Message constant 'GUIDE_LEFT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_LEFT']

    @property
    def GUIDE_LEFT_THROUGH(self):
        """Message constant 'GUIDE_LEFT_THROUGH'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_LEFT_THROUGH']

    @property
    def GUIDE_LEFT_RIGHT(self):
        """Message constant 'GUIDE_LEFT_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_LEFT_RIGHT']

    @property
    def GUIDE_LEFT_THROUGH_RIGHT(self):
        """Message constant 'GUIDE_LEFT_THROUGH_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_LEFT_THROUGH_RIGHT']

    @property
    def GUIDE_THROUGH(self):
        """Message constant 'GUIDE_THROUGH'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_THROUGH']

    @property
    def GUIDE_THROUGH_RIGHT(self):
        """Message constant 'GUIDE_THROUGH_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_THROUGH_RIGHT']

    @property
    def GUIDE_RIGHT(self):
        """Message constant 'GUIDE_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['GUIDE_RIGHT']

    @property
    def FORBID_TURN(self):
        """Message constant 'FORBID_TURN'."""
        return Metaclass_SteeringArrow.__constants['FORBID_TURN']

    @property
    def FORBID_LEFT(self):
        """Message constant 'FORBID_LEFT'."""
        return Metaclass_SteeringArrow.__constants['FORBID_LEFT']

    @property
    def FORBID_LEFT_RIGHT(self):
        """Message constant 'FORBID_LEFT_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['FORBID_LEFT_RIGHT']

    @property
    def FORBID_THROUGH(self):
        """Message constant 'FORBID_THROUGH'."""
        return Metaclass_SteeringArrow.__constants['FORBID_THROUGH']

    @property
    def FORBID_THROUGH_RIGHT(self):
        """Message constant 'FORBID_THROUGH_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['FORBID_THROUGH_RIGHT']

    @property
    def FORBID_THROUGH_LEFT(self):
        """Message constant 'FORBID_THROUGH_LEFT'."""
        return Metaclass_SteeringArrow.__constants['FORBID_THROUGH_LEFT']

    @property
    def FORBID_RIGHT(self):
        """Message constant 'FORBID_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['FORBID_RIGHT']

    @property
    def MERGE_LEFT(self):
        """Message constant 'MERGE_LEFT'."""
        return Metaclass_SteeringArrow.__constants['MERGE_LEFT']

    @property
    def MERGE_RIGHT(self):
        """Message constant 'MERGE_RIGHT'."""
        return Metaclass_SteeringArrow.__constants['MERGE_RIGHT']

    @property
    def FORBID_LEFT_TURN(self):
        """Message constant 'FORBID_LEFT_TURN'."""
        return Metaclass_SteeringArrow.__constants['FORBID_LEFT_TURN']

    @property
    def BUS_LANE(self):
        """Message constant 'BUS_LANE'."""
        return Metaclass_SteeringArrow.__constants['BUS_LANE']

    @property
    def REVERSIBLE_LANE(self):
        """Message constant 'REVERSIBLE_LANE'."""
        return Metaclass_SteeringArrow.__constants['REVERSIBLE_LANE']

    @property
    def NONMOTOR_LANE(self):
        """Message constant 'NONMOTOR_LANE'."""
        return Metaclass_SteeringArrow.__constants['NONMOTOR_LANE']


class SteeringArrow(metaclass=Metaclass_SteeringArrow):
    """
    Message class 'SteeringArrow'.

    Constants:
      UNKNOWN
      GUIDE_TURN
      GUIDE_TURN_THROUGH
      GUIDE_TURN_LEFT
      GUIDE_TURN_RIGHT
      GUIDE_LEFT
      GUIDE_LEFT_THROUGH
      GUIDE_LEFT_RIGHT
      GUIDE_LEFT_THROUGH_RIGHT
      GUIDE_THROUGH
      GUIDE_THROUGH_RIGHT
      GUIDE_RIGHT
      FORBID_TURN
      FORBID_LEFT
      FORBID_LEFT_RIGHT
      FORBID_THROUGH
      FORBID_THROUGH_RIGHT
      FORBID_THROUGH_LEFT
      FORBID_RIGHT
      MERGE_LEFT
      MERGE_RIGHT
      FORBID_LEFT_TURN
      BUS_LANE
      REVERSIBLE_LANE
      NONMOTOR_LANE
    """

    __slots__ = [
        '_id',
        '_confidence',
        '_center_point',
        '_vertices',
        '_center_line_id',
        '_property',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'confidence': 'double',
        'center_point': 'geometry_msgs/Point',
        'vertices': 'sequence<geometry_msgs/Point>',
        'center_line_id': 'int32',
        'property': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.confidence = kwargs.get('confidence', float())
        from geometry_msgs.msg import Point
        self.center_point = kwargs.get('center_point', Point())
        self.vertices = kwargs.get('vertices', [])
        self.center_line_id = kwargs.get('center_line_id', int())
        self.property = kwargs.get('property', int())

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
        if self.confidence != other.confidence:
            return False
        if self.center_point != other.center_point:
            return False
        if self.vertices != other.vertices:
            return False
        if self.center_line_id != other.center_line_id:
            return False
        if self.property != other.property:
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
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def center_point(self):
        """Message field 'center_point'."""
        return self._center_point

    @center_point.setter
    def center_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'center_point' field must be a sub message of type 'Point'"
        self._center_point = value

    @builtins.property
    def vertices(self):
        """Message field 'vertices'."""
        return self._vertices

    @vertices.setter
    def vertices(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'vertices' field must be a set or sequence and each value of type 'Point'"
        self._vertices = value

    @builtins.property
    def center_line_id(self):
        """Message field 'center_line_id'."""
        return self._center_line_id

    @center_line_id.setter
    def center_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'center_line_id' field must be an integer in [-2147483648, 2147483647]"
        self._center_line_id = value

    @builtins.property  # noqa: A003
    def property(self):  # noqa: A003
        """Message field 'property'."""
        return self._property

    @property.setter  # noqa: A003
    def property(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'property' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'property' field must be an unsigned integer in [0, 255]"
        self._property = value
