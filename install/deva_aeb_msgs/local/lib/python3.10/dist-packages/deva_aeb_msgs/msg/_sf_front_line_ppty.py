# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFrontLinePpty(type):
    """Metaclass of message 'SFFrontLinePpty'."""

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
                'deva_aeb_msgs.msg.SFFrontLinePpty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_front_line_ppty
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_front_line_ppty
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_front_line_ppty
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_front_line_ppty
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_front_line_ppty

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFrontLinePpty(metaclass=Metaclass_SFFrontLinePpty):
    """Message class 'SFFrontLinePpty'."""

    __slots__ = [
        '_drvrpfmncmonqly',
        '_lanekeepaidqly',
        '_trfcjamassiqly',
        '_reserved',
        '_tunqly',
        '_id',
        '_lifetime',
    ]

    _fields_and_field_types = {
        'drvrpfmncmonqly': 'uint8',
        'lanekeepaidqly': 'uint8',
        'trfcjamassiqly': 'uint8',
        'reserved': 'uint8',
        'tunqly': 'float',
        'id': 'uint32',
        'lifetime': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drvrpfmncmonqly = kwargs.get('drvrpfmncmonqly', int())
        self.lanekeepaidqly = kwargs.get('lanekeepaidqly', int())
        self.trfcjamassiqly = kwargs.get('trfcjamassiqly', int())
        self.reserved = kwargs.get('reserved', int())
        self.tunqly = kwargs.get('tunqly', float())
        self.id = kwargs.get('id', int())
        self.lifetime = kwargs.get('lifetime', int())

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
        if self.drvrpfmncmonqly != other.drvrpfmncmonqly:
            return False
        if self.lanekeepaidqly != other.lanekeepaidqly:
            return False
        if self.trfcjamassiqly != other.trfcjamassiqly:
            return False
        if self.reserved != other.reserved:
            return False
        if self.tunqly != other.tunqly:
            return False
        if self.id != other.id:
            return False
        if self.lifetime != other.lifetime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drvrpfmncmonqly(self):
        """Message field 'drvrpfmncmonqly'."""
        return self._drvrpfmncmonqly

    @drvrpfmncmonqly.setter
    def drvrpfmncmonqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvrpfmncmonqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvrpfmncmonqly' field must be an unsigned integer in [0, 255]"
        self._drvrpfmncmonqly = value

    @builtins.property
    def lanekeepaidqly(self):
        """Message field 'lanekeepaidqly'."""
        return self._lanekeepaidqly

    @lanekeepaidqly.setter
    def lanekeepaidqly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanekeepaidqly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanekeepaidqly' field must be an unsigned integer in [0, 255]"
        self._lanekeepaidqly = value

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
    def tunqly(self):
        """Message field 'tunqly'."""
        return self._tunqly

    @tunqly.setter
    def tunqly(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tunqly' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tunqly' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tunqly = value

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
