# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RoutePos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoutePos(type):
    """Metaclass of message 'RoutePos'."""

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
                'deva_gaode_routing_msgs.msg.RoutePos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_pos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_pos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_pos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_pos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_pos

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoutePos(metaclass=Metaclass_RoutePos):
    """Message class 'RoutePos'."""

    __slots__ = [
        '_pos',
        '_coor_start',
        '_offset_length',
        '_link_offset',
    ]

    _fields_and_field_types = {
        'pos': 'deva_gaode_routing_msgs/Coordinate',
        'coor_start': 'uint32',
        'offset_length': 'uint32',
        'link_offset': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import Coordinate
        self.pos = kwargs.get('pos', Coordinate())
        self.coor_start = kwargs.get('coor_start', int())
        self.offset_length = kwargs.get('offset_length', int())
        self.link_offset = kwargs.get('link_offset', int())

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
        if self.pos != other.pos:
            return False
        if self.coor_start != other.coor_start:
            return False
        if self.offset_length != other.offset_length:
            return False
        if self.link_offset != other.link_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'pos' field must be a sub message of type 'Coordinate'"
        self._pos = value

    @builtins.property
    def coor_start(self):
        """Message field 'coor_start'."""
        return self._coor_start

    @coor_start.setter
    def coor_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coor_start' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'coor_start' field must be an unsigned integer in [0, 4294967295]"
        self._coor_start = value

    @builtins.property
    def offset_length(self):
        """Message field 'offset_length'."""
        return self._offset_length

    @offset_length.setter
    def offset_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset_length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset_length' field must be an unsigned integer in [0, 4294967295]"
        self._offset_length = value

    @builtins.property
    def link_offset(self):
        """Message field 'link_offset'."""
        return self._link_offset

    @link_offset.setter
    def link_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'link_offset' field must be an unsigned integer in [0, 4294967295]"
        self._link_offset = value
