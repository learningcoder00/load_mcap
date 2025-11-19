# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EhpProfileLong(type):
    """Metaclass of message 'EhpProfileLong'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.EhpProfileLong')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ehp_profile_long
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ehp_profile_long
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ehp_profile_long
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ehp_profile_long
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ehp_profile_long

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EhpProfileLong(metaclass=Metaclass_EhpProfileLong):
    """Message class 'EhpProfileLong'."""

    __slots__ = [
        '_prof_long_offset',
        '_prof_long_msg_type',
        '_prof_long_path_idx',
        '_prof_long_cyc_cnt',
        '_prof_long_update',
        '_prof_long_retr',
        '_prof_long_ctrl_point',
        '_prof_long_prof_type',
        '_prof_long_value',
        '_prof_long_relative_offset',
    ]

    _fields_and_field_types = {
        'prof_long_offset': 'uint16',
        'prof_long_msg_type': 'uint8',
        'prof_long_path_idx': 'uint8',
        'prof_long_cyc_cnt': 'uint8',
        'prof_long_update': 'uint8',
        'prof_long_retr': 'uint8',
        'prof_long_ctrl_point': 'uint8',
        'prof_long_prof_type': 'uint8',
        'prof_long_value': 'uint32',
        'prof_long_relative_offset': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prof_long_offset = kwargs.get('prof_long_offset', int())
        self.prof_long_msg_type = kwargs.get('prof_long_msg_type', int())
        self.prof_long_path_idx = kwargs.get('prof_long_path_idx', int())
        self.prof_long_cyc_cnt = kwargs.get('prof_long_cyc_cnt', int())
        self.prof_long_update = kwargs.get('prof_long_update', int())
        self.prof_long_retr = kwargs.get('prof_long_retr', int())
        self.prof_long_ctrl_point = kwargs.get('prof_long_ctrl_point', int())
        self.prof_long_prof_type = kwargs.get('prof_long_prof_type', int())
        self.prof_long_value = kwargs.get('prof_long_value', int())
        self.prof_long_relative_offset = kwargs.get('prof_long_relative_offset', int())

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
        if self.prof_long_offset != other.prof_long_offset:
            return False
        if self.prof_long_msg_type != other.prof_long_msg_type:
            return False
        if self.prof_long_path_idx != other.prof_long_path_idx:
            return False
        if self.prof_long_cyc_cnt != other.prof_long_cyc_cnt:
            return False
        if self.prof_long_update != other.prof_long_update:
            return False
        if self.prof_long_retr != other.prof_long_retr:
            return False
        if self.prof_long_ctrl_point != other.prof_long_ctrl_point:
            return False
        if self.prof_long_prof_type != other.prof_long_prof_type:
            return False
        if self.prof_long_value != other.prof_long_value:
            return False
        if self.prof_long_relative_offset != other.prof_long_relative_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prof_long_offset(self):
        """Message field 'prof_long_offset'."""
        return self._prof_long_offset

    @prof_long_offset.setter
    def prof_long_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_offset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'prof_long_offset' field must be an unsigned integer in [0, 65535]"
        self._prof_long_offset = value

    @builtins.property
    def prof_long_msg_type(self):
        """Message field 'prof_long_msg_type'."""
        return self._prof_long_msg_type

    @prof_long_msg_type.setter
    def prof_long_msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_msg_type' field must be an unsigned integer in [0, 255]"
        self._prof_long_msg_type = value

    @builtins.property
    def prof_long_path_idx(self):
        """Message field 'prof_long_path_idx'."""
        return self._prof_long_path_idx

    @prof_long_path_idx.setter
    def prof_long_path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_path_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_path_idx' field must be an unsigned integer in [0, 255]"
        self._prof_long_path_idx = value

    @builtins.property
    def prof_long_cyc_cnt(self):
        """Message field 'prof_long_cyc_cnt'."""
        return self._prof_long_cyc_cnt

    @prof_long_cyc_cnt.setter
    def prof_long_cyc_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_cyc_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_cyc_cnt' field must be an unsigned integer in [0, 255]"
        self._prof_long_cyc_cnt = value

    @builtins.property
    def prof_long_update(self):
        """Message field 'prof_long_update'."""
        return self._prof_long_update

    @prof_long_update.setter
    def prof_long_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_update' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_update' field must be an unsigned integer in [0, 255]"
        self._prof_long_update = value

    @builtins.property
    def prof_long_retr(self):
        """Message field 'prof_long_retr'."""
        return self._prof_long_retr

    @prof_long_retr.setter
    def prof_long_retr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_retr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_retr' field must be an unsigned integer in [0, 255]"
        self._prof_long_retr = value

    @builtins.property
    def prof_long_ctrl_point(self):
        """Message field 'prof_long_ctrl_point'."""
        return self._prof_long_ctrl_point

    @prof_long_ctrl_point.setter
    def prof_long_ctrl_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_ctrl_point' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_ctrl_point' field must be an unsigned integer in [0, 255]"
        self._prof_long_ctrl_point = value

    @builtins.property
    def prof_long_prof_type(self):
        """Message field 'prof_long_prof_type'."""
        return self._prof_long_prof_type

    @prof_long_prof_type.setter
    def prof_long_prof_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_prof_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_long_prof_type' field must be an unsigned integer in [0, 255]"
        self._prof_long_prof_type = value

    @builtins.property
    def prof_long_value(self):
        """Message field 'prof_long_value'."""
        return self._prof_long_value

    @prof_long_value.setter
    def prof_long_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'prof_long_value' field must be an unsigned integer in [0, 4294967295]"
        self._prof_long_value = value

    @builtins.property
    def prof_long_relative_offset(self):
        """Message field 'prof_long_relative_offset'."""
        return self._prof_long_relative_offset

    @prof_long_relative_offset.setter
    def prof_long_relative_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_long_relative_offset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'prof_long_relative_offset' field must be an integer in [-2147483648, 2147483647]"
        self._prof_long_relative_offset = value
