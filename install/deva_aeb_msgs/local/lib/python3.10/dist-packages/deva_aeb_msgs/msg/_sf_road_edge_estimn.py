# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFRoadEdgeEstimn(type):
    """Metaclass of message 'SFRoadEdgeEstimn'."""

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
                'deva_aeb_msgs.msg.SFRoadEdgeEstimn')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_road_edge_estimn
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_road_edge_estimn
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_road_edge_estimn
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_road_edge_estimn
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_road_edge_estimn

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFRoadEdgeEstimn(metaclass=Metaclass_SFRoadEdgeEstimn):
    """Message class 'SFRoadEdgeEstimn'."""

    __slots__ = [
        '_constcoeff',
        '_firstordercoeff',
        '_secondordercoeff',
        '_thirdordercoeff',
        '_dstlgttoend',
        '_startpointposx',
        '_startpointposy',
        '_endpointposx',
        '_endpointposy',
        '_extendendpointposx',
        '_extendendpointposy',
        '_overrideflag',
        '_type',
        '_parseconfi',
        '_tracestatus',
    ]

    _fields_and_field_types = {
        'constcoeff': 'float',
        'firstordercoeff': 'float',
        'secondordercoeff': 'float',
        'thirdordercoeff': 'float',
        'dstlgttoend': 'float',
        'startpointposx': 'float',
        'startpointposy': 'float',
        'endpointposx': 'float',
        'endpointposy': 'float',
        'extendendpointposx': 'float',
        'extendendpointposy': 'float',
        'overrideflag': 'uint8',
        'type': 'uint8',
        'parseconfi': 'uint8',
        'tracestatus': 'uint8',
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.constcoeff = kwargs.get('constcoeff', float())
        self.firstordercoeff = kwargs.get('firstordercoeff', float())
        self.secondordercoeff = kwargs.get('secondordercoeff', float())
        self.thirdordercoeff = kwargs.get('thirdordercoeff', float())
        self.dstlgttoend = kwargs.get('dstlgttoend', float())
        self.startpointposx = kwargs.get('startpointposx', float())
        self.startpointposy = kwargs.get('startpointposy', float())
        self.endpointposx = kwargs.get('endpointposx', float())
        self.endpointposy = kwargs.get('endpointposy', float())
        self.extendendpointposx = kwargs.get('extendendpointposx', float())
        self.extendendpointposy = kwargs.get('extendendpointposy', float())
        self.overrideflag = kwargs.get('overrideflag', int())
        self.type = kwargs.get('type', int())
        self.parseconfi = kwargs.get('parseconfi', int())
        self.tracestatus = kwargs.get('tracestatus', int())

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
        if self.constcoeff != other.constcoeff:
            return False
        if self.firstordercoeff != other.firstordercoeff:
            return False
        if self.secondordercoeff != other.secondordercoeff:
            return False
        if self.thirdordercoeff != other.thirdordercoeff:
            return False
        if self.dstlgttoend != other.dstlgttoend:
            return False
        if self.startpointposx != other.startpointposx:
            return False
        if self.startpointposy != other.startpointposy:
            return False
        if self.endpointposx != other.endpointposx:
            return False
        if self.endpointposy != other.endpointposy:
            return False
        if self.extendendpointposx != other.extendendpointposx:
            return False
        if self.extendendpointposy != other.extendendpointposy:
            return False
        if self.overrideflag != other.overrideflag:
            return False
        if self.type != other.type:
            return False
        if self.parseconfi != other.parseconfi:
            return False
        if self.tracestatus != other.tracestatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def constcoeff(self):
        """Message field 'constcoeff'."""
        return self._constcoeff

    @constcoeff.setter
    def constcoeff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'constcoeff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'constcoeff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._constcoeff = value

    @builtins.property
    def firstordercoeff(self):
        """Message field 'firstordercoeff'."""
        return self._firstordercoeff

    @firstordercoeff.setter
    def firstordercoeff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'firstordercoeff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'firstordercoeff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._firstordercoeff = value

    @builtins.property
    def secondordercoeff(self):
        """Message field 'secondordercoeff'."""
        return self._secondordercoeff

    @secondordercoeff.setter
    def secondordercoeff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'secondordercoeff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'secondordercoeff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._secondordercoeff = value

    @builtins.property
    def thirdordercoeff(self):
        """Message field 'thirdordercoeff'."""
        return self._thirdordercoeff

    @thirdordercoeff.setter
    def thirdordercoeff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thirdordercoeff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'thirdordercoeff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._thirdordercoeff = value

    @builtins.property
    def dstlgttoend(self):
        """Message field 'dstlgttoend'."""
        return self._dstlgttoend

    @dstlgttoend.setter
    def dstlgttoend(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dstlgttoend' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dstlgttoend' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dstlgttoend = value

    @builtins.property
    def startpointposx(self):
        """Message field 'startpointposx'."""
        return self._startpointposx

    @startpointposx.setter
    def startpointposx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'startpointposx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'startpointposx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._startpointposx = value

    @builtins.property
    def startpointposy(self):
        """Message field 'startpointposy'."""
        return self._startpointposy

    @startpointposy.setter
    def startpointposy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'startpointposy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'startpointposy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._startpointposy = value

    @builtins.property
    def endpointposx(self):
        """Message field 'endpointposx'."""
        return self._endpointposx

    @endpointposx.setter
    def endpointposx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endpointposx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endpointposx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endpointposx = value

    @builtins.property
    def endpointposy(self):
        """Message field 'endpointposy'."""
        return self._endpointposy

    @endpointposy.setter
    def endpointposy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endpointposy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endpointposy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endpointposy = value

    @builtins.property
    def extendendpointposx(self):
        """Message field 'extendendpointposx'."""
        return self._extendendpointposx

    @extendendpointposx.setter
    def extendendpointposx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'extendendpointposx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'extendendpointposx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._extendendpointposx = value

    @builtins.property
    def extendendpointposy(self):
        """Message field 'extendendpointposy'."""
        return self._extendendpointposy

    @extendendpointposy.setter
    def extendendpointposy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'extendendpointposy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'extendendpointposy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._extendendpointposy = value

    @builtins.property
    def overrideflag(self):
        """Message field 'overrideflag'."""
        return self._overrideflag

    @overrideflag.setter
    def overrideflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'overrideflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'overrideflag' field must be an unsigned integer in [0, 255]"
        self._overrideflag = value

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
    def parseconfi(self):
        """Message field 'parseconfi'."""
        return self._parseconfi

    @parseconfi.setter
    def parseconfi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parseconfi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parseconfi' field must be an unsigned integer in [0, 255]"
        self._parseconfi = value

    @builtins.property
    def tracestatus(self):
        """Message field 'tracestatus'."""
        return self._tracestatus

    @tracestatus.setter
    def tracestatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracestatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracestatus' field must be an unsigned integer in [0, 255]"
        self._tracestatus = value
