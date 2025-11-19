# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFCurveFunctionExtra(type):
    """Metaclass of message 'SFCurveFunctionExtra'."""

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
                'deva_aeb_msgs.msg.SFCurveFunctionExtra')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_curve_function_extra
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_curve_function_extra
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_curve_function_extra
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_curve_function_extra
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_curve_function_extra

            from deva_aeb_msgs.msg import SFLaneEstimn
            if SFLaneEstimn.__class__._TYPE_SUPPORT is None:
                SFLaneEstimn.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFCurveFunctionExtra(metaclass=Metaclass_SFCurveFunctionExtra):
    """Message class 'SFCurveFunctionExtra'."""

    __slots__ = [
        '_poslgt',
        '_poslat',
        '_estimn',
        '_extrapointtype',
        '_lanemkrtype',
        '_confi',
        '_reserved',
    ]

    _fields_and_field_types = {
        'poslgt': 'float',
        'poslat': 'float',
        'estimn': 'deva_aeb_msgs/SFLaneEstimn',
        'extrapointtype': 'uint8',
        'lanemkrtype': 'uint8',
        'confi': 'uint8',
        'reserved': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFLaneEstimn'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.poslgt = kwargs.get('poslgt', float())
        self.poslat = kwargs.get('poslat', float())
        from deva_aeb_msgs.msg import SFLaneEstimn
        self.estimn = kwargs.get('estimn', SFLaneEstimn())
        self.extrapointtype = kwargs.get('extrapointtype', int())
        self.lanemkrtype = kwargs.get('lanemkrtype', int())
        self.confi = kwargs.get('confi', int())
        self.reserved = kwargs.get('reserved', int())

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
        if self.poslgt != other.poslgt:
            return False
        if self.poslat != other.poslat:
            return False
        if self.estimn != other.estimn:
            return False
        if self.extrapointtype != other.extrapointtype:
            return False
        if self.lanemkrtype != other.lanemkrtype:
            return False
        if self.confi != other.confi:
            return False
        if self.reserved != other.reserved:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def poslgt(self):
        """Message field 'poslgt'."""
        return self._poslgt

    @poslgt.setter
    def poslgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'poslgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'poslgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._poslgt = value

    @builtins.property
    def poslat(self):
        """Message field 'poslat'."""
        return self._poslat

    @poslat.setter
    def poslat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'poslat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'poslat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._poslat = value

    @builtins.property
    def estimn(self):
        """Message field 'estimn'."""
        return self._estimn

    @estimn.setter
    def estimn(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFLaneEstimn
            assert \
                isinstance(value, SFLaneEstimn), \
                "The 'estimn' field must be a sub message of type 'SFLaneEstimn'"
        self._estimn = value

    @builtins.property
    def extrapointtype(self):
        """Message field 'extrapointtype'."""
        return self._extrapointtype

    @extrapointtype.setter
    def extrapointtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extrapointtype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extrapointtype' field must be an unsigned integer in [0, 255]"
        self._extrapointtype = value

    @builtins.property
    def lanemkrtype(self):
        """Message field 'lanemkrtype'."""
        return self._lanemkrtype

    @lanemkrtype.setter
    def lanemkrtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemkrtype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemkrtype' field must be an unsigned integer in [0, 255]"
        self._lanemkrtype = value

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
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reserved' field must be an unsigned integer in [0, 255]"
        self._reserved = value
