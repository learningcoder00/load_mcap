# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/FsmStateMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FsmStateMsg(type):
    """Metaclass of message 'FsmStateMsg'."""

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
                'deva_function_msgs.msg.FsmStateMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fsm_state_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fsm_state_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fsm_state_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fsm_state_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fsm_state_msg

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


class FsmStateMsg(metaclass=Metaclass_FsmStateMsg):
    """Message class 'FsmStateMsg'."""

    __slots__ = [
        '_header',
        '_publish_timestamp',
        '_fsm_state',
        '_top_state',
        '_acc_state',
        '_icc_state',
        '_noa_state',
        '_d2d_state',
        '_calibra_state',
        '_mapping_state',
        '_parking_state',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'publish_timestamp': 'double',
        'fsm_state': 'string',
        'top_state': 'uint8',
        'acc_state': 'uint8',
        'icc_state': 'uint8',
        'noa_state': 'uint8',
        'd2d_state': 'uint8',
        'calibra_state': 'uint8',
        'mapping_state': 'uint8',
        'parking_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.publish_timestamp = kwargs.get('publish_timestamp', float())
        self.fsm_state = kwargs.get('fsm_state', str())
        self.top_state = kwargs.get('top_state', int())
        self.acc_state = kwargs.get('acc_state', int())
        self.icc_state = kwargs.get('icc_state', int())
        self.noa_state = kwargs.get('noa_state', int())
        self.d2d_state = kwargs.get('d2d_state', int())
        self.calibra_state = kwargs.get('calibra_state', int())
        self.mapping_state = kwargs.get('mapping_state', int())
        self.parking_state = kwargs.get('parking_state', int())

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
        if self.publish_timestamp != other.publish_timestamp:
            return False
        if self.fsm_state != other.fsm_state:
            return False
        if self.top_state != other.top_state:
            return False
        if self.acc_state != other.acc_state:
            return False
        if self.icc_state != other.icc_state:
            return False
        if self.noa_state != other.noa_state:
            return False
        if self.d2d_state != other.d2d_state:
            return False
        if self.calibra_state != other.calibra_state:
            return False
        if self.mapping_state != other.mapping_state:
            return False
        if self.parking_state != other.parking_state:
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
    def publish_timestamp(self):
        """Message field 'publish_timestamp'."""
        return self._publish_timestamp

    @publish_timestamp.setter
    def publish_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'publish_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'publish_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._publish_timestamp = value

    @builtins.property
    def fsm_state(self):
        """Message field 'fsm_state'."""
        return self._fsm_state

    @fsm_state.setter
    def fsm_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fsm_state' field must be of type 'str'"
        self._fsm_state = value

    @builtins.property
    def top_state(self):
        """Message field 'top_state'."""
        return self._top_state

    @top_state.setter
    def top_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'top_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'top_state' field must be an unsigned integer in [0, 255]"
        self._top_state = value

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
            assert value >= 0 and value < 256, \
                "The 'acc_state' field must be an unsigned integer in [0, 255]"
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
            assert value >= 0 and value < 256, \
                "The 'icc_state' field must be an unsigned integer in [0, 255]"
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
            assert value >= 0 and value < 256, \
                "The 'noa_state' field must be an unsigned integer in [0, 255]"
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
            assert value >= 0 and value < 256, \
                "The 'd2d_state' field must be an unsigned integer in [0, 255]"
        self._d2d_state = value

    @builtins.property
    def calibra_state(self):
        """Message field 'calibra_state'."""
        return self._calibra_state

    @calibra_state.setter
    def calibra_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibra_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calibra_state' field must be an unsigned integer in [0, 255]"
        self._calibra_state = value

    @builtins.property
    def mapping_state(self):
        """Message field 'mapping_state'."""
        return self._mapping_state

    @mapping_state.setter
    def mapping_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mapping_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mapping_state' field must be an unsigned integer in [0, 255]"
        self._mapping_state = value

    @builtins.property
    def parking_state(self):
        """Message field 'parking_state'."""
        return self._parking_state

    @parking_state.setter
    def parking_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parking_state' field must be an unsigned integer in [0, 255]"
        self._parking_state = value
