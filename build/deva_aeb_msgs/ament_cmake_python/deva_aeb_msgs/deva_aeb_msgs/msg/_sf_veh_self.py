# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFVehSelf.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFVehSelf(type):
    """Metaclass of message 'SFVehSelf'."""

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
                'deva_aeb_msgs.msg.SFVehSelf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_veh_self
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_veh_self
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_veh_self
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_veh_self
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_veh_self

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFVehSelf(metaclass=Metaclass_SFVehSelf):
    """Message class 'SFVehSelf'."""

    __slots__ = [
        '_vlgt',
        '_vlgtcmpfac',
        '_algt',
        '_algtraw',
        '_alatraw',
        '_yawrate',
        '_yawrateraw',
        '_posnlgtdelta',
        '_posnlatdelta',
        '_agdirdelta',
    ]

    _fields_and_field_types = {
        'vlgt': 'float',
        'vlgtcmpfac': 'float',
        'algt': 'float',
        'algtraw': 'float',
        'alatraw': 'float',
        'yawrate': 'float',
        'yawrateraw': 'float',
        'posnlgtdelta': 'float',
        'posnlatdelta': 'float',
        'agdirdelta': 'float',
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
        self.vlgt = kwargs.get('vlgt', float())
        self.vlgtcmpfac = kwargs.get('vlgtcmpfac', float())
        self.algt = kwargs.get('algt', float())
        self.algtraw = kwargs.get('algtraw', float())
        self.alatraw = kwargs.get('alatraw', float())
        self.yawrate = kwargs.get('yawrate', float())
        self.yawrateraw = kwargs.get('yawrateraw', float())
        self.posnlgtdelta = kwargs.get('posnlgtdelta', float())
        self.posnlatdelta = kwargs.get('posnlatdelta', float())
        self.agdirdelta = kwargs.get('agdirdelta', float())

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
        if self.vlgt != other.vlgt:
            return False
        if self.vlgtcmpfac != other.vlgtcmpfac:
            return False
        if self.algt != other.algt:
            return False
        if self.algtraw != other.algtraw:
            return False
        if self.alatraw != other.alatraw:
            return False
        if self.yawrate != other.yawrate:
            return False
        if self.yawrateraw != other.yawrateraw:
            return False
        if self.posnlgtdelta != other.posnlgtdelta:
            return False
        if self.posnlatdelta != other.posnlatdelta:
            return False
        if self.agdirdelta != other.agdirdelta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def vlgtcmpfac(self):
        """Message field 'vlgtcmpfac'."""
        return self._vlgtcmpfac

    @vlgtcmpfac.setter
    def vlgtcmpfac(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vlgtcmpfac' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vlgtcmpfac' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vlgtcmpfac = value

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
    def algtraw(self):
        """Message field 'algtraw'."""
        return self._algtraw

    @algtraw.setter
    def algtraw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algtraw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algtraw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algtraw = value

    @builtins.property
    def alatraw(self):
        """Message field 'alatraw'."""
        return self._alatraw

    @alatraw.setter
    def alatraw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alatraw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alatraw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alatraw = value

    @builtins.property
    def yawrate(self):
        """Message field 'yawrate'."""
        return self._yawrate

    @yawrate.setter
    def yawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawrate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawrate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawrate = value

    @builtins.property
    def yawrateraw(self):
        """Message field 'yawrateraw'."""
        return self._yawrateraw

    @yawrateraw.setter
    def yawrateraw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawrateraw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawrateraw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawrateraw = value

    @builtins.property
    def posnlgtdelta(self):
        """Message field 'posnlgtdelta'."""
        return self._posnlgtdelta

    @posnlgtdelta.setter
    def posnlgtdelta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlgtdelta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlgtdelta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlgtdelta = value

    @builtins.property
    def posnlatdelta(self):
        """Message field 'posnlatdelta'."""
        return self._posnlatdelta

    @posnlatdelta.setter
    def posnlatdelta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posnlatdelta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posnlatdelta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posnlatdelta = value

    @builtins.property
    def agdirdelta(self):
        """Message field 'agdirdelta'."""
        return self._agdirdelta

    @agdirdelta.setter
    def agdirdelta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'agdirdelta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'agdirdelta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._agdirdelta = value
