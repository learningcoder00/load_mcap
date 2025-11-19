# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RestrictionDetail(type):
    """Metaclass of message 'RestrictionDetail'."""

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
                'deva_gaode_routing_msgs.msg.RestrictionDetail')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__restriction_detail
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__restriction_detail
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__restriction_detail
            cls._TYPE_SUPPORT = module.type_support_msg__msg__restriction_detail
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__restriction_detail

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RestrictionDetail(metaclass=Metaclass_RestrictionDetail):
    """Message class 'RestrictionDetail'."""

    __slots__ = [
        '_id',
        '_direction',
        '_vehicle_limit',
        '_period_approx',
        '_valid_period',
        '_time_type',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'direction': 'int32',
        'vehicle_limit': 'uint32',
        'period_approx': 'int32',
        'valid_period': 'string',
        'time_type': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.direction = kwargs.get('direction', int())
        self.vehicle_limit = kwargs.get('vehicle_limit', int())
        self.period_approx = kwargs.get('period_approx', int())
        self.valid_period = kwargs.get('valid_period', str())
        self.time_type = kwargs.get('time_type', int())

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
        if self.direction != other.direction:
            return False
        if self.vehicle_limit != other.vehicle_limit:
            return False
        if self.period_approx != other.period_approx:
            return False
        if self.valid_period != other.valid_period:
            return False
        if self.time_type != other.time_type:
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
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'direction' field must be an integer in [-2147483648, 2147483647]"
        self._direction = value

    @builtins.property
    def vehicle_limit(self):
        """Message field 'vehicle_limit'."""
        return self._vehicle_limit

    @vehicle_limit.setter
    def vehicle_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_limit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'vehicle_limit' field must be an unsigned integer in [0, 4294967295]"
        self._vehicle_limit = value

    @builtins.property
    def period_approx(self):
        """Message field 'period_approx'."""
        return self._period_approx

    @period_approx.setter
    def period_approx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'period_approx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'period_approx' field must be an integer in [-2147483648, 2147483647]"
        self._period_approx = value

    @builtins.property
    def valid_period(self):
        """Message field 'valid_period'."""
        return self._valid_period

    @valid_period.setter
    def valid_period(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'valid_period' field must be of type 'str'"
        self._valid_period = value

    @builtins.property
    def time_type(self):
        """Message field 'time_type'."""
        return self._time_type

    @time_type.setter
    def time_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_type' field must be an unsigned integer in [0, 4294967295]"
        self._time_type = value
