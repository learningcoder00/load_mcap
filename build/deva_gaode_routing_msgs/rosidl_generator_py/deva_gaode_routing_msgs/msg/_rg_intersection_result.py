# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'inter_raw_link_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGIntersectionResult(type):
    """Metaclass of message 'RGIntersectionResult'."""

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
                'deva_gaode_routing_msgs.msg.RGIntersectionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rg_intersection_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rg_intersection_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rg_intersection_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rg_intersection_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rg_intersection_result

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


class RGIntersectionResult(metaclass=Metaclass_RGIntersectionResult):
    """Message class 'RGIntersectionResult'."""

    __slots__ = [
        '_raw_link_id',
        '_inter_type',
        '_accessory_info',
        '_enter_pos',
        '_leave_pos',
        '_inter_raw_link_ids',
    ]

    _fields_and_field_types = {
        'raw_link_id': 'uint64',
        'inter_type': 'int32',
        'accessory_info': 'int32',
        'enter_pos': 'deva_gaode_routing_msgs/RoutePos',
        'leave_pos': 'deva_gaode_routing_msgs/RoutePos',
        'inter_raw_link_ids': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RoutePos'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RoutePos'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.raw_link_id = kwargs.get('raw_link_id', int())
        self.inter_type = kwargs.get('inter_type', int())
        self.accessory_info = kwargs.get('accessory_info', int())
        from deva_gaode_routing_msgs.msg import RoutePos
        self.enter_pos = kwargs.get('enter_pos', RoutePos())
        from deva_gaode_routing_msgs.msg import RoutePos
        self.leave_pos = kwargs.get('leave_pos', RoutePos())
        self.inter_raw_link_ids = array.array('Q', kwargs.get('inter_raw_link_ids', []))

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
        if self.inter_type != other.inter_type:
            return False
        if self.accessory_info != other.accessory_info:
            return False
        if self.enter_pos != other.enter_pos:
            return False
        if self.leave_pos != other.leave_pos:
            return False
        if self.inter_raw_link_ids != other.inter_raw_link_ids:
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
    def inter_type(self):
        """Message field 'inter_type'."""
        return self._inter_type

    @inter_type.setter
    def inter_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'inter_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'inter_type' field must be an integer in [-2147483648, 2147483647]"
        self._inter_type = value

    @builtins.property
    def accessory_info(self):
        """Message field 'accessory_info'."""
        return self._accessory_info

    @accessory_info.setter
    def accessory_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accessory_info' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'accessory_info' field must be an integer in [-2147483648, 2147483647]"
        self._accessory_info = value

    @builtins.property
    def enter_pos(self):
        """Message field 'enter_pos'."""
        return self._enter_pos

    @enter_pos.setter
    def enter_pos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RoutePos
            assert \
                isinstance(value, RoutePos), \
                "The 'enter_pos' field must be a sub message of type 'RoutePos'"
        self._enter_pos = value

    @builtins.property
    def leave_pos(self):
        """Message field 'leave_pos'."""
        return self._leave_pos

    @leave_pos.setter
    def leave_pos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RoutePos
            assert \
                isinstance(value, RoutePos), \
                "The 'leave_pos' field must be a sub message of type 'RoutePos'"
        self._leave_pos = value

    @builtins.property
    def inter_raw_link_ids(self):
        """Message field 'inter_raw_link_ids'."""
        return self._inter_raw_link_ids

    @inter_raw_link_ids.setter
    def inter_raw_link_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'inter_raw_link_ids' array.array() must have the type code of 'Q'"
            self._inter_raw_link_ids = value
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
                "The 'inter_raw_link_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._inter_raw_link_ids = array.array('Q', value)
