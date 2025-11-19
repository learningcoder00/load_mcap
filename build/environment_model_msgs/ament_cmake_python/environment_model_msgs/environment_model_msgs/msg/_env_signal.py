# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvSignal(type):
    """Metaclass of message 'EnvSignal'."""

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
            module = import_type_support('environment_model_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_model_msgs.msg.EnvSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_signal

            from environment_model_msgs.msg import Vec3d
            if Vec3d.__class__._TYPE_SUPPORT is None:
                Vec3d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvSignal(metaclass=Metaclass_EnvSignal):
    """Message class 'EnvSignal'."""

    __slots__ = [
        '_enum_color',
        '_remain_time',
        '_id',
        '_enum_shape_type',
        '_polygen',
        '_virtual_brake_point',
        '_blink',
        '_block',
    ]

    _fields_and_field_types = {
        'enum_color': 'uint8',
        'remain_time': 'double',
        'id': 'string',
        'enum_shape_type': 'uint8',
        'polygen': 'sequence<environment_model_msgs/Vec3d>',
        'virtual_brake_point': 'sequence<environment_model_msgs/Vec3d>',
        'blink': 'boolean',
        'block': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec3d')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec3d')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enum_color = kwargs.get('enum_color', int())
        self.remain_time = kwargs.get('remain_time', float())
        self.id = kwargs.get('id', str())
        self.enum_shape_type = kwargs.get('enum_shape_type', int())
        self.polygen = kwargs.get('polygen', [])
        self.virtual_brake_point = kwargs.get('virtual_brake_point', [])
        self.blink = kwargs.get('blink', bool())
        self.block = kwargs.get('block', int())

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
        if self.enum_color != other.enum_color:
            return False
        if self.remain_time != other.remain_time:
            return False
        if self.id != other.id:
            return False
        if self.enum_shape_type != other.enum_shape_type:
            return False
        if self.polygen != other.polygen:
            return False
        if self.virtual_brake_point != other.virtual_brake_point:
            return False
        if self.blink != other.blink:
            return False
        if self.block != other.block:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enum_color(self):
        """Message field 'enum_color'."""
        return self._enum_color

    @enum_color.setter
    def enum_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_color' field must be an unsigned integer in [0, 255]"
        self._enum_color = value

    @builtins.property
    def remain_time(self):
        """Message field 'remain_time'."""
        return self._remain_time

    @remain_time.setter
    def remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'remain_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._remain_time = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def enum_shape_type(self):
        """Message field 'enum_shape_type'."""
        return self._enum_shape_type

    @enum_shape_type.setter
    def enum_shape_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_shape_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_shape_type' field must be an unsigned integer in [0, 255]"
        self._enum_shape_type = value

    @builtins.property
    def polygen(self):
        """Message field 'polygen'."""
        return self._polygen

    @polygen.setter
    def polygen(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec3d
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
                 all(isinstance(v, Vec3d) for v in value) and
                 True), \
                "The 'polygen' field must be a set or sequence and each value of type 'Vec3d'"
        self._polygen = value

    @builtins.property
    def virtual_brake_point(self):
        """Message field 'virtual_brake_point'."""
        return self._virtual_brake_point

    @virtual_brake_point.setter
    def virtual_brake_point(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec3d
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
                 all(isinstance(v, Vec3d) for v in value) and
                 True), \
                "The 'virtual_brake_point' field must be a set or sequence and each value of type 'Vec3d'"
        self._virtual_brake_point = value

    @builtins.property
    def blink(self):
        """Message field 'blink'."""
        return self._blink

    @blink.setter
    def blink(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blink' field must be of type 'bool'"
        self._blink = value

    @builtins.property
    def block(self):
        """Message field 'block'."""
        return self._block

    @block.setter
    def block(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'block' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'block' field must be an unsigned integer in [0, 255]"
        self._block = value
