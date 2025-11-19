# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/VirtualLineInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VirtualLineInfo(type):
    """Metaclass of message 'VirtualLineInfo'."""

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
            module = import_type_support('environment_model_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_model_msgs.msg.VirtualLineInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__virtual_line_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__virtual_line_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__virtual_line_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__virtual_line_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__virtual_line_info

            from environment_model_msgs.msg import PairDouble
            if PairDouble.__class__._TYPE_SUPPORT is None:
                PairDouble.__class__.__import_type_support__()

            from environment_model_msgs.msg import PairInt
            if PairInt.__class__._TYPE_SUPPORT is None:
                PairInt.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VirtualLineInfo(metaclass=Metaclass_VirtualLineInfo):
    """Message class 'VirtualLineInfo'."""

    __slots__ = [
        '_enum_vlane_type',
        '_virtual_score',
        '_ori_ids',
        '_e2e_pair',
        '_exit_lane_id',
        '_exit_seq_id',
    ]

    _fields_and_field_types = {
        'enum_vlane_type': 'uint8',
        'virtual_score': 'double',
        'ori_ids': 'environment_model_msgs/PairInt',
        'e2e_pair': 'environment_model_msgs/PairDouble',
        'exit_lane_id': 'string',
        'exit_seq_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairInt'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'PairDouble'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enum_vlane_type = kwargs.get('enum_vlane_type', int())
        self.virtual_score = kwargs.get('virtual_score', float())
        from environment_model_msgs.msg import PairInt
        self.ori_ids = kwargs.get('ori_ids', PairInt())
        from environment_model_msgs.msg import PairDouble
        self.e2e_pair = kwargs.get('e2e_pair', PairDouble())
        self.exit_lane_id = kwargs.get('exit_lane_id', str())
        self.exit_seq_id = kwargs.get('exit_seq_id', int())

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
        if self.enum_vlane_type != other.enum_vlane_type:
            return False
        if self.virtual_score != other.virtual_score:
            return False
        if self.ori_ids != other.ori_ids:
            return False
        if self.e2e_pair != other.e2e_pair:
            return False
        if self.exit_lane_id != other.exit_lane_id:
            return False
        if self.exit_seq_id != other.exit_seq_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enum_vlane_type(self):
        """Message field 'enum_vlane_type'."""
        return self._enum_vlane_type

    @enum_vlane_type.setter
    def enum_vlane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_vlane_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_vlane_type' field must be an unsigned integer in [0, 255]"
        self._enum_vlane_type = value

    @builtins.property
    def virtual_score(self):
        """Message field 'virtual_score'."""
        return self._virtual_score

    @virtual_score.setter
    def virtual_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'virtual_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'virtual_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._virtual_score = value

    @builtins.property
    def ori_ids(self):
        """Message field 'ori_ids'."""
        return self._ori_ids

    @ori_ids.setter
    def ori_ids(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairInt
            assert \
                isinstance(value, PairInt), \
                "The 'ori_ids' field must be a sub message of type 'PairInt'"
        self._ori_ids = value

    @builtins.property
    def e2e_pair(self):
        """Message field 'e2e_pair'."""
        return self._e2e_pair

    @e2e_pair.setter
    def e2e_pair(self, value):
        if __debug__:
            from environment_model_msgs.msg import PairDouble
            assert \
                isinstance(value, PairDouble), \
                "The 'e2e_pair' field must be a sub message of type 'PairDouble'"
        self._e2e_pair = value

    @builtins.property
    def exit_lane_id(self):
        """Message field 'exit_lane_id'."""
        return self._exit_lane_id

    @exit_lane_id.setter
    def exit_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'exit_lane_id' field must be of type 'str'"
        self._exit_lane_id = value

    @builtins.property
    def exit_seq_id(self):
        """Message field 'exit_seq_id'."""
        return self._exit_seq_id

    @exit_seq_id.setter
    def exit_seq_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exit_seq_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'exit_seq_id' field must be an integer in [-2147483648, 2147483647]"
        self._exit_seq_id = value
