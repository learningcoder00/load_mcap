# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProLane(type):
    """Metaclass of message 'SdProLane'."""

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
                'deva_gaode_routing_msgs.msg.SdProLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_lane

            from deva_gaode_routing_msgs.msg import SdProLaneTopo
            if SdProLaneTopo.__class__._TYPE_SUPPORT is None:
                SdProLaneTopo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProLane(metaclass=Metaclass_SdProLane):
    """Message class 'SdProLane'."""

    __slots__ = [
        '_id',
        '_lane_arrow_type',
        '_category_location',
        '_category_vehicle',
        '_category_special',
        '_lane_num',
        '_length',
        '_direction',
        '_next_lanes',
        '_pre_lanes',
        '_transition',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'lane_arrow_type': 'uint32',
        'category_location': 'uint32',
        'category_vehicle': 'uint32',
        'category_special': 'uint32',
        'lane_num': 'int32',
        'length': 'int32',
        'direction': 'int32',
        'next_lanes': 'sequence<deva_gaode_routing_msgs/SdProLaneTopo>',
        'pre_lanes': 'sequence<deva_gaode_routing_msgs/SdProLaneTopo>',
        'transition': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProLaneTopo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'SdProLaneTopo')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.lane_arrow_type = kwargs.get('lane_arrow_type', int())
        self.category_location = kwargs.get('category_location', int())
        self.category_vehicle = kwargs.get('category_vehicle', int())
        self.category_special = kwargs.get('category_special', int())
        self.lane_num = kwargs.get('lane_num', int())
        self.length = kwargs.get('length', int())
        self.direction = kwargs.get('direction', int())
        self.next_lanes = kwargs.get('next_lanes', [])
        self.pre_lanes = kwargs.get('pre_lanes', [])
        self.transition = kwargs.get('transition', int())

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
        if self.lane_arrow_type != other.lane_arrow_type:
            return False
        if self.category_location != other.category_location:
            return False
        if self.category_vehicle != other.category_vehicle:
            return False
        if self.category_special != other.category_special:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.length != other.length:
            return False
        if self.direction != other.direction:
            return False
        if self.next_lanes != other.next_lanes:
            return False
        if self.pre_lanes != other.pre_lanes:
            return False
        if self.transition != other.transition:
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
    def lane_arrow_type(self):
        """Message field 'lane_arrow_type'."""
        return self._lane_arrow_type

    @lane_arrow_type.setter
    def lane_arrow_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_arrow_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_arrow_type' field must be an unsigned integer in [0, 4294967295]"
        self._lane_arrow_type = value

    @builtins.property
    def category_location(self):
        """Message field 'category_location'."""
        return self._category_location

    @category_location.setter
    def category_location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'category_location' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'category_location' field must be an unsigned integer in [0, 4294967295]"
        self._category_location = value

    @builtins.property
    def category_vehicle(self):
        """Message field 'category_vehicle'."""
        return self._category_vehicle

    @category_vehicle.setter
    def category_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'category_vehicle' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'category_vehicle' field must be an unsigned integer in [0, 4294967295]"
        self._category_vehicle = value

    @builtins.property
    def category_special(self):
        """Message field 'category_special'."""
        return self._category_special

    @category_special.setter
    def category_special(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'category_special' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'category_special' field must be an unsigned integer in [0, 4294967295]"
        self._category_special = value

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
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'length' field must be an integer in [-2147483648, 2147483647]"
        self._length = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'direction' field must be an integer in [-2147483648, 2147483647]"
        self._direction = value

    @builtins.property
    def next_lanes(self):
        """Message field 'next_lanes'."""
        return self._next_lanes

    @next_lanes.setter
    def next_lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProLaneTopo
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
                 all(isinstance(v, SdProLaneTopo) for v in value) and
                 True), \
                "The 'next_lanes' field must be a set or sequence and each value of type 'SdProLaneTopo'"
        self._next_lanes = value

    @builtins.property
    def pre_lanes(self):
        """Message field 'pre_lanes'."""
        return self._pre_lanes

    @pre_lanes.setter
    def pre_lanes(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import SdProLaneTopo
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
                 all(isinstance(v, SdProLaneTopo) for v in value) and
                 True), \
                "The 'pre_lanes' field must be a set or sequence and each value of type 'SdProLaneTopo'"
        self._pre_lanes = value

    @builtins.property
    def transition(self):
        """Message field 'transition'."""
        return self._transition

    @transition.setter
    def transition(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transition' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'transition' field must be an unsigned integer in [0, 4294967295]"
        self._transition = value
