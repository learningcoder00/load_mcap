# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProPathMerge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProPathMerge(type):
    """Metaclass of message 'SdProPathMerge'."""

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
                'deva_gaode_routing_msgs.msg.SdProPathMerge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_path_merge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_path_merge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_path_merge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_path_merge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_path_merge

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProPathMerge(metaclass=Metaclass_SdProPathMerge):
    """Message class 'SdProPathMerge'."""

    __slots__ = [
        '_path_id',
        '_offset',
        '_is_master',
    ]

    _fields_and_field_types = {
        'path_id': 'uint32',
        'offset': 'double',
        'is_master': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path_id = kwargs.get('path_id', int())
        self.offset = kwargs.get('offset', float())
        self.is_master = kwargs.get('is_master', bool())

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
        if self.path_id != other.path_id:
            return False
        if self.offset != other.offset:
            return False
        if self.is_master != other.is_master:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path_id(self):
        """Message field 'path_id'."""
        return self._path_id

    @path_id.setter
    def path_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'path_id' field must be an unsigned integer in [0, 4294967295]"
        self._path_id = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset = value

    @builtins.property
    def is_master(self):
        """Message field 'is_master'."""
        return self._is_master

    @is_master.setter
    def is_master(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_master' field must be of type 'bool'"
        self._is_master = value
