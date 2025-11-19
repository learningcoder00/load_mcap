# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/Node.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Node(type):
    """Metaclass of message 'Node'."""

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
                'deva_gaode_routing_msgs.msg.Node')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkIDType
            if LinkIDType.__class__._TYPE_SUPPORT is None:
                LinkIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import NodeIDType
            if NodeIDType.__class__._TYPE_SUPPORT is None:
                NodeIDType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Node(metaclass=Metaclass_Node):
    """Message class 'Node'."""

    __slots__ = [
        '_tpid',
        '_cross_flag',
        '_has_traffic_light',
        '_position',
        '_links_enter',
        '_links_enter_cross',
        '_links_out',
        '_links_out_cross',
    ]

    _fields_and_field_types = {
        'tpid': 'deva_gaode_routing_msgs/NodeIDType',
        'cross_flag': 'uint8',
        'has_traffic_light': 'boolean',
        'position': 'deva_gaode_routing_msgs/Coordinate',
        'links_enter': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'links_enter_cross': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'links_out': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'links_out_cross': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.tpid = kwargs.get('tpid', NodeIDType())
        self.cross_flag = kwargs.get('cross_flag', int())
        self.has_traffic_light = kwargs.get('has_traffic_light', bool())
        from deva_gaode_routing_msgs.msg import Coordinate
        self.position = kwargs.get('position', Coordinate())
        self.links_enter = kwargs.get('links_enter', [])
        self.links_enter_cross = kwargs.get('links_enter_cross', [])
        self.links_out = kwargs.get('links_out', [])
        self.links_out_cross = kwargs.get('links_out_cross', [])

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
        if self.tpid != other.tpid:
            return False
        if self.cross_flag != other.cross_flag:
            return False
        if self.has_traffic_light != other.has_traffic_light:
            return False
        if self.position != other.position:
            return False
        if self.links_enter != other.links_enter:
            return False
        if self.links_enter_cross != other.links_enter_cross:
            return False
        if self.links_out != other.links_out:
            return False
        if self.links_out_cross != other.links_out_cross:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tpid(self):
        """Message field 'tpid'."""
        return self._tpid

    @tpid.setter
    def tpid(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NodeIDType
            assert \
                isinstance(value, NodeIDType), \
                "The 'tpid' field must be a sub message of type 'NodeIDType'"
        self._tpid = value

    @builtins.property
    def cross_flag(self):
        """Message field 'cross_flag'."""
        return self._cross_flag

    @cross_flag.setter
    def cross_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cross_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cross_flag' field must be an unsigned integer in [0, 255]"
        self._cross_flag = value

    @builtins.property
    def has_traffic_light(self):
        """Message field 'has_traffic_light'."""
        return self._has_traffic_light

    @has_traffic_light.setter
    def has_traffic_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_traffic_light' field must be of type 'bool'"
        self._has_traffic_light = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'position' field must be a sub message of type 'Coordinate'"
        self._position = value

    @builtins.property
    def links_enter(self):
        """Message field 'links_enter'."""
        return self._links_enter

    @links_enter.setter
    def links_enter(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
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
                 all(isinstance(v, LinkIDType) for v in value) and
                 True), \
                "The 'links_enter' field must be a set or sequence and each value of type 'LinkIDType'"
        self._links_enter = value

    @builtins.property
    def links_enter_cross(self):
        """Message field 'links_enter_cross'."""
        return self._links_enter_cross

    @links_enter_cross.setter
    def links_enter_cross(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
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
                 all(isinstance(v, LinkIDType) for v in value) and
                 True), \
                "The 'links_enter_cross' field must be a set or sequence and each value of type 'LinkIDType'"
        self._links_enter_cross = value

    @builtins.property
    def links_out(self):
        """Message field 'links_out'."""
        return self._links_out

    @links_out.setter
    def links_out(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
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
                 all(isinstance(v, LinkIDType) for v in value) and
                 True), \
                "The 'links_out' field must be a set or sequence and each value of type 'LinkIDType'"
        self._links_out = value

    @builtins.property
    def links_out_cross(self):
        """Message field 'links_out_cross'."""
        return self._links_out_cross

    @links_out_cross.setter
    def links_out_cross(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
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
                 all(isinstance(v, LinkIDType) for v in value) and
                 True), \
                "The 'links_out_cross' field must be a set or sequence and each value of type 'LinkIDType'"
        self._links_out_cross = value
