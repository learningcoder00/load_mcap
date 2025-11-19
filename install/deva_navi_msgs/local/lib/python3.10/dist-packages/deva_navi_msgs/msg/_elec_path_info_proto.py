# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'm_link_consume'
# Member 'm_link_distance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ElecPathInfoProto(type):
    """Metaclass of message 'ElecPathInfoProto'."""

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
                'deva_navi_msgs.msg.ElecPathInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__elec_path_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__elec_path_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__elec_path_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__elec_path_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__elec_path_info_proto

            from deva_navi_msgs.msg import EnergyConsumeProto
            if EnergyConsumeProto.__class__._TYPE_SUPPORT is None:
                EnergyConsumeProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import ViaPointInfoProto
            if ViaPointInfoProto.__class__._TYPE_SUPPORT is None:
                ViaPointInfoProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ElecPathInfoProto(metaclass=Metaclass_ElecPathInfoProto):
    """Message class 'ElecPathInfoProto'."""

    __slots__ = [
        '_m_is_elec_route',
        '_m_link_consume_size_word',
        '_m_traffic_info',
        '_m_energy_unit',
        '_m_path_flag',
        '_m_energy_sum',
        '_m_link_num',
        '_m_link_consume',
        '_m_link_distance',
        '_m_via_info',
        '_m_energy_consume',
    ]

    _fields_and_field_types = {
        'm_is_elec_route': 'boolean',
        'm_link_consume_size_word': 'boolean',
        'm_traffic_info': 'int32',
        'm_energy_unit': 'int32',
        'm_path_flag': 'int32',
        'm_energy_sum': 'int32',
        'm_link_num': 'int32',
        'm_link_consume': 'sequence<int32>',
        'm_link_distance': 'sequence<int64>',
        'm_via_info': 'sequence<deva_navi_msgs/ViaPointInfoProto>',
        'm_energy_consume': 'deva_navi_msgs/EnergyConsumeProto',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'ViaPointInfoProto')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'EnergyConsumeProto'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.m_is_elec_route = kwargs.get('m_is_elec_route', bool())
        self.m_link_consume_size_word = kwargs.get('m_link_consume_size_word', bool())
        self.m_traffic_info = kwargs.get('m_traffic_info', int())
        self.m_energy_unit = kwargs.get('m_energy_unit', int())
        self.m_path_flag = kwargs.get('m_path_flag', int())
        self.m_energy_sum = kwargs.get('m_energy_sum', int())
        self.m_link_num = kwargs.get('m_link_num', int())
        self.m_link_consume = array.array('i', kwargs.get('m_link_consume', []))
        self.m_link_distance = array.array('q', kwargs.get('m_link_distance', []))
        self.m_via_info = kwargs.get('m_via_info', [])
        from deva_navi_msgs.msg import EnergyConsumeProto
        self.m_energy_consume = kwargs.get('m_energy_consume', EnergyConsumeProto())

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
        if self.m_is_elec_route != other.m_is_elec_route:
            return False
        if self.m_link_consume_size_word != other.m_link_consume_size_word:
            return False
        if self.m_traffic_info != other.m_traffic_info:
            return False
        if self.m_energy_unit != other.m_energy_unit:
            return False
        if self.m_path_flag != other.m_path_flag:
            return False
        if self.m_energy_sum != other.m_energy_sum:
            return False
        if self.m_link_num != other.m_link_num:
            return False
        if self.m_link_consume != other.m_link_consume:
            return False
        if self.m_link_distance != other.m_link_distance:
            return False
        if self.m_via_info != other.m_via_info:
            return False
        if self.m_energy_consume != other.m_energy_consume:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def m_is_elec_route(self):
        """Message field 'm_is_elec_route'."""
        return self._m_is_elec_route

    @m_is_elec_route.setter
    def m_is_elec_route(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'm_is_elec_route' field must be of type 'bool'"
        self._m_is_elec_route = value

    @builtins.property
    def m_link_consume_size_word(self):
        """Message field 'm_link_consume_size_word'."""
        return self._m_link_consume_size_word

    @m_link_consume_size_word.setter
    def m_link_consume_size_word(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'm_link_consume_size_word' field must be of type 'bool'"
        self._m_link_consume_size_word = value

    @builtins.property
    def m_traffic_info(self):
        """Message field 'm_traffic_info'."""
        return self._m_traffic_info

    @m_traffic_info.setter
    def m_traffic_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_traffic_info' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm_traffic_info' field must be an integer in [-2147483648, 2147483647]"
        self._m_traffic_info = value

    @builtins.property
    def m_energy_unit(self):
        """Message field 'm_energy_unit'."""
        return self._m_energy_unit

    @m_energy_unit.setter
    def m_energy_unit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_energy_unit' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm_energy_unit' field must be an integer in [-2147483648, 2147483647]"
        self._m_energy_unit = value

    @builtins.property
    def m_path_flag(self):
        """Message field 'm_path_flag'."""
        return self._m_path_flag

    @m_path_flag.setter
    def m_path_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_path_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm_path_flag' field must be an integer in [-2147483648, 2147483647]"
        self._m_path_flag = value

    @builtins.property
    def m_energy_sum(self):
        """Message field 'm_energy_sum'."""
        return self._m_energy_sum

    @m_energy_sum.setter
    def m_energy_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_energy_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm_energy_sum' field must be an integer in [-2147483648, 2147483647]"
        self._m_energy_sum = value

    @builtins.property
    def m_link_num(self):
        """Message field 'm_link_num'."""
        return self._m_link_num

    @m_link_num.setter
    def m_link_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'm_link_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'm_link_num' field must be an integer in [-2147483648, 2147483647]"
        self._m_link_num = value

    @builtins.property
    def m_link_consume(self):
        """Message field 'm_link_consume'."""
        return self._m_link_consume

    @m_link_consume.setter
    def m_link_consume(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'm_link_consume' array.array() must have the type code of 'i'"
            self._m_link_consume = value
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
                "The 'm_link_consume' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._m_link_consume = array.array('i', value)

    @builtins.property
    def m_link_distance(self):
        """Message field 'm_link_distance'."""
        return self._m_link_distance

    @m_link_distance.setter
    def m_link_distance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'm_link_distance' array.array() must have the type code of 'q'"
            self._m_link_distance = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'm_link_distance' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._m_link_distance = array.array('q', value)

    @builtins.property
    def m_via_info(self):
        """Message field 'm_via_info'."""
        return self._m_via_info

    @m_via_info.setter
    def m_via_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import ViaPointInfoProto
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
                 all(isinstance(v, ViaPointInfoProto) for v in value) and
                 True), \
                "The 'm_via_info' field must be a set or sequence and each value of type 'ViaPointInfoProto'"
        self._m_via_info = value

    @builtins.property
    def m_energy_consume(self):
        """Message field 'm_energy_consume'."""
        return self._m_energy_consume

    @m_energy_consume.setter
    def m_energy_consume(self, value):
        if __debug__:
            from deva_navi_msgs.msg import EnergyConsumeProto
            assert \
                isinstance(value, EnergyConsumeProto), \
                "The 'm_energy_consume' field must be a sub message of type 'EnergyConsumeProto'"
        self._m_energy_consume = value
