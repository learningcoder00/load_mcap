# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvInfo(type):
    """Metaclass of message 'EnvInfo'."""

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
            module = import_type_support('environment_model_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_model_msgs.msg.EnvInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_info

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from environment_model_msgs.msg import EnvLine
            if EnvLine.__class__._TYPE_SUPPORT is None:
                EnvLine.__class__.__import_type_support__()

            from environment_model_msgs.msg import EnvLink
            if EnvLink.__class__._TYPE_SUPPORT is None:
                EnvLink.__class__.__import_type_support__()

            from environment_model_msgs.msg import EnvObject
            if EnvObject.__class__._TYPE_SUPPORT is None:
                EnvObject.__class__.__import_type_support__()

            from environment_model_msgs.msg import EnvSignal
            if EnvSignal.__class__._TYPE_SUPPORT is None:
                EnvSignal.__class__.__import_type_support__()

            from environment_model_msgs.msg import RoadBoundary
            if RoadBoundary.__class__._TYPE_SUPPORT is None:
                RoadBoundary.__class__.__import_type_support__()

            from environment_model_msgs.msg import ScenarioInfo
            if ScenarioInfo.__class__._TYPE_SUPPORT is None:
                ScenarioInfo.__class__.__import_type_support__()

            from environment_model_msgs.msg import Vec2d
            if Vec2d.__class__._TYPE_SUPPORT is None:
                Vec2d.__class__.__import_type_support__()

            from environment_model_msgs.msg import Vec2dArray
            if Vec2dArray.__class__._TYPE_SUPPORT is None:
                Vec2dArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvInfo(metaclass=Metaclass_EnvInfo):
    """Message class 'EnvInfo'."""

    __slots__ = [
        '_header',
        '_index',
        '_env_lines',
        '_env_objects',
        '_env_signals',
        '_junction_box',
        '_env_start_header',
        '_map_header',
        '_map_mode',
        '_routing_mode',
        '_navi_index',
        '_has_map',
        '_passable_space',
        '_law_space',
        '_roadline_final',
        '_roadline',
        '_law_space_merged',
        '_meg_map_mode',
        '_channel_valid',
        '_dist_sd_junction',
        '_hdair_driveline',
        '_links',
        '_ownership',
        '_road_boundaries',
        '_scenario_info',
        '_highway_scene',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'index': 'int32',
        'env_lines': 'sequence<environment_model_msgs/EnvLine>',
        'env_objects': 'sequence<environment_model_msgs/EnvObject>',
        'env_signals': 'sequence<environment_model_msgs/EnvSignal>',
        'junction_box': 'sequence<environment_model_msgs/Vec2d>',
        'env_start_header': 'deva_common_msgs/Header',
        'map_header': 'deva_common_msgs/Header',
        'map_mode': 'uint8',
        'routing_mode': 'uint8',
        'navi_index': 'int32',
        'has_map': 'boolean',
        'passable_space': 'sequence<environment_model_msgs/Vec2dArray>',
        'law_space': 'sequence<environment_model_msgs/Vec2dArray>',
        'roadline_final': 'sequence<environment_model_msgs/Vec2d>',
        'roadline': 'sequence<environment_model_msgs/Vec2d>',
        'law_space_merged': 'sequence<environment_model_msgs/Vec2dArray>',
        'meg_map_mode': 'uint8',
        'channel_valid': 'boolean',
        'dist_sd_junction': 'double',
        'hdair_driveline': 'sequence<environment_model_msgs/Vec2dArray>',
        'links': 'sequence<environment_model_msgs/EnvLink>',
        'ownership': 'int32',
        'road_boundaries': 'sequence<environment_model_msgs/RoadBoundary>',
        'scenario_info': 'sequence<environment_model_msgs/ScenarioInfo>',
        'highway_scene': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'EnvLine')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'EnvObject')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'EnvSignal')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2dArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2dArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2dArray')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2dArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'EnvLink')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'RoadBoundary')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'ScenarioInfo')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.index = kwargs.get('index', int())
        self.env_lines = kwargs.get('env_lines', [])
        self.env_objects = kwargs.get('env_objects', [])
        self.env_signals = kwargs.get('env_signals', [])
        self.junction_box = kwargs.get('junction_box', [])
        from deva_common_msgs.msg import Header
        self.env_start_header = kwargs.get('env_start_header', Header())
        from deva_common_msgs.msg import Header
        self.map_header = kwargs.get('map_header', Header())
        self.map_mode = kwargs.get('map_mode', int())
        self.routing_mode = kwargs.get('routing_mode', int())
        self.navi_index = kwargs.get('navi_index', int())
        self.has_map = kwargs.get('has_map', bool())
        self.passable_space = kwargs.get('passable_space', [])
        self.law_space = kwargs.get('law_space', [])
        self.roadline_final = kwargs.get('roadline_final', [])
        self.roadline = kwargs.get('roadline', [])
        self.law_space_merged = kwargs.get('law_space_merged', [])
        self.meg_map_mode = kwargs.get('meg_map_mode', int())
        self.channel_valid = kwargs.get('channel_valid', bool())
        self.dist_sd_junction = kwargs.get('dist_sd_junction', float())
        self.hdair_driveline = kwargs.get('hdair_driveline', [])
        self.links = kwargs.get('links', [])
        self.ownership = kwargs.get('ownership', int())
        self.road_boundaries = kwargs.get('road_boundaries', [])
        self.scenario_info = kwargs.get('scenario_info', [])
        self.highway_scene = kwargs.get('highway_scene', int())

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
        if self.index != other.index:
            return False
        if self.env_lines != other.env_lines:
            return False
        if self.env_objects != other.env_objects:
            return False
        if self.env_signals != other.env_signals:
            return False
        if self.junction_box != other.junction_box:
            return False
        if self.env_start_header != other.env_start_header:
            return False
        if self.map_header != other.map_header:
            return False
        if self.map_mode != other.map_mode:
            return False
        if self.routing_mode != other.routing_mode:
            return False
        if self.navi_index != other.navi_index:
            return False
        if self.has_map != other.has_map:
            return False
        if self.passable_space != other.passable_space:
            return False
        if self.law_space != other.law_space:
            return False
        if self.roadline_final != other.roadline_final:
            return False
        if self.roadline != other.roadline:
            return False
        if self.law_space_merged != other.law_space_merged:
            return False
        if self.meg_map_mode != other.meg_map_mode:
            return False
        if self.channel_valid != other.channel_valid:
            return False
        if self.dist_sd_junction != other.dist_sd_junction:
            return False
        if self.hdair_driveline != other.hdair_driveline:
            return False
        if self.links != other.links:
            return False
        if self.ownership != other.ownership:
            return False
        if self.road_boundaries != other.road_boundaries:
            return False
        if self.scenario_info != other.scenario_info:
            return False
        if self.highway_scene != other.highway_scene:
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
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'index' field must be an integer in [-2147483648, 2147483647]"
        self._index = value

    @builtins.property
    def env_lines(self):
        """Message field 'env_lines'."""
        return self._env_lines

    @env_lines.setter
    def env_lines(self, value):
        if __debug__:
            from environment_model_msgs.msg import EnvLine
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
                 all(isinstance(v, EnvLine) for v in value) and
                 True), \
                "The 'env_lines' field must be a set or sequence and each value of type 'EnvLine'"
        self._env_lines = value

    @builtins.property
    def env_objects(self):
        """Message field 'env_objects'."""
        return self._env_objects

    @env_objects.setter
    def env_objects(self, value):
        if __debug__:
            from environment_model_msgs.msg import EnvObject
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
                 all(isinstance(v, EnvObject) for v in value) and
                 True), \
                "The 'env_objects' field must be a set or sequence and each value of type 'EnvObject'"
        self._env_objects = value

    @builtins.property
    def env_signals(self):
        """Message field 'env_signals'."""
        return self._env_signals

    @env_signals.setter
    def env_signals(self, value):
        if __debug__:
            from environment_model_msgs.msg import EnvSignal
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
                 all(isinstance(v, EnvSignal) for v in value) and
                 True), \
                "The 'env_signals' field must be a set or sequence and each value of type 'EnvSignal'"
        self._env_signals = value

    @builtins.property
    def junction_box(self):
        """Message field 'junction_box'."""
        return self._junction_box

    @junction_box.setter
    def junction_box(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2d
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
                 all(isinstance(v, Vec2d) for v in value) and
                 True), \
                "The 'junction_box' field must be a set or sequence and each value of type 'Vec2d'"
        self._junction_box = value

    @builtins.property
    def env_start_header(self):
        """Message field 'env_start_header'."""
        return self._env_start_header

    @env_start_header.setter
    def env_start_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'env_start_header' field must be a sub message of type 'Header'"
        self._env_start_header = value

    @builtins.property
    def map_header(self):
        """Message field 'map_header'."""
        return self._map_header

    @map_header.setter
    def map_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'map_header' field must be a sub message of type 'Header'"
        self._map_header = value

    @builtins.property
    def map_mode(self):
        """Message field 'map_mode'."""
        return self._map_mode

    @map_mode.setter
    def map_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_mode' field must be an unsigned integer in [0, 255]"
        self._map_mode = value

    @builtins.property
    def routing_mode(self):
        """Message field 'routing_mode'."""
        return self._routing_mode

    @routing_mode.setter
    def routing_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'routing_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'routing_mode' field must be an unsigned integer in [0, 255]"
        self._routing_mode = value

    @builtins.property
    def navi_index(self):
        """Message field 'navi_index'."""
        return self._navi_index

    @navi_index.setter
    def navi_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'navi_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'navi_index' field must be an integer in [-2147483648, 2147483647]"
        self._navi_index = value

    @builtins.property
    def has_map(self):
        """Message field 'has_map'."""
        return self._has_map

    @has_map.setter
    def has_map(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_map' field must be of type 'bool'"
        self._has_map = value

    @builtins.property
    def passable_space(self):
        """Message field 'passable_space'."""
        return self._passable_space

    @passable_space.setter
    def passable_space(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2dArray
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
                 all(isinstance(v, Vec2dArray) for v in value) and
                 True), \
                "The 'passable_space' field must be a set or sequence and each value of type 'Vec2dArray'"
        self._passable_space = value

    @builtins.property
    def law_space(self):
        """Message field 'law_space'."""
        return self._law_space

    @law_space.setter
    def law_space(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2dArray
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
                 all(isinstance(v, Vec2dArray) for v in value) and
                 True), \
                "The 'law_space' field must be a set or sequence and each value of type 'Vec2dArray'"
        self._law_space = value

    @builtins.property
    def roadline_final(self):
        """Message field 'roadline_final'."""
        return self._roadline_final

    @roadline_final.setter
    def roadline_final(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2d
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
                 all(isinstance(v, Vec2d) for v in value) and
                 True), \
                "The 'roadline_final' field must be a set or sequence and each value of type 'Vec2d'"
        self._roadline_final = value

    @builtins.property
    def roadline(self):
        """Message field 'roadline'."""
        return self._roadline

    @roadline.setter
    def roadline(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2d
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
                 all(isinstance(v, Vec2d) for v in value) and
                 True), \
                "The 'roadline' field must be a set or sequence and each value of type 'Vec2d'"
        self._roadline = value

    @builtins.property
    def law_space_merged(self):
        """Message field 'law_space_merged'."""
        return self._law_space_merged

    @law_space_merged.setter
    def law_space_merged(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2dArray
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
                 all(isinstance(v, Vec2dArray) for v in value) and
                 True), \
                "The 'law_space_merged' field must be a set or sequence and each value of type 'Vec2dArray'"
        self._law_space_merged = value

    @builtins.property
    def meg_map_mode(self):
        """Message field 'meg_map_mode'."""
        return self._meg_map_mode

    @meg_map_mode.setter
    def meg_map_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meg_map_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meg_map_mode' field must be an unsigned integer in [0, 255]"
        self._meg_map_mode = value

    @builtins.property
    def channel_valid(self):
        """Message field 'channel_valid'."""
        return self._channel_valid

    @channel_valid.setter
    def channel_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'channel_valid' field must be of type 'bool'"
        self._channel_valid = value

    @builtins.property
    def dist_sd_junction(self):
        """Message field 'dist_sd_junction'."""
        return self._dist_sd_junction

    @dist_sd_junction.setter
    def dist_sd_junction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_sd_junction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dist_sd_junction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dist_sd_junction = value

    @builtins.property
    def hdair_driveline(self):
        """Message field 'hdair_driveline'."""
        return self._hdair_driveline

    @hdair_driveline.setter
    def hdair_driveline(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2dArray
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
                 all(isinstance(v, Vec2dArray) for v in value) and
                 True), \
                "The 'hdair_driveline' field must be a set or sequence and each value of type 'Vec2dArray'"
        self._hdair_driveline = value

    @builtins.property
    def links(self):
        """Message field 'links'."""
        return self._links

    @links.setter
    def links(self, value):
        if __debug__:
            from environment_model_msgs.msg import EnvLink
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
                 all(isinstance(v, EnvLink) for v in value) and
                 True), \
                "The 'links' field must be a set or sequence and each value of type 'EnvLink'"
        self._links = value

    @builtins.property
    def ownership(self):
        """Message field 'ownership'."""
        return self._ownership

    @ownership.setter
    def ownership(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ownership' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ownership' field must be an integer in [-2147483648, 2147483647]"
        self._ownership = value

    @builtins.property
    def road_boundaries(self):
        """Message field 'road_boundaries'."""
        return self._road_boundaries

    @road_boundaries.setter
    def road_boundaries(self, value):
        if __debug__:
            from environment_model_msgs.msg import RoadBoundary
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
                 all(isinstance(v, RoadBoundary) for v in value) and
                 True), \
                "The 'road_boundaries' field must be a set or sequence and each value of type 'RoadBoundary'"
        self._road_boundaries = value

    @builtins.property
    def scenario_info(self):
        """Message field 'scenario_info'."""
        return self._scenario_info

    @scenario_info.setter
    def scenario_info(self, value):
        if __debug__:
            from environment_model_msgs.msg import ScenarioInfo
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
                 all(isinstance(v, ScenarioInfo) for v in value) and
                 True), \
                "The 'scenario_info' field must be a set or sequence and each value of type 'ScenarioInfo'"
        self._scenario_info = value

    @builtins.property
    def highway_scene(self):
        """Message field 'highway_scene'."""
        return self._highway_scene

    @highway_scene.setter
    def highway_scene(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'highway_scene' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'highway_scene' field must be an unsigned integer in [0, 255]"
        self._highway_scene = value
