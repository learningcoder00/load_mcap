# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/BindResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BindResult(type):
    """Metaclass of message 'BindResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FAIL': 0,
        'LEFT': 1,
        'MID': 2,
        'RIGHT': 3,
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
                'deva_perception_msgs.msg.BindResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bind_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bind_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bind_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bind_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bind_result

            from deva_perception_msgs.msg import PerceptionResult
            if PerceptionResult.__class__._TYPE_SUPPORT is None:
                PerceptionResult.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FAIL': cls.__constants['FAIL'],
            'LEFT': cls.__constants['LEFT'],
            'MID': cls.__constants['MID'],
            'RIGHT': cls.__constants['RIGHT'],
        }

    @property
    def FAIL(self):
        """Message constant 'FAIL'."""
        return Metaclass_BindResult.__constants['FAIL']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_BindResult.__constants['LEFT']

    @property
    def MID(self):
        """Message constant 'MID'."""
        return Metaclass_BindResult.__constants['MID']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_BindResult.__constants['RIGHT']


class BindResult(metaclass=Metaclass_BindResult):
    """
    Message class 'BindResult'.

    Constants:
      FAIL
      LEFT
      MID
      RIGHT
    """

    __slots__ = [
        '_header',
        '_result',
        '_id',
        '_with_bev_info',
        '_pose',
        '_dimensions',
        '_bind_type',
        '_score',
        '_vertical_distance',
        '_left_lane_id',
        '_right_lane_id',
        '_left_lane_distance',
        '_right_lane_distance',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'result': 'deva_perception_msgs/PerceptionResult',
        'id': 'uint32',
        'with_bev_info': 'boolean',
        'pose': 'geometry_msgs/Pose',
        'dimensions': 'geometry_msgs/Vector3',
        'bind_type': 'uint8',
        'score': 'double',
        'vertical_distance': 'double',
        'left_lane_id': 'uint32',
        'right_lane_id': 'uint32',
        'left_lane_distance': 'double',
        'right_lane_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'PerceptionResult'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_perception_msgs.msg import PerceptionResult
        self.result = kwargs.get('result', PerceptionResult())
        self.id = kwargs.get('id', int())
        self.with_bev_info = kwargs.get('with_bev_info', bool())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.dimensions = kwargs.get('dimensions', Vector3())
        self.bind_type = kwargs.get('bind_type', int())
        self.score = kwargs.get('score', float())
        self.vertical_distance = kwargs.get('vertical_distance', float())
        self.left_lane_id = kwargs.get('left_lane_id', int())
        self.right_lane_id = kwargs.get('right_lane_id', int())
        self.left_lane_distance = kwargs.get('left_lane_distance', float())
        self.right_lane_distance = kwargs.get('right_lane_distance', float())

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
        if self.header != other.header:
            return False
        if self.result != other.result:
            return False
        if self.id != other.id:
            return False
        if self.with_bev_info != other.with_bev_info:
            return False
        if self.pose != other.pose:
            return False
        if self.dimensions != other.dimensions:
            return False
        if self.bind_type != other.bind_type:
            return False
        if self.score != other.score:
            return False
        if self.vertical_distance != other.vertical_distance:
            return False
        if self.left_lane_id != other.left_lane_id:
            return False
        if self.right_lane_id != other.right_lane_id:
            return False
        if self.left_lane_distance != other.left_lane_distance:
            return False
        if self.right_lane_distance != other.right_lane_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from deva_perception_msgs.msg import PerceptionResult
            assert \
                isinstance(value, PerceptionResult), \
                "The 'result' field must be a sub message of type 'PerceptionResult'"
        self._result = value

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
    def with_bev_info(self):
        """Message field 'with_bev_info'."""
        return self._with_bev_info

    @with_bev_info.setter
    def with_bev_info(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'with_bev_info' field must be of type 'bool'"
        self._with_bev_info = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'dimensions' field must be a sub message of type 'Vector3'"
        self._dimensions = value

    @builtins.property
    def bind_type(self):
        """Message field 'bind_type'."""
        return self._bind_type

    @bind_type.setter
    def bind_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bind_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bind_type' field must be an unsigned integer in [0, 255]"
        self._bind_type = value

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
    def vertical_distance(self):
        """Message field 'vertical_distance'."""
        return self._vertical_distance

    @vertical_distance.setter
    def vertical_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_distance = value

    @builtins.property
    def left_lane_id(self):
        """Message field 'left_lane_id'."""
        return self._left_lane_id

    @left_lane_id.setter
    def left_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'left_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._left_lane_id = value

    @builtins.property
    def right_lane_id(self):
        """Message field 'right_lane_id'."""
        return self._right_lane_id

    @right_lane_id.setter
    def right_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._right_lane_id = value

    @builtins.property
    def left_lane_distance(self):
        """Message field 'left_lane_distance'."""
        return self._left_lane_distance

    @left_lane_distance.setter
    def left_lane_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_lane_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_lane_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_lane_distance = value

    @builtins.property
    def right_lane_distance(self):
        """Message field 'right_lane_distance'."""
        return self._right_lane_distance

    @right_lane_distance.setter
    def right_lane_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_lane_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_lane_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_lane_distance = value
