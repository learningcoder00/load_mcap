# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/StopLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopLine(type):
    """Metaclass of message 'StopLine'."""

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
                'deva_gaode_routing_msgs.msg.StopLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_line

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

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


class StopLine(metaclass=Metaclass_StopLine):
    """Message class 'StopLine'."""

    __slots__ = [
        '_id',
        '_type',
        '_location',
        '_related_node_id',
        '_related_lane_ids',
        '_related_intersection_road_ids',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'type': 'uint8',
        'location': 'deva_gaode_routing_msgs/Coordinate',
        'related_node_id': 'deva_gaode_routing_msgs/NodeIDType',
        'related_lane_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'related_intersection_road_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'NodeIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.id = kwargs.get('id', FeatureIDType())
        self.type = kwargs.get('type', int())
        from deva_gaode_routing_msgs.msg import Coordinate
        self.location = kwargs.get('location', Coordinate())
        from deva_gaode_routing_msgs.msg import NodeIDType
        self.related_node_id = kwargs.get('related_node_id', NodeIDType())
        self.related_lane_ids = kwargs.get('related_lane_ids', [])
        self.related_intersection_road_ids = kwargs.get('related_intersection_road_ids', [])

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
        if self.type != other.type:
            return False
        if self.location != other.location:
            return False
        if self.related_node_id != other.related_node_id:
            return False
        if self.related_lane_ids != other.related_lane_ids:
            return False
        if self.related_intersection_road_ids != other.related_intersection_road_ids:
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
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'id' field must be a sub message of type 'FeatureIDType'"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'location' field must be a sub message of type 'Coordinate'"
        self._location = value

    @builtins.property
    def related_node_id(self):
        """Message field 'related_node_id'."""
        return self._related_node_id

    @related_node_id.setter
    def related_node_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import NodeIDType
            assert \
                isinstance(value, NodeIDType), \
                "The 'related_node_id' field must be a sub message of type 'NodeIDType'"
        self._related_node_id = value

    @builtins.property
    def related_lane_ids(self):
        """Message field 'related_lane_ids'."""
        return self._related_lane_ids

    @related_lane_ids.setter
    def related_lane_ids(self, value):
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
                "The 'related_lane_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._related_lane_ids = value

    @builtins.property
    def related_intersection_road_ids(self):
        """Message field 'related_intersection_road_ids'."""
        return self._related_intersection_road_ids

    @related_intersection_road_ids.setter
    def related_intersection_road_ids(self, value):
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
                "The 'related_intersection_road_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._related_intersection_road_ids = value
