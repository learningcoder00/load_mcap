# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/FuncMainSM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FuncMainSM(type):
    """Metaclass of message 'FuncMainSM'."""

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
                'deva_function_msgs.msg.FuncMainSM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__func_main_sm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__func_main_sm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__func_main_sm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__func_main_sm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__func_main_sm

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


class FuncMainSM(metaclass=Metaclass_FuncMainSM):
    """Message class 'FuncMainSM'."""

    __slots__ = [
        '_header',
        '_state_machine_main_state',
        '_state_machine_mode',
        '_act_func_arbn',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'state_machine_main_state': 'uint8',
        'state_machine_mode': 'uint8',
        'act_func_arbn': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.state_machine_main_state = kwargs.get('state_machine_main_state', int())
        self.state_machine_mode = kwargs.get('state_machine_mode', int())
        self.act_func_arbn = kwargs.get('act_func_arbn', int())

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
        if self.state_machine_main_state != other.state_machine_main_state:
            return False
        if self.state_machine_mode != other.state_machine_mode:
            return False
        if self.act_func_arbn != other.act_func_arbn:
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
    def state_machine_main_state(self):
        """Message field 'state_machine_main_state'."""
        return self._state_machine_main_state

    @state_machine_main_state.setter
    def state_machine_main_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_machine_main_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state_machine_main_state' field must be an unsigned integer in [0, 255]"
        self._state_machine_main_state = value

    @builtins.property
    def state_machine_mode(self):
        """Message field 'state_machine_mode'."""
        return self._state_machine_mode

    @state_machine_mode.setter
    def state_machine_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_machine_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state_machine_mode' field must be an unsigned integer in [0, 255]"
        self._state_machine_mode = value

    @builtins.property
    def act_func_arbn(self):
        """Message field 'act_func_arbn'."""
        return self._act_func_arbn

    @act_func_arbn.setter
    def act_func_arbn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'act_func_arbn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'act_func_arbn' field must be an unsigned integer in [0, 255]"
        self._act_func_arbn = value
