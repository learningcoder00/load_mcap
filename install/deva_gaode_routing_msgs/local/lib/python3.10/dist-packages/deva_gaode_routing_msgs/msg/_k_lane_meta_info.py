# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KLaneMetaInfo(type):
    """Metaclass of message 'KLaneMetaInfo'."""

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
                'deva_gaode_routing_msgs.msg.KLaneMetaInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__k_lane_meta_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__k_lane_meta_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__k_lane_meta_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__k_lane_meta_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__k_lane_meta_info

            from deva_gaode_routing_msgs.msg import LaneTopo
            if LaneTopo.__class__._TYPE_SUPPORT is None:
                LaneTopo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LaneTrafficInfo
            if LaneTrafficInfo.__class__._TYPE_SUPPORT is None:
                LaneTrafficInfo.__class__.__import_type_support__()

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


class KLaneMetaInfo(metaclass=Metaclass_KLaneMetaInfo):
    """Message class 'KLaneMetaInfo'."""

    __slots__ = [
        '_in_link_id',
        '_node_id',
        '_pass_link_id_s',
        '_lane_num',
        '_lane_num_left',
        '_lane_num_right',
        '_lane_infos',
        '_lane_topos',
    ]

    _fields_and_field_types = {
        'in_link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'node_id': 'deva_gaode_routing_msgs/NodeIDType',
        'pass_link_id_s': 'deva_gaode_routing_msgs/LinkIDType',
        'lane_num': 'int32',
        'lane_num_left': 'uint8',
        'lane_num_right': 'uint8',
        'lane_infos': 'sequence<deva_gaode_routing_msgs/LaneTrafficInfo>',
        'lane_topos': 'sequence<deva_gaode_routing_msgs/LaneTopo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LaneTrafficInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LaneTopo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.in_link_id = kwargs.get('in_link_id', LinkIDType())
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.node_id = kwargs.get('node_id', NodeIDType())
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.pass_link_id_s = kwargs.get('pass_link_id_s', LinkIDType())
        self.lane_num = kwargs.get('lane_num', int())
        self.lane_num_left = kwargs.get('lane_num_left', int())
        self.lane_num_right = kwargs.get('lane_num_right', int())
        self.lane_infos = kwargs.get('lane_infos', [])
        self.lane_topos = kwargs.get('lane_topos', [])

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
        if self.in_link_id != other.in_link_id:
            return False
        if self.node_id != other.node_id:
            return False
        if self.pass_link_id_s != other.pass_link_id_s:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.lane_num_left != other.lane_num_left:
            return False
        if self.lane_num_right != other.lane_num_right:
            return False
        if self.lane_infos != other.lane_infos:
            return False
        if self.lane_topos != other.lane_topos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def in_link_id(self):
        """Message field 'in_link_id'."""
        return self._in_link_id

    @in_link_id.setter
    def in_link_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'in_link_id' field must be a sub message of type 'LinkIDType'"
        self._in_link_id = value

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NodeIDType
            assert \
                isinstance(value, NodeIDType), \
                "The 'node_id' field must be a sub message of type 'NodeIDType'"
        self._node_id = value

    @builtins.property
    def pass_link_id_s(self):
        """Message field 'pass_link_id_s'."""
        return self._pass_link_id_s

    @pass_link_id_s.setter
    def pass_link_id_s(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'pass_link_id_s' field must be a sub message of type 'LinkIDType'"
        self._pass_link_id_s = value

    @builtins.property
    def lane_num(self):
        """Message field 'lane_num'."""
        return self._lane_num

    @lane_num.setter
    def lane_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_num' field must be an integer in [-2147483648, 2147483647]"
        self._lane_num = value

    @builtins.property
    def lane_num_left(self):
        """Message field 'lane_num_left'."""
        return self._lane_num_left

    @lane_num_left.setter
    def lane_num_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_left' field must be an unsigned integer in [0, 255]"
        self._lane_num_left = value

    @builtins.property
    def lane_num_right(self):
        """Message field 'lane_num_right'."""
        return self._lane_num_right

    @lane_num_right.setter
    def lane_num_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_right' field must be an unsigned integer in [0, 255]"
        self._lane_num_right = value

    @builtins.property
    def lane_infos(self):
        """Message field 'lane_infos'."""
        return self._lane_infos

    @lane_infos.setter
    def lane_infos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LaneTrafficInfo
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
                 all(isinstance(v, LaneTrafficInfo) for v in value) and
                 True), \
                "The 'lane_infos' field must be a set or sequence and each value of type 'LaneTrafficInfo'"
        self._lane_infos = value

    @builtins.property
    def lane_topos(self):
        """Message field 'lane_topos'."""
        return self._lane_topos

    @lane_topos.setter
    def lane_topos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LaneTopo
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
                 all(isinstance(v, LaneTopo) for v in value) and
                 True), \
                "The 'lane_topos' field must be a set or sequence and each value of type 'LaneTopo'"
        self._lane_topos = value
