# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProMap(type):
    """Metaclass of message 'SdProMap'."""

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
                'deva_gaode_routing_msgs.msg.SdProMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_map

            from deva_gaode_routing_msgs.msg import NavRoute
            if NavRoute.__class__._TYPE_SUPPORT is None:
                NavRoute.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SDNode
            if SDNode.__class__._TYPE_SUPPORT is None:
                SDNode.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProLink
            if SdProLink.__class__._TYPE_SUPPORT is None:
                SdProLink.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProPath
            if SdProPath.__class__._TYPE_SUPPORT is None:
                SdProPath.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProPathMerge
            if SdProPathMerge.__class__._TYPE_SUPPORT is None:
                SdProPathMerge.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProPathSplit
            if SdProPathSplit.__class__._TYPE_SUPPORT is None:
                SdProPathSplit.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProMap(metaclass=Metaclass_SdProMap):
    """Message class 'SdProMap'."""

    __slots__ = [
        '_version',
        '_city_code',
        '_navi_route',
        '_paths',
        '_links',
        '_path_splits',
        '_path_merges',
        '_sd_nodes',
    ]

    _fields_and_field_types = {
        'version': 'uint32',
        'city_code': 'uint32',
        'navi_route': 'deva_gaode_routing_msgs/NavRoute',
        'paths': 'sequence<deva_gaode_routing_msgs/SdProPath>',
        'links': 'sequence<deva_gaode_routing_msgs/SdProLink>',
        'path_splits': 'sequence<deva_gaode_routing_msgs/SdProPathSplit>',
        'path_merges': 'sequence<deva_gaode_routing_msgs/SdProPathMerge>',
        'sd_nodes': 'sequence<deva_gaode_routing_msgs/SDNode>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NavRoute'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProPath')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProLink')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProPathSplit')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProPathMerge')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SDNode')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.version = kwargs.get('version', int())
        self.city_code = kwargs.get('city_code', int())
        from deva_gaode_routing_msgs.msg import NavRoute
        self.navi_route = kwargs.get('navi_route', NavRoute())
        self.paths = kwargs.get('paths', [])
        self.links = kwargs.get('links', [])
        self.path_splits = kwargs.get('path_splits', [])
        self.path_merges = kwargs.get('path_merges', [])
        self.sd_nodes = kwargs.get('sd_nodes', [])

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
        if self.version != other.version:
            return False
        if self.city_code != other.city_code:
            return False
        if self.navi_route != other.navi_route:
            return False
        if self.paths != other.paths:
            return False
        if self.links != other.links:
            return False
        if self.path_splits != other.path_splits:
            return False
        if self.path_merges != other.path_merges:
            return False
        if self.sd_nodes != other.sd_nodes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'version' field must be an unsigned integer in [0, 4294967295]"
        self._version = value

    @builtins.property
    def city_code(self):
        """Message field 'city_code'."""
        return self._city_code

    @city_code.setter
    def city_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'city_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'city_code' field must be an unsigned integer in [0, 4294967295]"
        self._city_code = value

    @builtins.property
    def navi_route(self):
        """Message field 'navi_route'."""
        return self._navi_route

    @navi_route.setter
    def navi_route(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NavRoute
            assert \
                isinstance(value, NavRoute), \
                "The 'navi_route' field must be a sub message of type 'NavRoute'"
        self._navi_route = value

    @builtins.property
    def paths(self):
        """Message field 'paths'."""
        return self._paths

    @paths.setter
    def paths(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProPath
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
                 all(isinstance(v, SdProPath) for v in value) and
                 True), \
                "The 'paths' field must be a set or sequence and each value of type 'SdProPath'"
        self._paths = value

    @builtins.property
    def links(self):
        """Message field 'links'."""
        return self._links

    @links.setter
    def links(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProLink
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
                 all(isinstance(v, SdProLink) for v in value) and
                 True), \
                "The 'links' field must be a set or sequence and each value of type 'SdProLink'"
        self._links = value

    @builtins.property
    def path_splits(self):
        """Message field 'path_splits'."""
        return self._path_splits

    @path_splits.setter
    def path_splits(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProPathSplit
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
                 all(isinstance(v, SdProPathSplit) for v in value) and
                 True), \
                "The 'path_splits' field must be a set or sequence and each value of type 'SdProPathSplit'"
        self._path_splits = value

    @builtins.property
    def path_merges(self):
        """Message field 'path_merges'."""
        return self._path_merges

    @path_merges.setter
    def path_merges(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProPathMerge
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
                 all(isinstance(v, SdProPathMerge) for v in value) and
                 True), \
                "The 'path_merges' field must be a set or sequence and each value of type 'SdProPathMerge'"
        self._path_merges = value

    @builtins.property
    def sd_nodes(self):
        """Message field 'sd_nodes'."""
        return self._sd_nodes

    @sd_nodes.setter
    def sd_nodes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SDNode
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
                 all(isinstance(v, SDNode) for v in value) and
                 True), \
                "The 'sd_nodes' field must be a set or sequence and each value of type 'SDNode'"
        self._sd_nodes = value
