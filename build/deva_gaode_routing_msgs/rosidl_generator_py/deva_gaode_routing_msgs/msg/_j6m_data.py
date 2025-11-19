# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/J6mData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J6mData(type):
    """Metaclass of message 'J6mData'."""

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
                'deva_gaode_routing_msgs.msg.J6mData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j6m_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j6m_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j6m_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j6m_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j6m_data

            from deva_gaode_routing_msgs.msg import J6mIntersection
            if J6mIntersection.__class__._TYPE_SUPPORT is None:
                J6mIntersection.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mLane
            if J6mLane.__class__._TYPE_SUPPORT is None:
                J6mLane.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mLaneMarking
            if J6mLaneMarking.__class__._TYPE_SUPPORT is None:
                J6mLaneMarking.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mLink
            if J6mLink.__class__._TYPE_SUPPORT is None:
                J6mLink.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import J6mRoadObject
            if J6mRoadObject.__class__._TYPE_SUPPORT is None:
                J6mRoadObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class J6mData(metaclass=Metaclass_J6mData):
    """Message class 'J6mData'."""

    __slots__ = [
        '_j6m_links',
        '_j6m_intersections',
        '_j6m_lanes',
        '_j6m_lane_markings',
        '_j6m_road_objects',
    ]

    _fields_and_field_types = {
        'j6m_links': 'sequence<deva_gaode_routing_msgs/J6mLink>',
        'j6m_intersections': 'sequence<deva_gaode_routing_msgs/J6mIntersection>',
        'j6m_lanes': 'sequence<deva_gaode_routing_msgs/J6mLane>',
        'j6m_lane_markings': 'sequence<deva_gaode_routing_msgs/J6mLaneMarking>',
        'j6m_road_objects': 'sequence<deva_gaode_routing_msgs/J6mRoadObject>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mLink')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mIntersection')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mLane')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mLaneMarking')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'J6mRoadObject')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.j6m_links = kwargs.get('j6m_links', [])
        self.j6m_intersections = kwargs.get('j6m_intersections', [])
        self.j6m_lanes = kwargs.get('j6m_lanes', [])
        self.j6m_lane_markings = kwargs.get('j6m_lane_markings', [])
        self.j6m_road_objects = kwargs.get('j6m_road_objects', [])

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
        if self.j6m_links != other.j6m_links:
            return False
        if self.j6m_intersections != other.j6m_intersections:
            return False
        if self.j6m_lanes != other.j6m_lanes:
            return False
        if self.j6m_lane_markings != other.j6m_lane_markings:
            return False
        if self.j6m_road_objects != other.j6m_road_objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def j6m_links(self):
        """Message field 'j6m_links'."""
        return self._j6m_links

    @j6m_links.setter
    def j6m_links(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mLink
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
                 all(isinstance(v, J6mLink) for v in value) and
                 True), \
                "The 'j6m_links' field must be a set or sequence and each value of type 'J6mLink'"
        self._j6m_links = value

    @builtins.property
    def j6m_intersections(self):
        """Message field 'j6m_intersections'."""
        return self._j6m_intersections

    @j6m_intersections.setter
    def j6m_intersections(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mIntersection
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
                 all(isinstance(v, J6mIntersection) for v in value) and
                 True), \
                "The 'j6m_intersections' field must be a set or sequence and each value of type 'J6mIntersection'"
        self._j6m_intersections = value

    @builtins.property
    def j6m_lanes(self):
        """Message field 'j6m_lanes'."""
        return self._j6m_lanes

    @j6m_lanes.setter
    def j6m_lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mLane
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
                 all(isinstance(v, J6mLane) for v in value) and
                 True), \
                "The 'j6m_lanes' field must be a set or sequence and each value of type 'J6mLane'"
        self._j6m_lanes = value

    @builtins.property
    def j6m_lane_markings(self):
        """Message field 'j6m_lane_markings'."""
        return self._j6m_lane_markings

    @j6m_lane_markings.setter
    def j6m_lane_markings(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mLaneMarking
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
                 all(isinstance(v, J6mLaneMarking) for v in value) and
                 True), \
                "The 'j6m_lane_markings' field must be a set or sequence and each value of type 'J6mLaneMarking'"
        self._j6m_lane_markings = value

    @builtins.property
    def j6m_road_objects(self):
        """Message field 'j6m_road_objects'."""
        return self._j6m_road_objects

    @j6m_road_objects.setter
    def j6m_road_objects(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import J6mRoadObject
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
                 all(isinstance(v, J6mRoadObject) for v in value) and
                 True), \
                "The 'j6m_road_objects' field must be a set or sequence and each value of type 'J6mRoadObject'"
        self._j6m_road_objects = value
