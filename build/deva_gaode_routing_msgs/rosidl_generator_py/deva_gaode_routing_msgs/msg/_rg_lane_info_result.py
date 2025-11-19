# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'arrow'
# Member 'flag'
# Member 'rg_lane_result_property'
# Member 'recommend'
# Member 'lane_info_raw_link_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGLaneInfoResult(type):
    """Metaclass of message 'RGLaneInfoResult'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.RGLaneInfoResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rg_lane_info_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rg_lane_info_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rg_lane_info_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rg_lane_info_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rg_lane_info_result

            from deva_gaode_routing_msgs.msg import RGAdditionalLaneInfo
            if RGAdditionalLaneInfo.__class__._TYPE_SUPPORT is None:
                RGAdditionalLaneInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RoutePos
            if RoutePos.__class__._TYPE_SUPPORT is None:
                RoutePos.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RGLaneInfoResult(metaclass=Metaclass_RGLaneInfoResult):
    """Message class 'RGLaneInfoResult'."""

    __slots__ = [
        '_raw_link_id',
        '_arrow',
        '_flag',
        '_rg_lane_result_property',
        '_recommend',
        '_active_time',
        '_additional_lane_info',
        '_lane_info_raw_link_ids',
        '_pos',
    ]

    _fields_and_field_types = {
        'raw_link_id': 'uint64',
        'arrow': 'sequence<uint32>',
        'flag': 'sequence<uint32>',
        'rg_lane_result_property': 'sequence<uint32>',
        'recommend': 'sequence<uint32>',
        'active_time': 'string',
        'additional_lane_info': 'sequence<deva_gaode_routing_msgs/RGAdditionalLaneInfo>',
        'lane_info_raw_link_ids': 'sequence<uint64>',
        'pos': 'deva_gaode_routing_msgs/RoutePos',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RGAdditionalLaneInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RoutePos'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.raw_link_id = kwargs.get('raw_link_id', int())
        self.arrow = array.array('I', kwargs.get('arrow', []))
        self.flag = array.array('I', kwargs.get('flag', []))
        self.rg_lane_result_property = array.array('I', kwargs.get('rg_lane_result_property', []))
        self.recommend = array.array('I', kwargs.get('recommend', []))
        self.active_time = kwargs.get('active_time', str())
        self.additional_lane_info = kwargs.get('additional_lane_info', [])
        self.lane_info_raw_link_ids = array.array('Q', kwargs.get('lane_info_raw_link_ids', []))
        from deva_gaode_routing_msgs.msg import RoutePos
        self.pos = kwargs.get('pos', RoutePos())

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
        if self.raw_link_id != other.raw_link_id:
            return False
        if self.arrow != other.arrow:
            return False
        if self.flag != other.flag:
            return False
        if self.rg_lane_result_property != other.rg_lane_result_property:
            return False
        if self.recommend != other.recommend:
            return False
        if self.active_time != other.active_time:
            return False
        if self.additional_lane_info != other.additional_lane_info:
            return False
        if self.lane_info_raw_link_ids != other.lane_info_raw_link_ids:
            return False
        if self.pos != other.pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def raw_link_id(self):
        """Message field 'raw_link_id'."""
        return self._raw_link_id

    @raw_link_id.setter
    def raw_link_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'raw_link_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'raw_link_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._raw_link_id = value

    @builtins.property
    def arrow(self):
        """Message field 'arrow'."""
        return self._arrow

    @arrow.setter
    def arrow(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'arrow' array.array() must have the type code of 'I'"
            self._arrow = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'arrow' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._arrow = array.array('I', value)

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'flag' array.array() must have the type code of 'I'"
            self._flag = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'flag' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._flag = array.array('I', value)

    @builtins.property
    def rg_lane_result_property(self):
        """Message field 'rg_lane_result_property'."""
        return self._rg_lane_result_property

    @rg_lane_result_property.setter
    def rg_lane_result_property(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'rg_lane_result_property' array.array() must have the type code of 'I'"
            self._rg_lane_result_property = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'rg_lane_result_property' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._rg_lane_result_property = array.array('I', value)

    @builtins.property
    def recommend(self):
        """Message field 'recommend'."""
        return self._recommend

    @recommend.setter
    def recommend(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'recommend' array.array() must have the type code of 'I'"
            self._recommend = value
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
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'recommend' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._recommend = array.array('I', value)

    @builtins.property
    def active_time(self):
        """Message field 'active_time'."""
        return self._active_time

    @active_time.setter
    def active_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'active_time' field must be of type 'str'"
        self._active_time = value

    @builtins.property
    def additional_lane_info(self):
        """Message field 'additional_lane_info'."""
        return self._additional_lane_info

    @additional_lane_info.setter
    def additional_lane_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RGAdditionalLaneInfo
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
                 all(isinstance(v, RGAdditionalLaneInfo) for v in value) and
                 True), \
                "The 'additional_lane_info' field must be a set or sequence and each value of type 'RGAdditionalLaneInfo'"
        self._additional_lane_info = value

    @builtins.property
    def lane_info_raw_link_ids(self):
        """Message field 'lane_info_raw_link_ids'."""
        return self._lane_info_raw_link_ids

    @lane_info_raw_link_ids.setter
    def lane_info_raw_link_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'lane_info_raw_link_ids' array.array() must have the type code of 'Q'"
            self._lane_info_raw_link_ids = value
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
                "The 'lane_info_raw_link_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._lane_info_raw_link_ids = array.array('Q', value)

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RoutePos
            assert \
                isinstance(value, RoutePos), \
                "The 'pos' field must be a sub message of type 'RoutePos'"
        self._pos = value
