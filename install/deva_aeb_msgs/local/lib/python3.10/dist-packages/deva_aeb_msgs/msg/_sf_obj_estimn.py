# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFObjEstimn.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFObjEstimn(type):
    """Metaclass of message 'SFObjEstimn'."""

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
                'deva_aeb_msgs.msg.SFObjEstimn')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_obj_estimn
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_obj_estimn
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_obj_estimn
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_obj_estimn
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_obj_estimn

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFObjEstimn(metaclass=Metaclass_SFObjEstimn):
    """Message class 'SFObjEstimn'."""

    __slots__ = [
        '_posnlgt',
        '_posnlat',
        '_spd',
        '_vlgt',
        '_vlat',
        '_a',
        '_algt',
        '_alat',
        '_agdir',
        '_crvt',
    ]

    _fields_and_field_types = {
        'posnlgt': 'float',
        'posnlat': 'float',
        'spd': 'float',
        'vlgt': 'float',
        'vlat': 'float',
        'a': 'float',
        'algt': 'float',
        'alat': 'float',
        'agdir': 'float',
        'crvt': 'float',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.posnlgt = kwargs.get('posnlgt', float())
        self.posnlat = kwargs.get('posnlat', float())
        self.spd = kwargs.get('spd', float())
        self.vlgt = kwargs.get('vlgt', float())
        self.vlat = kwargs.get('vlat', float())
        self.a = kwargs.get('a', float())
        self.algt = kwargs.get('algt', float())
        self.alat = kwargs.get('alat', float())
        self.agdir = kwargs.get('agdir', float())
        self.crvt = kwargs.get('crvt', float())

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
        if self.posnlgt != other.posnlgt:
            return False
        if self.posnlat != other.posnlat:
            return False
        if self.spd != other.spd:
            return False
        if self.vlgt != other.vlgt:
            return False
        if self.vlat != other.vlat:
            return False
        if self.a != other.a:
            return False
        if self.algt != other.algt:
            return False
        if self.alat != other.alat:
            return False
        if self.agdir != other.agdir:
            return False
        if self.crvt != other.crvt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def posnlgt(self):
        """Message field 'posnlgt'."""
        return self._posnlgt

    @posnlgt.setter
    def posnlgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlgt = value

    @builtins.property
    def posnlat(self):
        """Message field 'posnlat'."""
        return self._posnlat

    @posnlat.setter
    def posnlat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlat = value

    @builtins.property
    def spd(self):
        """Message field 'spd'."""
        return self._spd

    @spd.setter
    def spd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spd = value

    @builtins.property
    def vlgt(self):
        """Message field 'vlgt'."""
        return self._vlgt

    @vlgt.setter
    def vlgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vlgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vlgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vlgt = value

    @builtins.property
    def vlat(self):
        """Message field 'vlat'."""
        return self._vlat

    @vlat.setter
    def vlat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vlat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vlat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vlat = value

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._a = value

    @builtins.property
    def algt(self):
        """Message field 'algt'."""
        return self._algt

    @algt.setter
    def algt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algt = value

    @builtins.property
    def alat(self):
        """Message field 'alat'."""
        return self._alat

    @alat.setter
    def alat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alat = value

    @builtins.property
    def agdir(self):
        """Message field 'agdir'."""
        return self._agdir

    @agdir.setter
    def agdir(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agdir' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'agdir' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._agdir = value

    @builtins.property
    def crvt(self):
        """Message field 'crvt'."""
        return self._crvt

    @crvt.setter
    def crvt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'crvt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'crvt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._crvt = value
