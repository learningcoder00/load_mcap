# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/MachFsmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachFsmState(type):
    """Metaclass of message 'MachFsmState'."""

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
                'deva_function_msgs.msg.MachFsmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_fsm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_fsm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_fsm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_fsm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_fsm_state

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


class MachFsmState(metaclass=Metaclass_MachFsmState):
    """Message class 'MachFsmState'."""

    __slots__ = [
        '_header',
        '_acc_state',
        '_icc_state',
        '_noa_state',
        '_d2d_state',
        '_aes_state',
        '_magic_carpet_state',
        '_calibration_state',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'acc_state': 'uint32',
        'icc_state': 'uint32',
        'noa_state': 'uint32',
        'd2d_state': 'uint32',
        'aes_state': 'uint32',
        'magic_carpet_state': 'uint32',
        'calibration_state': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.acc_state = kwargs.get('acc_state', int())
        self.icc_state = kwargs.get('icc_state', int())
        self.noa_state = kwargs.get('noa_state', int())
        self.d2d_state = kwargs.get('d2d_state', int())
        self.aes_state = kwargs.get('aes_state', int())
        self.magic_carpet_state = kwargs.get('magic_carpet_state', int())
        self.calibration_state = kwargs.get('calibration_state', int())

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
        if self.acc_state != other.acc_state:
            return False
        if self.icc_state != other.icc_state:
            return False
        if self.noa_state != other.noa_state:
            return False
        if self.d2d_state != other.d2d_state:
            return False
        if self.aes_state != other.aes_state:
            return False
        if self.magic_carpet_state != other.magic_carpet_state:
            return False
        if self.calibration_state != other.calibration_state:
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
    def acc_state(self):
        """Message field 'acc_state'."""
        return self._acc_state

    @acc_state.setter
    def acc_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'acc_state' field must be an unsigned integer in [0, 4294967295]"
        self._acc_state = value

    @builtins.property
    def icc_state(self):
        """Message field 'icc_state'."""
        return self._icc_state

    @icc_state.setter
    def icc_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'icc_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'icc_state' field must be an unsigned integer in [0, 4294967295]"
        self._icc_state = value

    @builtins.property
    def noa_state(self):
        """Message field 'noa_state'."""
        return self._noa_state

    @noa_state.setter
    def noa_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'noa_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'noa_state' field must be an unsigned integer in [0, 4294967295]"
        self._noa_state = value

    @builtins.property
    def d2d_state(self):
        """Message field 'd2d_state'."""
        return self._d2d_state

    @d2d_state.setter
    def d2d_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'd2d_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'd2d_state' field must be an unsigned integer in [0, 4294967295]"
        self._d2d_state = value

    @builtins.property
    def aes_state(self):
        """Message field 'aes_state'."""
        return self._aes_state

    @aes_state.setter
    def aes_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aes_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aes_state' field must be an unsigned integer in [0, 4294967295]"
        self._aes_state = value

    @builtins.property
    def magic_carpet_state(self):
        """Message field 'magic_carpet_state'."""
        return self._magic_carpet_state

    @magic_carpet_state.setter
    def magic_carpet_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'magic_carpet_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'magic_carpet_state' field must be an unsigned integer in [0, 4294967295]"
        self._magic_carpet_state = value

    @builtins.property
    def calibration_state(self):
        """Message field 'calibration_state'."""
        return self._calibration_state

    @calibration_state.setter
    def calibration_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'calibration_state' field must be an unsigned integer in [0, 4294967295]"
        self._calibration_state = value
