# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFStopline.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFStopline(type):
    """Metaclass of message 'SFStopline'."""

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
                'deva_aeb_msgs.msg.SFStopline')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_stopline
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_stopline
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_stopline
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_stopline
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_stopline

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFStopline(metaclass=Metaclass_SFStopline):
    """Message class 'SFStopline'."""

    __slots__ = [
        '_id',
        '_leftpointposlgt',
        '_leftpointposlat',
        '_rightpointposlgt',
        '_rightpointposlat',
        '_confi',
        '_reserved',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'leftpointposlgt': 'float',
        'leftpointposlat': 'float',
        'rightpointposlgt': 'float',
        'rightpointposlat': 'float',
        'confi': 'uint8',
        'reserved': 'uint8[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.leftpointposlgt = kwargs.get('leftpointposlgt', float())
        self.leftpointposlat = kwargs.get('leftpointposlat', float())
        self.rightpointposlgt = kwargs.get('rightpointposlgt', float())
        self.rightpointposlat = kwargs.get('rightpointposlat', float())
        self.confi = kwargs.get('confi', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(3, dtype=numpy.uint8)
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
        if self.id != other.id:
            return False
        if self.leftpointposlgt != other.leftpointposlgt:
            return False
        if self.leftpointposlat != other.leftpointposlat:
            return False
        if self.rightpointposlgt != other.rightpointposlgt:
            return False
        if self.rightpointposlat != other.rightpointposlat:
            return False
        if self.confi != other.confi:
            return False
        if any(self.reserved != other.reserved):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def leftpointposlgt(self):
        """Message field 'leftpointposlgt'."""
        return self._leftpointposlgt

    @leftpointposlgt.setter
    def leftpointposlgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftpointposlgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftpointposlgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftpointposlgt = value

    @builtins.property
    def leftpointposlat(self):
        """Message field 'leftpointposlat'."""
        return self._leftpointposlat

    @leftpointposlat.setter
    def leftpointposlat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftpointposlat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftpointposlat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftpointposlat = value

    @builtins.property
    def rightpointposlgt(self):
        """Message field 'rightpointposlgt'."""
        return self._rightpointposlgt

    @rightpointposlgt.setter
    def rightpointposlgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightpointposlgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightpointposlgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightpointposlgt = value

    @builtins.property
    def rightpointposlat(self):
        """Message field 'rightpointposlat'."""
        return self._rightpointposlat

    @rightpointposlat.setter
    def rightpointposlat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightpointposlat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightpointposlat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightpointposlat = value

    @builtins.property
    def confi(self):
        """Message field 'confi'."""
        return self._confi

    @confi.setter
    def confi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confi' field must be an unsigned integer in [0, 255]"
        self._confi = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'reserved' numpy.ndarray() must have a size of 3"
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved = numpy.array(value, dtype=numpy.uint8)
