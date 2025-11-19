# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'merge_lines'
# Member 'split_lines'
# Member 'lk_lines'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvLine(type):
    """Metaclass of message 'EnvLine'."""

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
                'environment_model_msgs.msg.EnvLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_line

            from environment_model_msgs.msg import EnvPoint
            if EnvPoint.__class__._TYPE_SUPPORT is None:
                EnvPoint.__class__.__import_type_support__()

            from environment_model_msgs.msg import MapIds
            if MapIds.__class__._TYPE_SUPPORT is None:
                MapIds.__class__.__import_type_support__()

            from environment_model_msgs.msg import NaviScore
            if NaviScore.__class__._TYPE_SUPPORT is None:
                NaviScore.__class__.__import_type_support__()

            from environment_model_msgs.msg import PairDoubleInt
            if PairDoubleInt.__class__._TYPE_SUPPORT is None:
                PairDoubleInt.__class__.__import_type_support__()

            from environment_model_msgs.msg import PairInt
            if PairInt.__class__._TYPE_SUPPORT is None:
                PairInt.__class__.__import_type_support__()

            from environment_model_msgs.msg import PairString
            if PairString.__class__._TYPE_SUPPORT is None:
                PairString.__class__.__import_type_support__()

            from environment_model_msgs.msg import PairStringDouble
            if PairStringDouble.__class__._TYPE_SUPPORT is None:
                PairStringDouble.__class__.__import_type_support__()

            from environment_model_msgs.msg import RoadStructType
            if RoadStructType.__class__._TYPE_SUPPORT is None:
                RoadStructType.__class__.__import_type_support__()

            from environment_model_msgs.msg import Vec2d
            if Vec2d.__class__._TYPE_SUPPORT is None:
                Vec2d.__class__.__import_type_support__()

            from environment_model_msgs.msg import VirtualLineInfo
            if VirtualLineInfo.__class__._TYPE_SUPPORT is None:
                VirtualLineInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvLine(metaclass=Metaclass_EnvLine):
    """Message class 'EnvLine'."""

    __slots__ = [
        '_env_points',
        '_id',
        '_last_ids',
        '_perception_ids',
        '_ego_s',
        '_ego_l',
        '_is_on_road',
        '_routing_status',
        '_is_reverse',
        '_enum_turn_scenario',
        '_merge_lines',
        '_split_lines',
        '_merge_pos',
        '_lk_lines',
        '_left_ids_map',
        '_right_ids_map',
        '_enum_road_struct_type',
        '_road_struct_type',
        '_signal_infos',
        '_object_infos',
        '_navi_score',
        '_virtual_line_infos',
        '_left_road_bound_line',
        '_right_road_bound_line',
        '_lane_offset',
        '_lane_id',
        '_lane_sequence',
        '_lane_seq_id',
        '_channel_id',
        '_virtual_line_to',
        '_midd_line_id',
        '_overwide_pairs',
        '_usemdriver',
    ]

    _fields_and_field_types = {
        'env_points': 'sequence<environment_model_msgs/EnvPoint>',
        'id': 'int32',
        'last_ids': 'sequence<environment_model_msgs/PairInt>',
        'perception_ids': 'environment_model_msgs/PairInt',
        'ego_s': 'double',
        'ego_l': 'double',
        'is_on_road': 'boolean',
        'routing_status': 'uint8',
        'is_reverse': 'boolean',
        'enum_turn_scenario': 'uint8',
        'merge_lines': 'sequence<int32>',
        'split_lines': 'sequence<int32>',
        'merge_pos': 'sequence<environment_model_msgs/PairDoubleInt>',
        'lk_lines': 'sequence<int32>',
        'left_ids_map': 'sequence<environment_model_msgs/MapIds>',
        'right_ids_map': 'sequence<environment_model_msgs/MapIds>',
        'enum_road_struct_type': 'uint8',
        'road_struct_type': 'environment_model_msgs/RoadStructType',
        'signal_infos': 'sequence<environment_model_msgs/PairString>',
        'object_infos': 'sequence<environment_model_msgs/PairStringDouble>',
        'navi_score': 'environment_model_msgs/NaviScore',
        'virtual_line_infos': 'sequence<environment_model_msgs/VirtualLineInfo>',
        'left_road_bound_line': 'sequence<environment_model_msgs/Vec2d>',
        'right_road_bound_line': 'sequence<environment_model_msgs/Vec2d>',
        'lane_offset': 'double',
        'lane_id': 'string',
        'lane_sequence': 'sequence<string>',
        'lane_seq_id': 'int32',
        'channel_id': 'environment_model_msgs/PairInt',
        'virtual_line_to': 'boolean',
        'midd_line_id': 'int32',
        'overwide_pairs': 'sequence<environment_model_msgs/MapIds>',
        'usemdriver': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'EnvPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairInt')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairInt'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairDoubleInt')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'MapIds')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'MapIds')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'RoadStructType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairString')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairStringDouble')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'NaviScore'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'VirtualLineInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairInt'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'MapIds')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.env_points = kwargs.get('env_points', [])
        self.id = kwargs.get('id', int())
        self.last_ids = kwargs.get('last_ids', [])
        from environment_model_msgs.msg import PairInt
        self.perception_ids = kwargs.get('perception_ids', PairInt())
        self.ego_s = kwargs.get('ego_s', float())
        self.ego_l = kwargs.get('ego_l', float())
        self.is_on_road = kwargs.get('is_on_road', bool())
        self.routing_status = kwargs.get('routing_status', int())
        self.is_reverse = kwargs.get('is_reverse', bool())
        self.enum_turn_scenario = kwargs.get('enum_turn_scenario', int())
        self.merge_lines = array.array('i', kwargs.get('merge_lines', []))
        self.split_lines = array.array('i', kwargs.get('split_lines', []))
        self.merge_pos = kwargs.get('merge_pos', [])
        self.lk_lines = array.array('i', kwargs.get('lk_lines', []))
        self.left_ids_map = kwargs.get('left_ids_map', [])
        self.right_ids_map = kwargs.get('right_ids_map', [])
        self.enum_road_struct_type = kwargs.get('enum_road_struct_type', int())
        from environment_model_msgs.msg import RoadStructType
        self.road_struct_type = kwargs.get('road_struct_type', RoadStructType())
        self.signal_infos = kwargs.get('signal_infos', [])
        self.object_infos = kwargs.get('object_infos', [])
        from environment_model_msgs.msg import NaviScore
        self.navi_score = kwargs.get('navi_score', NaviScore())
        self.virtual_line_infos = kwargs.get('virtual_line_infos', [])
        self.left_road_bound_line = kwargs.get('left_road_bound_line', [])
        self.right_road_bound_line = kwargs.get('right_road_bound_line', [])
        self.lane_offset = kwargs.get('lane_offset', float())
        self.lane_id = kwargs.get('lane_id', str())
        self.lane_sequence = kwargs.get('lane_sequence', [])
        self.lane_seq_id = kwargs.get('lane_seq_id', int())
        from environment_model_msgs.msg import PairInt
        self.channel_id = kwargs.get('channel_id', PairInt())
        self.virtual_line_to = kwargs.get('virtual_line_to', bool())
        self.midd_line_id = kwargs.get('midd_line_id', int())
        self.overwide_pairs = kwargs.get('overwide_pairs', [])
        self.usemdriver = kwargs.get('usemdriver', bool())

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
        if self.env_points != other.env_points:
            return False
        if self.id != other.id:
            return False
        if self.last_ids != other.last_ids:
            return False
        if self.perception_ids != other.perception_ids:
            return False
        if self.ego_s != other.ego_s:
            return False
        if self.ego_l != other.ego_l:
            return False
        if self.is_on_road != other.is_on_road:
            return False
        if self.routing_status != other.routing_status:
            return False
        if self.is_reverse != other.is_reverse:
            return False
        if self.enum_turn_scenario != other.enum_turn_scenario:
            return False
        if self.merge_lines != other.merge_lines:
            return False
        if self.split_lines != other.split_lines:
            return False
        if self.merge_pos != other.merge_pos:
            return False
        if self.lk_lines != other.lk_lines:
            return False
        if self.left_ids_map != other.left_ids_map:
            return False
        if self.right_ids_map != other.right_ids_map:
            return False
        if self.enum_road_struct_type != other.enum_road_struct_type:
            return False
        if self.road_struct_type != other.road_struct_type:
            return False
        if self.signal_infos != other.signal_infos:
            return False
        if self.object_infos != other.object_infos:
            return False
        if self.navi_score != other.navi_score:
            return False
        if self.virtual_line_infos != other.virtual_line_infos:
            return False
        if self.left_road_bound_line != other.left_road_bound_line:
            return False
        if self.right_road_bound_line != other.right_road_bound_line:
            return False
        if self.lane_offset != other.lane_offset:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.lane_sequence != other.lane_sequence:
            return False
        if self.lane_seq_id != other.lane_seq_id:
            return False
        if self.channel_id != other.channel_id:
            return False
        if self.virtual_line_to != other.virtual_line_to:
            return False
        if self.midd_line_id != other.midd_line_id:
            return False
        if self.overwide_pairs != other.overwide_pairs:
            return False
        if self.usemdriver != other.usemdriver:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def env_points(self):
        """Message field 'env_points'."""
        return self._env_points

    @env_points.setter
    def env_points(self, value):
        if __debug__:
            from environment_model_msgs.msg import EnvPoint
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
                 all(isinstance(v, EnvPoint) for v in value) and
                 True), \
                "The 'env_points' field must be a set or sequence and each value of type 'EnvPoint'"
        self._env_points = value

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
    def last_ids(self):
        """Message field 'last_ids'."""
        return self._last_ids

    @last_ids.setter
    def last_ids(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairInt
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
                 all(isinstance(v, PairInt) for v in value) and
                 True), \
                "The 'last_ids' field must be a set or sequence and each value of type 'PairInt'"
        self._last_ids = value

    @builtins.property
    def perception_ids(self):
        """Message field 'perception_ids'."""
        return self._perception_ids

    @perception_ids.setter
    def perception_ids(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairInt
            assert \
                isinstance(value, PairInt), \
                "The 'perception_ids' field must be a sub message of type 'PairInt'"
        self._perception_ids = value

    @builtins.property
    def ego_s(self):
        """Message field 'ego_s'."""
        return self._ego_s

    @ego_s.setter
    def ego_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_s = value

    @builtins.property
    def ego_l(self):
        """Message field 'ego_l'."""
        return self._ego_l

    @ego_l.setter
    def ego_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ego_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ego_l = value

    @builtins.property
    def is_on_road(self):
        """Message field 'is_on_road'."""
        return self._is_on_road

    @is_on_road.setter
    def is_on_road(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_road' field must be of type 'bool'"
        self._is_on_road = value

    @builtins.property
    def routing_status(self):
        """Message field 'routing_status'."""
        return self._routing_status

    @routing_status.setter
    def routing_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'routing_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'routing_status' field must be an unsigned integer in [0, 255]"
        self._routing_status = value

    @builtins.property
    def is_reverse(self):
        """Message field 'is_reverse'."""
        return self._is_reverse

    @is_reverse.setter
    def is_reverse(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_reverse' field must be of type 'bool'"
        self._is_reverse = value

    @builtins.property
    def enum_turn_scenario(self):
        """Message field 'enum_turn_scenario'."""
        return self._enum_turn_scenario

    @enum_turn_scenario.setter
    def enum_turn_scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_turn_scenario' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_turn_scenario' field must be an unsigned integer in [0, 255]"
        self._enum_turn_scenario = value

    @builtins.property
    def merge_lines(self):
        """Message field 'merge_lines'."""
        return self._merge_lines

    @merge_lines.setter
    def merge_lines(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'merge_lines' array.array() must have the type code of 'i'"
            self._merge_lines = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'merge_lines' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._merge_lines = array.array('i', value)

    @builtins.property
    def split_lines(self):
        """Message field 'split_lines'."""
        return self._split_lines

    @split_lines.setter
    def split_lines(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'split_lines' array.array() must have the type code of 'i'"
            self._split_lines = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'split_lines' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._split_lines = array.array('i', value)

    @builtins.property
    def merge_pos(self):
        """Message field 'merge_pos'."""
        return self._merge_pos

    @merge_pos.setter
    def merge_pos(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairDoubleInt
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
                 all(isinstance(v, PairDoubleInt) for v in value) and
                 True), \
                "The 'merge_pos' field must be a set or sequence and each value of type 'PairDoubleInt'"
        self._merge_pos = value

    @builtins.property
    def lk_lines(self):
        """Message field 'lk_lines'."""
        return self._lk_lines

    @lk_lines.setter
    def lk_lines(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'lk_lines' array.array() must have the type code of 'i'"
            self._lk_lines = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'lk_lines' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._lk_lines = array.array('i', value)

    @builtins.property
    def left_ids_map(self):
        """Message field 'left_ids_map'."""
        return self._left_ids_map

    @left_ids_map.setter
    def left_ids_map(self, value):
        if __debug__:
            from environment_model_msgs.msg import MapIds
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
                 all(isinstance(v, MapIds) for v in value) and
                 True), \
                "The 'left_ids_map' field must be a set or sequence and each value of type 'MapIds'"
        self._left_ids_map = value

    @builtins.property
    def right_ids_map(self):
        """Message field 'right_ids_map'."""
        return self._right_ids_map

    @right_ids_map.setter
    def right_ids_map(self, value):
        if __debug__:
            from environment_model_msgs.msg import MapIds
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
                 all(isinstance(v, MapIds) for v in value) and
                 True), \
                "The 'right_ids_map' field must be a set or sequence and each value of type 'MapIds'"
        self._right_ids_map = value

    @builtins.property
    def enum_road_struct_type(self):
        """Message field 'enum_road_struct_type'."""
        return self._enum_road_struct_type

    @enum_road_struct_type.setter
    def enum_road_struct_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_road_struct_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_road_struct_type' field must be an unsigned integer in [0, 255]"
        self._enum_road_struct_type = value

    @builtins.property
    def road_struct_type(self):
        """Message field 'road_struct_type'."""
        return self._road_struct_type

    @road_struct_type.setter
    def road_struct_type(self, value):
        if __debug__:
            from environment_model_msgs.msg import RoadStructType
            assert \
                isinstance(value, RoadStructType), \
                "The 'road_struct_type' field must be a sub message of type 'RoadStructType'"
        self._road_struct_type = value

    @builtins.property
    def signal_infos(self):
        """Message field 'signal_infos'."""
        return self._signal_infos

    @signal_infos.setter
    def signal_infos(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairString
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
                 all(isinstance(v, PairString) for v in value) and
                 True), \
                "The 'signal_infos' field must be a set or sequence and each value of type 'PairString'"
        self._signal_infos = value

    @builtins.property
    def object_infos(self):
        """Message field 'object_infos'."""
        return self._object_infos

    @object_infos.setter
    def object_infos(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairStringDouble
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
                 all(isinstance(v, PairStringDouble) for v in value) and
                 True), \
                "The 'object_infos' field must be a set or sequence and each value of type 'PairStringDouble'"
        self._object_infos = value

    @builtins.property
    def navi_score(self):
        """Message field 'navi_score'."""
        return self._navi_score

    @navi_score.setter
    def navi_score(self, value):
        if __debug__:
            from environment_model_msgs.msg import NaviScore
            assert \
                isinstance(value, NaviScore), \
                "The 'navi_score' field must be a sub message of type 'NaviScore'"
        self._navi_score = value

    @builtins.property
    def virtual_line_infos(self):
        """Message field 'virtual_line_infos'."""
        return self._virtual_line_infos

    @virtual_line_infos.setter
    def virtual_line_infos(self, value):
        if __debug__:
            from environment_model_msgs.msg import VirtualLineInfo
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
                 all(isinstance(v, VirtualLineInfo) for v in value) and
                 True), \
                "The 'virtual_line_infos' field must be a set or sequence and each value of type 'VirtualLineInfo'"
        self._virtual_line_infos = value

    @builtins.property
    def left_road_bound_line(self):
        """Message field 'left_road_bound_line'."""
        return self._left_road_bound_line

    @left_road_bound_line.setter
    def left_road_bound_line(self, value):
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
                "The 'left_road_bound_line' field must be a set or sequence and each value of type 'Vec2d'"
        self._left_road_bound_line = value

    @builtins.property
    def right_road_bound_line(self):
        """Message field 'right_road_bound_line'."""
        return self._right_road_bound_line

    @right_road_bound_line.setter
    def right_road_bound_line(self, value):
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
                "The 'right_road_bound_line' field must be a set or sequence and each value of type 'Vec2d'"
        self._right_road_bound_line = value

    @builtins.property
    def lane_offset(self):
        """Message field 'lane_offset'."""
        return self._lane_offset

    @lane_offset.setter
    def lane_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lane_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lane_offset = value

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_id' field must be of type 'str'"
        self._lane_id = value

    @builtins.property
    def lane_sequence(self):
        """Message field 'lane_sequence'."""
        return self._lane_sequence

    @lane_sequence.setter
    def lane_sequence(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'lane_sequence' field must be a set or sequence and each value of type 'str'"
        self._lane_sequence = value

    @builtins.property
    def lane_seq_id(self):
        """Message field 'lane_seq_id'."""
        return self._lane_seq_id

    @lane_seq_id.setter
    def lane_seq_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_seq_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_seq_id' field must be an integer in [-2147483648, 2147483647]"
        self._lane_seq_id = value

    @builtins.property
    def channel_id(self):
        """Message field 'channel_id'."""
        return self._channel_id

    @channel_id.setter
    def channel_id(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairInt
            assert \
                isinstance(value, PairInt), \
                "The 'channel_id' field must be a sub message of type 'PairInt'"
        self._channel_id = value

    @builtins.property
    def virtual_line_to(self):
        """Message field 'virtual_line_to'."""
        return self._virtual_line_to

    @virtual_line_to.setter
    def virtual_line_to(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'virtual_line_to' field must be of type 'bool'"
        self._virtual_line_to = value

    @builtins.property
    def midd_line_id(self):
        """Message field 'midd_line_id'."""
        return self._midd_line_id

    @midd_line_id.setter
    def midd_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'midd_line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'midd_line_id' field must be an integer in [-2147483648, 2147483647]"
        self._midd_line_id = value

    @builtins.property
    def overwide_pairs(self):
        """Message field 'overwide_pairs'."""
        return self._overwide_pairs

    @overwide_pairs.setter
    def overwide_pairs(self, value):
        if __debug__:
            from environment_model_msgs.msg import MapIds
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
                 all(isinstance(v, MapIds) for v in value) and
                 True), \
                "The 'overwide_pairs' field must be a set or sequence and each value of type 'MapIds'"
        self._overwide_pairs = value

    @builtins.property
    def usemdriver(self):
        """Message field 'usemdriver'."""
        return self._usemdriver

    @usemdriver.setter
    def usemdriver(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usemdriver' field must be of type 'bool'"
        self._usemdriver = value
