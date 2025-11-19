# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/AvpRefLineTreePoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvpRefLineTreePoint(type):
    """Metaclass of message 'AvpRefLineTreePoint'."""

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
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.AvpRefLineTreePoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avp_ref_line_tree_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avp_ref_line_tree_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avp_ref_line_tree_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avp_ref_line_tree_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avp_ref_line_tree_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvpRefLineTreePoint(metaclass=Metaclass_AvpRefLineTreePoint):
    """Message class 'AvpRefLineTreePoint'."""

    __slots__ = [
        '_idx',
        '_directory',
        '_center_n',
        '_center_point_x',
        '_center_point_y',
        '_center_point_z',
        '_left_n',
        '_right_n',
        '_left_x',
        '_left_y',
        '_left_z',
        '_right_x',
        '_right_y',
        '_right_z',
    ]

    _fields_and_field_types = {
        'idx': 'int32',
        'directory': 'int32',
        'center_n': 'double',
        'center_point_x': 'double',
        'center_point_y': 'double',
        'center_point_z': 'double',
        'left_n': 'double',
        'right_n': 'double',
        'left_x': 'double',
        'left_y': 'double',
        'left_z': 'double',
        'right_x': 'double',
        'right_y': 'double',
        'right_z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.idx = kwargs.get('idx', int())
        self.directory = kwargs.get('directory', int())
        self.center_n = kwargs.get('center_n', float())
        self.center_point_x = kwargs.get('center_point_x', float())
        self.center_point_y = kwargs.get('center_point_y', float())
        self.center_point_z = kwargs.get('center_point_z', float())
        self.left_n = kwargs.get('left_n', float())
        self.right_n = kwargs.get('right_n', float())
        self.left_x = kwargs.get('left_x', float())
        self.left_y = kwargs.get('left_y', float())
        self.left_z = kwargs.get('left_z', float())
        self.right_x = kwargs.get('right_x', float())
        self.right_y = kwargs.get('right_y', float())
        self.right_z = kwargs.get('right_z', float())

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
        if self.idx != other.idx:
            return False
        if self.directory != other.directory:
            return False
        if self.center_n != other.center_n:
            return False
        if self.center_point_x != other.center_point_x:
            return False
        if self.center_point_y != other.center_point_y:
            return False
        if self.center_point_z != other.center_point_z:
            return False
        if self.left_n != other.left_n:
            return False
        if self.right_n != other.right_n:
            return False
        if self.left_x != other.left_x:
            return False
        if self.left_y != other.left_y:
            return False
        if self.left_z != other.left_z:
            return False
        if self.right_x != other.right_x:
            return False
        if self.right_y != other.right_y:
            return False
        if self.right_z != other.right_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def idx(self):
        """Message field 'idx'."""
        return self._idx

    @idx.setter
    def idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'idx' field must be an integer in [-2147483648, 2147483647]"
        self._idx = value

    @builtins.property
    def directory(self):
        """Message field 'directory'."""
        return self._directory

    @directory.setter
    def directory(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'directory' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'directory' field must be an integer in [-2147483648, 2147483647]"
        self._directory = value

    @builtins.property
    def center_n(self):
        """Message field 'center_n'."""
        return self._center_n

    @center_n.setter
    def center_n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_n' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_n' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_n = value

    @builtins.property
    def center_point_x(self):
        """Message field 'center_point_x'."""
        return self._center_point_x

    @center_point_x.setter
    def center_point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_point_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_point_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_point_x = value

    @builtins.property
    def center_point_y(self):
        """Message field 'center_point_y'."""
        return self._center_point_y

    @center_point_y.setter
    def center_point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_point_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_point_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_point_y = value

    @builtins.property
    def center_point_z(self):
        """Message field 'center_point_z'."""
        return self._center_point_z

    @center_point_z.setter
    def center_point_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_point_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_point_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_point_z = value

    @builtins.property
    def left_n(self):
        """Message field 'left_n'."""
        return self._left_n

    @left_n.setter
    def left_n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_n' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_n' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_n = value

    @builtins.property
    def right_n(self):
        """Message field 'right_n'."""
        return self._right_n

    @right_n.setter
    def right_n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_n' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_n' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_n = value

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
