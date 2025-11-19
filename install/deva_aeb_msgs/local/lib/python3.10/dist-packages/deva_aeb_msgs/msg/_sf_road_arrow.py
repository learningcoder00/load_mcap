# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFRoadArrow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFRoadArrow(type):
    """Metaclass of message 'SFRoadArrow'."""

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
                'deva_aeb_msgs.msg.SFRoadArrow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_road_arrow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_road_arrow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_road_arrow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_road_arrow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_road_arrow

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFRoadArrow(metaclass=Metaclass_SFRoadArrow):
    """Message class 'SFRoadArrow'."""

    __slots__ = [
        '_id',
        '_type',
        '_confi',
        '_lanassignment',
        '_reserved',
        '_poslgt',
        '_poslat',
        '_headingangle',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'type': 'uint8',
        'confi': 'uint8',
        'lanassignment': 'uint8',
        'reserved': 'uint8',
        'poslgt': 'float',
        'poslat': 'float',
        'headingangle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.confi = kwargs.get('confi', int())
        self.lanassignment = kwargs.get('lanassignment', int())
        self.reserved = kwargs.get('reserved', int())
        self.poslgt = kwargs.get('poslgt', float())
        self.poslat = kwargs.get('poslat', float())
        self.headingangle = kwargs.get('headingangle', float())

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
        if self.type != other.type:
            return False
        if self.confi != other.confi:
            return False
        if self.lanassignment != other.lanassignment:
            return False
        if self.reserved != other.reserved:
            return False
        if self.poslgt != other.poslgt:
            return False
        if self.poslat != other.poslat:
            return False
        if self.headingangle != other.headingangle:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

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
    def lanassignment(self):
        """Message field 'lanassignment'."""
        return self._lanassignment

    @lanassignment.setter
    def lanassignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanassignment' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanassignment' field must be an unsigned integer in [0, 255]"
        self._lanassignment = value

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
    def headingangle(self):
        """Message field 'headingangle'."""
        return self._headingangle

    @headingangle.setter
    def headingangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'headingangle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'headingangle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._headingangle = value
