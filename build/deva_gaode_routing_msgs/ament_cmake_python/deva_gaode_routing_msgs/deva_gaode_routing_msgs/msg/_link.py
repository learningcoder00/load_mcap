# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/Link.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Link(type):
    """Metaclass of message 'Link'."""

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
                'deva_gaode_routing_msgs.msg.Link')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeaturePoint
            if FeaturePoint.__class__._TYPE_SUPPORT is None:
                FeaturePoint.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Guidance
            if Guidance.__class__._TYPE_SUPPORT is None:
                Guidance.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mIntersectionEntryInfo
            if J6mIntersectionEntryInfo.__class__._TYPE_SUPPORT is None:
                J6mIntersectionEntryInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LaneById
            if LaneById.__class__._TYPE_SUPPORT is None:
                LaneById.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkAttribute
            if LinkAttribute.__class__._TYPE_SUPPORT is None:
                LinkAttribute.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkCurvature
            if LinkCurvature.__class__._TYPE_SUPPORT is None:
                LinkCurvature.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkIDType
            if LinkIDType.__class__._TYPE_SUPPORT is None:
                LinkIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Node
            if Node.__class__._TYPE_SUPPORT is None:
                Node.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import NodeIDType
            if NodeIDType.__class__._TYPE_SUPPORT is None:
                NodeIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Topology
            if Topology.__class__._TYPE_SUPPORT is None:
                Topology.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Link(metaclass=Metaclass_Link):
    """Message class 'Link'."""

    __slots__ = [
        '_link_attribute',
        '_coordinate',
        '_raw_id',
        '_topology',
        '_link_curvature',
        '_guidance',
        '_start_id',
        '_end_id',
        '_feature_point_ids',
        '_start',
        '_end',
        '_feature_points',
        '_lanes',
        '_j6m_intersection_entry_infos',
        '_j6m_lane_ids',
        '_j6m_link_ids',
    ]

    _fields_and_field_types = {
        'link_attribute': 'deva_gaode_routing_msgs/LinkAttribute',
        'coordinate': 'sequence<deva_gaode_routing_msgs/Coordinate>',
        'raw_id': 'uint64',
        'topology': 'deva_gaode_routing_msgs/Topology',
        'link_curvature': 'deva_gaode_routing_msgs/LinkCurvature',
        'guidance': 'sequence<deva_gaode_routing_msgs/Guidance>',
        'start_id': 'deva_gaode_routing_msgs/NodeIDType',
        'end_id': 'deva_gaode_routing_msgs/NodeIDType',
        'feature_point_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'start': 'deva_gaode_routing_msgs/Node',
        'end': 'deva_gaode_routing_msgs/Node',
        'feature_points': 'sequence<deva_gaode_routing_msgs/FeaturePoint>',
        'lanes': 'sequence<deva_gaode_routing_msgs/LaneById>',
        'j6m_intersection_entry_infos': 'sequence<deva_gaode_routing_msgs/J6mIntersectionEntryInfo>',
        'j6m_lane_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'j6m_link_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkAttribute'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Topology'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkCurvature'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Guidance')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Node'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Node'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeaturePoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LaneById')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mIntersectionEntryInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkAttribute
        self.link_attribute = kwargs.get('link_attribute', LinkAttribute())
        self.coordinate = kwargs.get('coordinate', [])
        self.raw_id = kwargs.get('raw_id', int())
        from deva_gaode_routing_msgs.msg import Topology
        self.topology = kwargs.get('topology', Topology())
        from deva_gaode_routing_msgs.msg import LinkCurvature
        self.link_curvature = kwargs.get('link_curvature', LinkCurvature())
        self.guidance = kwargs.get('guidance', [])
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.start_id = kwargs.get('start_id', NodeIDType())
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.end_id = kwargs.get('end_id', NodeIDType())
        self.feature_point_ids = kwargs.get('feature_point_ids', [])
        from deva_gaode_routing_msgs.msg import Node
        self.start = kwargs.get('start', Node())
        from deva_gaode_routing_msgs.msg import Node
        self.end = kwargs.get('end', Node())
        self.feature_points = kwargs.get('feature_points', [])
        self.lanes = kwargs.get('lanes', [])
        self.j6m_intersection_entry_infos = kwargs.get('j6m_intersection_entry_infos', [])
        self.j6m_lane_ids = kwargs.get('j6m_lane_ids', [])
        self.j6m_link_ids = kwargs.get('j6m_link_ids', [])

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
        if self.link_attribute != other.link_attribute:
            return False
        if self.coordinate != other.coordinate:
            return False
        if self.raw_id != other.raw_id:
            return False
        if self.topology != other.topology:
            return False
        if self.link_curvature != other.link_curvature:
            return False
        if self.guidance != other.guidance:
            return False
        if self.start_id != other.start_id:
            return False
        if self.end_id != other.end_id:
            return False
        if self.feature_point_ids != other.feature_point_ids:
            return False
        if self.start != other.start:
            return False
        if self.end != other.end:
            return False
        if self.feature_points != other.feature_points:
            return False
        if self.lanes != other.lanes:
            return False
        if self.j6m_intersection_entry_infos != other.j6m_intersection_entry_infos:
            return False
        if self.j6m_lane_ids != other.j6m_lane_ids:
            return False
        if self.j6m_link_ids != other.j6m_link_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def link_attribute(self):
        """Message field 'link_attribute'."""
        return self._link_attribute

    @link_attribute.setter
    def link_attribute(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkAttribute
            assert \
                isinstance(value, LinkAttribute), \
                "The 'link_attribute' field must be a sub message of type 'LinkAttribute'"
        self._link_attribute = value

    @builtins.property
    def coordinate(self):
        """Message field 'coordinate'."""
        return self._coordinate

    @coordinate.setter
    def coordinate(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
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
                 all(isinstance(v, Coordinate) for v in value) and
                 True), \
                "The 'coordinate' field must be a set or sequence and each value of type 'Coordinate'"
        self._coordinate = value

    @builtins.property
    def raw_id(self):
        """Message field 'raw_id'."""
        return self._raw_id

    @raw_id.setter
    def raw_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'raw_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'raw_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._raw_id = value

    @builtins.property
    def topology(self):
        """Message field 'topology'."""
        return self._topology

    @topology.setter
    def topology(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Topology
            assert \
                isinstance(value, Topology), \
                "The 'topology' field must be a sub message of type 'Topology'"
        self._topology = value

    @builtins.property
    def link_curvature(self):
        """Message field 'link_curvature'."""
        return self._link_curvature

    @link_curvature.setter
    def link_curvature(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkCurvature
            assert \
                isinstance(value, LinkCurvature), \
                "The 'link_curvature' field must be a sub message of type 'LinkCurvature'"
        self._link_curvature = value

    @builtins.property
    def guidance(self):
        """Message field 'guidance'."""
        return self._guidance

    @guidance.setter
    def guidance(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Guidance
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
                 all(isinstance(v, Guidance) for v in value) and
                 True), \
                "The 'guidance' field must be a set or sequence and each value of type 'Guidance'"
        self._guidance = value

    @builtins.property
    def start_id(self):
        """Message field 'start_id'."""
        return self._start_id

    @start_id.setter
    def start_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NodeIDType
            assert \
                isinstance(value, NodeIDType), \
                "The 'start_id' field must be a sub message of type 'NodeIDType'"
        self._start_id = value

    @builtins.property
    def end_id(self):
        """Message field 'end_id'."""
        return self._end_id

    @end_id.setter
    def end_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NodeIDType
            assert \
                isinstance(value, NodeIDType), \
                "The 'end_id' field must be a sub message of type 'NodeIDType'"
        self._end_id = value

    @builtins.property
    def feature_point_ids(self):
        """Message field 'feature_point_ids'."""
        return self._feature_point_ids

    @feature_point_ids.setter
    def feature_point_ids(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
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
                 all(isinstance(v, FeatureIDType) for v in value) and
                 True), \
                "The 'feature_point_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._feature_point_ids = value

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Node
            assert \
                isinstance(value, Node), \
                "The 'start' field must be a sub message of type 'Node'"
        self._start = value

    @builtins.property
    def end(self):
        """Message field 'end'."""
        return self._end

    @end.setter
    def end(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Node
            assert \
                isinstance(value, Node), \
                "The 'end' field must be a sub message of type 'Node'"
        self._end = value

    @builtins.property
    def feature_points(self):
        """Message field 'feature_points'."""
        return self._feature_points

    @feature_points.setter
    def feature_points(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeaturePoint
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
                 all(isinstance(v, FeaturePoint) for v in value) and
                 True), \
                "The 'feature_points' field must be a set or sequence and each value of type 'FeaturePoint'"
        self._feature_points = value

    @builtins.property
    def lanes(self):
        """Message field 'lanes'."""
        return self._lanes

    @lanes.setter
    def lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LaneById
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
                 all(isinstance(v, LaneById) for v in value) and
                 True), \
                "The 'lanes' field must be a set or sequence and each value of type 'LaneById'"
        self._lanes = value

    @builtins.property
    def j6m_intersection_entry_infos(self):
        """Message field 'j6m_intersection_entry_infos'."""
        return self._j6m_intersection_entry_infos

    @j6m_intersection_entry_infos.setter
    def j6m_intersection_entry_infos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mIntersectionEntryInfo
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
                 all(isinstance(v, J6mIntersectionEntryInfo) for v in value) and
                 True), \
                "The 'j6m_intersection_entry_infos' field must be a set or sequence and each value of type 'J6mIntersectionEntryInfo'"
        self._j6m_intersection_entry_infos = value

    @builtins.property
    def j6m_lane_ids(self):
        """Message field 'j6m_lane_ids'."""
        return self._j6m_lane_ids

    @j6m_lane_ids.setter
    def j6m_lane_ids(self, value):
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
                "The 'j6m_lane_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._j6m_lane_ids = value

    @builtins.property
    def j6m_link_ids(self):
        """Message field 'j6m_link_ids'."""
        return self._j6m_link_ids

    @j6m_link_ids.setter
    def j6m_link_ids(self, value):
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
                "The 'j6m_link_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._j6m_link_ids = value
