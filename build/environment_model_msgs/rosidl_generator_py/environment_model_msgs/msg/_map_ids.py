# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/MapIds.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapIds(type):
    """Metaclass of message 'MapIds'."""

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
                'environment_model_msgs.msg.MapIds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_ids
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_ids
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_ids
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_ids
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_ids

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapIds(metaclass=Metaclass_MapIds):
    """Message class 'MapIds'."""

    __slots__ = [
        '_key',
        '_value1',
        '_value2',
    ]

    _fields_and_field_types = {
        'key': 'int32',
        'value1': 'double',
        'value2': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.key = kwargs.get('key', int())
        self.value1 = kwargs.get('value1', float())
        self.value2 = kwargs.get('value2', float())

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
        if self.key != other.key:
            return False
        if self.value1 != other.value1:
            return False
        if self.value2 != other.value2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def key(self):
        """Message field 'key'."""
        return self._key

    @key.setter
    def key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'key' field must be an integer in [-2147483648, 2147483647]"
        self._key = value

    @builtins.property
    def value1(self):
        """Message field 'value1'."""
        return self._value1

    @value1.setter
    def value1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value1 = value

    @builtins.property
    def value2(self):
        """Message field 'value2'."""
        return self._value2

    @value2.setter
    def value2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value2 = value
