# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFObjInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFObjInfo(type):
    """Metaclass of message 'SFObjInfo'."""

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
                'deva_aeb_msgs.msg.SFObjInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_obj_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_obj_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_obj_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_obj_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_obj_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFObjInfo(metaclass=Metaclass_SFObjInfo):
    """Message class 'SFObjInfo'."""

    __slots__ = [
        '_length',
        '_width',
        '_hei',
        '_dstlatfrommidoflaneself',
        '_typ',
        '_sidenear',
        '_indcrturn',
        '_indcrbrkli',
        '_indcrhzrdli',
        '_mtnpat',
        '_mtnpathist',
        '_fusnsrcraw',
        '_clisnsideradarctrlwarnqly',
        '_clisnsideradarctrlbrkqly',
        '_reserved',
    ]

    _fields_and_field_types = {
        'length': 'float',
        'width': 'float',
        'hei': 'float',
        'dstlatfrommidoflaneself': 'float',
        'typ': 'uint8',
        'sidenear': 'uint8',
        'indcrturn': 'uint8',
        'indcrbrkli': 'uint8',
        'indcrhzrdli': 'uint8',
        'mtnpat': 'uint8',
        'mtnpathist': 'uint8',
        'fusnsrcraw': 'uint8',
        'clisnsideradarctrlwarnqly': 'uint8',
        'clisnsideradarctrlbrkqly': 'uint8',
        'reserved': 'uint8[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.hei = kwargs.get('hei', float())
        self.dstlatfrommidoflaneself = kwargs.get('dstlatfrommidoflaneself', float())
        self.typ = kwargs.get('typ', int())
        self.sidenear = kwargs.get('sidenear', int())
        self.indcrturn = kwargs.get('indcrturn', int())
        self.indcrbrkli = kwargs.get('indcrbrkli', int())
        self.indcrhzrdli = kwargs.get('indcrhzrdli', int())
        self.mtnpat = kwargs.get('mtnpat', int())
        self.mtnpathist = kwargs.get('mtnpathist', int())
        self.fusnsrcraw = kwargs.get('fusnsrcraw', int())
        self.clisnsideradarctrlwarnqly = kwargs.get('clisnsideradarctrlwarnqly', int())
        self.clisnsideradarctrlbrkqly = kwargs.get('clisnsideradarctrlbrkqly', int())
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
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.hei != other.hei:
            return False
        if self.dstlatfrommidoflaneself != other.dstlatfrommidoflaneself:
            return False
        if self.typ != other.typ:
            return False
        if self.sidenear != other.sidenear:
            return False
        if self.indcrturn != other.indcrturn:
            return False
        if self.indcrbrkli != other.indcrbrkli:
            return False
        if self.indcrhzrdli != other.indcrhzrdli:
            return False
        if self.mtnpat != other.mtnpat:
            return False
        if self.mtnpathist != other.mtnpathist:
            return False
        if self.fusnsrcraw != other.fusnsrcraw:
            return False
        if self.clisnsideradarctrlwarnqly != other.clisnsideradarctrlwarnqly:
            return False
        if self.clisnsideradarctrlbrkqly != other.clisnsideradarctrlbrkqly:
            return False
        if any(self.reserved != other.reserved):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value

    @builtins.property
    def hei(self):
        """Message field 'hei'."""
        return self._hei

    @hei.setter
    def hei(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hei' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hei' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hei = value

    @builtins.property
    def dstlatfrommidoflaneself(self):
        """Message field 'dstlatfrommidoflaneself'."""
        return self._dstlatfrommidoflaneself

    @dstlatfrommidoflaneself.setter
    def dstlatfrommidoflaneself(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dstlatfrommidoflaneself' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dstlatfrommidoflaneself' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dstlatfrommidoflaneself = value

    @builtins.property
    def typ(self):
        """Message field 'typ'."""
        return self._typ

    @typ.setter
    def typ(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'typ' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'typ' field must be an unsigned integer in [0, 255]"
        self._typ = value

    @builtins.property
    def sidenear(self):
        """Message field 'sidenear'."""
        return self._sidenear

    @sidenear.setter
    def sidenear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sidenear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sidenear' field must be an unsigned integer in [0, 255]"
        self._sidenear = value

    @builtins.property
    def indcrturn(self):
        """Message field 'indcrturn'."""
        return self._indcrturn

    @indcrturn.setter
    def indcrturn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcrturn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcrturn' field must be an unsigned integer in [0, 255]"
        self._indcrturn = value

    @builtins.property
    def indcrbrkli(self):
        """Message field 'indcrbrkli'."""
        return self._indcrbrkli

    @indcrbrkli.setter
    def indcrbrkli(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcrbrkli' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcrbrkli' field must be an unsigned integer in [0, 255]"
        self._indcrbrkli = value

    @builtins.property
    def indcrhzrdli(self):
        """Message field 'indcrhzrdli'."""
        return self._indcrhzrdli

    @indcrhzrdli.setter
    def indcrhzrdli(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcrhzrdli' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcrhzrdli' field must be an unsigned integer in [0, 255]"
        self._indcrhzrdli = value

    @builtins.property
    def mtnpat(self):
        """Message field 'mtnpat'."""
        return self._mtnpat

    @mtnpat.setter
    def mtnpat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mtnpat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mtnpat' field must be an unsigned integer in [0, 255]"
        self._mtnpat = value

    @builtins.property
    def mtnpathist(self):
        """Message field 'mtnpathist'."""
        return self._mtnpathist

    @mtnpathist.setter
    def mtnpathist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mtnpathist' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mtnpathist' field must be an unsigned integer in [0, 255]"
        self._mtnpathist = value

    @builtins.property
    def fusnsrcraw(self):
        """Message field 'fusnsrcraw'."""
        return self._fusnsrcraw

    @fusnsrcraw.setter
    def fusnsrcraw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fusnsrcraw' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fusnsrcraw' field must be an unsigned integer in [0, 255]"
        self._fusnsrcraw = value

    @builtins.property
    def clisnsideradarctrlwarnqly(self):
        """Message field 'clisnsideradarctrlwarnqly'."""
        return self._clisnsideradarctrlwarnqly

    @clisnsideradarctrlwarnqly.setter
    def clisnsideradarctrlwarnqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clisnsideradarctrlwarnqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clisnsideradarctrlwarnqly' field must be an unsigned integer in [0, 255]"
        self._clisnsideradarctrlwarnqly = value

    @builtins.property
    def clisnsideradarctrlbrkqly(self):
        """Message field 'clisnsideradarctrlbrkqly'."""
        return self._clisnsideradarctrlbrkqly

    @clisnsideradarctrlbrkqly.setter
    def clisnsideradarctrlbrkqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clisnsideradarctrlbrkqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clisnsideradarctrlbrkqly' field must be an unsigned integer in [0, 255]"
        self._clisnsideradarctrlbrkqly = value

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
