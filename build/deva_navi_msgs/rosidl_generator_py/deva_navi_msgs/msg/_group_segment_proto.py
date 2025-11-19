# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/GroupSegmentProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GroupSegmentProto(type):
    """Metaclass of message 'GroupSegmentProto'."""

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
            module = import_type_support('deva_navi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_navi_msgs.msg.GroupSegmentProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__group_segment_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__group_segment_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__group_segment_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__group_segment_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__group_segment_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GroupSegmentProto(metaclass=Metaclass_GroupSegmentProto):
    """Message class 'GroupSegmentProto'."""

    __slots__ = [
        '_length',
        '_toll_cost',
        '_road_name',
        '_start_segment_index',
        '_segment_count',
        '_status',
        '_speed',
        '_is_via_point',
        '_is_crucial',
    ]

    _fields_and_field_types = {
        'length': 'int64',
        'toll_cost': 'int64',
        'road_name': 'string',
        'start_segment_index': 'int32',
        'segment_count': 'int32',
        'status': 'int32',
        'speed': 'int32',
        'is_via_point': 'boolean',
        'is_crucial': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.length = kwargs.get('length', int())
        self.toll_cost = kwargs.get('toll_cost', int())
        self.road_name = kwargs.get('road_name', str())
        self.start_segment_index = kwargs.get('start_segment_index', int())
        self.segment_count = kwargs.get('segment_count', int())
        self.status = kwargs.get('status', int())
        self.speed = kwargs.get('speed', int())
        self.is_via_point = kwargs.get('is_via_point', bool())
        self.is_crucial = kwargs.get('is_crucial', bool())

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
        if self.length != other.length:
            return False
        if self.toll_cost != other.toll_cost:
            return False
        if self.road_name != other.road_name:
            return False
        if self.start_segment_index != other.start_segment_index:
            return False
        if self.segment_count != other.segment_count:
            return False
        if self.status != other.status:
            return False
        if self.speed != other.speed:
            return False
        if self.is_via_point != other.is_via_point:
            return False
        if self.is_crucial != other.is_crucial:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'length' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._length = value

    @builtins.property
    def toll_cost(self):
        """Message field 'toll_cost'."""
        return self._toll_cost

    @toll_cost.setter
    def toll_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toll_cost' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'toll_cost' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._toll_cost = value

    @builtins.property
    def road_name(self):
        """Message field 'road_name'."""
        return self._road_name

    @road_name.setter
    def road_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'road_name' field must be of type 'str'"
        self._road_name = value

    @builtins.property
    def start_segment_index(self):
        """Message field 'start_segment_index'."""
        return self._start_segment_index

    @start_segment_index.setter
    def start_segment_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_segment_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'start_segment_index' field must be an integer in [-2147483648, 2147483647]"
        self._start_segment_index = value

    @builtins.property
    def segment_count(self):
        """Message field 'segment_count'."""
        return self._segment_count

    @segment_count.setter
    def segment_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'segment_count' field must be an integer in [-2147483648, 2147483647]"
        self._segment_count = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'speed' field must be an integer in [-2147483648, 2147483647]"
        self._speed = value

    @builtins.property
    def is_via_point(self):
        """Message field 'is_via_point'."""
        return self._is_via_point

    @is_via_point.setter
    def is_via_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_via_point' field must be of type 'bool'"
        self._is_via_point = value

    @builtins.property
    def is_crucial(self):
        """Message field 'is_crucial'."""
        return self._is_crucial

    @is_crucial.setter
    def is_crucial(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_crucial' field must be of type 'bool'"
        self._is_crucial = value
