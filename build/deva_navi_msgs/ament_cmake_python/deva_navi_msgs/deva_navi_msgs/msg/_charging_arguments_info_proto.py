# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargingArgumentsInfoProto(type):
    """Metaclass of message 'ChargingArgumentsInfoProto'."""

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
            module = import_type_support('deva_navi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_navi_msgs.msg.ChargingArgumentsInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charging_arguments_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charging_arguments_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charging_arguments_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charging_arguments_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charging_arguments_info_proto

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargingArgumentsInfoProto(metaclass=Metaclass_ChargingArgumentsInfoProto):
    """Message class 'ChargingArgumentsInfoProto'."""

    __slots__ = [
        '_type',
        '_min_arrival_percent',
        '_power',
        '_voltage',
        '_amperage',
    ]

    _fields_and_field_types = {
        'type': 'int32',
        'min_arrival_percent': 'int32',
        'power': 'int64',
        'voltage': 'int64',
        'amperage': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.min_arrival_percent = kwargs.get('min_arrival_percent', int())
        self.power = kwargs.get('power', int())
        self.voltage = kwargs.get('voltage', int())
        self.amperage = kwargs.get('amperage', int())

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
        if self.type != other.type:
            return False
        if self.min_arrival_percent != other.min_arrival_percent:
            return False
        if self.power != other.power:
            return False
        if self.voltage != other.voltage:
            return False
        if self.amperage != other.amperage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def min_arrival_percent(self):
        """Message field 'min_arrival_percent'."""
        return self._min_arrival_percent

    @min_arrival_percent.setter
    def min_arrival_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_arrival_percent' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min_arrival_percent' field must be an integer in [-2147483648, 2147483647]"
        self._min_arrival_percent = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'power' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._power = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voltage' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'voltage' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._voltage = value

    @builtins.property
    def amperage(self):
        """Message field 'amperage'."""
        return self._amperage

    @amperage.setter
    def amperage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'amperage' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'amperage' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._amperage = value
