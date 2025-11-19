# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/J6mLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J6mLane(type):
    """Metaclass of message 'J6mLane'."""

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
                'deva_gaode_routing_msgs.msg.J6mLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j6m_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j6m_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j6m_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j6m_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j6m_lane

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


class J6mLane(metaclass=Metaclass_J6mLane):
    """Message class 'J6mLane'."""

    __slots__ = [
        '_lane_id',
        '_lane_seq_num',
        '_lane_type',
        '_lane_speed_limit',
        '_lane_max_width',
        '_lane_min_width',
        '_left_lane_marking_ids',
        '_right_lane_marking_ids',
        '_lane_adas',
        '_lane_length',
        '_lane_turn_direction',
        '_lane_confidence',
        '_lane_travel_direction',
        '_lane_empir_speed',
        '_lane_empir_traj_count',
        '_lane_host_link_id',
        '_lane_host_link_type',
        '_lane_successor_lane_ids',
        '_lane_predecessor_lane_ids',
        '_lane_referenced_roadobject_ids',
        '_lane_coordinates',
    ]

    _fields_and_field_types = {
        'lane_id': 'deva_gaode_routing_msgs/LinkIDType',
        'lane_seq_num': 'uint8',
        'lane_type': 'uint8',
        'lane_speed_limit': 'string',
        'lane_max_width': 'uint32',
        'lane_min_width': 'uint32',
        'left_lane_marking_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'right_lane_marking_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'lane_adas': 'string',
        'lane_length': 'uint32',
        'lane_turn_direction': 'uint8',
        'lane_confidence': 'uint32',
        'lane_travel_direction': 'uint8',
        'lane_empir_speed': 'uint8',
        'lane_empir_traj_count': 'uint8',
        'lane_host_link_id': 'uint64',
        'lane_host_link_type': 'uint8',
        'lane_successor_lane_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'lane_predecessor_lane_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'lane_referenced_roadobject_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'lane_coordinates': 'sequence<deva_gaode_routing_msgs/Coordinate>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.lane_id = kwargs.get('lane_id', LinkIDType())
        self.lane_seq_num = kwargs.get('lane_seq_num', int())
        self.lane_type = kwargs.get('lane_type', int())
        self.lane_speed_limit = kwargs.get('lane_speed_limit', str())
        self.lane_max_width = kwargs.get('lane_max_width', int())
        self.lane_min_width = kwargs.get('lane_min_width', int())
        self.left_lane_marking_ids = kwargs.get('left_lane_marking_ids', [])
        self.right_lane_marking_ids = kwargs.get('right_lane_marking_ids', [])
        self.lane_adas = kwargs.get('lane_adas', str())
        self.lane_length = kwargs.get('lane_length', int())
        self.lane_turn_direction = kwargs.get('lane_turn_direction', int())
        self.lane_confidence = kwargs.get('lane_confidence', int())
        self.lane_travel_direction = kwargs.get('lane_travel_direction', int())
        self.lane_empir_speed = kwargs.get('lane_empir_speed', int())
        self.lane_empir_traj_count = kwargs.get('lane_empir_traj_count', int())
        self.lane_host_link_id = kwargs.get('lane_host_link_id', int())
        self.lane_host_link_type = kwargs.get('lane_host_link_type', int())
        self.lane_successor_lane_ids = kwargs.get('lane_successor_lane_ids', [])
        self.lane_predecessor_lane_ids = kwargs.get('lane_predecessor_lane_ids', [])
        self.lane_referenced_roadobject_ids = kwargs.get('lane_referenced_roadobject_ids', [])
        self.lane_coordinates = kwargs.get('lane_coordinates', [])

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
        if self.lane_id != other.lane_id:
            return False
        if self.lane_seq_num != other.lane_seq_num:
            return False
        if self.lane_type != other.lane_type:
            return False
        if self.lane_speed_limit != other.lane_speed_limit:
            return False
        if self.lane_max_width != other.lane_max_width:
            return False
        if self.lane_min_width != other.lane_min_width:
            return False
        if self.left_lane_marking_ids != other.left_lane_marking_ids:
            return False
        if self.right_lane_marking_ids != other.right_lane_marking_ids:
            return False
        if self.lane_adas != other.lane_adas:
            return False
        if self.lane_length != other.lane_length:
            return False
        if self.lane_turn_direction != other.lane_turn_direction:
            return False
        if self.lane_confidence != other.lane_confidence:
            return False
        if self.lane_travel_direction != other.lane_travel_direction:
            return False
        if self.lane_empir_speed != other.lane_empir_speed:
            return False
        if self.lane_empir_traj_count != other.lane_empir_traj_count:
            return False
        if self.lane_host_link_id != other.lane_host_link_id:
            return False
        if self.lane_host_link_type != other.lane_host_link_type:
            return False
        if self.lane_successor_lane_ids != other.lane_successor_lane_ids:
            return False
        if self.lane_predecessor_lane_ids != other.lane_predecessor_lane_ids:
            return False
        if self.lane_referenced_roadobject_ids != other.lane_referenced_roadobject_ids:
            return False
        if self.lane_coordinates != other.lane_coordinates:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'lane_id' field must be a sub message of type 'LinkIDType'"
        self._lane_id = value

    @builtins.property
    def lane_seq_num(self):
        """Message field 'lane_seq_num'."""
        return self._lane_seq_num

    @lane_seq_num.setter
    def lane_seq_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_seq_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_seq_num' field must be an unsigned integer in [0, 255]"
        self._lane_seq_num = value

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_type' field must be an unsigned integer in [0, 255]"
        self._lane_type = value

    @builtins.property
    def lane_speed_limit(self):
        """Message field 'lane_speed_limit'."""
        return self._lane_speed_limit

    @lane_speed_limit.setter
    def lane_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_speed_limit' field must be of type 'str'"
        self._lane_speed_limit = value

    @builtins.property
    def lane_max_width(self):
        """Message field 'lane_max_width'."""
        return self._lane_max_width

    @lane_max_width.setter
    def lane_max_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_max_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_max_width' field must be an unsigned integer in [0, 4294967295]"
        self._lane_max_width = value

    @builtins.property
    def lane_min_width(self):
        """Message field 'lane_min_width'."""
        return self._lane_min_width

    @lane_min_width.setter
    def lane_min_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_min_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_min_width' field must be an unsigned integer in [0, 4294967295]"
        self._lane_min_width = value

    @builtins.property
    def left_lane_marking_ids(self):
        """Message field 'left_lane_marking_ids'."""
        return self._left_lane_marking_ids

    @left_lane_marking_ids.setter
    def left_lane_marking_ids(self, value):
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
                "The 'left_lane_marking_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._left_lane_marking_ids = value

    @builtins.property
    def right_lane_marking_ids(self):
        """Message field 'right_lane_marking_ids'."""
        return self._right_lane_marking_ids

    @right_lane_marking_ids.setter
    def right_lane_marking_ids(self, value):
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
                "The 'right_lane_marking_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._right_lane_marking_ids = value

    @builtins.property
    def lane_adas(self):
        """Message field 'lane_adas'."""
        return self._lane_adas

    @lane_adas.setter
    def lane_adas(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_adas' field must be of type 'str'"
        self._lane_adas = value

    @builtins.property
    def lane_length(self):
        """Message field 'lane_length'."""
        return self._lane_length

    @lane_length.setter
    def lane_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_length' field must be an unsigned integer in [0, 4294967295]"
        self._lane_length = value

    @builtins.property
    def lane_turn_direction(self):
        """Message field 'lane_turn_direction'."""
        return self._lane_turn_direction

    @lane_turn_direction.setter
    def lane_turn_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_turn_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_turn_direction' field must be an unsigned integer in [0, 255]"
        self._lane_turn_direction = value

    @builtins.property
    def lane_confidence(self):
        """Message field 'lane_confidence'."""
        return self._lane_confidence

    @lane_confidence.setter
    def lane_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_confidence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_confidence' field must be an unsigned integer in [0, 4294967295]"
        self._lane_confidence = value

    @builtins.property
    def lane_travel_direction(self):
        """Message field 'lane_travel_direction'."""
        return self._lane_travel_direction

    @lane_travel_direction.setter
    def lane_travel_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_travel_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_travel_direction' field must be an unsigned integer in [0, 255]"
        self._lane_travel_direction = value

    @builtins.property
    def lane_empir_speed(self):
        """Message field 'lane_empir_speed'."""
        return self._lane_empir_speed

    @lane_empir_speed.setter
    def lane_empir_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_empir_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_empir_speed' field must be an unsigned integer in [0, 255]"
        self._lane_empir_speed = value

    @builtins.property
    def lane_empir_traj_count(self):
        """Message field 'lane_empir_traj_count'."""
        return self._lane_empir_traj_count

    @lane_empir_traj_count.setter
    def lane_empir_traj_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_empir_traj_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_empir_traj_count' field must be an unsigned integer in [0, 255]"
        self._lane_empir_traj_count = value

    @builtins.property
    def lane_host_link_id(self):
        """Message field 'lane_host_link_id'."""
        return self._lane_host_link_id

    @lane_host_link_id.setter
    def lane_host_link_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_host_link_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'lane_host_link_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._lane_host_link_id = value

    @builtins.property
    def lane_host_link_type(self):
        """Message field 'lane_host_link_type'."""
        return self._lane_host_link_type

    @lane_host_link_type.setter
    def lane_host_link_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_host_link_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_host_link_type' field must be an unsigned integer in [0, 255]"
        self._lane_host_link_type = value

    @builtins.property
    def lane_successor_lane_ids(self):
        """Message field 'lane_successor_lane_ids'."""
        return self._lane_successor_lane_ids

    @lane_successor_lane_ids.setter
    def lane_successor_lane_ids(self, value):
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
                "The 'lane_successor_lane_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._lane_successor_lane_ids = value

    @builtins.property
    def lane_predecessor_lane_ids(self):
        """Message field 'lane_predecessor_lane_ids'."""
        return self._lane_predecessor_lane_ids

    @lane_predecessor_lane_ids.setter
    def lane_predecessor_lane_ids(self, value):
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
                "The 'lane_predecessor_lane_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._lane_predecessor_lane_ids = value

    @builtins.property
    def lane_referenced_roadobject_ids(self):
        """Message field 'lane_referenced_roadobject_ids'."""
        return self._lane_referenced_roadobject_ids

    @lane_referenced_roadobject_ids.setter
    def lane_referenced_roadobject_ids(self, value):
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
                "The 'lane_referenced_roadobject_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._lane_referenced_roadobject_ids = value

    @builtins.property
    def lane_coordinates(self):
        """Message field 'lane_coordinates'."""
        return self._lane_coordinates

    @lane_coordinates.setter
    def lane_coordinates(self, value):
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
                "The 'lane_coordinates' field must be a set or sequence and each value of type 'Coordinate'"
        self._lane_coordinates = value
