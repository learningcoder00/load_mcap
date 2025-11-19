# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvObject(type):
    """Metaclass of message 'EnvObject'."""

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
                'environment_model_msgs.msg.EnvObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_object

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


class EnvObject(metaclass=Metaclass_EnvObject):
    """Message class 'EnvObject'."""

    __slots__ = [
        '_id',
        '_enum_object_type',
        '_polygen',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'enum_object_type': 'uint8',
        'polygen': 'sequence<environment_model_msgs/Vec3d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec3d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.enum_object_type = kwargs.get('enum_object_type', int())
        self.polygen = kwargs.get('polygen', [])

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
        if self.enum_object_type != other.enum_object_type:
            return False
        if self.polygen != other.polygen:
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
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def enum_object_type(self):
        """Message field 'enum_object_type'."""
        return self._enum_object_type

    @enum_object_type.setter
    def enum_object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_object_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_object_type' field must be an unsigned integer in [0, 255]"
        self._enum_object_type = value

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
