# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionRoad(type):
    """Metaclass of message 'IntersectionRoad'."""

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
                'deva_gaode_routing_msgs.msg.IntersectionRoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_road
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_road
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_road
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_road
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_road

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

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


class IntersectionRoad(metaclass=Metaclass_IntersectionRoad):
    """Message class 'IntersectionRoad'."""

    __slots__ = [
        '_id',
        '_link_direction',
        '_cross_turn_type',
        '_has_traffic_light',
        '_geometry',
        '_start_node_id',
        '_end_node_id',
        '_start_feature_point_id',
        '_end_feature_point_id',
        '_relate_link_id',
        '_nexts',
        '_prevs',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'link_direction': 'uint8',
        'cross_turn_type': 'uint8',
        'has_traffic_light': 'boolean',
        'geometry': 'sequence<deva_gaode_routing_msgs/Coordinate>',
        'start_node_id': 'deva_gaode_routing_msgs/FeatureIDType',
        'end_node_id': 'deva_gaode_routing_msgs/FeatureIDType',
        'start_feature_point_id': 'deva_gaode_routing_msgs/FeatureIDType',
        'end_feature_point_id': 'deva_gaode_routing_msgs/FeatureIDType',
        'relate_link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'nexts': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'prevs': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.id = kwargs.get('id', FeatureIDType())
        self.link_direction = kwargs.get('link_direction', int())
        self.cross_turn_type = kwargs.get('cross_turn_type', int())
        self.has_traffic_light = kwargs.get('has_traffic_light', bool())
        self.geometry = kwargs.get('geometry', [])
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.start_node_id = kwargs.get('start_node_id', FeatureIDType())
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.end_node_id = kwargs.get('end_node_id', FeatureIDType())
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.start_feature_point_id = kwargs.get('start_feature_point_id', FeatureIDType())
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.end_feature_point_id = kwargs.get('end_feature_point_id', FeatureIDType())
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.relate_link_id = kwargs.get('relate_link_id', LinkIDType())
        self.nexts = kwargs.get('nexts', [])
        self.prevs = kwargs.get('prevs', [])

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
        if self.link_direction != other.link_direction:
            return False
        if self.cross_turn_type != other.cross_turn_type:
            return False
        if self.has_traffic_light != other.has_traffic_light:
            return False
        if self.geometry != other.geometry:
            return False
        if self.start_node_id != other.start_node_id:
            return False
        if self.end_node_id != other.end_node_id:
            return False
        if self.start_feature_point_id != other.start_feature_point_id:
            return False
        if self.end_feature_point_id != other.end_feature_point_id:
            return False
        if self.relate_link_id != other.relate_link_id:
            return False
        if self.nexts != other.nexts:
            return False
        if self.prevs != other.prevs:
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
    def cross_turn_type(self):
        """Message field 'cross_turn_type'."""
        return self._cross_turn_type

    @cross_turn_type.setter
    def cross_turn_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cross_turn_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cross_turn_type' field must be an unsigned integer in [0, 255]"
        self._cross_turn_type = value

    @builtins.property
    def has_traffic_light(self):
        """Message field 'has_traffic_light'."""
        return self._has_traffic_light

    @has_traffic_light.setter
    def has_traffic_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_traffic_light' field must be of type 'bool'"
        self._has_traffic_light = value

    @builtins.property
    def geometry(self):
        """Message field 'geometry'."""
        return self._geometry

    @geometry.setter
    def geometry(self, value):
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
                "The 'geometry' field must be a set or sequence and each value of type 'Coordinate'"
        self._geometry = value

    @builtins.property
    def start_node_id(self):
        """Message field 'start_node_id'."""
        return self._start_node_id

    @start_node_id.setter
    def start_node_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'start_node_id' field must be a sub message of type 'FeatureIDType'"
        self._start_node_id = value

    @builtins.property
    def end_node_id(self):
        """Message field 'end_node_id'."""
        return self._end_node_id

    @end_node_id.setter
    def end_node_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'end_node_id' field must be a sub message of type 'FeatureIDType'"
        self._end_node_id = value

    @builtins.property
    def start_feature_point_id(self):
        """Message field 'start_feature_point_id'."""
        return self._start_feature_point_id

    @start_feature_point_id.setter
    def start_feature_point_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'start_feature_point_id' field must be a sub message of type 'FeatureIDType'"
        self._start_feature_point_id = value

    @builtins.property
    def end_feature_point_id(self):
        """Message field 'end_feature_point_id'."""
        return self._end_feature_point_id

    @end_feature_point_id.setter
    def end_feature_point_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'end_feature_point_id' field must be a sub message of type 'FeatureIDType'"
        self._end_feature_point_id = value

    @builtins.property
    def relate_link_id(self):
        """Message field 'relate_link_id'."""
        return self._relate_link_id

    @relate_link_id.setter
    def relate_link_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'relate_link_id' field must be a sub message of type 'LinkIDType'"
        self._relate_link_id = value

    @builtins.property
    def nexts(self):
        """Message field 'nexts'."""
        return self._nexts

    @nexts.setter
    def nexts(self, value):
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
                "The 'nexts' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._nexts = value

    @builtins.property
    def prevs(self):
        """Message field 'prevs'."""
        return self._prevs

    @prevs.setter
    def prevs(self, value):
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
                "The 'prevs' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._prevs = value
