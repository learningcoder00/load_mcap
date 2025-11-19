# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'forms'
# Member 'next_ids'
# Member 'pre_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProRoad(type):
    """Metaclass of message 'SdProRoad'."""

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
                'deva_gaode_routing_msgs.msg.SdProRoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_road
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_road
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_road
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_road
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_road

            from deva_gaode_routing_msgs.msg import CenterPoint
            if CenterPoint.__class__._TYPE_SUPPORT is None:
                CenterPoint.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import CrossPoint
            if CrossPoint.__class__._TYPE_SUPPORT is None:
                CrossPoint.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import Restriction
            if Restriction.__class__._TYPE_SUPPORT is None:
                Restriction.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProLane
            if SdProLane.__class__._TYPE_SUPPORT is None:
                SdProLane.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import SdProLaneConnect
            if SdProLaneConnect.__class__._TYPE_SUPPORT is None:
                SdProLaneConnect.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import TrfcSign
            if TrfcSign.__class__._TYPE_SUPPORT is None:
                TrfcSign.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProRoad(metaclass=Metaclass_SdProRoad):
    """Message class 'SdProRoad'."""

    __slots__ = [
        '_id',
        '_road_kind',
        '_direction',
        '_forms',
        '_lane_count',
        '_length',
        '_speed_limit_min',
        '_speed_limit_max',
        '_start_angle',
        '_end_angle',
        '_geo',
        '_lanes',
        '_next_ids',
        '_pre_ids',
        '_product_type',
        '_lane_connect',
        '_trfc_signs',
        '_s_node_id',
        '_e_node_id',
        '_joint_type',
        '_road_name',
        '_restriction',
        '_cross_point',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'road_kind': 'uint32',
        'direction': 'uint32',
        'forms': 'sequence<uint32>',
        'lane_count': 'uint32',
        'length': 'double',
        'speed_limit_min': 'uint32',
        'speed_limit_max': 'uint32',
        'start_angle': 'double',
        'end_angle': 'double',
        'geo': 'sequence<deva_gaode_routing_msgs/CenterPoint>',
        'lanes': 'sequence<deva_gaode_routing_msgs/SdProLane>',
        'next_ids': 'sequence<uint64>',
        'pre_ids': 'sequence<uint64>',
        'product_type': 'uint32',
        'lane_connect': 'sequence<deva_gaode_routing_msgs/SdProLaneConnect>',
        'trfc_signs': 'sequence<deva_gaode_routing_msgs/TrfcSign>',
        's_node_id': 'uint64',
        'e_node_id': 'uint64',
        'joint_type': 'uint32',
        'road_name': 'string',
        'restriction': 'sequence<deva_gaode_routing_msgs/Restriction>',
        'cross_point': 'sequence<deva_gaode_routing_msgs/CrossPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'CenterPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProLane')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProLaneConnect')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'TrfcSign')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Restriction')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'CrossPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.road_kind = kwargs.get('road_kind', int())
        self.direction = kwargs.get('direction', int())
        self.forms = array.array('I', kwargs.get('forms', []))
        self.lane_count = kwargs.get('lane_count', int())
        self.length = kwargs.get('length', float())
        self.speed_limit_min = kwargs.get('speed_limit_min', int())
        self.speed_limit_max = kwargs.get('speed_limit_max', int())
        self.start_angle = kwargs.get('start_angle', float())
        self.end_angle = kwargs.get('end_angle', float())
        self.geo = kwargs.get('geo', [])
        self.lanes = kwargs.get('lanes', [])
        self.next_ids = array.array('Q', kwargs.get('next_ids', []))
        self.pre_ids = array.array('Q', kwargs.get('pre_ids', []))
        self.product_type = kwargs.get('product_type', int())
        self.lane_connect = kwargs.get('lane_connect', [])
        self.trfc_signs = kwargs.get('trfc_signs', [])
        self.s_node_id = kwargs.get('s_node_id', int())
        self.e_node_id = kwargs.get('e_node_id', int())
        self.joint_type = kwargs.get('joint_type', int())
        self.road_name = kwargs.get('road_name', str())
        self.restriction = kwargs.get('restriction', [])
        self.cross_point = kwargs.get('cross_point', [])

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
        if self.road_kind != other.road_kind:
            return False
        if self.direction != other.direction:
            return False
        if self.forms != other.forms:
            return False
        if self.lane_count != other.lane_count:
            return False
        if self.length != other.length:
            return False
        if self.speed_limit_min != other.speed_limit_min:
            return False
        if self.speed_limit_max != other.speed_limit_max:
            return False
        if self.start_angle != other.start_angle:
            return False
        if self.end_angle != other.end_angle:
            return False
        if self.geo != other.geo:
            return False
        if self.lanes != other.lanes:
            return False
        if self.next_ids != other.next_ids:
            return False
        if self.pre_ids != other.pre_ids:
            return False
        if self.product_type != other.product_type:
            return False
        if self.lane_connect != other.lane_connect:
            return False
        if self.trfc_signs != other.trfc_signs:
            return False
        if self.s_node_id != other.s_node_id:
            return False
        if self.e_node_id != other.e_node_id:
            return False
        if self.joint_type != other.joint_type:
            return False
        if self.road_name != other.road_name:
            return False
        if self.restriction != other.restriction:
            return False
        if self.cross_point != other.cross_point:
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
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def road_kind(self):
        """Message field 'road_kind'."""
        return self._road_kind

    @road_kind.setter
    def road_kind(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_kind' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'road_kind' field must be an unsigned integer in [0, 4294967295]"
        self._road_kind = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'direction' field must be an unsigned integer in [0, 4294967295]"
        self._direction = value

    @builtins.property
    def forms(self):
        """Message field 'forms'."""
        return self._forms

    @forms.setter
    def forms(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'forms' array.array() must have the type code of 'I'"
            self._forms = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'forms' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._forms = array.array('I', value)

    @builtins.property
    def lane_count(self):
        """Message field 'lane_count'."""
        return self._lane_count

    @lane_count.setter
    def lane_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_count' field must be an unsigned integer in [0, 4294967295]"
        self._lane_count = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def speed_limit_min(self):
        """Message field 'speed_limit_min'."""
        return self._speed_limit_min

    @speed_limit_min.setter
    def speed_limit_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_min' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'speed_limit_min' field must be an unsigned integer in [0, 4294967295]"
        self._speed_limit_min = value

    @builtins.property
    def speed_limit_max(self):
        """Message field 'speed_limit_max'."""
        return self._speed_limit_max

    @speed_limit_max.setter
    def speed_limit_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_max' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'speed_limit_max' field must be an unsigned integer in [0, 4294967295]"
        self._speed_limit_max = value

    @builtins.property
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_angle = value

    @builtins.property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_angle = value

    @builtins.property
    def geo(self):
        """Message field 'geo'."""
        return self._geo

    @geo.setter
    def geo(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import CenterPoint
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
                 all(isinstance(v, CenterPoint) for v in value) and
                 True), \
                "The 'geo' field must be a set or sequence and each value of type 'CenterPoint'"
        self._geo = value

    @builtins.property
    def lanes(self):
        """Message field 'lanes'."""
        return self._lanes

    @lanes.setter
    def lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProLane
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
                 all(isinstance(v, SdProLane) for v in value) and
                 True), \
                "The 'lanes' field must be a set or sequence and each value of type 'SdProLane'"
        self._lanes = value

    @builtins.property
    def next_ids(self):
        """Message field 'next_ids'."""
        return self._next_ids

    @next_ids.setter
    def next_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'next_ids' array.array() must have the type code of 'Q'"
            self._next_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'next_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._next_ids = array.array('Q', value)

    @builtins.property
    def pre_ids(self):
        """Message field 'pre_ids'."""
        return self._pre_ids

    @pre_ids.setter
    def pre_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'pre_ids' array.array() must have the type code of 'Q'"
            self._pre_ids = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'pre_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._pre_ids = array.array('Q', value)

    @builtins.property
    def product_type(self):
        """Message field 'product_type'."""
        return self._product_type

    @product_type.setter
    def product_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'product_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'product_type' field must be an unsigned integer in [0, 4294967295]"
        self._product_type = value

    @builtins.property
    def lane_connect(self):
        """Message field 'lane_connect'."""
        return self._lane_connect

    @lane_connect.setter
    def lane_connect(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProLaneConnect
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
                 all(isinstance(v, SdProLaneConnect) for v in value) and
                 True), \
                "The 'lane_connect' field must be a set or sequence and each value of type 'SdProLaneConnect'"
        self._lane_connect = value

    @builtins.property
    def trfc_signs(self):
        """Message field 'trfc_signs'."""
        return self._trfc_signs

    @trfc_signs.setter
    def trfc_signs(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import TrfcSign
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
                 all(isinstance(v, TrfcSign) for v in value) and
                 True), \
                "The 'trfc_signs' field must be a set or sequence and each value of type 'TrfcSign'"
        self._trfc_signs = value

    @builtins.property
    def s_node_id(self):
        """Message field 's_node_id'."""
        return self._s_node_id

    @s_node_id.setter
    def s_node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 's_node_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 's_node_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._s_node_id = value

    @builtins.property
    def e_node_id(self):
        """Message field 'e_node_id'."""
        return self._e_node_id

    @e_node_id.setter
    def e_node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'e_node_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'e_node_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._e_node_id = value

    @builtins.property
    def joint_type(self):
        """Message field 'joint_type'."""
        return self._joint_type

    @joint_type.setter
    def joint_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'joint_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'joint_type' field must be an unsigned integer in [0, 4294967295]"
        self._joint_type = value

    @builtins.property
    def road_name(self):
        """Message field 'road_name'."""
        return self._road_name

    @road_name.setter
    def road_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'road_name' field must be of type 'str'"
        self._road_name = value

    @builtins.property
    def restriction(self):
        """Message field 'restriction'."""
        return self._restriction

    @restriction.setter
    def restriction(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Restriction
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
                 all(isinstance(v, Restriction) for v in value) and
                 True), \
                "The 'restriction' field must be a set or sequence and each value of type 'Restriction'"
        self._restriction = value

    @builtins.property
    def cross_point(self):
        """Message field 'cross_point'."""
        return self._cross_point

    @cross_point.setter
    def cross_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import CrossPoint
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
                 all(isinstance(v, CrossPoint) for v in value) and
                 True), \
                "The 'cross_point' field must be a set or sequence and each value of type 'CrossPoint'"
        self._cross_point = value
