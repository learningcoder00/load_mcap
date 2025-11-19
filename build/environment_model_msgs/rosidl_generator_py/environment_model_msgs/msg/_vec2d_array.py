# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/Vec2dArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vec2dArray(type):
    """Metaclass of message 'Vec2dArray'."""

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
                'environment_model_msgs.msg.Vec2dArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vec2d_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vec2d_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vec2d_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vec2d_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vec2d_array

            from environment_model_msgs.msg import Vec2d
            if Vec2d.__class__._TYPE_SUPPORT is None:
                Vec2d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Vec2dArray(metaclass=Metaclass_Vec2dArray):
    """Message class 'Vec2dArray'."""

    __slots__ = [
        '_vec2d_array',
    ]

    _fields_and_field_types = {
        'vec2d_array': 'sequence<environment_model_msgs/Vec2d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec2d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vec2d_array = kwargs.get('vec2d_array', [])

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
        if self.vec2d_array != other.vec2d_array:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vec2d_array(self):
        """Message field 'vec2d_array'."""
        return self._vec2d_array

    @vec2d_array.setter
    def vec2d_array(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec2d
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
                 all(isinstance(v, Vec2d) for v in value) and
                 True), \
                "The 'vec2d_array' field must be a set or sequence and each value of type 'Vec2d'"
        self._vec2d_array = value
