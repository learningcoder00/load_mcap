# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/FusionInfoForAEBObj8.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FusionInfoForAEBObj8(type):
    """Metaclass of message 'FusionInfoForAEBObj8'."""

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
            module = import_type_support('deva_aeb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_aeb_msgs.msg.FusionInfoForAEBObj8')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fusion_info_for_aeb_obj8
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fusion_info_for_aeb_obj8
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fusion_info_for_aeb_obj8
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fusion_info_for_aeb_obj8
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fusion_info_for_aeb_obj8

            from deva_aeb_msgs.msg import SFFusionObj
            if SFFusionObj.__class__._TYPE_SUPPORT is None:
                SFFusionObj.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FusionInfoForAEBObj8(metaclass=Metaclass_FusionInfoForAEBObj8):
    """Message class 'FusionInfoForAEBObj8'."""

    __slots__ = [
        '_obj',
        '_timestamp',
        '_framenum',
        '_snsrstate',
        '_validsize',
        '_reserved',
    ]

    _fields_and_field_types = {
        'obj': 'deva_aeb_msgs/SFFusionObj[8]',
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'snsrstate': 'uint8',
        'validsize': 'uint8',
        'reserved': 'uint8[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionObj'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_aeb_msgs.msg import SFFusionObj
        self.obj = kwargs.get(
            'obj',
            [SFFusionObj() for x in range(8)]
        )
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        self.snsrstate = kwargs.get('snsrstate', int())
        self.validsize = kwargs.get('validsize', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')

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
        if self.obj != other.obj:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.framenum != other.framenum:
            return False
        if self.snsrstate != other.snsrstate:
            return False
        if self.validsize != other.validsize:
            return False
        if any(self.reserved != other.reserved):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj(self):
        """Message field 'obj'."""
        return self._obj

    @obj.setter
    def obj(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionObj
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
                 len(value) == 8 and
                 all(isinstance(v, SFFusionObj) for v in value) and
                 True), \
                "The 'obj' field must be a set or sequence with length 8 and each value of type 'SFFusionObj'"
        self._obj = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def framenum(self):
        """Message field 'framenum'."""
        return self._framenum

    @framenum.setter
    def framenum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framenum' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'framenum' field must be an unsigned integer in [0, 4294967295]"
        self._framenum = value

    @builtins.property
    def snsrstate(self):
        """Message field 'snsrstate'."""
        return self._snsrstate

    @snsrstate.setter
    def snsrstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'snsrstate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'snsrstate' field must be an unsigned integer in [0, 255]"
        self._snsrstate = value

    @builtins.property
    def validsize(self):
        """Message field 'validsize'."""
        return self._validsize

    @validsize.setter
    def validsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'validsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'validsize' field must be an unsigned integer in [0, 255]"
        self._validsize = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'reserved' numpy.ndarray() must have a size of 2"
            self._reserved = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved = numpy.array(value, dtype=numpy.uint8)
