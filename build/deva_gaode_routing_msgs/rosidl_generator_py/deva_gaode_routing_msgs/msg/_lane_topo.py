# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneTopo(type):
    """Metaclass of message 'LaneTopo'."""

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
                'deva_gaode_routing_msgs.msg.LaneTopo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_topo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_topo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_topo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_topo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_topo

            from deva_gaode_routing_msgs.msg import LaneCond
            if LaneCond.__class__._TYPE_SUPPORT is None:
                LaneCond.__class__.__import_type_support__()

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


class LaneTopo(metaclass=Metaclass_LaneTopo):
    """Message class 'LaneTopo'."""

    __slots__ = [
        '_lane_arrow',
        '_lane_flag',
        '_bus_flag',
        '_out_link_ids',
        '_lane_conds',
        '_laneinfo_cond',
        '_direction',
        '_date',
        '_vehicles',
        '_special_times',
    ]

    _fields_and_field_types = {
        'lane_arrow': 'uint16',
        'lane_flag': 'uint16',
        'bus_flag': 'uint16',
        'out_link_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
        'lane_conds': 'sequence<deva_gaode_routing_msgs/LaneCond>',
        'laneinfo_cond': 'uint16',
        'direction': 'uint8',
        'date': 'string',
        'vehicles': 'uint8',
        'special_times': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LaneCond')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_arrow = kwargs.get('lane_arrow', int())
        self.lane_flag = kwargs.get('lane_flag', int())
        self.bus_flag = kwargs.get('bus_flag', int())
        self.out_link_ids = kwargs.get('out_link_ids', [])
        self.lane_conds = kwargs.get('lane_conds', [])
        self.laneinfo_cond = kwargs.get('laneinfo_cond', int())
        self.direction = kwargs.get('direction', int())
        self.date = kwargs.get('date', str())
        self.vehicles = kwargs.get('vehicles', int())
        self.special_times = kwargs.get('special_times', int())

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
        if self.lane_arrow != other.lane_arrow:
            return False
        if self.lane_flag != other.lane_flag:
            return False
        if self.bus_flag != other.bus_flag:
            return False
        if self.out_link_ids != other.out_link_ids:
            return False
        if self.lane_conds != other.lane_conds:
            return False
        if self.laneinfo_cond != other.laneinfo_cond:
            return False
        if self.direction != other.direction:
            return False
        if self.date != other.date:
            return False
        if self.vehicles != other.vehicles:
            return False
        if self.special_times != other.special_times:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_arrow(self):
        """Message field 'lane_arrow'."""
        return self._lane_arrow

    @lane_arrow.setter
    def lane_arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_arrow' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_arrow' field must be an unsigned integer in [0, 65535]"
        self._lane_arrow = value

    @builtins.property
    def lane_flag(self):
        """Message field 'lane_flag'."""
        return self._lane_flag

    @lane_flag.setter
    def lane_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_flag' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_flag' field must be an unsigned integer in [0, 65535]"
        self._lane_flag = value

    @builtins.property
    def bus_flag(self):
        """Message field 'bus_flag'."""
        return self._bus_flag

    @bus_flag.setter
    def bus_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bus_flag' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bus_flag' field must be an unsigned integer in [0, 65535]"
        self._bus_flag = value

    @builtins.property
    def out_link_ids(self):
        """Message field 'out_link_ids'."""
        return self._out_link_ids

    @out_link_ids.setter
    def out_link_ids(self, value):
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
                "The 'out_link_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._out_link_ids = value

    @builtins.property
    def lane_conds(self):
        """Message field 'lane_conds'."""
        return self._lane_conds

    @lane_conds.setter
    def lane_conds(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LaneCond
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
                 all(isinstance(v, LaneCond) for v in value) and
                 True), \
                "The 'lane_conds' field must be a set or sequence and each value of type 'LaneCond'"
        self._lane_conds = value

    @builtins.property
    def laneinfo_cond(self):
        """Message field 'laneinfo_cond'."""
        return self._laneinfo_cond

    @laneinfo_cond.setter
    def laneinfo_cond(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laneinfo_cond' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'laneinfo_cond' field must be an unsigned integer in [0, 65535]"
        self._laneinfo_cond = value

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
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @builtins.property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

    @builtins.property
    def vehicles(self):
        """Message field 'vehicles'."""
        return self._vehicles

    @vehicles.setter
    def vehicles(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicles' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicles' field must be an unsigned integer in [0, 255]"
        self._vehicles = value

    @builtins.property
    def special_times(self):
        """Message field 'special_times'."""
        return self._special_times

    @special_times.setter
    def special_times(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'special_times' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'special_times' field must be an unsigned integer in [0, 255]"
        self._special_times = value
