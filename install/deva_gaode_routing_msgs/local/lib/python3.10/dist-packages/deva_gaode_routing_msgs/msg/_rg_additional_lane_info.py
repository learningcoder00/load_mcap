# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'arrow'
# Member 'flag'
# Member 'rg_add_lane_property'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGAdditionalLaneInfo(type):
    """Metaclass of message 'RGAdditionalLaneInfo'."""

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
                'deva_gaode_routing_msgs.msg.RGAdditionalLaneInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rg_additional_lane_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rg_additional_lane_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rg_additional_lane_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rg_additional_lane_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rg_additional_lane_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RGAdditionalLaneInfo(metaclass=Metaclass_RGAdditionalLaneInfo):
    """Message class 'RGAdditionalLaneInfo'."""

    __slots__ = [
        '_arrow',
        '_flag',
        '_rg_add_lane_property',
        '_active_time',
    ]

    _fields_and_field_types = {
        'arrow': 'sequence<uint32>',
        'flag': 'sequence<uint32>',
        'rg_add_lane_property': 'sequence<uint32>',
        'active_time': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arrow = array.array('I', kwargs.get('arrow', []))
        self.flag = array.array('I', kwargs.get('flag', []))
        self.rg_add_lane_property = array.array('I', kwargs.get('rg_add_lane_property', []))
        self.active_time = kwargs.get('active_time', str())

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
        if self.arrow != other.arrow:
            return False
        if self.flag != other.flag:
            return False
        if self.rg_add_lane_property != other.rg_add_lane_property:
            return False
        if self.active_time != other.active_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def rg_add_lane_property(self):
        """Message field 'rg_add_lane_property'."""
        return self._rg_add_lane_property

    @rg_add_lane_property.setter
    def rg_add_lane_property(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'rg_add_lane_property' array.array() must have the type code of 'I'"
            self._rg_add_lane_property = value
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
                "The 'rg_add_lane_property' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._rg_add_lane_property = array.array('I', value)

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
