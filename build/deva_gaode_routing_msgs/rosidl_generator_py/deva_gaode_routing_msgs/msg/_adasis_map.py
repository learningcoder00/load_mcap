# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdasisMap(type):
    """Metaclass of message 'AdasisMap'."""

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
                'deva_gaode_routing_msgs.msg.AdasisMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adasis_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adasis_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adasis_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adasis_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adasis_map

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpMetaData
            if EhpMetaData.__class__._TYPE_SUPPORT is None:
                EhpMetaData.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpPosition
            if EhpPosition.__class__._TYPE_SUPPORT is None:
                EhpPosition.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpProfileLong
            if EhpProfileLong.__class__._TYPE_SUPPORT is None:
                EhpProfileLong.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpProfileShort
            if EhpProfileShort.__class__._TYPE_SUPPORT is None:
                EhpProfileShort.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpSegment
            if EhpSegment.__class__._TYPE_SUPPORT is None:
                EhpSegment.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import EhpStub
            if EhpStub.__class__._TYPE_SUPPORT is None:
                EhpStub.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeaturePointById
            if FeaturePointById.__class__._TYPE_SUPPORT is None:
                FeaturePointById.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import HeterogeneousMatchLink
            if HeterogeneousMatchLink.__class__._TYPE_SUPPORT is None:
                HeterogeneousMatchLink.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import IntersectionRoad
            if IntersectionRoad.__class__._TYPE_SUPPORT is None:
                IntersectionRoad.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import IntersectionRoadNode
            if IntersectionRoadNode.__class__._TYPE_SUPPORT is None:
                IntersectionRoadNode.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mData
            if J6mData.__class__._TYPE_SUPPORT is None:
                J6mData.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LANE
            if LANE.__class__._TYPE_SUPPORT is None:
                LANE.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Link
            if Link.__class__._TYPE_SUPPORT is None:
                Link.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Node
            if Node.__class__._TYPE_SUPPORT is None:
                Node.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import PositionMatchLink
            if PositionMatchLink.__class__._TYPE_SUPPORT is None:
                PositionMatchLink.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RouteGuideResponse
            if RouteGuideResponse.__class__._TYPE_SUPPORT is None:
                RouteGuideResponse.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import StopLine
            if StopLine.__class__._TYPE_SUPPORT is None:
                StopLine.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdasisMap(metaclass=Metaclass_AdasisMap):
    """Message class 'AdasisMap'."""

    __slots__ = [
        '_header',
        '_is_update_ehp_position',
        '_ehp_position',
        '_is_update_ehp_meta_data',
        '_ehp_meta_data',
        '_is_update_ehp_segments',
        '_ehp_segments',
        '_is_update_ehp_stubs',
        '_ehp_stubs',
        '_is_update_ehp_profile_shorts',
        '_ehp_profile_shorts',
        '_is_update_ehp_profile_longs',
        '_ehp_profile_longs',
        '_link',
        '_node',
        '_feature_points',
        '_lanes',
        '_stoplines',
        '_intersection_road_nodes',
        '_intersection_roads',
        '_position_match_link',
        '_heterogeneous_match_link',
        '_route_guide_response',
        '_j6m_data',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'is_update_ehp_position': 'uint8',
        'ehp_position': 'deva_gaode_routing_msgs/EhpPosition',
        'is_update_ehp_meta_data': 'uint8',
        'ehp_meta_data': 'deva_gaode_routing_msgs/EhpMetaData',
        'is_update_ehp_segments': 'uint8',
        'ehp_segments': 'sequence<deva_gaode_routing_msgs/EhpSegment>',
        'is_update_ehp_stubs': 'uint8',
        'ehp_stubs': 'sequence<deva_gaode_routing_msgs/EhpStub>',
        'is_update_ehp_profile_shorts': 'uint8',
        'ehp_profile_shorts': 'sequence<deva_gaode_routing_msgs/EhpProfileShort>',
        'is_update_ehp_profile_longs': 'uint8',
        'ehp_profile_longs': 'sequence<deva_gaode_routing_msgs/EhpProfileLong>',
        'link': 'sequence<deva_gaode_routing_msgs/Link>',
        'node': 'sequence<deva_gaode_routing_msgs/Node>',
        'feature_points': 'sequence<deva_gaode_routing_msgs/FeaturePointById>',
        'lanes': 'sequence<deva_gaode_routing_msgs/LANE>',
        'stoplines': 'sequence<deva_gaode_routing_msgs/StopLine>',
        'intersection_road_nodes': 'sequence<deva_gaode_routing_msgs/IntersectionRoadNode>',
        'intersection_roads': 'sequence<deva_gaode_routing_msgs/IntersectionRoad>',
        'position_match_link': 'deva_gaode_routing_msgs/PositionMatchLink',
        'heterogeneous_match_link': 'deva_gaode_routing_msgs/HeterogeneousMatchLink',
        'route_guide_response': 'deva_gaode_routing_msgs/RouteGuideResponse',
        'j6m_data': 'deva_gaode_routing_msgs/J6mData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpPosition'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpMetaData'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpSegment')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpStub')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpProfileShort')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'EhpProfileLong')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Link')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Node')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeaturePointById')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LANE')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'StopLine')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'IntersectionRoadNode')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'IntersectionRoad')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'PositionMatchLink'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'HeterogeneousMatchLink'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RouteGuideResponse'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_update_ehp_position = kwargs.get('is_update_ehp_position', int())
        from deva_gaode_routing_msgs.msg import EhpPosition
        self.ehp_position = kwargs.get('ehp_position', EhpPosition())
        self.is_update_ehp_meta_data = kwargs.get('is_update_ehp_meta_data', int())
        from deva_gaode_routing_msgs.msg import EhpMetaData
        self.ehp_meta_data = kwargs.get('ehp_meta_data', EhpMetaData())
        self.is_update_ehp_segments = kwargs.get('is_update_ehp_segments', int())
        self.ehp_segments = kwargs.get('ehp_segments', [])
        self.is_update_ehp_stubs = kwargs.get('is_update_ehp_stubs', int())
        self.ehp_stubs = kwargs.get('ehp_stubs', [])
        self.is_update_ehp_profile_shorts = kwargs.get('is_update_ehp_profile_shorts', int())
        self.ehp_profile_shorts = kwargs.get('ehp_profile_shorts', [])
        self.is_update_ehp_profile_longs = kwargs.get('is_update_ehp_profile_longs', int())
        self.ehp_profile_longs = kwargs.get('ehp_profile_longs', [])
        self.link = kwargs.get('link', [])
        self.node = kwargs.get('node', [])
        self.feature_points = kwargs.get('feature_points', [])
        self.lanes = kwargs.get('lanes', [])
        self.stoplines = kwargs.get('stoplines', [])
        self.intersection_road_nodes = kwargs.get('intersection_road_nodes', [])
        self.intersection_roads = kwargs.get('intersection_roads', [])
        from deva_gaode_routing_msgs.msg import PositionMatchLink
        self.position_match_link = kwargs.get('position_match_link', PositionMatchLink())
        from deva_gaode_routing_msgs.msg import HeterogeneousMatchLink
        self.heterogeneous_match_link = kwargs.get('heterogeneous_match_link', HeterogeneousMatchLink())
        from deva_gaode_routing_msgs.msg import RouteGuideResponse
        self.route_guide_response = kwargs.get('route_guide_response', RouteGuideResponse())
        from deva_gaode_routing_msgs.msg import J6mData
        self.j6m_data = kwargs.get('j6m_data', J6mData())

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
        if self.is_update_ehp_position != other.is_update_ehp_position:
            return False
        if self.ehp_position != other.ehp_position:
            return False
        if self.is_update_ehp_meta_data != other.is_update_ehp_meta_data:
            return False
        if self.ehp_meta_data != other.ehp_meta_data:
            return False
        if self.is_update_ehp_segments != other.is_update_ehp_segments:
            return False
        if self.ehp_segments != other.ehp_segments:
            return False
        if self.is_update_ehp_stubs != other.is_update_ehp_stubs:
            return False
        if self.ehp_stubs != other.ehp_stubs:
            return False
        if self.is_update_ehp_profile_shorts != other.is_update_ehp_profile_shorts:
            return False
        if self.ehp_profile_shorts != other.ehp_profile_shorts:
            return False
        if self.is_update_ehp_profile_longs != other.is_update_ehp_profile_longs:
            return False
        if self.ehp_profile_longs != other.ehp_profile_longs:
            return False
        if self.link != other.link:
            return False
        if self.node != other.node:
            return False
        if self.feature_points != other.feature_points:
            return False
        if self.lanes != other.lanes:
            return False
        if self.stoplines != other.stoplines:
            return False
        if self.intersection_road_nodes != other.intersection_road_nodes:
            return False
        if self.intersection_roads != other.intersection_roads:
            return False
        if self.position_match_link != other.position_match_link:
            return False
        if self.heterogeneous_match_link != other.heterogeneous_match_link:
            return False
        if self.route_guide_response != other.route_guide_response:
            return False
        if self.j6m_data != other.j6m_data:
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
    def is_update_ehp_position(self):
        """Message field 'is_update_ehp_position'."""
        return self._is_update_ehp_position

    @is_update_ehp_position.setter
    def is_update_ehp_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_position' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_position' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_position = value

    @builtins.property
    def ehp_position(self):
        """Message field 'ehp_position'."""
        return self._ehp_position

    @ehp_position.setter
    def ehp_position(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpPosition
            assert \
                isinstance(value, EhpPosition), \
                "The 'ehp_position' field must be a sub message of type 'EhpPosition'"
        self._ehp_position = value

    @builtins.property
    def is_update_ehp_meta_data(self):
        """Message field 'is_update_ehp_meta_data'."""
        return self._is_update_ehp_meta_data

    @is_update_ehp_meta_data.setter
    def is_update_ehp_meta_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_meta_data' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_meta_data' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_meta_data = value

    @builtins.property
    def ehp_meta_data(self):
        """Message field 'ehp_meta_data'."""
        return self._ehp_meta_data

    @ehp_meta_data.setter
    def ehp_meta_data(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpMetaData
            assert \
                isinstance(value, EhpMetaData), \
                "The 'ehp_meta_data' field must be a sub message of type 'EhpMetaData'"
        self._ehp_meta_data = value

    @builtins.property
    def is_update_ehp_segments(self):
        """Message field 'is_update_ehp_segments'."""
        return self._is_update_ehp_segments

    @is_update_ehp_segments.setter
    def is_update_ehp_segments(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_segments' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_segments' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_segments = value

    @builtins.property
    def ehp_segments(self):
        """Message field 'ehp_segments'."""
        return self._ehp_segments

    @ehp_segments.setter
    def ehp_segments(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpSegment
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
                 all(isinstance(v, EhpSegment) for v in value) and
                 True), \
                "The 'ehp_segments' field must be a set or sequence and each value of type 'EhpSegment'"
        self._ehp_segments = value

    @builtins.property
    def is_update_ehp_stubs(self):
        """Message field 'is_update_ehp_stubs'."""
        return self._is_update_ehp_stubs

    @is_update_ehp_stubs.setter
    def is_update_ehp_stubs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_stubs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_stubs' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_stubs = value

    @builtins.property
    def ehp_stubs(self):
        """Message field 'ehp_stubs'."""
        return self._ehp_stubs

    @ehp_stubs.setter
    def ehp_stubs(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpStub
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
                 all(isinstance(v, EhpStub) for v in value) and
                 True), \
                "The 'ehp_stubs' field must be a set or sequence and each value of type 'EhpStub'"
        self._ehp_stubs = value

    @builtins.property
    def is_update_ehp_profile_shorts(self):
        """Message field 'is_update_ehp_profile_shorts'."""
        return self._is_update_ehp_profile_shorts

    @is_update_ehp_profile_shorts.setter
    def is_update_ehp_profile_shorts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_profile_shorts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_profile_shorts' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_profile_shorts = value

    @builtins.property
    def ehp_profile_shorts(self):
        """Message field 'ehp_profile_shorts'."""
        return self._ehp_profile_shorts

    @ehp_profile_shorts.setter
    def ehp_profile_shorts(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpProfileShort
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
                 all(isinstance(v, EhpProfileShort) for v in value) and
                 True), \
                "The 'ehp_profile_shorts' field must be a set or sequence and each value of type 'EhpProfileShort'"
        self._ehp_profile_shorts = value

    @builtins.property
    def is_update_ehp_profile_longs(self):
        """Message field 'is_update_ehp_profile_longs'."""
        return self._is_update_ehp_profile_longs

    @is_update_ehp_profile_longs.setter
    def is_update_ehp_profile_longs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_update_ehp_profile_longs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_update_ehp_profile_longs' field must be an unsigned integer in [0, 255]"
        self._is_update_ehp_profile_longs = value

    @builtins.property
    def ehp_profile_longs(self):
        """Message field 'ehp_profile_longs'."""
        return self._ehp_profile_longs

    @ehp_profile_longs.setter
    def ehp_profile_longs(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import EhpProfileLong
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
                 all(isinstance(v, EhpProfileLong) for v in value) and
                 True), \
                "The 'ehp_profile_longs' field must be a set or sequence and each value of type 'EhpProfileLong'"
        self._ehp_profile_longs = value

    @builtins.property
    def link(self):
        """Message field 'link'."""
        return self._link

    @link.setter
    def link(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Link
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
                 all(isinstance(v, Link) for v in value) and
                 True), \
                "The 'link' field must be a set or sequence and each value of type 'Link'"
        self._link = value

    @builtins.property
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Node
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
                 all(isinstance(v, Node) for v in value) and
                 True), \
                "The 'node' field must be a set or sequence and each value of type 'Node'"
        self._node = value

    @builtins.property
    def feature_points(self):
        """Message field 'feature_points'."""
        return self._feature_points

    @feature_points.setter
    def feature_points(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeaturePointById
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
                 all(isinstance(v, FeaturePointById) for v in value) and
                 True), \
                "The 'feature_points' field must be a set or sequence and each value of type 'FeaturePointById'"
        self._feature_points = value

    @builtins.property
    def lanes(self):
        """Message field 'lanes'."""
        return self._lanes

    @lanes.setter
    def lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LANE
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
                 all(isinstance(v, LANE) for v in value) and
                 True), \
                "The 'lanes' field must be a set or sequence and each value of type 'LANE'"
        self._lanes = value

    @builtins.property
    def stoplines(self):
        """Message field 'stoplines'."""
        return self._stoplines

    @stoplines.setter
    def stoplines(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import StopLine
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
                 all(isinstance(v, StopLine) for v in value) and
                 True), \
                "The 'stoplines' field must be a set or sequence and each value of type 'StopLine'"
        self._stoplines = value

    @builtins.property
    def intersection_road_nodes(self):
        """Message field 'intersection_road_nodes'."""
        return self._intersection_road_nodes

    @intersection_road_nodes.setter
    def intersection_road_nodes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import IntersectionRoadNode
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
                 all(isinstance(v, IntersectionRoadNode) for v in value) and
                 True), \
                "The 'intersection_road_nodes' field must be a set or sequence and each value of type 'IntersectionRoadNode'"
        self._intersection_road_nodes = value

    @builtins.property
    def intersection_roads(self):
        """Message field 'intersection_roads'."""
        return self._intersection_roads

    @intersection_roads.setter
    def intersection_roads(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import IntersectionRoad
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
                 all(isinstance(v, IntersectionRoad) for v in value) and
                 True), \
                "The 'intersection_roads' field must be a set or sequence and each value of type 'IntersectionRoad'"
        self._intersection_roads = value

    @builtins.property
    def position_match_link(self):
        """Message field 'position_match_link'."""
        return self._position_match_link

    @position_match_link.setter
    def position_match_link(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import PositionMatchLink
            assert \
                isinstance(value, PositionMatchLink), \
                "The 'position_match_link' field must be a sub message of type 'PositionMatchLink'"
        self._position_match_link = value

    @builtins.property
    def heterogeneous_match_link(self):
        """Message field 'heterogeneous_match_link'."""
        return self._heterogeneous_match_link

    @heterogeneous_match_link.setter
    def heterogeneous_match_link(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import HeterogeneousMatchLink
            assert \
                isinstance(value, HeterogeneousMatchLink), \
                "The 'heterogeneous_match_link' field must be a sub message of type 'HeterogeneousMatchLink'"
        self._heterogeneous_match_link = value

    @builtins.property
    def route_guide_response(self):
        """Message field 'route_guide_response'."""
        return self._route_guide_response

    @route_guide_response.setter
    def route_guide_response(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RouteGuideResponse
            assert \
                isinstance(value, RouteGuideResponse), \
                "The 'route_guide_response' field must be a sub message of type 'RouteGuideResponse'"
        self._route_guide_response = value

    @builtins.property
    def j6m_data(self):
        """Message field 'j6m_data'."""
        return self._j6m_data

    @j6m_data.setter
    def j6m_data(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mData
            assert \
                isinstance(value, J6mData), \
                "The 'j6m_data' field must be a sub message of type 'J6mData'"
        self._j6m_data = value
