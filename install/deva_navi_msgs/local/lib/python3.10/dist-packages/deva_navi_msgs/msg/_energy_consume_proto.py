# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'vehiclechargeleft'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnergyConsumeProto(type):
    """Metaclass of message 'EnergyConsumeProto'."""

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
                'deva_navi_msgs.msg.EnergyConsumeProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__energy_consume_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__energy_consume_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__energy_consume_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__energy_consume_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__energy_consume_proto

            from deva_navi_msgs.msg import EnergyEndPointProto
            if EnergyEndPointProto.__class__._TYPE_SUPPORT is None:
                EnergyEndPointProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnergyConsumeProto(metaclass=Metaclass_EnergyConsumeProto):
    """Message class 'EnergyConsumeProto'."""

    __slots__ = [
        '_energy_end_flag',
        '_energy_end_point',
        '_vehiclechargeleft',
    ]

    _fields_and_field_types = {
        'energy_end_flag': 'boolean',
        'energy_end_point': 'deva_navi_msgs/EnergyEndPointProto',
        'vehiclechargeleft': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'EnergyEndPointProto'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.energy_end_flag = kwargs.get('energy_end_flag', bool())
        from deva_navi_msgs.msg import EnergyEndPointProto
        self.energy_end_point = kwargs.get('energy_end_point', EnergyEndPointProto())
        self.vehiclechargeleft = array.array('i', kwargs.get('vehiclechargeleft', []))

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
        if self.energy_end_flag != other.energy_end_flag:
            return False
        if self.energy_end_point != other.energy_end_point:
            return False
        if self.vehiclechargeleft != other.vehiclechargeleft:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def energy_end_flag(self):
        """Message field 'energy_end_flag'."""
        return self._energy_end_flag

    @energy_end_flag.setter
    def energy_end_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'energy_end_flag' field must be of type 'bool'"
        self._energy_end_flag = value

    @builtins.property
    def energy_end_point(self):
        """Message field 'energy_end_point'."""
        return self._energy_end_point

    @energy_end_point.setter
    def energy_end_point(self, value):
        if __debug__:
            from deva_navi_msgs.msg import EnergyEndPointProto
            assert \
                isinstance(value, EnergyEndPointProto), \
                "The 'energy_end_point' field must be a sub message of type 'EnergyEndPointProto'"
        self._energy_end_point = value

    @builtins.property
    def vehiclechargeleft(self):
        """Message field 'vehiclechargeleft'."""
        return self._vehiclechargeleft

    @vehiclechargeleft.setter
    def vehiclechargeleft(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'vehiclechargeleft' array.array() must have the type code of 'i'"
            self._vehiclechargeleft = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'vehiclechargeleft' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._vehiclechargeleft = array.array('i', value)
