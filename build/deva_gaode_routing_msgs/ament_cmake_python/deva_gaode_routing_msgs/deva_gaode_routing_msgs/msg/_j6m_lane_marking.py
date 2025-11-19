# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J6mLaneMarking(type):
    """Metaclass of message 'J6mLaneMarking'."""

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
                'deva_gaode_routing_msgs.msg.J6mLaneMarking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j6m_lane_marking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j6m_lane_marking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j6m_lane_marking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j6m_lane_marking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j6m_lane_marking

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


class J6mLaneMarking(metaclass=Metaclass_J6mLaneMarking):
    """Message class 'J6mLaneMarking'."""

    __slots__ = [
        '_lane_marking_id',
        '_lane_marking_type',
        '_lane_marking_length',
        '_lane_marking_order_number',
        '_lane_marking_offset',
        '_lane_marking_color',
        '_lane_marking_confidence',
        '_lane_marking_coordinates',
    ]

    _fields_and_field_types = {
        'lane_marking_id': 'deva_gaode_routing_msgs/LinkIDType',
        'lane_marking_type': 'uint8',
        'lane_marking_length': 'uint32',
        'lane_marking_order_number': 'uint8',
        'lane_marking_offset': 'uint32',
        'lane_marking_color': 'uint8',
        'lane_marking_confidence': 'uint32',
        'lane_marking_coordinates': 'sequence<deva_gaode_routing_msgs/Coordinate>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.lane_marking_id = kwargs.get('lane_marking_id', LinkIDType())
        self.lane_marking_type = kwargs.get('lane_marking_type', int())
        self.lane_marking_length = kwargs.get('lane_marking_length', int())
        self.lane_marking_order_number = kwargs.get('lane_marking_order_number', int())
        self.lane_marking_offset = kwargs.get('lane_marking_offset', int())
        self.lane_marking_color = kwargs.get('lane_marking_color', int())
        self.lane_marking_confidence = kwargs.get('lane_marking_confidence', int())
        self.lane_marking_coordinates = kwargs.get('lane_marking_coordinates', [])

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
        if self.lane_marking_id != other.lane_marking_id:
            return False
        if self.lane_marking_type != other.lane_marking_type:
            return False
        if self.lane_marking_length != other.lane_marking_length:
            return False
        if self.lane_marking_order_number != other.lane_marking_order_number:
            return False
        if self.lane_marking_offset != other.lane_marking_offset:
            return False
        if self.lane_marking_color != other.lane_marking_color:
            return False
        if self.lane_marking_confidence != other.lane_marking_confidence:
            return False
        if self.lane_marking_coordinates != other.lane_marking_coordinates:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_marking_id(self):
        """Message field 'lane_marking_id'."""
        return self._lane_marking_id

    @lane_marking_id.setter
    def lane_marking_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'lane_marking_id' field must be a sub message of type 'LinkIDType'"
        self._lane_marking_id = value

    @builtins.property
    def lane_marking_type(self):
        """Message field 'lane_marking_type'."""
        return self._lane_marking_type

    @lane_marking_type.setter
    def lane_marking_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_marking_type' field must be an unsigned integer in [0, 255]"
        self._lane_marking_type = value

    @builtins.property
    def lane_marking_length(self):
        """Message field 'lane_marking_length'."""
        return self._lane_marking_length

    @lane_marking_length.setter
    def lane_marking_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_marking_length' field must be an unsigned integer in [0, 4294967295]"
        self._lane_marking_length = value

    @builtins.property
    def lane_marking_order_number(self):
        """Message field 'lane_marking_order_number'."""
        return self._lane_marking_order_number

    @lane_marking_order_number.setter
    def lane_marking_order_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_order_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_marking_order_number' field must be an unsigned integer in [0, 255]"
        self._lane_marking_order_number = value

    @builtins.property
    def lane_marking_offset(self):
        """Message field 'lane_marking_offset'."""
        return self._lane_marking_offset

    @lane_marking_offset.setter
    def lane_marking_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_marking_offset' field must be an unsigned integer in [0, 4294967295]"
        self._lane_marking_offset = value

    @builtins.property
    def lane_marking_color(self):
        """Message field 'lane_marking_color'."""
        return self._lane_marking_color

    @lane_marking_color.setter
    def lane_marking_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_marking_color' field must be an unsigned integer in [0, 255]"
        self._lane_marking_color = value

    @builtins.property
    def lane_marking_confidence(self):
        """Message field 'lane_marking_confidence'."""
        return self._lane_marking_confidence

    @lane_marking_confidence.setter
    def lane_marking_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_marking_confidence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_marking_confidence' field must be an unsigned integer in [0, 4294967295]"
        self._lane_marking_confidence = value

    @builtins.property
    def lane_marking_coordinates(self):
        """Message field 'lane_marking_coordinates'."""
        return self._lane_marking_coordinates

    @lane_marking_coordinates.setter
    def lane_marking_coordinates(self, value):
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
                "The 'lane_marking_coordinates' field must be a set or sequence and each value of type 'Coordinate'"
        self._lane_marking_coordinates = value
