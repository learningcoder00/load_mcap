# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'scalable_flags'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SemanticTreeNode(type):
    """Metaclass of message 'SemanticTreeNode'."""

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
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.SemanticTreeNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__semantic_tree_node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__semantic_tree_node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__semantic_tree_node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__semantic_tree_node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__semantic_tree_node

            from deva_planning_msgs2.msg import String2Double
            if String2Double.__class__._TYPE_SUPPORT is None:
                String2Double.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2String
            if String2String.__class__._TYPE_SUPPORT is None:
                String2String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SemanticTreeNode(metaclass=Metaclass_SemanticTreeNode):
    """Message class 'SemanticTreeNode'."""

    __slots__ = [
        '_node_id',
        '_rollout_start_time',
        '_total_score',
        '_game_score',
        '_rollout_score',
        '_game_cost',
        '_rollout_cost',
        '_scalable_flags',
        '_scalable_multimap',
    ]

    _fields_and_field_types = {
        'node_id': 'int32',
        'rollout_start_time': 'double',
        'total_score': 'double',
        'game_score': 'double',
        'rollout_score': 'double',
        'game_cost': 'sequence<deva_planning_msgs2/String2Double>',
        'rollout_cost': 'sequence<deva_planning_msgs2/String2Double>',
        'scalable_flags': 'sequence<uint8>',
        'scalable_multimap': 'sequence<deva_planning_msgs2/String2String>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2Double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2Double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2String')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_id = kwargs.get('node_id', int())
        self.rollout_start_time = kwargs.get('rollout_start_time', float())
        self.total_score = kwargs.get('total_score', float())
        self.game_score = kwargs.get('game_score', float())
        self.rollout_score = kwargs.get('rollout_score', float())
        self.game_cost = kwargs.get('game_cost', [])
        self.rollout_cost = kwargs.get('rollout_cost', [])
        self.scalable_flags = array.array('B', kwargs.get('scalable_flags', []))
        self.scalable_multimap = kwargs.get('scalable_multimap', [])

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
        if self.node_id != other.node_id:
            return False
        if self.rollout_start_time != other.rollout_start_time:
            return False
        if self.total_score != other.total_score:
            return False
        if self.game_score != other.game_score:
            return False
        if self.rollout_score != other.rollout_score:
            return False
        if self.game_cost != other.game_cost:
            return False
        if self.rollout_cost != other.rollout_cost:
            return False
        if self.scalable_flags != other.scalable_flags:
            return False
        if self.scalable_multimap != other.scalable_multimap:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'node_id' field must be an integer in [-2147483648, 2147483647]"
        self._node_id = value

    @builtins.property
    def rollout_start_time(self):
        """Message field 'rollout_start_time'."""
        return self._rollout_start_time

    @rollout_start_time.setter
    def rollout_start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rollout_start_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rollout_start_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rollout_start_time = value

    @builtins.property
    def total_score(self):
        """Message field 'total_score'."""
        return self._total_score

    @total_score.setter
    def total_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_score = value

    @builtins.property
    def game_score(self):
        """Message field 'game_score'."""
        return self._game_score

    @game_score.setter
    def game_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'game_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'game_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._game_score = value

    @builtins.property
    def rollout_score(self):
        """Message field 'rollout_score'."""
        return self._rollout_score

    @rollout_score.setter
    def rollout_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rollout_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rollout_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rollout_score = value

    @builtins.property
    def game_cost(self):
        """Message field 'game_cost'."""
        return self._game_cost

    @game_cost.setter
    def game_cost(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2Double
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
                 all(isinstance(v, String2Double) for v in value) and
                 True), \
                "The 'game_cost' field must be a set or sequence and each value of type 'String2Double'"
        self._game_cost = value

    @builtins.property
    def rollout_cost(self):
        """Message field 'rollout_cost'."""
        return self._rollout_cost

    @rollout_cost.setter
    def rollout_cost(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2Double
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
                 all(isinstance(v, String2Double) for v in value) and
                 True), \
                "The 'rollout_cost' field must be a set or sequence and each value of type 'String2Double'"
        self._rollout_cost = value

    @builtins.property
    def scalable_flags(self):
        """Message field 'scalable_flags'."""
        return self._scalable_flags

    @scalable_flags.setter
    def scalable_flags(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'scalable_flags' array.array() must have the type code of 'B'"
            self._scalable_flags = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'scalable_flags' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._scalable_flags = array.array('B', value)

    @builtins.property
    def scalable_multimap(self):
        """Message field 'scalable_multimap'."""
        return self._scalable_multimap

    @scalable_multimap.setter
    def scalable_multimap(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2String
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
                 all(isinstance(v, String2String) for v in value) and
                 True), \
                "The 'scalable_multimap' field must be a set or sequence and each value of type 'String2String'"
        self._scalable_multimap = value
