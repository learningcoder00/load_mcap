# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pass_road_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProLaneConnect(type):
    """Metaclass of message 'SdProLaneConnect'."""

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
                'deva_gaode_routing_msgs.msg.SdProLaneConnect')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_lane_connect
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_lane_connect
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_lane_connect
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_lane_connect
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_lane_connect

            from deva_gaode_routing_msgs.msg import RestrictionDetail
            if RestrictionDetail.__class__._TYPE_SUPPORT is None:
                RestrictionDetail.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProLaneConnect(metaclass=Metaclass_SdProLaneConnect):
    """Message class 'SdProLaneConnect'."""

    __slots__ = [
        '_id',
        '_out_road',
        '_pass_road_ids',
        '_arrow_info',
        '_lane_info',
        '_bus_lane',
        '_lane_num',
        '_lane_left',
        '_lane_right',
        '_node_id',
        '_limit_lane',
        '_connect_restriction',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'out_road': 'uint64',
        'pass_road_ids': 'sequence<uint64>',
        'arrow_info': 'uint32',
        'lane_info': 'int32',
        'bus_lane': 'int32',
        'lane_num': 'int32',
        'lane_left': 'int32',
        'lane_right': 'int32',
        'node_id': 'uint64',
        'limit_lane': 'int32',
        'connect_restriction': 'sequence<deva_gaode_routing_msgs/RestrictionDetail>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RestrictionDetail')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.out_road = kwargs.get('out_road', int())
        self.pass_road_ids = array.array('Q', kwargs.get('pass_road_ids', []))
        self.arrow_info = kwargs.get('arrow_info', int())
        self.lane_info = kwargs.get('lane_info', int())
        self.bus_lane = kwargs.get('bus_lane', int())
        self.lane_num = kwargs.get('lane_num', int())
        self.lane_left = kwargs.get('lane_left', int())
        self.lane_right = kwargs.get('lane_right', int())
        self.node_id = kwargs.get('node_id', int())
        self.limit_lane = kwargs.get('limit_lane', int())
        self.connect_restriction = kwargs.get('connect_restriction', [])

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
        if self.out_road != other.out_road:
            return False
        if self.pass_road_ids != other.pass_road_ids:
            return False
        if self.arrow_info != other.arrow_info:
            return False
        if self.lane_info != other.lane_info:
            return False
        if self.bus_lane != other.bus_lane:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.lane_left != other.lane_left:
            return False
        if self.lane_right != other.lane_right:
            return False
        if self.node_id != other.node_id:
            return False
        if self.limit_lane != other.limit_lane:
            return False
        if self.connect_restriction != other.connect_restriction:
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
    def out_road(self):
        """Message field 'out_road'."""
        return self._out_road

    @out_road.setter
    def out_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'out_road' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'out_road' field must be an unsigned integer in [0, 18446744073709551615]"
        self._out_road = value

    @builtins.property
    def pass_road_ids(self):
        """Message field 'pass_road_ids'."""
        return self._pass_road_ids

    @pass_road_ids.setter
    def pass_road_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'pass_road_ids' array.array() must have the type code of 'Q'"
            self._pass_road_ids = value
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
                "The 'pass_road_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._pass_road_ids = array.array('Q', value)

    @builtins.property
    def arrow_info(self):
        """Message field 'arrow_info'."""
        return self._arrow_info

    @arrow_info.setter
    def arrow_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arrow_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'arrow_info' field must be an unsigned integer in [0, 4294967295]"
        self._arrow_info = value

    @builtins.property
    def lane_info(self):
        """Message field 'lane_info'."""
        return self._lane_info

    @lane_info.setter
    def lane_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_info' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_info' field must be an integer in [-2147483648, 2147483647]"
        self._lane_info = value

    @builtins.property
    def bus_lane(self):
        """Message field 'bus_lane'."""
        return self._bus_lane

    @bus_lane.setter
    def bus_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bus_lane' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bus_lane' field must be an integer in [-2147483648, 2147483647]"
        self._bus_lane = value

    @builtins.property
    def lane_num(self):
        """Message field 'lane_num'."""
        return self._lane_num

    @lane_num.setter
    def lane_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_num' field must be an integer in [-2147483648, 2147483647]"
        self._lane_num = value

    @builtins.property
    def lane_left(self):
        """Message field 'lane_left'."""
        return self._lane_left

    @lane_left.setter
    def lane_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_left' field must be an integer in [-2147483648, 2147483647]"
        self._lane_left = value

    @builtins.property
    def lane_right(self):
        """Message field 'lane_right'."""
        return self._lane_right

    @lane_right.setter
    def lane_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_right' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_right' field must be an integer in [-2147483648, 2147483647]"
        self._lane_right = value

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id = value

    @builtins.property
    def limit_lane(self):
        """Message field 'limit_lane'."""
        return self._limit_lane

    @limit_lane.setter
    def limit_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'limit_lane' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'limit_lane' field must be an integer in [-2147483648, 2147483647]"
        self._limit_lane = value

    @builtins.property
    def connect_restriction(self):
        """Message field 'connect_restriction'."""
        return self._connect_restriction

    @connect_restriction.setter
    def connect_restriction(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RestrictionDetail
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
                 all(isinstance(v, RestrictionDetail) for v in value) and
                 True), \
                "The 'connect_restriction' field must be a set or sequence and each value of type 'RestrictionDetail'"
        self._connect_restriction = value
