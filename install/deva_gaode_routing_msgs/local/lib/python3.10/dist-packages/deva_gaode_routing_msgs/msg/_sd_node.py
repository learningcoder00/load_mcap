# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SDNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'in_linklist'
# Member 'out_linklist'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SDNode(type):
    """Metaclass of message 'SDNode'."""

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
                'deva_gaode_routing_msgs.msg.SDNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_node

            from deva_gaode_routing_msgs.msg import SDCross
            if SDCross.__class__._TYPE_SUPPORT is None:
                SDCross.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SolidLine
            if SolidLine.__class__._TYPE_SUPPORT is None:
                SolidLine.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SDNode(metaclass=Metaclass_SDNode):
    """Message class 'SDNode'."""

    __slots__ = [
        '_id',
        '_geo',
        '_in_linklist',
        '_out_linklist',
        '_change_point',
        '_sd_cross',
        '_solid_line',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'geo': 'deva_gaode_routing_msgs/WebPoint',
        'in_linklist': 'sequence<uint64>',
        'out_linklist': 'sequence<uint64>',
        'change_point': 'uint32',
        'sd_cross': 'deva_gaode_routing_msgs/SDCross',
        'solid_line': 'sequence<deva_gaode_routing_msgs/SolidLine>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SDCross'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SolidLine')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from deva_gaode_routing_msgs.msg import WebPoint
        self.geo = kwargs.get('geo', WebPoint())
        self.in_linklist = array.array('Q', kwargs.get('in_linklist', []))
        self.out_linklist = array.array('Q', kwargs.get('out_linklist', []))
        self.change_point = kwargs.get('change_point', int())
        from deva_gaode_routing_msgs.msg import SDCross
        self.sd_cross = kwargs.get('sd_cross', SDCross())
        self.solid_line = kwargs.get('solid_line', [])

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
        if self.geo != other.geo:
            return False
        if self.in_linklist != other.in_linklist:
            return False
        if self.out_linklist != other.out_linklist:
            return False
        if self.change_point != other.change_point:
            return False
        if self.sd_cross != other.sd_cross:
            return False
        if self.solid_line != other.solid_line:
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
    def geo(self):
        """Message field 'geo'."""
        return self._geo

    @geo.setter
    def geo(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'geo' field must be a sub message of type 'WebPoint'"
        self._geo = value

    @builtins.property
    def in_linklist(self):
        """Message field 'in_linklist'."""
        return self._in_linklist

    @in_linklist.setter
    def in_linklist(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'in_linklist' array.array() must have the type code of 'Q'"
            self._in_linklist = value
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
                "The 'in_linklist' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._in_linklist = array.array('Q', value)

    @builtins.property
    def out_linklist(self):
        """Message field 'out_linklist'."""
        return self._out_linklist

    @out_linklist.setter
    def out_linklist(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'out_linklist' array.array() must have the type code of 'Q'"
            self._out_linklist = value
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
                "The 'out_linklist' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._out_linklist = array.array('Q', value)

    @builtins.property
    def change_point(self):
        """Message field 'change_point'."""
        return self._change_point

    @change_point.setter
    def change_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_point' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'change_point' field must be an unsigned integer in [0, 4294967295]"
        self._change_point = value

    @builtins.property
    def sd_cross(self):
        """Message field 'sd_cross'."""
        return self._sd_cross

    @sd_cross.setter
    def sd_cross(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SDCross
            assert \
                isinstance(value, SDCross), \
                "The 'sd_cross' field must be a sub message of type 'SDCross'"
        self._sd_cross = value

    @builtins.property
    def solid_line(self):
        """Message field 'solid_line'."""
        return self._solid_line

    @solid_line.setter
    def solid_line(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SolidLine
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
                 all(isinstance(v, SolidLine) for v in value) and
                 True), \
                "The 'solid_line' field must be a set or sequence and each value of type 'SolidLine'"
        self._solid_line = value
