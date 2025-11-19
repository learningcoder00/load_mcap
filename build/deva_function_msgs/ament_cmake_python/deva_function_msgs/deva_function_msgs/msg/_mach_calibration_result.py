# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachCalibrationResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'res_content'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachCalibrationResult(type):
    """Metaclass of message 'MachCalibrationResult'."""

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
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.MachCalibrationResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_calibration_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_calibration_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_calibration_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_calibration_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_calibration_result

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MachCalibrationResult(metaclass=Metaclass_MachCalibrationResult):
    """Message class 'MachCalibrationResult'."""

    __slots__ = [
        '_header',
        '_calibration_type',
        '_senor_type',
        '_length',
        '_res_content',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'calibration_type': 'uint8',
        'senor_type': 'uint8',
        'length': 'uint8',
        'res_content': 'uint8[256]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 256),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.calibration_type = kwargs.get('calibration_type', int())
        self.senor_type = kwargs.get('senor_type', int())
        self.length = kwargs.get('length', int())
        if 'res_content' not in kwargs:
            self.res_content = numpy.zeros(256, dtype=numpy.uint8)
        else:
            self.res_content = kwargs.get('res_content')

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
        if self.calibration_type != other.calibration_type:
            return False
        if self.senor_type != other.senor_type:
            return False
        if self.length != other.length:
            return False
        if any(self.res_content != other.res_content):
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
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def calibration_type(self):
        """Message field 'calibration_type'."""
        return self._calibration_type

    @calibration_type.setter
    def calibration_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calibration_type' field must be an unsigned integer in [0, 255]"
        self._calibration_type = value

    @builtins.property
    def senor_type(self):
        """Message field 'senor_type'."""
        return self._senor_type

    @senor_type.setter
    def senor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'senor_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'senor_type' field must be an unsigned integer in [0, 255]"
        self._senor_type = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'length' field must be an unsigned integer in [0, 255]"
        self._length = value

    @builtins.property
    def res_content(self):
        """Message field 'res_content'."""
        return self._res_content

    @res_content.setter
    def res_content(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'res_content' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 256, \
                "The 'res_content' numpy.ndarray() must have a size of 256"
            self._res_content = value
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
                 len(value) == 256 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'res_content' field must be a set or sequence with length 256 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._res_content = numpy.array(value, dtype=numpy.uint8)
