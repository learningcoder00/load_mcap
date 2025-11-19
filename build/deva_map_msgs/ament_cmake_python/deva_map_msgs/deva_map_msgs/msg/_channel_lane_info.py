# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/ChannelLaneInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChannelLaneInfo(type):
    """Metaclass of message 'ChannelLaneInfo'."""

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
                'deva_map_msgs.msg.ChannelLaneInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__channel_lane_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__channel_lane_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__channel_lane_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__channel_lane_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__channel_lane_info

            from deva_map_msgs.msg import ChannelLaneSpeedLimitation
            if ChannelLaneSpeedLimitation.__class__._TYPE_SUPPORT is None:
                ChannelLaneSpeedLimitation.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelLaneType
            if ChannelLaneType.__class__._TYPE_SUPPORT is None:
                ChannelLaneType.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelTurnType
            if ChannelTurnType.__class__._TYPE_SUPPORT is None:
                ChannelTurnType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChannelLaneInfo(metaclass=Metaclass_ChannelLaneInfo):
    """Message class 'ChannelLaneInfo'."""

    __slots__ = [
        '_lane_id_vec',
        '_lanetype_vec',
        '_turntype_vec',
        '_lanespeedlimitation_vec',
    ]

    _fields_and_field_types = {
        'lane_id_vec': 'sequence<string>',
        'lanetype_vec': 'sequence<deva_map_msgs/ChannelLaneType>',
        'turntype_vec': 'sequence<deva_map_msgs/ChannelTurnType>',
        'lanespeedlimitation_vec': 'sequence<deva_map_msgs/ChannelLaneSpeedLimitation>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelTurnType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneSpeedLimitation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_id_vec = kwargs.get('lane_id_vec', [])
        self.lanetype_vec = kwargs.get('lanetype_vec', [])
        self.turntype_vec = kwargs.get('turntype_vec', [])
        self.lanespeedlimitation_vec = kwargs.get('lanespeedlimitation_vec', [])

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
        if self.lane_id_vec != other.lane_id_vec:
            return False
        if self.lanetype_vec != other.lanetype_vec:
            return False
        if self.turntype_vec != other.turntype_vec:
            return False
        if self.lanespeedlimitation_vec != other.lanespeedlimitation_vec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_id_vec(self):
        """Message field 'lane_id_vec'."""
        return self._lane_id_vec

    @lane_id_vec.setter
    def lane_id_vec(self, value):
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
                "The 'lane_id_vec' field must be a set or sequence and each value of type 'str'"
        self._lane_id_vec = value

    @builtins.property
    def lanetype_vec(self):
        """Message field 'lanetype_vec'."""
        return self._lanetype_vec

    @lanetype_vec.setter
    def lanetype_vec(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneType
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
                 all(isinstance(v, ChannelLaneType) for v in value) and
                 True), \
                "The 'lanetype_vec' field must be a set or sequence and each value of type 'ChannelLaneType'"
        self._lanetype_vec = value

    @builtins.property
    def turntype_vec(self):
        """Message field 'turntype_vec'."""
        return self._turntype_vec

    @turntype_vec.setter
    def turntype_vec(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelTurnType
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
                 all(isinstance(v, ChannelTurnType) for v in value) and
                 True), \
                "The 'turntype_vec' field must be a set or sequence and each value of type 'ChannelTurnType'"
        self._turntype_vec = value

    @builtins.property
    def lanespeedlimitation_vec(self):
        """Message field 'lanespeedlimitation_vec'."""
        return self._lanespeedlimitation_vec

    @lanespeedlimitation_vec.setter
    def lanespeedlimitation_vec(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelLaneSpeedLimitation
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
                 all(isinstance(v, ChannelLaneSpeedLimitation) for v in value) and
                 True), \
                "The 'lanespeedlimitation_vec' field must be a set or sequence and each value of type 'ChannelLaneSpeedLimitation'"
        self._lanespeedlimitation_vec = value
