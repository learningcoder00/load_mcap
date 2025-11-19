# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/QuadrangleImg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QuadrangleImg(type):
    """Metaclass of message 'QuadrangleImg'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.QuadrangleImg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quadrangle_img
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quadrangle_img
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quadrangle_img
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quadrangle_img
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quadrangle_img

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QuadrangleImg(metaclass=Metaclass_QuadrangleImg):
    """Message class 'QuadrangleImg'."""

    __slots__ = [
        '_imglupointposu',
        '_imglupointposv',
        '_imgrupointposu',
        '_imgrupointposv',
        '_imgrdpointposu',
        '_imgrdpointposv',
        '_imgldpointposu',
        '_imgldpointposv',
    ]

    _fields_and_field_types = {
        'imglupointposu': 'uint16',
        'imglupointposv': 'uint16',
        'imgrupointposu': 'uint16',
        'imgrupointposv': 'uint16',
        'imgrdpointposu': 'uint16',
        'imgrdpointposv': 'uint16',
        'imgldpointposu': 'uint16',
        'imgldpointposv': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.imglupointposu = kwargs.get('imglupointposu', int())
        self.imglupointposv = kwargs.get('imglupointposv', int())
        self.imgrupointposu = kwargs.get('imgrupointposu', int())
        self.imgrupointposv = kwargs.get('imgrupointposv', int())
        self.imgrdpointposu = kwargs.get('imgrdpointposu', int())
        self.imgrdpointposv = kwargs.get('imgrdpointposv', int())
        self.imgldpointposu = kwargs.get('imgldpointposu', int())
        self.imgldpointposv = kwargs.get('imgldpointposv', int())

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
        if self.imglupointposu != other.imglupointposu:
            return False
        if self.imglupointposv != other.imglupointposv:
            return False
        if self.imgrupointposu != other.imgrupointposu:
            return False
        if self.imgrupointposv != other.imgrupointposv:
            return False
        if self.imgrdpointposu != other.imgrdpointposu:
            return False
        if self.imgrdpointposv != other.imgrdpointposv:
            return False
        if self.imgldpointposu != other.imgldpointposu:
            return False
        if self.imgldpointposv != other.imgldpointposv:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imglupointposu(self):
        """Message field 'imglupointposu'."""
        return self._imglupointposu

    @imglupointposu.setter
    def imglupointposu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imglupointposu' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imglupointposu' field must be an unsigned integer in [0, 65535]"
        self._imglupointposu = value

    @builtins.property
    def imglupointposv(self):
        """Message field 'imglupointposv'."""
        return self._imglupointposv

    @imglupointposv.setter
    def imglupointposv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imglupointposv' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imglupointposv' field must be an unsigned integer in [0, 65535]"
        self._imglupointposv = value

    @builtins.property
    def imgrupointposu(self):
        """Message field 'imgrupointposu'."""
        return self._imgrupointposu

    @imgrupointposu.setter
    def imgrupointposu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgrupointposu' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgrupointposu' field must be an unsigned integer in [0, 65535]"
        self._imgrupointposu = value

    @builtins.property
    def imgrupointposv(self):
        """Message field 'imgrupointposv'."""
        return self._imgrupointposv

    @imgrupointposv.setter
    def imgrupointposv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgrupointposv' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgrupointposv' field must be an unsigned integer in [0, 65535]"
        self._imgrupointposv = value

    @builtins.property
    def imgrdpointposu(self):
        """Message field 'imgrdpointposu'."""
        return self._imgrdpointposu

    @imgrdpointposu.setter
    def imgrdpointposu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgrdpointposu' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgrdpointposu' field must be an unsigned integer in [0, 65535]"
        self._imgrdpointposu = value

    @builtins.property
    def imgrdpointposv(self):
        """Message field 'imgrdpointposv'."""
        return self._imgrdpointposv

    @imgrdpointposv.setter
    def imgrdpointposv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgrdpointposv' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgrdpointposv' field must be an unsigned integer in [0, 65535]"
        self._imgrdpointposv = value

    @builtins.property
    def imgldpointposu(self):
        """Message field 'imgldpointposu'."""
        return self._imgldpointposu

    @imgldpointposu.setter
    def imgldpointposu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgldpointposu' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgldpointposu' field must be an unsigned integer in [0, 65535]"
        self._imgldpointposu = value

    @builtins.property
    def imgldpointposv(self):
        """Message field 'imgldpointposv'."""
        return self._imgldpointposv

    @imgldpointposv.setter
    def imgldpointposv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imgldpointposv' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'imgldpointposv' field must be an unsigned integer in [0, 65535]"
        self._imgldpointposv = value
