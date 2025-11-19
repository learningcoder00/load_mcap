# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/Guidance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Guidance(type):
    """Metaclass of message 'Guidance'."""

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
                'deva_gaode_routing_msgs.msg.Guidance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__guidance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__guidance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__guidance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__guidance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__guidance

            from deva_gaode_routing_msgs.msg import KLaneMetaInfo
            if KLaneMetaInfo.__class__._TYPE_SUPPORT is None:
                KLaneMetaInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import KLsl
            if KLsl.__class__._TYPE_SUPPORT is None:
                KLsl.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import KWarningSign
            if KWarningSign.__class__._TYPE_SUPPORT is None:
                KWarningSign.__class__.__import_type_support__()

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


class Guidance(metaclass=Metaclass_Guidance):
    """Message class 'Guidance'."""

    __slots__ = [
        '_in_link_id',
        '_node_id',
        '_pass_link_id_s',
        '_k_warning_sign',
        '_k_lane_meta_info',
        '_k_lsl',
    ]

    _fields_and_field_types = {
        'in_link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'node_id': 'deva_gaode_routing_msgs/NodeIDType',
        'pass_link_id_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'k_warning_sign': 'deva_gaode_routing_msgs/KWarningSign',
        'k_lane_meta_info': 'deva_gaode_routing_msgs/KLaneMetaInfo',
        'k_lsl': 'deva_gaode_routing_msgs/KLsl',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'KWarningSign'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'KLaneMetaInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'KLsl'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.in_link_id = kwargs.get('in_link_id', LinkIDType())
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.node_id = kwargs.get('node_id', NodeIDType())
        self.pass_link_id_s = kwargs.get('pass_link_id_s', [])
        from deva_gaode_routing_msgs.msg import KWarningSign
        self.k_warning_sign = kwargs.get('k_warning_sign', KWarningSign())
        from deva_gaode_routing_msgs.msg import KLaneMetaInfo
        self.k_lane_meta_info = kwargs.get('k_lane_meta_info', KLaneMetaInfo())
        from deva_gaode_routing_msgs.msg import KLsl
        self.k_lsl = kwargs.get('k_lsl', KLsl())

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
        if self.k_warning_sign != other.k_warning_sign:
            return False
        if self.k_lane_meta_info != other.k_lane_meta_info:
            return False
        if self.k_lsl != other.k_lsl:
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
                "The 'pass_link_id_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._pass_link_id_s = value

    @builtins.property
    def k_warning_sign(self):
        """Message field 'k_warning_sign'."""
        return self._k_warning_sign

    @k_warning_sign.setter
    def k_warning_sign(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import KWarningSign
            assert \
                isinstance(value, KWarningSign), \
                "The 'k_warning_sign' field must be a sub message of type 'KWarningSign'"
        self._k_warning_sign = value

    @builtins.property
    def k_lane_meta_info(self):
        """Message field 'k_lane_meta_info'."""
        return self._k_lane_meta_info

    @k_lane_meta_info.setter
    def k_lane_meta_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import KLaneMetaInfo
            assert \
                isinstance(value, KLaneMetaInfo), \
                "The 'k_lane_meta_info' field must be a sub message of type 'KLaneMetaInfo'"
        self._k_lane_meta_info = value

    @builtins.property
    def k_lsl(self):
        """Message field 'k_lsl'."""
        return self._k_lsl

    @k_lsl.setter
    def k_lsl(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import KLsl
            assert \
                isinstance(value, KLsl), \
                "The 'k_lsl' field must be a sub message of type 'KLsl'"
        self._k_lsl = value
