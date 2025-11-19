# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/OddSegInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OddSegInfoProto(type):
    """Metaclass of message 'OddSegInfoProto'."""

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
                'deva_navi_msgs.msg.OddSegInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odd_seg_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odd_seg_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odd_seg_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odd_seg_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odd_seg_info_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OddSegInfoProto(metaclass=Metaclass_OddSegInfoProto):
    """Message class 'OddSegInfoProto'."""

    __slots__ = [
        '_m_odd_len',
        '_m_start_seg_idx',
        '_m_start_link_idx',
        '_m_start_off_set',
        '_m_end_seg_idx',
        '_m_end_link_idx',
        '_m_end_off_set',
    ]

    _fields_and_field_types = {
        'm_odd_len': 'int64',
        'm_start_seg_idx': 'int64',
        'm_start_link_idx': 'int64',
        'm_start_off_set': 'float',
        'm_end_seg_idx': 'int64',
        'm_end_link_idx': 'int64',
        'm_end_off_set': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.m_odd_len = kwargs.get('m_odd_len', int())
        self.m_start_seg_idx = kwargs.get('m_start_seg_idx', int())
        self.m_start_link_idx = kwargs.get('m_start_link_idx', int())
        self.m_start_off_set = kwargs.get('m_start_off_set', float())
        self.m_end_seg_idx = kwargs.get('m_end_seg_idx', int())
        self.m_end_link_idx = kwargs.get('m_end_link_idx', int())
        self.m_end_off_set = kwargs.get('m_end_off_set', float())

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
        if self.m_odd_len != other.m_odd_len:
            return False
        if self.m_start_seg_idx != other.m_start_seg_idx:
            return False
        if self.m_start_link_idx != other.m_start_link_idx:
            return False
        if self.m_start_off_set != other.m_start_off_set:
            return False
        if self.m_end_seg_idx != other.m_end_seg_idx:
            return False
        if self.m_end_link_idx != other.m_end_link_idx:
            return False
        if self.m_end_off_set != other.m_end_off_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def m_odd_len(self):
        """Message field 'm_odd_len'."""
        return self._m_odd_len

    @m_odd_len.setter
    def m_odd_len(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_odd_len' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'm_odd_len' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._m_odd_len = value

    @builtins.property
    def m_start_seg_idx(self):
        """Message field 'm_start_seg_idx'."""
        return self._m_start_seg_idx

    @m_start_seg_idx.setter
    def m_start_seg_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_start_seg_idx' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'm_start_seg_idx' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._m_start_seg_idx = value

    @builtins.property
    def m_start_link_idx(self):
        """Message field 'm_start_link_idx'."""
        return self._m_start_link_idx

    @m_start_link_idx.setter
    def m_start_link_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_start_link_idx' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'm_start_link_idx' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._m_start_link_idx = value

    @builtins.property
    def m_start_off_set(self):
        """Message field 'm_start_off_set'."""
        return self._m_start_off_set

    @m_start_off_set.setter
    def m_start_off_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_start_off_set' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm_start_off_set' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m_start_off_set = value

    @builtins.property
    def m_end_seg_idx(self):
        """Message field 'm_end_seg_idx'."""
        return self._m_end_seg_idx

    @m_end_seg_idx.setter
    def m_end_seg_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_end_seg_idx' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'm_end_seg_idx' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._m_end_seg_idx = value

    @builtins.property
    def m_end_link_idx(self):
        """Message field 'm_end_link_idx'."""
        return self._m_end_link_idx

    @m_end_link_idx.setter
    def m_end_link_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_end_link_idx' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'm_end_link_idx' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._m_end_link_idx = value

    @builtins.property
    def m_end_off_set(self):
        """Message field 'm_end_off_set'."""
        return self._m_end_off_set

    @m_end_off_set.setter
    def m_end_off_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_end_off_set' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm_end_off_set' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m_end_off_set = value
