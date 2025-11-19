# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneTrafficInfo(type):
    """Metaclass of message 'LaneTrafficInfo'."""

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
                'deva_gaode_routing_msgs.msg.LaneTrafficInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_traffic_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_traffic_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_traffic_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_traffic_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_traffic_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneTrafficInfo(metaclass=Metaclass_LaneTrafficInfo):
    """Message class 'LaneTrafficInfo'."""

    __slots__ = [
        '_is_bus',
        '_lane_type',
        '_arrow',
    ]

    _fields_and_field_types = {
        'is_bus': 'boolean',
        'lane_type': 'uint32',
        'arrow': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_bus = kwargs.get('is_bus', bool())
        self.lane_type = kwargs.get('lane_type', int())
        self.arrow = kwargs.get('arrow', int())

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
        if self.is_bus != other.is_bus:
            return False
        if self.lane_type != other.lane_type:
            return False
        if self.arrow != other.arrow:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_bus(self):
        """Message field 'is_bus'."""
        return self._is_bus

    @is_bus.setter
    def is_bus(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_bus' field must be of type 'bool'"
        self._is_bus = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'lane_type' field must be an unsigned integer in [0, 4294967295]"
        self._lane_type = value

    @builtins.property
    def arrow(self):
        """Message field 'arrow'."""
        return self._arrow

    @arrow.setter
    def arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arrow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'arrow' field must be an unsigned integer in [0, 4294967295]"
        self._arrow = value
