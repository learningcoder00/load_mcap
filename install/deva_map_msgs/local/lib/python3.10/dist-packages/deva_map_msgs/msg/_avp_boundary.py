# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/AvpBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvpBoundary(type):
    """Metaclass of message 'AvpBoundary'."""

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
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.AvpBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avp_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avp_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avp_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avp_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avp_boundary

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvpBoundary(metaclass=Metaclass_AvpBoundary):
    """Message class 'AvpBoundary'."""

    __slots__ = [
        '_s',
        '_left_x',
        '_left_y',
        '_left_z',
        '_left_region_width',
        '_right_x',
        '_right_y',
        '_right_z',
        '_right_region_width',
    ]

    _fields_and_field_types = {
        's': 'double',
        'left_x': 'double',
        'left_y': 'double',
        'left_z': 'double',
        'left_region_width': 'double',
        'right_x': 'double',
        'right_y': 'double',
        'right_z': 'double',
        'right_region_width': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.s = kwargs.get('s', float())
        self.left_x = kwargs.get('left_x', float())
        self.left_y = kwargs.get('left_y', float())
        self.left_z = kwargs.get('left_z', float())
        self.left_region_width = kwargs.get('left_region_width', float())
        self.right_x = kwargs.get('right_x', float())
        self.right_y = kwargs.get('right_y', float())
        self.right_z = kwargs.get('right_z', float())
        self.right_region_width = kwargs.get('right_region_width', float())

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
        if self.s != other.s:
            return False
        if self.left_x != other.left_x:
            return False
        if self.left_y != other.left_y:
            return False
        if self.left_z != other.left_z:
            return False
        if self.left_region_width != other.left_region_width:
            return False
        if self.right_x != other.right_x:
            return False
        if self.right_y != other.right_y:
            return False
        if self.right_z != other.right_z:
            return False
        if self.right_region_width != other.right_region_width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s = value

    @builtins.property
    def left_x(self):
        """Message field 'left_x'."""
        return self._left_x

    @left_x.setter
    def left_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_x = value

    @builtins.property
    def left_y(self):
        """Message field 'left_y'."""
        return self._left_y

    @left_y.setter
    def left_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_y = value

    @builtins.property
    def left_z(self):
        """Message field 'left_z'."""
        return self._left_z

    @left_z.setter
    def left_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_z = value

    @builtins.property
    def left_region_width(self):
        """Message field 'left_region_width'."""
        return self._left_region_width

    @left_region_width.setter
    def left_region_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_region_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_region_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_region_width = value

    @builtins.property
    def right_x(self):
        """Message field 'right_x'."""
        return self._right_x

    @right_x.setter
    def right_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_x = value

    @builtins.property
    def right_y(self):
        """Message field 'right_y'."""
        return self._right_y

    @right_y.setter
    def right_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_y = value

    @builtins.property
    def right_z(self):
        """Message field 'right_z'."""
        return self._right_z

    @right_z.setter
    def right_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_z = value

    @builtins.property
    def right_region_width(self):
        """Message field 'right_region_width'."""
        return self._right_region_width

    @right_region_width.setter
    def right_region_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_region_width' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_region_width' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_region_width = value
