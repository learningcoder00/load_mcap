# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/ReferenceLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReferenceLine(type):
    """Metaclass of message 'ReferenceLine'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IS_REVERSE': 1,
        'IS_NOT_CURRENT_ROAD': 2,
        'IS_UNREACHABLE': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs.msg.ReferenceLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reference_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reference_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reference_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reference_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reference_line

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IS_REVERSE': cls.__constants['IS_REVERSE'],
            'IS_NOT_CURRENT_ROAD': cls.__constants['IS_NOT_CURRENT_ROAD'],
            'IS_UNREACHABLE': cls.__constants['IS_UNREACHABLE'],
        }

    @property
    def IS_REVERSE(self):
        """Message constant 'IS_REVERSE'."""
        return Metaclass_ReferenceLine.__constants['IS_REVERSE']

    @property
    def IS_NOT_CURRENT_ROAD(self):
        """Message constant 'IS_NOT_CURRENT_ROAD'."""
        return Metaclass_ReferenceLine.__constants['IS_NOT_CURRENT_ROAD']

    @property
    def IS_UNREACHABLE(self):
        """Message constant 'IS_UNREACHABLE'."""
        return Metaclass_ReferenceLine.__constants['IS_UNREACHABLE']


class ReferenceLine(metaclass=Metaclass_ReferenceLine):
    """
    Message class 'ReferenceLine'.

    Constants:
      IS_REVERSE
      IS_NOT_CURRENT_ROAD
      IS_UNREACHABLE
    """

    __slots__ = [
        '_reference_line',
        '_line_id',
        '_original_merge_point',
        '_merge_point',
        '_reference_line_type',
        '_line_is_virtual',
        '_left_line_nums',
        '_right_line_nums',
        '_cipv_ids',
        '_cutin_cipv_ids',
        '_nearest_cipv_ids',
        '_navi_score',
        '_effic_score',
        '_turn_scenario',
    ]

    _fields_and_field_types = {
        'reference_line': 'nav_msgs/Path',
        'line_id': 'int32',
        'original_merge_point': 'nav_msgs/Path',
        'merge_point': 'nav_msgs/Path',
        'reference_line_type': 'int32',
        'line_is_virtual': 'boolean',
        'left_line_nums': 'int32',
        'right_line_nums': 'int32',
        'cipv_ids': 'sequence<string>',
        'cutin_cipv_ids': 'sequence<string>',
        'nearest_cipv_ids': 'sequence<string>',
        'navi_score': 'double',
        'effic_score': 'double',
        'turn_scenario': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.reference_line = kwargs.get('reference_line', Path())
        self.line_id = kwargs.get('line_id', int())
        from nav_msgs.msg import Path
        self.original_merge_point = kwargs.get('original_merge_point', Path())
        from nav_msgs.msg import Path
        self.merge_point = kwargs.get('merge_point', Path())
        self.reference_line_type = kwargs.get('reference_line_type', int())
        self.line_is_virtual = kwargs.get('line_is_virtual', bool())
        self.left_line_nums = kwargs.get('left_line_nums', int())
        self.right_line_nums = kwargs.get('right_line_nums', int())
        self.cipv_ids = kwargs.get('cipv_ids', [])
        self.cutin_cipv_ids = kwargs.get('cutin_cipv_ids', [])
        self.nearest_cipv_ids = kwargs.get('nearest_cipv_ids', [])
        self.navi_score = kwargs.get('navi_score', float())
        self.effic_score = kwargs.get('effic_score', float())
        self.turn_scenario = kwargs.get('turn_scenario', int())

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
        if self.reference_line != other.reference_line:
            return False
        if self.line_id != other.line_id:
            return False
        if self.original_merge_point != other.original_merge_point:
            return False
        if self.merge_point != other.merge_point:
            return False
        if self.reference_line_type != other.reference_line_type:
            return False
        if self.line_is_virtual != other.line_is_virtual:
            return False
        if self.left_line_nums != other.left_line_nums:
            return False
        if self.right_line_nums != other.right_line_nums:
            return False
        if self.cipv_ids != other.cipv_ids:
            return False
        if self.cutin_cipv_ids != other.cutin_cipv_ids:
            return False
        if self.nearest_cipv_ids != other.nearest_cipv_ids:
            return False
        if self.navi_score != other.navi_score:
            return False
        if self.effic_score != other.effic_score:
            return False
        if self.turn_scenario != other.turn_scenario:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reference_line(self):
        """Message field 'reference_line'."""
        return self._reference_line

    @reference_line.setter
    def reference_line(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'reference_line' field must be a sub message of type 'Path'"
        self._reference_line = value

    @builtins.property
    def line_id(self):
        """Message field 'line_id'."""
        return self._line_id

    @line_id.setter
    def line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'line_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'line_id' field must be an integer in [-2147483648, 2147483647]"
        self._line_id = value

    @builtins.property
    def original_merge_point(self):
        """Message field 'original_merge_point'."""
        return self._original_merge_point

    @original_merge_point.setter
    def original_merge_point(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'original_merge_point' field must be a sub message of type 'Path'"
        self._original_merge_point = value

    @builtins.property
    def merge_point(self):
        """Message field 'merge_point'."""
        return self._merge_point

    @merge_point.setter
    def merge_point(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'merge_point' field must be a sub message of type 'Path'"
        self._merge_point = value

    @builtins.property
    def reference_line_type(self):
        """Message field 'reference_line_type'."""
        return self._reference_line_type

    @reference_line_type.setter
    def reference_line_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_line_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'reference_line_type' field must be an integer in [-2147483648, 2147483647]"
        self._reference_line_type = value

    @builtins.property
    def line_is_virtual(self):
        """Message field 'line_is_virtual'."""
        return self._line_is_virtual

    @line_is_virtual.setter
    def line_is_virtual(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'line_is_virtual' field must be of type 'bool'"
        self._line_is_virtual = value

    @builtins.property
    def left_line_nums(self):
        """Message field 'left_line_nums'."""
        return self._left_line_nums

    @left_line_nums.setter
    def left_line_nums(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_line_nums' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_line_nums' field must be an integer in [-2147483648, 2147483647]"
        self._left_line_nums = value

    @builtins.property
    def right_line_nums(self):
        """Message field 'right_line_nums'."""
        return self._right_line_nums

    @right_line_nums.setter
    def right_line_nums(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_line_nums' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_line_nums' field must be an integer in [-2147483648, 2147483647]"
        self._right_line_nums = value

    @builtins.property
    def cipv_ids(self):
        """Message field 'cipv_ids'."""
        return self._cipv_ids

    @cipv_ids.setter
    def cipv_ids(self, value):
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
                "The 'cipv_ids' field must be a set or sequence and each value of type 'str'"
        self._cipv_ids = value

    @builtins.property
    def cutin_cipv_ids(self):
        """Message field 'cutin_cipv_ids'."""
        return self._cutin_cipv_ids

    @cutin_cipv_ids.setter
    def cutin_cipv_ids(self, value):
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
                "The 'cutin_cipv_ids' field must be a set or sequence and each value of type 'str'"
        self._cutin_cipv_ids = value

    @builtins.property
    def nearest_cipv_ids(self):
        """Message field 'nearest_cipv_ids'."""
        return self._nearest_cipv_ids

    @nearest_cipv_ids.setter
    def nearest_cipv_ids(self, value):
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
                "The 'nearest_cipv_ids' field must be a set or sequence and each value of type 'str'"
        self._nearest_cipv_ids = value

    @builtins.property
    def navi_score(self):
        """Message field 'navi_score'."""
        return self._navi_score

    @navi_score.setter
    def navi_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'navi_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'navi_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._navi_score = value

    @builtins.property
    def effic_score(self):
        """Message field 'effic_score'."""
        return self._effic_score

    @effic_score.setter
    def effic_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'effic_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'effic_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._effic_score = value

    @builtins.property
    def turn_scenario(self):
        """Message field 'turn_scenario'."""
        return self._turn_scenario

    @turn_scenario.setter
    def turn_scenario(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_scenario' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_scenario' field must be an integer in [-2147483648, 2147483647]"
        self._turn_scenario = value
