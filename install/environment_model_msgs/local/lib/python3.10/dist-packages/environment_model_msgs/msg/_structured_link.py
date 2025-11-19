# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/StructuredLink.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'prev_ids'
# Member 'succ_ids'
# Member 'link_kinds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StructuredLink(type):
    """Metaclass of message 'StructuredLink'."""

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
                'environment_model_msgs.msg.StructuredLink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__structured_link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__structured_link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__structured_link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__structured_link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__structured_link

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Guidance
            if Guidance.__class__._TYPE_SUPPORT is None:
                Guidance.__class__.__import_type_support__()

            from environment_model_msgs.msg import Vec3d
            if Vec3d.__class__._TYPE_SUPPORT is None:
                Vec3d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StructuredLink(metaclass=Metaclass_StructuredLink):
    """Message class 'StructuredLink'."""

    __slots__ = [
        '_id',
        '_prev_ids',
        '_succ_ids',
        '_feature_point_ids',
        '_points',
        '_direction',
        '_length',
        '_speed_limit_s2e',
        '_speed_limit_e2s',
        '_coverage_status',
        '_lane_num',
        '_lane_num_s2e',
        '_lane_num_e2s',
        '_relationship_with_junction',
        '_guidances',
        '_is_on_routing',
        '_need_revert',
        '_link_kinds',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'prev_ids': 'sequence<uint64>',
        'succ_ids': 'sequence<uint64>',
        'feature_point_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'points': 'sequence<environment_model_msgs/Vec3d>',
        'direction': 'uint8',
        'length': 'int32',
        'speed_limit_s2e': 'uint32',
        'speed_limit_e2s': 'uint32',
        'coverage_status': 'uint16',
        'lane_num': 'uint8',
        'lane_num_s2e': 'uint8',
        'lane_num_e2s': 'uint8',
        'relationship_with_junction': 'uint8',
        'guidances': 'sequence<deva_gaode_routing_msgs/Guidance>',
        'is_on_routing': 'boolean',
        'need_revert': 'boolean',
        'link_kinds': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec3d')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Guidance')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.prev_ids = array.array('Q', kwargs.get('prev_ids', []))
        self.succ_ids = array.array('Q', kwargs.get('succ_ids', []))
        self.feature_point_ids = kwargs.get('feature_point_ids', [])
        self.points = kwargs.get('points', [])
        self.direction = kwargs.get('direction', int())
        self.length = kwargs.get('length', int())
        self.speed_limit_s2e = kwargs.get('speed_limit_s2e', int())
        self.speed_limit_e2s = kwargs.get('speed_limit_e2s', int())
        self.coverage_status = kwargs.get('coverage_status', int())
        self.lane_num = kwargs.get('lane_num', int())
        self.lane_num_s2e = kwargs.get('lane_num_s2e', int())
        self.lane_num_e2s = kwargs.get('lane_num_e2s', int())
        self.relationship_with_junction = kwargs.get('relationship_with_junction', int())
        self.guidances = kwargs.get('guidances', [])
        self.is_on_routing = kwargs.get('is_on_routing', bool())
        self.need_revert = kwargs.get('need_revert', bool())
        self.link_kinds = array.array('B', kwargs.get('link_kinds', []))

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
        if self.prev_ids != other.prev_ids:
            return False
        if self.succ_ids != other.succ_ids:
            return False
        if self.feature_point_ids != other.feature_point_ids:
            return False
        if self.points != other.points:
            return False
        if self.direction != other.direction:
            return False
        if self.length != other.length:
            return False
        if self.speed_limit_s2e != other.speed_limit_s2e:
            return False
        if self.speed_limit_e2s != other.speed_limit_e2s:
            return False
        if self.coverage_status != other.coverage_status:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.lane_num_s2e != other.lane_num_s2e:
            return False
        if self.lane_num_e2s != other.lane_num_e2s:
            return False
        if self.relationship_with_junction != other.relationship_with_junction:
            return False
        if self.guidances != other.guidances:
            return False
        if self.is_on_routing != other.is_on_routing:
            return False
        if self.need_revert != other.need_revert:
            return False
        if self.link_kinds != other.link_kinds:
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
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def prev_ids(self):
        """Message field 'prev_ids'."""
        return self._prev_ids

    @prev_ids.setter
    def prev_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'prev_ids' array.array() must have the type code of 'Q'"
            self._prev_ids = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'prev_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._prev_ids = array.array('Q', value)

    @builtins.property
    def succ_ids(self):
        """Message field 'succ_ids'."""
        return self._succ_ids

    @succ_ids.setter
    def succ_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'succ_ids' array.array() must have the type code of 'Q'"
            self._succ_ids = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'succ_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._succ_ids = array.array('Q', value)

    @builtins.property
    def feature_point_ids(self):
        """Message field 'feature_point_ids'."""
        return self._feature_point_ids

    @feature_point_ids.setter
    def feature_point_ids(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
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
                 all(isinstance(v, FeatureIDType) for v in value) and
                 True), \
                "The 'feature_point_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._feature_point_ids = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec3d
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
                 all(isinstance(v, Vec3d) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Vec3d'"
        self._points = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'length' field must be an integer in [-2147483648, 2147483647]"
        self._length = value

    @builtins.property
    def speed_limit_s2e(self):
        """Message field 'speed_limit_s2e'."""
        return self._speed_limit_s2e

    @speed_limit_s2e.setter
    def speed_limit_s2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_s2e' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'speed_limit_s2e' field must be an unsigned integer in [0, 4294967295]"
        self._speed_limit_s2e = value

    @builtins.property
    def speed_limit_e2s(self):
        """Message field 'speed_limit_e2s'."""
        return self._speed_limit_e2s

    @speed_limit_e2s.setter
    def speed_limit_e2s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_e2s' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'speed_limit_e2s' field must be an unsigned integer in [0, 4294967295]"
        self._speed_limit_e2s = value

    @builtins.property
    def coverage_status(self):
        """Message field 'coverage_status'."""
        return self._coverage_status

    @coverage_status.setter
    def coverage_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coverage_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'coverage_status' field must be an unsigned integer in [0, 65535]"
        self._coverage_status = value

    @builtins.property
    def lane_num(self):
        """Message field 'lane_num'."""
        return self._lane_num

    @lane_num.setter
    def lane_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num' field must be an unsigned integer in [0, 255]"
        self._lane_num = value

    @builtins.property
    def lane_num_s2e(self):
        """Message field 'lane_num_s2e'."""
        return self._lane_num_s2e

    @lane_num_s2e.setter
    def lane_num_s2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_s2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_s2e' field must be an unsigned integer in [0, 255]"
        self._lane_num_s2e = value

    @builtins.property
    def lane_num_e2s(self):
        """Message field 'lane_num_e2s'."""
        return self._lane_num_e2s

    @lane_num_e2s.setter
    def lane_num_e2s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_e2s' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_e2s' field must be an unsigned integer in [0, 255]"
        self._lane_num_e2s = value

    @builtins.property
    def relationship_with_junction(self):
        """Message field 'relationship_with_junction'."""
        return self._relationship_with_junction

    @relationship_with_junction.setter
    def relationship_with_junction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relationship_with_junction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'relationship_with_junction' field must be an unsigned integer in [0, 255]"
        self._relationship_with_junction = value

    @builtins.property
    def guidances(self):
        """Message field 'guidances'."""
        return self._guidances

    @guidances.setter
    def guidances(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Guidance
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
                 all(isinstance(v, Guidance) for v in value) and
                 True), \
                "The 'guidances' field must be a set or sequence and each value of type 'Guidance'"
        self._guidances = value

    @builtins.property
    def is_on_routing(self):
        """Message field 'is_on_routing'."""
        return self._is_on_routing

    @is_on_routing.setter
    def is_on_routing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_routing' field must be of type 'bool'"
        self._is_on_routing = value

    @builtins.property
    def need_revert(self):
        """Message field 'need_revert'."""
        return self._need_revert

    @need_revert.setter
    def need_revert(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'need_revert' field must be of type 'bool'"
        self._need_revert = value

    @builtins.property
    def link_kinds(self):
        """Message field 'link_kinds'."""
        return self._link_kinds

    @link_kinds.setter
    def link_kinds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'link_kinds' array.array() must have the type code of 'B'"
            self._link_kinds = value
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
                "The 'link_kinds' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._link_kinds = array.array('B', value)
