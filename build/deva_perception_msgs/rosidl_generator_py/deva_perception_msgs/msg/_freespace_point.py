# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/FreespacePoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FreespacePoint(type):
    """Metaclass of message 'FreespacePoint'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.FreespacePoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__freespace_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__freespace_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__freespace_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__freespace_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__freespace_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FreespacePoint(metaclass=Metaclass_FreespacePoint):
    """Message class 'FreespacePoint'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_rfu_x',
        '_rfu_y',
        '_rfu_z',
        '_azim',
        '_range',
        '_class_type',
        '_ins_id',
        '_visible',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'rfu_x': 'double',
        'rfu_y': 'double',
        'rfu_z': 'double',
        'azim': 'double',
        'range': 'double',
        'class_type': 'uint8',
        'ins_id': 'uint32',
        'visible': 'uint8',
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.rfu_x = kwargs.get('rfu_x', float())
        self.rfu_y = kwargs.get('rfu_y', float())
        self.rfu_z = kwargs.get('rfu_z', float())
        self.azim = kwargs.get('azim', float())
        self.range = kwargs.get('range', float())
        self.class_type = kwargs.get('class_type', int())
        self.ins_id = kwargs.get('ins_id', int())
        self.visible = kwargs.get('visible', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.rfu_x != other.rfu_x:
            return False
        if self.rfu_y != other.rfu_y:
            return False
        if self.rfu_z != other.rfu_z:
            return False
        if self.azim != other.azim:
            return False
        if self.range != other.range:
            return False
        if self.class_type != other.class_type:
            return False
        if self.ins_id != other.ins_id:
            return False
        if self.visible != other.visible:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def rfu_x(self):
        """Message field 'rfu_x'."""
        return self._rfu_x

    @rfu_x.setter
    def rfu_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rfu_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rfu_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rfu_x = value

    @builtins.property
    def rfu_y(self):
        """Message field 'rfu_y'."""
        return self._rfu_y

    @rfu_y.setter
    def rfu_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rfu_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rfu_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rfu_y = value

    @builtins.property
    def rfu_z(self):
        """Message field 'rfu_z'."""
        return self._rfu_z

    @rfu_z.setter
    def rfu_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rfu_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rfu_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rfu_z = value

    @builtins.property
    def azim(self):
        """Message field 'azim'."""
        return self._azim

    @azim.setter
    def azim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azim' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azim' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azim = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'range' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._range = value

    @builtins.property
    def class_type(self):
        """Message field 'class_type'."""
        return self._class_type

    @class_type.setter
    def class_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'class_type' field must be an unsigned integer in [0, 255]"
        self._class_type = value

    @builtins.property
    def ins_id(self):
        """Message field 'ins_id'."""
        return self._ins_id

    @ins_id.setter
    def ins_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ins_id' field must be an unsigned integer in [0, 4294967295]"
        self._ins_id = value

    @builtins.property
    def visible(self):
        """Message field 'visible'."""
        return self._visible

    @visible.setter
    def visible(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visible' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'visible' field must be an unsigned integer in [0, 255]"
        self._visible = value
