# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFObjPpty.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFObjPpty(type):
    """Metaclass of message 'SFObjPpty'."""

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
                'deva_aeb_msgs.msg.SFObjPpty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_obj_ppty
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_obj_ppty
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_obj_ppty
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_obj_ppty
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_obj_ppty

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFObjPpty(metaclass=Metaclass_SFObjPpty):
    """Message class 'SFObjPpty'."""

    __slots__ = [
        '_idn',
        '_sts',
        '_mdlofmtn',
        '_trfcsceno',
        '_cllsnmtgtnbybrkgprimqly',
        '_cllsnmtgtnbybrkgsecqly',
        '_cllsnwarnfwdqly',
        '_trfcjamassiqly',
        '_dstlatfrommidoflaneselfqly',
        '_emgylanekeepaidposnqly',
        '_fusnsrc',
        '_posnlgtstdde',
        '_posnlatstdde',
        '_agdirstdde',
        '_spdstdde',
        '_astdde',
        '_reserved',
        '_visnid',
    ]

    _fields_and_field_types = {
        'idn': 'uint8',
        'sts': 'uint8',
        'mdlofmtn': 'uint8',
        'trfcsceno': 'uint8',
        'cllsnmtgtnbybrkgprimqly': 'uint8',
        'cllsnmtgtnbybrkgsecqly': 'uint8',
        'cllsnwarnfwdqly': 'uint8',
        'trfcjamassiqly': 'uint8',
        'dstlatfrommidoflaneselfqly': 'uint8',
        'emgylanekeepaidposnqly': 'uint8',
        'fusnsrc': 'uint8',
        'posnlgtstdde': 'float',
        'posnlatstdde': 'float',
        'agdirstdde': 'float',
        'spdstdde': 'float',
        'astdde': 'float',
        'reserved': 'uint8',
        'visnid': 'uint32',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.idn = kwargs.get('idn', int())
        self.sts = kwargs.get('sts', int())
        self.mdlofmtn = kwargs.get('mdlofmtn', int())
        self.trfcsceno = kwargs.get('trfcsceno', int())
        self.cllsnmtgtnbybrkgprimqly = kwargs.get('cllsnmtgtnbybrkgprimqly', int())
        self.cllsnmtgtnbybrkgsecqly = kwargs.get('cllsnmtgtnbybrkgsecqly', int())
        self.cllsnwarnfwdqly = kwargs.get('cllsnwarnfwdqly', int())
        self.trfcjamassiqly = kwargs.get('trfcjamassiqly', int())
        self.dstlatfrommidoflaneselfqly = kwargs.get('dstlatfrommidoflaneselfqly', int())
        self.emgylanekeepaidposnqly = kwargs.get('emgylanekeepaidposnqly', int())
        self.fusnsrc = kwargs.get('fusnsrc', int())
        self.posnlgtstdde = kwargs.get('posnlgtstdde', float())
        self.posnlatstdde = kwargs.get('posnlatstdde', float())
        self.agdirstdde = kwargs.get('agdirstdde', float())
        self.spdstdde = kwargs.get('spdstdde', float())
        self.astdde = kwargs.get('astdde', float())
        self.reserved = kwargs.get('reserved', int())
        self.visnid = kwargs.get('visnid', int())

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
        if self.idn != other.idn:
            return False
        if self.sts != other.sts:
            return False
        if self.mdlofmtn != other.mdlofmtn:
            return False
        if self.trfcsceno != other.trfcsceno:
            return False
        if self.cllsnmtgtnbybrkgprimqly != other.cllsnmtgtnbybrkgprimqly:
            return False
        if self.cllsnmtgtnbybrkgsecqly != other.cllsnmtgtnbybrkgsecqly:
            return False
        if self.cllsnwarnfwdqly != other.cllsnwarnfwdqly:
            return False
        if self.trfcjamassiqly != other.trfcjamassiqly:
            return False
        if self.dstlatfrommidoflaneselfqly != other.dstlatfrommidoflaneselfqly:
            return False
        if self.emgylanekeepaidposnqly != other.emgylanekeepaidposnqly:
            return False
        if self.fusnsrc != other.fusnsrc:
            return False
        if self.posnlgtstdde != other.posnlgtstdde:
            return False
        if self.posnlatstdde != other.posnlatstdde:
            return False
        if self.agdirstdde != other.agdirstdde:
            return False
        if self.spdstdde != other.spdstdde:
            return False
        if self.astdde != other.astdde:
            return False
        if self.reserved != other.reserved:
            return False
        if self.visnid != other.visnid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def idn(self):
        """Message field 'idn'."""
        return self._idn

    @idn.setter
    def idn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'idn' field must be an unsigned integer in [0, 255]"
        self._idn = value

    @builtins.property
    def sts(self):
        """Message field 'sts'."""
        return self._sts

    @sts.setter
    def sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sts' field must be an unsigned integer in [0, 255]"
        self._sts = value

    @builtins.property
    def mdlofmtn(self):
        """Message field 'mdlofmtn'."""
        return self._mdlofmtn

    @mdlofmtn.setter
    def mdlofmtn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mdlofmtn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mdlofmtn' field must be an unsigned integer in [0, 255]"
        self._mdlofmtn = value

    @builtins.property
    def trfcsceno(self):
        """Message field 'trfcsceno'."""
        return self._trfcsceno

    @trfcsceno.setter
    def trfcsceno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trfcsceno' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trfcsceno' field must be an unsigned integer in [0, 255]"
        self._trfcsceno = value

    @builtins.property
    def cllsnmtgtnbybrkgprimqly(self):
        """Message field 'cllsnmtgtnbybrkgprimqly'."""
        return self._cllsnmtgtnbybrkgprimqly

    @cllsnmtgtnbybrkgprimqly.setter
    def cllsnmtgtnbybrkgprimqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cllsnmtgtnbybrkgprimqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cllsnmtgtnbybrkgprimqly' field must be an unsigned integer in [0, 255]"
        self._cllsnmtgtnbybrkgprimqly = value

    @builtins.property
    def cllsnmtgtnbybrkgsecqly(self):
        """Message field 'cllsnmtgtnbybrkgsecqly'."""
        return self._cllsnmtgtnbybrkgsecqly

    @cllsnmtgtnbybrkgsecqly.setter
    def cllsnmtgtnbybrkgsecqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cllsnmtgtnbybrkgsecqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cllsnmtgtnbybrkgsecqly' field must be an unsigned integer in [0, 255]"
        self._cllsnmtgtnbybrkgsecqly = value

    @builtins.property
    def cllsnwarnfwdqly(self):
        """Message field 'cllsnwarnfwdqly'."""
        return self._cllsnwarnfwdqly

    @cllsnwarnfwdqly.setter
    def cllsnwarnfwdqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cllsnwarnfwdqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cllsnwarnfwdqly' field must be an unsigned integer in [0, 255]"
        self._cllsnwarnfwdqly = value

    @builtins.property
    def trfcjamassiqly(self):
        """Message field 'trfcjamassiqly'."""
        return self._trfcjamassiqly

    @trfcjamassiqly.setter
    def trfcjamassiqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trfcjamassiqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trfcjamassiqly' field must be an unsigned integer in [0, 255]"
        self._trfcjamassiqly = value

    @builtins.property
    def dstlatfrommidoflaneselfqly(self):
        """Message field 'dstlatfrommidoflaneselfqly'."""
        return self._dstlatfrommidoflaneselfqly

    @dstlatfrommidoflaneselfqly.setter
    def dstlatfrommidoflaneselfqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dstlatfrommidoflaneselfqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dstlatfrommidoflaneselfqly' field must be an unsigned integer in [0, 255]"
        self._dstlatfrommidoflaneselfqly = value

    @builtins.property
    def emgylanekeepaidposnqly(self):
        """Message field 'emgylanekeepaidposnqly'."""
        return self._emgylanekeepaidposnqly

    @emgylanekeepaidposnqly.setter
    def emgylanekeepaidposnqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emgylanekeepaidposnqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emgylanekeepaidposnqly' field must be an unsigned integer in [0, 255]"
        self._emgylanekeepaidposnqly = value

    @builtins.property
    def fusnsrc(self):
        """Message field 'fusnsrc'."""
        return self._fusnsrc

    @fusnsrc.setter
    def fusnsrc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fusnsrc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fusnsrc' field must be an unsigned integer in [0, 255]"
        self._fusnsrc = value

    @builtins.property
    def posnlgtstdde(self):
        """Message field 'posnlgtstdde'."""
        return self._posnlgtstdde

    @posnlgtstdde.setter
    def posnlgtstdde(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlgtstdde' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlgtstdde' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlgtstdde = value

    @builtins.property
    def posnlatstdde(self):
        """Message field 'posnlatstdde'."""
        return self._posnlatstdde

    @posnlatstdde.setter
    def posnlatstdde(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlatstdde' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlatstdde' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlatstdde = value

    @builtins.property
    def agdirstdde(self):
        """Message field 'agdirstdde'."""
        return self._agdirstdde

    @agdirstdde.setter
    def agdirstdde(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agdirstdde' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'agdirstdde' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._agdirstdde = value

    @builtins.property
    def spdstdde(self):
        """Message field 'spdstdde'."""
        return self._spdstdde

    @spdstdde.setter
    def spdstdde(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spdstdde' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spdstdde' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spdstdde = value

    @builtins.property
    def astdde(self):
        """Message field 'astdde'."""
        return self._astdde

    @astdde.setter
    def astdde(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'astdde' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'astdde' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._astdde = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved' field must be an unsigned integer in [0, 255]"
        self._reserved = value

    @builtins.property
    def visnid(self):
        """Message field 'visnid'."""
        return self._visnid

    @visnid.setter
    def visnid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visnid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'visnid' field must be an unsigned integer in [0, 4294967295]"
        self._visnid = value
