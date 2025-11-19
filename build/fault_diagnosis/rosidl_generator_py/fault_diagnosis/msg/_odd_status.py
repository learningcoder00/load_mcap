# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fault_diagnosis:msg/OddStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OddStatus(type):
    """Metaclass of message 'OddStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACC': 'ACC',
        'ICC': 'ICC',
        'ALCA': 'ALCA',
        'HWA': 'HWA',
        'NOA': 'NOA',
        'D2D': 'D2D',
        'UNACTAVABLE': 0,
        'WORKABLE': 1,
        'ACTIVABLE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fault_diagnosis')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fault_diagnosis.msg.OddStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__odd_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__odd_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__odd_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__odd_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__odd_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACC': cls.__constants['ACC'],
            'ICC': cls.__constants['ICC'],
            'ALCA': cls.__constants['ALCA'],
            'HWA': cls.__constants['HWA'],
            'NOA': cls.__constants['NOA'],
            'D2D': cls.__constants['D2D'],
            'UNACTAVABLE': cls.__constants['UNACTAVABLE'],
            'WORKABLE': cls.__constants['WORKABLE'],
            'ACTIVABLE': cls.__constants['ACTIVABLE'],
        }

    @property
    def ACC(self):
        """Message constant 'ACC'."""
        return Metaclass_OddStatus.__constants['ACC']

    @property
    def ICC(self):
        """Message constant 'ICC'."""
        return Metaclass_OddStatus.__constants['ICC']

    @property
    def ALCA(self):
        """Message constant 'ALCA'."""
        return Metaclass_OddStatus.__constants['ALCA']

    @property
    def HWA(self):
        """Message constant 'HWA'."""
        return Metaclass_OddStatus.__constants['HWA']

    @property
    def NOA(self):
        """Message constant 'NOA'."""
        return Metaclass_OddStatus.__constants['NOA']

    @property
    def D2D(self):
        """Message constant 'D2D'."""
        return Metaclass_OddStatus.__constants['D2D']

    @property
    def UNACTAVABLE(self):
        """Message constant 'UNACTAVABLE'."""
        return Metaclass_OddStatus.__constants['UNACTAVABLE']

    @property
    def WORKABLE(self):
        """Message constant 'WORKABLE'."""
        return Metaclass_OddStatus.__constants['WORKABLE']

    @property
    def ACTIVABLE(self):
        """Message constant 'ACTIVABLE'."""
        return Metaclass_OddStatus.__constants['ACTIVABLE']


class OddStatus(metaclass=Metaclass_OddStatus):
    """
    Message class 'OddStatus'.

    Constants:
      ACC
      ICC
      ALCA
      HWA
      NOA
      D2D
      UNACTAVABLE
      WORKABLE
      ACTIVABLE
    """

    __slots__ = [
        '_function_id',
        '_state',
        '_fault_reasons',
    ]

    _fields_and_field_types = {
        'function_id': 'string',
        'state': 'uint8',
        'fault_reasons': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.function_id = kwargs.get('function_id', str())
        self.state = kwargs.get('state', int())
        self.fault_reasons = kwargs.get('fault_reasons', [])

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
        if self.function_id != other.function_id:
            return False
        if self.state != other.state:
            return False
        if self.fault_reasons != other.fault_reasons:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def function_id(self):
        """Message field 'function_id'."""
        return self._function_id

    @function_id.setter
    def function_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'function_id' field must be of type 'str'"
        self._function_id = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def fault_reasons(self):
        """Message field 'fault_reasons'."""
        return self._fault_reasons

    @fault_reasons.setter
    def fault_reasons(self, value):
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
                "The 'fault_reasons' field must be a set or sequence and each value of type 'str'"
        self._fault_reasons = value
