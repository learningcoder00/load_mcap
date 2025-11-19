# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KWarningSign(type):
    """Metaclass of message 'KWarningSign'."""

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
                'deva_gaode_routing_msgs.msg.KWarningSign')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__k_warning_sign
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__k_warning_sign
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__k_warning_sign
            cls._TYPE_SUPPORT = module.type_support_msg__msg__k_warning_sign
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__k_warning_sign

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


class KWarningSign(metaclass=Metaclass_KWarningSign):
    """Message class 'KWarningSign'."""

    __slots__ = [
        '_in_link_id',
        '_node_id',
        '_pass_link_id_s',
        '_trc_kind',
        '_forcetold_dist',
        '_control_dist',
        '_link_direction',
        '_descript',
        '_coordinate',
    ]

    _fields_and_field_types = {
        'in_link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'node_id': 'deva_gaode_routing_msgs/NodeIDType',
        'pass_link_id_s': 'deva_gaode_routing_msgs/LinkIDType',
        'trc_kind': 'uint16',
        'forcetold_dist': 'uint16',
        'control_dist': 'uint16',
        'link_direction': 'uint8',
        'descript': 'string',
        'coordinate': 'deva_gaode_routing_msgs/Coordinate',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
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
        self.trc_kind = kwargs.get('trc_kind', int())
        self.forcetold_dist = kwargs.get('forcetold_dist', int())
        self.control_dist = kwargs.get('control_dist', int())
        self.link_direction = kwargs.get('link_direction', int())
        self.descript = kwargs.get('descript', str())
        from deva_gaode_routing_msgs.msg import Coordinate
        self.coordinate = kwargs.get('coordinate', Coordinate())

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
        if self.trc_kind != other.trc_kind:
            return False
        if self.forcetold_dist != other.forcetold_dist:
            return False
        if self.control_dist != other.control_dist:
            return False
        if self.link_direction != other.link_direction:
            return False
        if self.descript != other.descript:
            return False
        if self.coordinate != other.coordinate:
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
    def trc_kind(self):
        """Message field 'trc_kind'."""
        return self._trc_kind

    @trc_kind.setter
    def trc_kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trc_kind' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trc_kind' field must be an unsigned integer in [0, 65535]"
        self._trc_kind = value

    @builtins.property
    def forcetold_dist(self):
        """Message field 'forcetold_dist'."""
        return self._forcetold_dist

    @forcetold_dist.setter
    def forcetold_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'forcetold_dist' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'forcetold_dist' field must be an unsigned integer in [0, 65535]"
        self._forcetold_dist = value

    @builtins.property
    def control_dist(self):
        """Message field 'control_dist'."""
        return self._control_dist

    @control_dist.setter
    def control_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_dist' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'control_dist' field must be an unsigned integer in [0, 65535]"
        self._control_dist = value

    @builtins.property
    def link_direction(self):
        """Message field 'link_direction'."""
        return self._link_direction

    @link_direction.setter
    def link_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'link_direction' field must be an unsigned integer in [0, 255]"
        self._link_direction = value

    @builtins.property
    def descript(self):
        """Message field 'descript'."""
        return self._descript

    @descript.setter
    def descript(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'descript' field must be of type 'str'"
        self._descript = value

    @builtins.property
    def coordinate(self):
        """Message field 'coordinate'."""
        return self._coordinate

    @coordinate.setter
    def coordinate(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'coordinate' field must be a sub message of type 'Coordinate'"
        self._coordinate = value
