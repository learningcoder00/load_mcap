# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/ControlValidLimit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlValidLimit(type):
    """Metaclass of message 'ControlValidLimit'."""

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
            module = import_type_support('deva_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_control_msgs.msg.ControlValidLimit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_valid_limit
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_valid_limit
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_valid_limit
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_valid_limit
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_valid_limit

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LIMIT_VALID__DEFAULT': False,
        }

    @property
    def LIMIT_VALID__DEFAULT(cls):
        """Return default value for message field 'limit_valid'."""
        return False


class ControlValidLimit(metaclass=Metaclass_ControlValidLimit):
    """Message class 'ControlValidLimit'."""

    __slots__ = [
        '_limit_valid',
        '_upper_limit',
        '_lower_limit',
    ]

    _fields_and_field_types = {
        'limit_valid': 'boolean',
        'upper_limit': 'double',
        'lower_limit': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.limit_valid = kwargs.get(
            'limit_valid', ControlValidLimit.LIMIT_VALID__DEFAULT)
        self.upper_limit = kwargs.get('upper_limit', float())
        self.lower_limit = kwargs.get('lower_limit', float())

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
        if self.limit_valid != other.limit_valid:
            return False
        if self.upper_limit != other.upper_limit:
            return False
        if self.lower_limit != other.lower_limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def limit_valid(self):
        """Message field 'limit_valid'."""
        return self._limit_valid

    @limit_valid.setter
    def limit_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'limit_valid' field must be of type 'bool'"
        self._limit_valid = value

    @builtins.property
    def upper_limit(self):
        """Message field 'upper_limit'."""
        return self._upper_limit

    @upper_limit.setter
    def upper_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'upper_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'upper_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._upper_limit = value

    @builtins.property
    def lower_limit(self):
        """Message field 'lower_limit'."""
        return self._lower_limit

    @lower_limit.setter
    def lower_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lower_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lower_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lower_limit = value
