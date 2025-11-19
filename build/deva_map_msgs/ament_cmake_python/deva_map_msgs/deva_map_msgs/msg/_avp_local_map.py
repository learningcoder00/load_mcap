# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/AvpLocalMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvpLocalMap(type):
    """Metaclass of message 'AvpLocalMap'."""

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
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.AvpLocalMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avp_local_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avp_local_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avp_local_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avp_local_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avp_local_map

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_map_msgs.msg import AvpBoundary
            if AvpBoundary.__class__._TYPE_SUPPORT is None:
                AvpBoundary.__class__.__import_type_support__()

            from deva_map_msgs.msg import AvpSubMap
            if AvpSubMap.__class__._TYPE_SUPPORT is None:
                AvpSubMap.__class__.__import_type_support__()

            from deva_map_msgs.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvpLocalMap(metaclass=Metaclass_AvpLocalMap):
    """Message class 'AvpLocalMap'."""

    __slots__ = [
        '_header',
        '_ref_line',
        '_drivable_boundary',
        '_expand_lane_center_border',
        '_avp_sub_map',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'ref_line': 'sequence<deva_map_msgs/PathPoint>',
        'drivable_boundary': 'sequence<deva_map_msgs/AvpBoundary>',
        'expand_lane_center_border': 'sequence<deva_map_msgs/PathPoint>',
        'avp_sub_map': 'deva_map_msgs/AvpSubMap',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'AvpBoundary')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'AvpSubMap'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ref_line = kwargs.get('ref_line', [])
        self.drivable_boundary = kwargs.get('drivable_boundary', [])
        self.expand_lane_center_border = kwargs.get('expand_lane_center_border', [])
        from deva_map_msgs.msg import AvpSubMap
        self.avp_sub_map = kwargs.get('avp_sub_map', AvpSubMap())

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
        if self.ref_line != other.ref_line:
            return False
        if self.drivable_boundary != other.drivable_boundary:
            return False
        if self.expand_lane_center_border != other.expand_lane_center_border:
            return False
        if self.avp_sub_map != other.avp_sub_map:
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
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def ref_line(self):
        """Message field 'ref_line'."""
        return self._ref_line

    @ref_line.setter
    def ref_line(self, value):
        if __debug__:
            from deva_map_msgs.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'ref_line' field must be a set or sequence and each value of type 'PathPoint'"
        self._ref_line = value

    @builtins.property
    def drivable_boundary(self):
        """Message field 'drivable_boundary'."""
        return self._drivable_boundary

    @drivable_boundary.setter
    def drivable_boundary(self, value):
        if __debug__:
            from deva_map_msgs.msg import AvpBoundary
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
                 all(isinstance(v, AvpBoundary) for v in value) and
                 True), \
                "The 'drivable_boundary' field must be a set or sequence and each value of type 'AvpBoundary'"
        self._drivable_boundary = value

    @builtins.property
    def expand_lane_center_border(self):
        """Message field 'expand_lane_center_border'."""
        return self._expand_lane_center_border

    @expand_lane_center_border.setter
    def expand_lane_center_border(self, value):
        if __debug__:
            from deva_map_msgs.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'expand_lane_center_border' field must be a set or sequence and each value of type 'PathPoint'"
        self._expand_lane_center_border = value

    @builtins.property
    def avp_sub_map(self):
        """Message field 'avp_sub_map'."""
        return self._avp_sub_map

    @avp_sub_map.setter
    def avp_sub_map(self, value):
        if __debug__:
            from deva_map_msgs.msg import AvpSubMap
            assert \
                isinstance(value, AvpSubMap), \
                "The 'avp_sub_map' field must be a sub message of type 'AvpSubMap'"
        self._avp_sub_map = value
