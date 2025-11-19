# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/ReferenceChannal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReferenceChannal(type):
    """Metaclass of message 'ReferenceChannal'."""

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
                'deva_map_msgs.msg.ReferenceChannal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reference_channal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reference_channal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reference_channal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reference_channal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reference_channal

            from deva_map_msgs.msg import ChannelLaneLine
            if ChannelLaneLine.__class__._TYPE_SUPPORT is None:
                ChannelLaneLine.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelLaneMarking
            if ChannelLaneMarking.__class__._TYPE_SUPPORT is None:
                ChannelLaneMarking.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelObjectInfo
            if ChannelObjectInfo.__class__._TYPE_SUPPORT is None:
                ChannelObjectInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReferenceChannal(metaclass=Metaclass_ReferenceChannal):
    """Message class 'ReferenceChannal'."""

    __slots__ = [
        '_available',
        '_confidence_coefficient',
        '_channel_idx',
        '_middle_line',
        '_left_marking',
        '_right_marking',
        '_object_infos',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'confidence_coefficient': 'double',
        'channel_idx': 'int16',
        'middle_line': 'deva_map_msgs/ChannelLaneLine',
        'left_marking': 'deva_map_msgs/ChannelLaneMarking',
        'right_marking': 'deva_map_msgs/ChannelLaneMarking',
        'object_infos': 'sequence<deva_map_msgs/ChannelObjectInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneLine'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneMarking'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelLaneMarking'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelObjectInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        self.confidence_coefficient = kwargs.get('confidence_coefficient', float())
        self.channel_idx = kwargs.get('channel_idx', int())
        from deva_map_msgs.msg import ChannelLaneLine
        self.middle_line = kwargs.get('middle_line', ChannelLaneLine())
        from deva_map_msgs.msg import ChannelLaneMarking
        self.left_marking = kwargs.get('left_marking', ChannelLaneMarking())
        from deva_map_msgs.msg import ChannelLaneMarking
        self.right_marking = kwargs.get('right_marking', ChannelLaneMarking())
        self.object_infos = kwargs.get('object_infos', [])

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
        if self.confidence_coefficient != other.confidence_coefficient:
            return False
        if self.channel_idx != other.channel_idx:
            return False
        if self.middle_line != other.middle_line:
            return False
        if self.left_marking != other.left_marking:
            return False
        if self.right_marking != other.right_marking:
            return False
        if self.object_infos != other.object_infos:
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
    def confidence_coefficient(self):
        """Message field 'confidence_coefficient'."""
        return self._confidence_coefficient

    @confidence_coefficient.setter
    def confidence_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence_coefficient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence_coefficient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence_coefficient = value

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
    def object_infos(self):
        """Message field 'object_infos'."""
        return self._object_infos

    @object_infos.setter
    def object_infos(self, value):
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
                "The 'object_infos' field must be a set or sequence and each value of type 'ChannelObjectInfo'"
        self._object_infos = value
