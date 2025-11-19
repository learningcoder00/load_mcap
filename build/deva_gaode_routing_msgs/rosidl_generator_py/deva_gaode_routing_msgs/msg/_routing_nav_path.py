# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoutingNavPath(type):
    """Metaclass of message 'RoutingNavPath'."""

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
                'deva_gaode_routing_msgs.msg.RoutingNavPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__routing_nav_path
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__routing_nav_path
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__routing_nav_path
            cls._TYPE_SUPPORT = module.type_support_msg__msg__routing_nav_path
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__routing_nav_path

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoutingNavPath(metaclass=Metaclass_RoutingNavPath):
    """Message class 'RoutingNavPath'."""

    __slots__ = [
        '_header',
        '_version',
        '_status',
        '_md5',
        '_index',
        '_start_point',
        '_way_points',
        '_end_point',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version': 'string',
        'status': 'boolean',
        'md5': 'string',
        'index': 'uint32',
        'start_point': 'deva_gaode_routing_msgs/WebPoint',
        'way_points': 'sequence<deva_gaode_routing_msgs/WebPoint>',
        'end_point': 'deva_gaode_routing_msgs/WebPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.version = kwargs.get('version', str())
        self.status = kwargs.get('status', bool())
        self.md5 = kwargs.get('md5', str())
        self.index = kwargs.get('index', int())
        from deva_gaode_routing_msgs.msg import WebPoint
        self.start_point = kwargs.get('start_point', WebPoint())
        self.way_points = kwargs.get('way_points', [])
        from deva_gaode_routing_msgs.msg import WebPoint
        self.end_point = kwargs.get('end_point', WebPoint())

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
        if self.header != other.header:
            return False
        if self.version != other.version:
            return False
        if self.status != other.status:
            return False
        if self.md5 != other.md5:
            return False
        if self.index != other.index:
            return False
        if self.start_point != other.start_point:
            return False
        if self.way_points != other.way_points:
            return False
        if self.end_point != other.end_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version' field must be of type 'str'"
        self._version = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value

    @builtins.property
    def md5(self):
        """Message field 'md5'."""
        return self._md5

    @md5.setter
    def md5(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'md5' field must be of type 'str'"
        self._md5 = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'index' field must be an unsigned integer in [0, 4294967295]"
        self._index = value

    @builtins.property
    def start_point(self):
        """Message field 'start_point'."""
        return self._start_point

    @start_point.setter
    def start_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'start_point' field must be a sub message of type 'WebPoint'"
        self._start_point = value

    @builtins.property
    def way_points(self):
        """Message field 'way_points'."""
        return self._way_points

    @way_points.setter
    def way_points(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
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
                 all(isinstance(v, WebPoint) for v in value) and
                 True), \
                "The 'way_points' field must be a set or sequence and each value of type 'WebPoint'"
        self._way_points = value

    @builtins.property
    def end_point(self):
        """Message field 'end_point'."""
        return self._end_point

    @end_point.setter
    def end_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'end_point' field must be a sub message of type 'WebPoint'"
        self._end_point = value
