# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rviz_plug_msg:msg/FreqMonitor.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'freqs'
# Member 'min_thresholds'
# Member 'max_thresholds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FreqMonitor(type):
    """Metaclass of message 'FreqMonitor'."""

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
            module = import_type_support('rviz_plug_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rviz_plug_msg.msg.FreqMonitor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__freq_monitor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__freq_monitor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__freq_monitor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__freq_monitor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__freq_monitor

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FreqMonitor(metaclass=Metaclass_FreqMonitor):
    """Message class 'FreqMonitor'."""

    __slots__ = [
        '_header',
        '_valid_length',
        '_topic_names',
        '_freqs',
        '_min_thresholds',
        '_max_thresholds',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'valid_length': 'uint32',
        'topic_names': 'sequence<string>',
        'freqs': 'sequence<double>',
        'min_thresholds': 'sequence<double>',
        'max_thresholds': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.valid_length = kwargs.get('valid_length', int())
        self.topic_names = kwargs.get('topic_names', [])
        self.freqs = array.array('d', kwargs.get('freqs', []))
        self.min_thresholds = array.array('d', kwargs.get('min_thresholds', []))
        self.max_thresholds = array.array('d', kwargs.get('max_thresholds', []))

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
        if self.header != other.header:
            return False
        if self.valid_length != other.valid_length:
            return False
        if self.topic_names != other.topic_names:
            return False
        if self.freqs != other.freqs:
            return False
        if self.min_thresholds != other.min_thresholds:
            return False
        if self.max_thresholds != other.max_thresholds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def valid_length(self):
        """Message field 'valid_length'."""
        return self._valid_length

    @valid_length.setter
    def valid_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valid_length' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'valid_length' field must be an unsigned integer in [0, 4294967295]"
        self._valid_length = value

    @builtins.property
    def topic_names(self):
        """Message field 'topic_names'."""
        return self._topic_names

    @topic_names.setter
    def topic_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'topic_names' field must be a set or sequence and each value of type 'str'"
        self._topic_names = value

    @builtins.property
    def freqs(self):
        """Message field 'freqs'."""
        return self._freqs

    @freqs.setter
    def freqs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'freqs' array.array() must have the type code of 'd'"
            self._freqs = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'freqs' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._freqs = array.array('d', value)

    @builtins.property
    def min_thresholds(self):
        """Message field 'min_thresholds'."""
        return self._min_thresholds

    @min_thresholds.setter
    def min_thresholds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'min_thresholds' array.array() must have the type code of 'd'"
            self._min_thresholds = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'min_thresholds' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._min_thresholds = array.array('d', value)

    @builtins.property
    def max_thresholds(self):
        """Message field 'max_thresholds'."""
        return self._max_thresholds

    @max_thresholds.setter
    def max_thresholds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'max_thresholds' array.array() must have the type code of 'd'"
            self._max_thresholds = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'max_thresholds' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._max_thresholds = array.array('d', value)
