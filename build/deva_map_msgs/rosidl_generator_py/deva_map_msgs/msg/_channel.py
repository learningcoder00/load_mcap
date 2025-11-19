# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/Channel.idl
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
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.Channel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__channel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__channel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__channel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__channel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__channel

            from deva_map_msgs.msg import ChannelLaneInfo
            if ChannelLaneInfo.__class__._TYPE_SUPPORT is None:
                ChannelLaneInfo.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelLaneLine
            if ChannelLaneLine.__class__._TYPE_SUPPORT is None:
                ChannelLaneLine.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelLaneMarking
            if ChannelLaneMarking.__class__._TYPE_SUPPORT is None:
                ChannelLaneMarking.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelObjectInfo
            if ChannelObjectInfo.__class__._TYPE_SUPPORT is None:
                ChannelObjectInfo.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelSignalInfo
            if ChannelSignalInfo.__class__._TYPE_SUPPORT is None:
                ChannelSignalInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Channel(metaclass=Metaclass_Channel):
    """Message class 'Channel'."""

    __slots__ = [
        '_available',
        '_is_on_route',
        '_errcode',
        '_current_lane_id',
        '_channel_idx',
        '_lane_offset',
        '_laneinfo',
        '_middle_line',
        '_reference_line_vec',
        '_left_marking',
        '_right_marking',
        '_left_channel_idx',
        '_right_channel_idx',
        '_object_info',
        '_signal_info',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'is_on_route': 'boolean',
        'errcode': 'uint8',
        'current_lane_id': 'string',
        'channel_idx': 'int16',
        'lane_offset': 'double',
        'laneinfo': 'deva_map_msgs/ChannelLaneInfo',
        'middle_line': 'deva_map_msgs/ChannelLaneLine',
        'reference_line_vec': 'sequence<deva_map_msgs/ChannelLaneLine>',
        'left_marking': 'deva_map_msgs/ChannelLaneMarking',
        'right_marking': 'deva_map_msgs/ChannelLaneMarking',
        'left_channel_idx': 'int16',
        'right_channel_idx': 'int16',
        'object_info': 'sequence<deva_map_msgs/ChannelObjectInfo>',
        'signal_info': 'sequence<deva_map_msgs/ChannelSignalInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneLine'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneLine')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneMarking'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneMarking'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelObjectInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelSignalInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        self.is_on_route = kwargs.get('is_on_route', bool())
        self.errcode = kwargs.get('errcode', int())
        self.current_lane_id = kwargs.get('current_lane_id', str())
        self.channel_idx = kwargs.get('channel_idx', int())
        self.lane_offset = kwargs.get('lane_offset', float())
        from deva_map_msgs.msg import ChannelLaneInfo
        self.laneinfo = kwargs.get('laneinfo', ChannelLaneInfo())
        from deva_map_msgs.msg import ChannelLaneLine
        self.middle_line = kwargs.get('middle_line', ChannelLaneLine())
        self.reference_line_vec = kwargs.get('reference_line_vec', [])
        from deva_map_msgs.msg import ChannelLaneMarking
        self.left_marking = kwargs.get('left_marking', ChannelLaneMarking())
        from deva_map_msgs.msg import ChannelLaneMarking
        self.right_marking = kwargs.get('right_marking', ChannelLaneMarking())
        self.left_channel_idx = kwargs.get('left_channel_idx', int())
        self.right_channel_idx = kwargs.get('right_channel_idx', int())
        self.object_info = kwargs.get('object_info', [])
        self.signal_info = kwargs.get('signal_info', [])

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
        if self.available != other.available:
            return False
        if self.is_on_route != other.is_on_route:
            return False
        if self.errcode != other.errcode:
            return False
        if self.current_lane_id != other.current_lane_id:
            return False
        if self.channel_idx != other.channel_idx:
            return False
        if self.lane_offset != other.lane_offset:
            return False
        if self.laneinfo != other.laneinfo:
            return False
        if self.middle_line != other.middle_line:
            return False
        if self.reference_line_vec != other.reference_line_vec:
            return False
        if self.left_marking != other.left_marking:
            return False
        if self.right_marking != other.right_marking:
            return False
        if self.left_channel_idx != other.left_channel_idx:
            return False
        if self.right_channel_idx != other.right_channel_idx:
            return False
        if self.object_info != other.object_info:
            return False
        if self.signal_info != other.signal_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @builtins.property
    def is_on_route(self):
        """Message field 'is_on_route'."""
        return self._is_on_route

    @is_on_route.setter
    def is_on_route(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_route' field must be of type 'bool'"
        self._is_on_route = value

    @builtins.property
    def errcode(self):
        """Message field 'errcode'."""
        return self._errcode

    @errcode.setter
    def errcode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'errcode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'errcode' field must be an unsigned integer in [0, 255]"
        self._errcode = value

    @builtins.property
    def current_lane_id(self):
        """Message field 'current_lane_id'."""
        return self._current_lane_id

    @current_lane_id.setter
    def current_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_lane_id' field must be of type 'str'"
        self._current_lane_id = value

    @builtins.property
    def channel_idx(self):
        """Message field 'channel_idx'."""
        return self._channel_idx

    @channel_idx.setter
    def channel_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channel_idx' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'channel_idx' field must be an integer in [-32768, 32767]"
        self._channel_idx = value

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
    def laneinfo(self):
        """Message field 'laneinfo'."""
        return self._laneinfo

    @laneinfo.setter
    def laneinfo(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneInfo
            assert \
                isinstance(value, ChannelLaneInfo), \
                "The 'laneinfo' field must be a sub message of type 'ChannelLaneInfo'"
        self._laneinfo = value

    @builtins.property
    def middle_line(self):
        """Message field 'middle_line'."""
        return self._middle_line

    @middle_line.setter
    def middle_line(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneLine
            assert \
                isinstance(value, ChannelLaneLine), \
                "The 'middle_line' field must be a sub message of type 'ChannelLaneLine'"
        self._middle_line = value

    @builtins.property
    def reference_line_vec(self):
        """Message field 'reference_line_vec'."""
        return self._reference_line_vec

    @reference_line_vec.setter
    def reference_line_vec(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneLine
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
                 all(isinstance(v, ChannelLaneLine) for v in value) and
                 True), \
                "The 'reference_line_vec' field must be a set or sequence and each value of type 'ChannelLaneLine'"
        self._reference_line_vec = value

    @builtins.property
    def left_marking(self):
        """Message field 'left_marking'."""
        return self._left_marking

    @left_marking.setter
    def left_marking(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneMarking
            assert \
                isinstance(value, ChannelLaneMarking), \
                "The 'left_marking' field must be a sub message of type 'ChannelLaneMarking'"
        self._left_marking = value

    @builtins.property
    def right_marking(self):
        """Message field 'right_marking'."""
        return self._right_marking

    @right_marking.setter
    def right_marking(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneMarking
            assert \
                isinstance(value, ChannelLaneMarking), \
                "The 'right_marking' field must be a sub message of type 'ChannelLaneMarking'"
        self._right_marking = value

    @builtins.property
    def left_channel_idx(self):
        """Message field 'left_channel_idx'."""
        return self._left_channel_idx

    @left_channel_idx.setter
    def left_channel_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_channel_idx' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_channel_idx' field must be an integer in [-32768, 32767]"
        self._left_channel_idx = value

    @builtins.property
    def right_channel_idx(self):
        """Message field 'right_channel_idx'."""
        return self._right_channel_idx

    @right_channel_idx.setter
    def right_channel_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_channel_idx' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_channel_idx' field must be an integer in [-32768, 32767]"
        self._right_channel_idx = value

    @builtins.property
    def object_info(self):
        """Message field 'object_info'."""
        return self._object_info

    @object_info.setter
    def object_info(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelObjectInfo
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
                 all(isinstance(v, ChannelObjectInfo) for v in value) and
                 True), \
                "The 'object_info' field must be a set or sequence and each value of type 'ChannelObjectInfo'"
        self._object_info = value

    @builtins.property
    def signal_info(self):
        """Message field 'signal_info'."""
        return self._signal_info

    @signal_info.setter
    def signal_info(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelSignalInfo
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
                 all(isinstance(v, ChannelSignalInfo) for v in value) and
                 True), \
                "The 'signal_info' field must be a set or sequence and each value of type 'ChannelSignalInfo'"
        self._signal_info = value
