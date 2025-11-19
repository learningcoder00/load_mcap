# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/ObstacleCommon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleCommon(type):
    """Metaclass of message 'ObstacleCommon'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'deva_perception_msgs.msg.ObstacleCommon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_common
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_common
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_common
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_common
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_common

            from deva_common_msgs.msg import BoundingBox
            if BoundingBox.__class__._TYPE_SUPPORT is None:
                BoundingBox.__class__.__import_type_support__()

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

            from deva_localization_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from deva_perception_msgs.msg import AssociatedInfo
            if AssociatedInfo.__class__._TYPE_SUPPORT is None:
                AssociatedInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstacleCommon(metaclass=Metaclass_ObstacleCommon):
    """Message class 'ObstacleCommon'."""

    __slots__ = [
        '_obs_name',
        '_points',
        '_obs_id',
        '_dims',
        '_pose',
        '_score',
        '_track_length',
        '_tracking_time',
        '_bounding_box',
        '_miss_length',
        '_is_stable_tracked',
        '_in_parking_slot',
        '_associated_infos',
        '_extra_infos',
        '_pixel_points',
    ]

    _fields_and_field_types = {
        'obs_name': 'string',
        'points': 'sequence<geometry_msgs/Point>',
        'obs_id': 'int32',
        'dims': 'geometry_msgs/Point',
        'pose': 'deva_localization_msgs/Pose',
        'score': 'float',
        'track_length': 'int32',
        'tracking_time': 'double',
        'bounding_box': 'deva_common_msgs/BoundingBox',
        'miss_length': 'int32',
        'is_stable_tracked': 'boolean',
        'in_parking_slot': 'boolean',
        'associated_infos': 'sequence<deva_perception_msgs/AssociatedInfo>',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
        'pixel_points': 'sequence<deva_common_msgs/Point2d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_localization_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'AssociatedInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obs_name = kwargs.get('obs_name', str())
        self.points = kwargs.get('points', [])
        self.obs_id = kwargs.get('obs_id', int())
        from geometry_msgs.msg import Point
        self.dims = kwargs.get('dims', Point())
        from deva_localization_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.score = kwargs.get('score', float())
        self.track_length = kwargs.get('track_length', int())
        self.tracking_time = kwargs.get('tracking_time', float())
        from deva_common_msgs.msg import BoundingBox
        self.bounding_box = kwargs.get('bounding_box', BoundingBox())
        self.miss_length = kwargs.get('miss_length', int())
        self.is_stable_tracked = kwargs.get('is_stable_tracked', bool())
        self.in_parking_slot = kwargs.get('in_parking_slot', bool())
        self.associated_infos = kwargs.get('associated_infos', [])
        self.extra_infos = kwargs.get('extra_infos', [])
        self.pixel_points = kwargs.get('pixel_points', [])

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
        if self.obs_name != other.obs_name:
            return False
        if self.points != other.points:
            return False
        if self.obs_id != other.obs_id:
            return False
        if self.dims != other.dims:
            return False
        if self.pose != other.pose:
            return False
        if self.score != other.score:
            return False
        if self.track_length != other.track_length:
            return False
        if self.tracking_time != other.tracking_time:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        if self.miss_length != other.miss_length:
            return False
        if self.is_stable_tracked != other.is_stable_tracked:
            return False
        if self.in_parking_slot != other.in_parking_slot:
            return False
        if self.associated_infos != other.associated_infos:
            return False
        if self.extra_infos != other.extra_infos:
            return False
        if self.pixel_points != other.pixel_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obs_name(self):
        """Message field 'obs_name'."""
        return self._obs_name

    @obs_name.setter
    def obs_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'obs_name' field must be of type 'str'"
        self._obs_name = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
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
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def obs_id(self):
        """Message field 'obs_id'."""
        return self._obs_id

    @obs_id.setter
    def obs_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obs_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obs_id' field must be an integer in [-2147483648, 2147483647]"
        self._obs_id = value

    @builtins.property
    def dims(self):
        """Message field 'dims'."""
        return self._dims

    @dims.setter
    def dims(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'dims' field must be a sub message of type 'Point'"
        self._dims = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from deva_localization_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._score = value

    @builtins.property
    def track_length(self):
        """Message field 'track_length'."""
        return self._track_length

    @track_length.setter
    def track_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'track_length' field must be an integer in [-2147483648, 2147483647]"
        self._track_length = value

    @builtins.property
    def tracking_time(self):
        """Message field 'tracking_time'."""
        return self._tracking_time

    @tracking_time.setter
    def tracking_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracking_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tracking_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tracking_time = value

    @builtins.property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox
            assert \
                isinstance(value, BoundingBox), \
                "The 'bounding_box' field must be a sub message of type 'BoundingBox'"
        self._bounding_box = value

    @builtins.property
    def miss_length(self):
        """Message field 'miss_length'."""
        return self._miss_length

    @miss_length.setter
    def miss_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'miss_length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'miss_length' field must be an integer in [-2147483648, 2147483647]"
        self._miss_length = value

    @builtins.property
    def is_stable_tracked(self):
        """Message field 'is_stable_tracked'."""
        return self._is_stable_tracked

    @is_stable_tracked.setter
    def is_stable_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stable_tracked' field must be of type 'bool'"
        self._is_stable_tracked = value

    @builtins.property
    def in_parking_slot(self):
        """Message field 'in_parking_slot'."""
        return self._in_parking_slot

    @in_parking_slot.setter
    def in_parking_slot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_parking_slot' field must be of type 'bool'"
        self._in_parking_slot = value

    @builtins.property
    def associated_infos(self):
        """Message field 'associated_infos'."""
        return self._associated_infos

    @associated_infos.setter
    def associated_infos(self, value):
        if __debug__:
            from deva_perception_msgs.msg import AssociatedInfo
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
                 all(isinstance(v, AssociatedInfo) for v in value) and
                 True), \
                "The 'associated_infos' field must be a set or sequence and each value of type 'AssociatedInfo'"
        self._associated_infos = value

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

    @builtins.property
    def pixel_points(self):
        """Message field 'pixel_points'."""
        return self._pixel_points

    @pixel_points.setter
    def pixel_points(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
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
                 all(isinstance(v, Point2d) for v in value) and
                 True), \
                "The 'pixel_points' field must be a set or sequence and each value of type 'Point2d'"
        self._pixel_points = value
