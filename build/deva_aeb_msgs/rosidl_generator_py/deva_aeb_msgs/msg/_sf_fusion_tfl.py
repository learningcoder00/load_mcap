# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFusionTFL.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionTFL(type):
    """Metaclass of message 'SFFusionTFL'."""

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
                'deva_aeb_msgs.msg.SFFusionTFL')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_tfl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_tfl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_tfl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_tfl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_tfl

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionTFL(metaclass=Metaclass_SFFusionTFL):
    """Message class 'SFFusionTFL'."""

    __slots__ = [
        '_id',
        '_lifetime',
        '_height',
        '_relevancy',
        '_type',
        '_color',
        '_number',
        '_confi',
        '_flashstatus',
        '_background',
        '_reserved',
        '_poslgt',
        '_poslat',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'lifetime': 'uint32',
        'height': 'float',
        'relevancy': 'uint8',
        'type': 'uint8',
        'color': 'uint8',
        'number': 'uint8',
        'confi': 'uint8',
        'flashstatus': 'uint8',
        'background': 'uint8',
        'reserved': 'uint8',
        'poslgt': 'float',
        'poslat': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.lifetime = kwargs.get('lifetime', int())
        self.height = kwargs.get('height', float())
        self.relevancy = kwargs.get('relevancy', int())
        self.type = kwargs.get('type', int())
        self.color = kwargs.get('color', int())
        self.number = kwargs.get('number', int())
        self.confi = kwargs.get('confi', int())
        self.flashstatus = kwargs.get('flashstatus', int())
        self.background = kwargs.get('background', int())
        self.reserved = kwargs.get('reserved', int())
        self.poslgt = kwargs.get('poslgt', float())
        self.poslat = kwargs.get('poslat', float())

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
        if self.lifetime != other.lifetime:
            return False
        if self.height != other.height:
            return False
        if self.relevancy != other.relevancy:
            return False
        if self.type != other.type:
            return False
        if self.color != other.color:
            return False
        if self.number != other.number:
            return False
        if self.confi != other.confi:
            return False
        if self.flashstatus != other.flashstatus:
            return False
        if self.background != other.background:
            return False
        if self.reserved != other.reserved:
            return False
        if self.poslgt != other.poslgt:
            return False
        if self.poslat != other.poslat:
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
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lifetime' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lifetime' field must be an unsigned integer in [0, 4294967295]"
        self._lifetime = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def relevancy(self):
        """Message field 'relevancy'."""
        return self._relevancy

    @relevancy.setter
    def relevancy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relevancy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'relevancy' field must be an unsigned integer in [0, 255]"
        self._relevancy = value

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
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'number' field must be an unsigned integer in [0, 255]"
        self._number = value

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
    def flashstatus(self):
        """Message field 'flashstatus'."""
        return self._flashstatus

    @flashstatus.setter
    def flashstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flashstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flashstatus' field must be an unsigned integer in [0, 255]"
        self._flashstatus = value

    @builtins.property
    def background(self):
        """Message field 'background'."""
        return self._background

    @background.setter
    def background(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'background' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'background' field must be an unsigned integer in [0, 255]"
        self._background = value

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
