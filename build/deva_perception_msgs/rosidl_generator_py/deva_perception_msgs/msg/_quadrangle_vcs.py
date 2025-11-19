# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/QuadrangleVcs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QuadrangleVcs(type):
    """Metaclass of message 'QuadrangleVcs'."""

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
                'deva_perception_msgs.msg.QuadrangleVcs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quadrangle_vcs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quadrangle_vcs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quadrangle_vcs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quadrangle_vcs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quadrangle_vcs

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QuadrangleVcs(metaclass=Metaclass_QuadrangleVcs):
    """Message class 'QuadrangleVcs'."""

    __slots__ = [
        '_leftuppointx',
        '_leftuppointy',
        '_leftuppointz',
        '_rightuppointx',
        '_rightuppointy',
        '_rightuppointz',
        '_rightdownpointx',
        '_rightdownpointy',
        '_rightdownpointz',
        '_leftdownpointx',
        '_leftdownpointy',
        '_leftdownpointz',
    ]

    _fields_and_field_types = {
        'leftuppointx': 'float',
        'leftuppointy': 'float',
        'leftuppointz': 'float',
        'rightuppointx': 'float',
        'rightuppointy': 'float',
        'rightuppointz': 'float',
        'rightdownpointx': 'float',
        'rightdownpointy': 'float',
        'rightdownpointz': 'float',
        'leftdownpointx': 'float',
        'leftdownpointy': 'float',
        'leftdownpointz': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leftuppointx = kwargs.get('leftuppointx', float())
        self.leftuppointy = kwargs.get('leftuppointy', float())
        self.leftuppointz = kwargs.get('leftuppointz', float())
        self.rightuppointx = kwargs.get('rightuppointx', float())
        self.rightuppointy = kwargs.get('rightuppointy', float())
        self.rightuppointz = kwargs.get('rightuppointz', float())
        self.rightdownpointx = kwargs.get('rightdownpointx', float())
        self.rightdownpointy = kwargs.get('rightdownpointy', float())
        self.rightdownpointz = kwargs.get('rightdownpointz', float())
        self.leftdownpointx = kwargs.get('leftdownpointx', float())
        self.leftdownpointy = kwargs.get('leftdownpointy', float())
        self.leftdownpointz = kwargs.get('leftdownpointz', float())

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
        if self.leftuppointx != other.leftuppointx:
            return False
        if self.leftuppointy != other.leftuppointy:
            return False
        if self.leftuppointz != other.leftuppointz:
            return False
        if self.rightuppointx != other.rightuppointx:
            return False
        if self.rightuppointy != other.rightuppointy:
            return False
        if self.rightuppointz != other.rightuppointz:
            return False
        if self.rightdownpointx != other.rightdownpointx:
            return False
        if self.rightdownpointy != other.rightdownpointy:
            return False
        if self.rightdownpointz != other.rightdownpointz:
            return False
        if self.leftdownpointx != other.leftdownpointx:
            return False
        if self.leftdownpointy != other.leftdownpointy:
            return False
        if self.leftdownpointz != other.leftdownpointz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leftuppointx(self):
        """Message field 'leftuppointx'."""
        return self._leftuppointx

    @leftuppointx.setter
    def leftuppointx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftuppointx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftuppointx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftuppointx = value

    @builtins.property
    def leftuppointy(self):
        """Message field 'leftuppointy'."""
        return self._leftuppointy

    @leftuppointy.setter
    def leftuppointy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftuppointy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftuppointy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftuppointy = value

    @builtins.property
    def leftuppointz(self):
        """Message field 'leftuppointz'."""
        return self._leftuppointz

    @leftuppointz.setter
    def leftuppointz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftuppointz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftuppointz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftuppointz = value

    @builtins.property
    def rightuppointx(self):
        """Message field 'rightuppointx'."""
        return self._rightuppointx

    @rightuppointx.setter
    def rightuppointx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightuppointx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightuppointx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightuppointx = value

    @builtins.property
    def rightuppointy(self):
        """Message field 'rightuppointy'."""
        return self._rightuppointy

    @rightuppointy.setter
    def rightuppointy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightuppointy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightuppointy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightuppointy = value

    @builtins.property
    def rightuppointz(self):
        """Message field 'rightuppointz'."""
        return self._rightuppointz

    @rightuppointz.setter
    def rightuppointz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightuppointz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightuppointz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightuppointz = value

    @builtins.property
    def rightdownpointx(self):
        """Message field 'rightdownpointx'."""
        return self._rightdownpointx

    @rightdownpointx.setter
    def rightdownpointx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightdownpointx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightdownpointx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightdownpointx = value

    @builtins.property
    def rightdownpointy(self):
        """Message field 'rightdownpointy'."""
        return self._rightdownpointy

    @rightdownpointy.setter
    def rightdownpointy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightdownpointy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightdownpointy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightdownpointy = value

    @builtins.property
    def rightdownpointz(self):
        """Message field 'rightdownpointz'."""
        return self._rightdownpointz

    @rightdownpointz.setter
    def rightdownpointz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightdownpointz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightdownpointz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightdownpointz = value

    @builtins.property
    def leftdownpointx(self):
        """Message field 'leftdownpointx'."""
        return self._leftdownpointx

    @leftdownpointx.setter
    def leftdownpointx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftdownpointx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftdownpointx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftdownpointx = value

    @builtins.property
    def leftdownpointy(self):
        """Message field 'leftdownpointy'."""
        return self._leftdownpointy

    @leftdownpointy.setter
    def leftdownpointy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftdownpointy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftdownpointy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftdownpointy = value

    @builtins.property
    def leftdownpointz(self):
        """Message field 'leftdownpointz'."""
        return self._leftdownpointz

    @leftdownpointz.setter
    def leftdownpointz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftdownpointz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leftdownpointz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leftdownpointz = value
