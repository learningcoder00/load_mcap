# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Channel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Channel(type):
    """Metaclass of message 'Channel'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ETC': 1,
        'MANUAL': 2,
        'ETCORMANUAL': 3,
        'CLOSE': 4,
        'REVERSE': 5,
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
                'deva_perception_msgs.msg.Channel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__channel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__channel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__channel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__channel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__channel

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ETC': cls.__constants['ETC'],
            'MANUAL': cls.__constants['MANUAL'],
            'ETCORMANUAL': cls.__constants['ETCORMANUAL'],
            'CLOSE': cls.__constants['CLOSE'],
            'REVERSE': cls.__constants['REVERSE'],
        }

    @property
    def ETC(self):
        """Message constant 'ETC'."""
        return Metaclass_Channel.__constants['ETC']

    @property
    def MANUAL(self):
        """Message constant 'MANUAL'."""
        return Metaclass_Channel.__constants['MANUAL']

    @property
    def ETCORMANUAL(self):
        """Message constant 'ETCORMANUAL'."""
        return Metaclass_Channel.__constants['ETCORMANUAL']

    @property
    def CLOSE(self):
        """Message constant 'CLOSE'."""
        return Metaclass_Channel.__constants['CLOSE']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_Channel.__constants['REVERSE']


class Channel(metaclass=Metaclass_Channel):
    """
    Message class 'Channel'.

    Constants:
      ETC
      MANUAL
      ETCORMANUAL
      CLOSE
      REVERSE
    """

    __slots__ = [
        '_id',
        '_pose',
        '_dimensions',
        '_score',
        '_last_observation_depth',
        '_type',
        '_bbox2d',
        '_extra_info',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'pose': 'geometry_msgs/Pose',
        'dimensions': 'geometry_msgs/Vector3',
        'score': 'double',
        'last_observation_depth': 'double',
        'type': 'uint32',
        'bbox2d': 'deva_common_msgs/BoundingBox2d',
        'extra_info': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.dimensions = kwargs.get('dimensions', Vector3())
        self.score = kwargs.get('score', float())
        self.last_observation_depth = kwargs.get('last_observation_depth', float())
        self.type = kwargs.get('type', int())
        from deva_common_msgs.msg import BoundingBox2d
        self.bbox2d = kwargs.get('bbox2d', BoundingBox2d())
        self.extra_info = kwargs.get('extra_info', [])

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
        if self.pose != other.pose:
            return False
        if self.dimensions != other.dimensions:
            return False
        if self.score != other.score:
            return False
        if self.last_observation_depth != other.last_observation_depth:
            return False
        if self.type != other.type:
            return False
        if self.bbox2d != other.bbox2d:
            return False
        if self.extra_info != other.extra_info:
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
    def last_observation_depth(self):
        """Message field 'last_observation_depth'."""
        return self._last_observation_depth

    @last_observation_depth.setter
    def last_observation_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_observation_depth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_observation_depth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_observation_depth = value

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

    @builtins.property
    def extra_info(self):
        """Message field 'extra_info'."""
        return self._extra_info

    @extra_info.setter
    def extra_info(self, value):
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
                "The 'extra_info' field must be a set or sequence and each value of type 'ExtraInfo'"
        self._extra_info = value
