# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/STBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_STBoundary(type):
    """Metaclass of message 'STBoundary'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION_BOLLARD_LEFT': -5,
        'POSITION_FOURTH_LEFT': -4,
        'POSITION_THIRD_LEFT': -3,
        'POSITION_ADJACENT_LEFT': -2,
        'POSITION_EGO_LEFT': -1,
        'POSITION_EGO_RIGHT': 1,
        'POSITION_ADJACENT_RIGHT': 2,
        'POSITION_THIRD_RIGHT': 3,
        'POSITION_FOURTH_RIGHT': 4,
        'POSITION_BOLLARD_RIGHT': 5,
        'POSITION_OTHER': 6,
        'POSITION_UNKNOWN': 7,
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
                'deva_perception_msgs.msg.STBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__st_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__st_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__st_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__st_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__st_boundary

            from deva_common_msgs.msg import EquationCurve
            if EquationCurve.__class__._TYPE_SUPPORT is None:
                EquationCurve.__class__.__import_type_support__()

            from deva_perception_msgs.msg import LaneType
            if LaneType.__class__._TYPE_SUPPORT is None:
                LaneType.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION_BOLLARD_LEFT': cls.__constants['POSITION_BOLLARD_LEFT'],
            'POSITION_FOURTH_LEFT': cls.__constants['POSITION_FOURTH_LEFT'],
            'POSITION_THIRD_LEFT': cls.__constants['POSITION_THIRD_LEFT'],
            'POSITION_ADJACENT_LEFT': cls.__constants['POSITION_ADJACENT_LEFT'],
            'POSITION_EGO_LEFT': cls.__constants['POSITION_EGO_LEFT'],
            'POSITION_EGO_RIGHT': cls.__constants['POSITION_EGO_RIGHT'],
            'POSITION_ADJACENT_RIGHT': cls.__constants['POSITION_ADJACENT_RIGHT'],
            'POSITION_THIRD_RIGHT': cls.__constants['POSITION_THIRD_RIGHT'],
            'POSITION_FOURTH_RIGHT': cls.__constants['POSITION_FOURTH_RIGHT'],
            'POSITION_BOLLARD_RIGHT': cls.__constants['POSITION_BOLLARD_RIGHT'],
            'POSITION_OTHER': cls.__constants['POSITION_OTHER'],
            'POSITION_UNKNOWN': cls.__constants['POSITION_UNKNOWN'],
        }

    @property
    def POSITION_BOLLARD_LEFT(self):
        """Message constant 'POSITION_BOLLARD_LEFT'."""
        return Metaclass_STBoundary.__constants['POSITION_BOLLARD_LEFT']

    @property
    def POSITION_FOURTH_LEFT(self):
        """Message constant 'POSITION_FOURTH_LEFT'."""
        return Metaclass_STBoundary.__constants['POSITION_FOURTH_LEFT']

    @property
    def POSITION_THIRD_LEFT(self):
        """Message constant 'POSITION_THIRD_LEFT'."""
        return Metaclass_STBoundary.__constants['POSITION_THIRD_LEFT']

    @property
    def POSITION_ADJACENT_LEFT(self):
        """Message constant 'POSITION_ADJACENT_LEFT'."""
        return Metaclass_STBoundary.__constants['POSITION_ADJACENT_LEFT']

    @property
    def POSITION_EGO_LEFT(self):
        """Message constant 'POSITION_EGO_LEFT'."""
        return Metaclass_STBoundary.__constants['POSITION_EGO_LEFT']

    @property
    def POSITION_EGO_RIGHT(self):
        """Message constant 'POSITION_EGO_RIGHT'."""
        return Metaclass_STBoundary.__constants['POSITION_EGO_RIGHT']

    @property
    def POSITION_ADJACENT_RIGHT(self):
        """Message constant 'POSITION_ADJACENT_RIGHT'."""
        return Metaclass_STBoundary.__constants['POSITION_ADJACENT_RIGHT']

    @property
    def POSITION_THIRD_RIGHT(self):
        """Message constant 'POSITION_THIRD_RIGHT'."""
        return Metaclass_STBoundary.__constants['POSITION_THIRD_RIGHT']

    @property
    def POSITION_FOURTH_RIGHT(self):
        """Message constant 'POSITION_FOURTH_RIGHT'."""
        return Metaclass_STBoundary.__constants['POSITION_FOURTH_RIGHT']

    @property
    def POSITION_BOLLARD_RIGHT(self):
        """Message constant 'POSITION_BOLLARD_RIGHT'."""
        return Metaclass_STBoundary.__constants['POSITION_BOLLARD_RIGHT']

    @property
    def POSITION_OTHER(self):
        """Message constant 'POSITION_OTHER'."""
        return Metaclass_STBoundary.__constants['POSITION_OTHER']

    @property
    def POSITION_UNKNOWN(self):
        """Message constant 'POSITION_UNKNOWN'."""
        return Metaclass_STBoundary.__constants['POSITION_UNKNOWN']


class STBoundary(metaclass=Metaclass_STBoundary):
    """
    Message class 'STBoundary'.

    Constants:
      POSITION_BOLLARD_LEFT
      POSITION_FOURTH_LEFT
      POSITION_THIRD_LEFT
      POSITION_ADJACENT_LEFT
      POSITION_EGO_LEFT
      POSITION_EGO_RIGHT
      POSITION_ADJACENT_RIGHT
      POSITION_THIRD_RIGHT
      POSITION_FOURTH_RIGHT
      POSITION_BOLLARD_RIGHT
      POSITION_OTHER
      POSITION_UNKNOWN
    """

    __slots__ = [
        '_has_equation',
        '_equation_curves',
        '_has_disperse',
        '_disperse_curve',
        '_has_extend_equation',
        '_extend_equation_curve',
        '_has_extend_disperse',
        '_extend_disperse_curve',
        '_lane_type',
        '_position',
        '_id',
        '_left_id',
        '_right_id',
        '_confidence',
        '_reserve',
        '_global_track_id',
    ]

    _fields_and_field_types = {
        'has_equation': 'boolean',
        'equation_curves': 'sequence<deva_common_msgs/EquationCurve>',
        'has_disperse': 'boolean',
        'disperse_curve': 'sequence<geometry_msgs/Point>',
        'has_extend_equation': 'boolean',
        'extend_equation_curve': 'deva_common_msgs/EquationCurve',
        'has_extend_disperse': 'boolean',
        'extend_disperse_curve': 'sequence<geometry_msgs/Point>',
        'lane_type': 'sequence<deva_perception_msgs/LaneType>',
        'position': 'int8',
        'id': 'int32',
        'left_id': 'int32',
        'right_id': 'int32',
        'confidence': 'float',
        'reserve': 'int32',
        'global_track_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'EquationCurve')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'EquationCurve'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'LaneType')),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_equation = kwargs.get('has_equation', bool())
        self.equation_curves = kwargs.get('equation_curves', [])
        self.has_disperse = kwargs.get('has_disperse', bool())
        self.disperse_curve = kwargs.get('disperse_curve', [])
        self.has_extend_equation = kwargs.get('has_extend_equation', bool())
        from deva_common_msgs.msg import EquationCurve
        self.extend_equation_curve = kwargs.get('extend_equation_curve', EquationCurve())
        self.has_extend_disperse = kwargs.get('has_extend_disperse', bool())
        self.extend_disperse_curve = kwargs.get('extend_disperse_curve', [])
        self.lane_type = kwargs.get('lane_type', [])
        self.position = kwargs.get('position', int())
        self.id = kwargs.get('id', int())
        self.left_id = kwargs.get('left_id', int())
        self.right_id = kwargs.get('right_id', int())
        self.confidence = kwargs.get('confidence', float())
        self.reserve = kwargs.get('reserve', int())
        self.global_track_id = kwargs.get('global_track_id', int())

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
        if self.has_equation != other.has_equation:
            return False
        if self.equation_curves != other.equation_curves:
            return False
        if self.has_disperse != other.has_disperse:
            return False
        if self.disperse_curve != other.disperse_curve:
            return False
        if self.has_extend_equation != other.has_extend_equation:
            return False
        if self.extend_equation_curve != other.extend_equation_curve:
            return False
        if self.has_extend_disperse != other.has_extend_disperse:
            return False
        if self.extend_disperse_curve != other.extend_disperse_curve:
            return False
        if self.lane_type != other.lane_type:
            return False
        if self.position != other.position:
            return False
        if self.id != other.id:
            return False
        if self.left_id != other.left_id:
            return False
        if self.right_id != other.right_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.reserve != other.reserve:
            return False
        if self.global_track_id != other.global_track_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_equation(self):
        """Message field 'has_equation'."""
        return self._has_equation

    @has_equation.setter
    def has_equation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_equation' field must be of type 'bool'"
        self._has_equation = value

    @builtins.property
    def equation_curves(self):
        """Message field 'equation_curves'."""
        return self._equation_curves

    @equation_curves.setter
    def equation_curves(self, value):
        if __debug__:
            from deva_common_msgs.msg import EquationCurve
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
                 all(isinstance(v, EquationCurve) for v in value) and
                 True), \
                "The 'equation_curves' field must be a set or sequence and each value of type 'EquationCurve'"
        self._equation_curves = value

    @builtins.property
    def has_disperse(self):
        """Message field 'has_disperse'."""
        return self._has_disperse

    @has_disperse.setter
    def has_disperse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_disperse' field must be of type 'bool'"
        self._has_disperse = value

    @builtins.property
    def disperse_curve(self):
        """Message field 'disperse_curve'."""
        return self._disperse_curve

    @disperse_curve.setter
    def disperse_curve(self, value):
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
                "The 'disperse_curve' field must be a set or sequence and each value of type 'Point'"
        self._disperse_curve = value

    @builtins.property
    def has_extend_equation(self):
        """Message field 'has_extend_equation'."""
        return self._has_extend_equation

    @has_extend_equation.setter
    def has_extend_equation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_extend_equation' field must be of type 'bool'"
        self._has_extend_equation = value

    @builtins.property
    def extend_equation_curve(self):
        """Message field 'extend_equation_curve'."""
        return self._extend_equation_curve

    @extend_equation_curve.setter
    def extend_equation_curve(self, value):
        if __debug__:
            from deva_common_msgs.msg import EquationCurve
            assert \
                isinstance(value, EquationCurve), \
                "The 'extend_equation_curve' field must be a sub message of type 'EquationCurve'"
        self._extend_equation_curve = value

    @builtins.property
    def has_extend_disperse(self):
        """Message field 'has_extend_disperse'."""
        return self._has_extend_disperse

    @has_extend_disperse.setter
    def has_extend_disperse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_extend_disperse' field must be of type 'bool'"
        self._has_extend_disperse = value

    @builtins.property
    def extend_disperse_curve(self):
        """Message field 'extend_disperse_curve'."""
        return self._extend_disperse_curve

    @extend_disperse_curve.setter
    def extend_disperse_curve(self, value):
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
                "The 'extend_disperse_curve' field must be a set or sequence and each value of type 'Point'"
        self._extend_disperse_curve = value

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            from deva_perception_msgs.msg import LaneType
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
                 all(isinstance(v, LaneType) for v in value) and
                 True), \
                "The 'lane_type' field must be a set or sequence and each value of type 'LaneType'"
        self._lane_type = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'position' field must be an integer in [-128, 127]"
        self._position = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def left_id(self):
        """Message field 'left_id'."""
        return self._left_id

    @left_id.setter
    def left_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_id' field must be an integer in [-2147483648, 2147483647]"
        self._left_id = value

    @builtins.property
    def right_id(self):
        """Message field 'right_id'."""
        return self._right_id

    @right_id.setter
    def right_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_id' field must be an integer in [-2147483648, 2147483647]"
        self._right_id = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def reserve(self):
        """Message field 'reserve'."""
        return self._reserve

    @reserve.setter
    def reserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'reserve' field must be an integer in [-2147483648, 2147483647]"
        self._reserve = value

    @builtins.property
    def global_track_id(self):
        """Message field 'global_track_id'."""
        return self._global_track_id

    @global_track_id.setter
    def global_track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'global_track_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'global_track_id' field must be an integer in [-2147483648, 2147483647]"
        self._global_track_id = value
