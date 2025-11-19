# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/J6mLink.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J6mLink(type):
    """Metaclass of message 'J6mLink'."""

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
                'deva_gaode_routing_msgs.msg.J6mLink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j6m_link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j6m_link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j6m_link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j6m_link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j6m_link

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkIDType
            if LinkIDType.__class__._TYPE_SUPPORT is None:
                LinkIDType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class J6mLink(metaclass=Metaclass_J6mLink):
    """Message class 'J6mLink'."""

    __slots__ = [
        '_id',
        '_road_type',
        '_length',
        '_confidence',
        '_travel_direction',
        '_coordinates',
        '_successor_linkid_s',
        '_predecessor_linkid_s',
        '_referenced_lane_id_s',
        '_referenced_intersection_id_s',
        '_referenced_lanemarking_id_s',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/LinkIDType',
        'road_type': 'uint8',
        'length': 'uint32',
        'confidence': 'uint32',
        'travel_direction': 'uint8',
        'coordinates': 'sequence<deva_gaode_routing_msgs/Coordinate>',
        'successor_linkid_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'predecessor_linkid_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'referenced_lane_id_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'referenced_intersection_id_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'referenced_lanemarking_id_s': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.id = kwargs.get('id', LinkIDType())
        self.road_type = kwargs.get('road_type', int())
        self.length = kwargs.get('length', int())
        self.confidence = kwargs.get('confidence', int())
        self.travel_direction = kwargs.get('travel_direction', int())
        self.coordinates = kwargs.get('coordinates', [])
        self.successor_linkid_s = kwargs.get('successor_linkid_s', [])
        self.predecessor_linkid_s = kwargs.get('predecessor_linkid_s', [])
        self.referenced_lane_id_s = kwargs.get('referenced_lane_id_s', [])
        self.referenced_intersection_id_s = kwargs.get('referenced_intersection_id_s', [])
        self.referenced_lanemarking_id_s = kwargs.get('referenced_lanemarking_id_s', [])

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
        if self.id != other.id:
            return False
        if self.road_type != other.road_type:
            return False
        if self.length != other.length:
            return False
        if self.confidence != other.confidence:
            return False
        if self.travel_direction != other.travel_direction:
            return False
        if self.coordinates != other.coordinates:
            return False
        if self.successor_linkid_s != other.successor_linkid_s:
            return False
        if self.predecessor_linkid_s != other.predecessor_linkid_s:
            return False
        if self.referenced_lane_id_s != other.referenced_lane_id_s:
            return False
        if self.referenced_intersection_id_s != other.referenced_intersection_id_s:
            return False
        if self.referenced_lanemarking_id_s != other.referenced_lanemarking_id_s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'id' field must be a sub message of type 'LinkIDType'"
        self._id = value

    @builtins.property
    def road_type(self):
        """Message field 'road_type'."""
        return self._road_type

    @road_type.setter
    def road_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_type' field must be an unsigned integer in [0, 255]"
        self._road_type = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'length' field must be an unsigned integer in [0, 4294967295]"
        self._length = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'confidence' field must be an unsigned integer in [0, 4294967295]"
        self._confidence = value

    @builtins.property
    def travel_direction(self):
        """Message field 'travel_direction'."""
        return self._travel_direction

    @travel_direction.setter
    def travel_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'travel_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'travel_direction' field must be an unsigned integer in [0, 255]"
        self._travel_direction = value

    @builtins.property
    def coordinates(self):
        """Message field 'coordinates'."""
        return self._coordinates

    @coordinates.setter
    def coordinates(self, value):
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
                "The 'coordinates' field must be a set or sequence and each value of type 'Coordinate'"
        self._coordinates = value

    @builtins.property
    def successor_linkid_s(self):
        """Message field 'successor_linkid_s'."""
        return self._successor_linkid_s

    @successor_linkid_s.setter
    def successor_linkid_s(self, value):
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
                "The 'successor_linkid_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._successor_linkid_s = value

    @builtins.property
    def predecessor_linkid_s(self):
        """Message field 'predecessor_linkid_s'."""
        return self._predecessor_linkid_s

    @predecessor_linkid_s.setter
    def predecessor_linkid_s(self, value):
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
                "The 'predecessor_linkid_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._predecessor_linkid_s = value

    @builtins.property
    def referenced_lane_id_s(self):
        """Message field 'referenced_lane_id_s'."""
        return self._referenced_lane_id_s

    @referenced_lane_id_s.setter
    def referenced_lane_id_s(self, value):
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
                "The 'referenced_lane_id_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._referenced_lane_id_s = value

    @builtins.property
    def referenced_intersection_id_s(self):
        """Message field 'referenced_intersection_id_s'."""
        return self._referenced_intersection_id_s

    @referenced_intersection_id_s.setter
    def referenced_intersection_id_s(self, value):
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
                "The 'referenced_intersection_id_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._referenced_intersection_id_s = value

    @builtins.property
    def referenced_lanemarking_id_s(self):
        """Message field 'referenced_lanemarking_id_s'."""
        return self._referenced_lanemarking_id_s

    @referenced_lanemarking_id_s.setter
    def referenced_lanemarking_id_s(self, value):
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
                "The 'referenced_lanemarking_id_s' field must be a set or sequence and each value of type 'LinkIDType'"
        self._referenced_lanemarking_id_s = value
