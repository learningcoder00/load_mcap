# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFRoadPpty.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'crvtrate'
# Member 'seglen'
# Member 'reserved'
# Member 'titohiqly'
# Member 'objidtitohiqly'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFRoadPpty(type):
    """Metaclass of message 'SFRoadPpty'."""

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
                'deva_aeb_msgs.msg.SFRoadPpty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_road_ppty
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_road_ppty
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_road_ppty
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_road_ppty
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_road_ppty

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFRoadPpty(metaclass=Metaclass_SFRoadPpty):
    """Message class 'SFRoadPpty'."""

    __slots__ = [
        '_timestamp',
        '_framenum',
        '_lanewidth',
        '_offslat',
        '_agdir',
        '_crvt',
        '_crvtrate',
        '_crvtratevalidsize',
        '_seglen',
        '_seglenvalidsize',
        '_strtd',
        '_vld',
        '_reserved',
        '_titohiqly',
        '_titohiqlyvalidsize',
        '_objidtitohiqly',
        '_objidtitohiqlyvalidsize',
        '_distancewithlowconfidence',
        '_distancewithhiahconfidence',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'lanewidth': 'float',
        'offslat': 'float',
        'agdir': 'float',
        'crvt': 'float',
        'crvtrate': 'float[3]',
        'crvtratevalidsize': 'uint8',
        'seglen': 'float[3]',
        'seglenvalidsize': 'uint8',
        'strtd': 'uint8',
        'vld': 'uint8',
        'reserved': 'uint8[2]',
        'titohiqly': 'float[32]',
        'titohiqlyvalidsize': 'uint8',
        'objidtitohiqly': 'uint8[32]',
        'objidtitohiqlyvalidsize': 'uint8',
        'distancewithlowconfidence': 'float',
        'distancewithhiahconfidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 32),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        self.lanewidth = kwargs.get('lanewidth', float())
        self.offslat = kwargs.get('offslat', float())
        self.agdir = kwargs.get('agdir', float())
        self.crvt = kwargs.get('crvt', float())
        if 'crvtrate' not in kwargs:
            self.crvtrate = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.crvtrate = kwargs.get('crvtrate')
        self.crvtratevalidsize = kwargs.get('crvtratevalidsize', int())
        if 'seglen' not in kwargs:
            self.seglen = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.seglen = kwargs.get('seglen')
        self.seglenvalidsize = kwargs.get('seglenvalidsize', int())
        self.strtd = kwargs.get('strtd', int())
        self.vld = kwargs.get('vld', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')
        if 'titohiqly' not in kwargs:
            self.titohiqly = numpy.zeros(32, dtype=numpy.float32)
        else:
            self.titohiqly = kwargs.get('titohiqly')
        self.titohiqlyvalidsize = kwargs.get('titohiqlyvalidsize', int())
        if 'objidtitohiqly' not in kwargs:
            self.objidtitohiqly = numpy.zeros(32, dtype=numpy.uint8)
        else:
            self.objidtitohiqly = kwargs.get('objidtitohiqly')
        self.objidtitohiqlyvalidsize = kwargs.get('objidtitohiqlyvalidsize', int())
        self.distancewithlowconfidence = kwargs.get('distancewithlowconfidence', float())
        self.distancewithhiahconfidence = kwargs.get('distancewithhiahconfidence', float())

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
        if self.timestamp != other.timestamp:
            return False
        if self.framenum != other.framenum:
            return False
        if self.lanewidth != other.lanewidth:
            return False
        if self.offslat != other.offslat:
            return False
        if self.agdir != other.agdir:
            return False
        if self.crvt != other.crvt:
            return False
        if any(self.crvtrate != other.crvtrate):
            return False
        if self.crvtratevalidsize != other.crvtratevalidsize:
            return False
        if any(self.seglen != other.seglen):
            return False
        if self.seglenvalidsize != other.seglenvalidsize:
            return False
        if self.strtd != other.strtd:
            return False
        if self.vld != other.vld:
            return False
        if any(self.reserved != other.reserved):
            return False
        if any(self.titohiqly != other.titohiqly):
            return False
        if self.titohiqlyvalidsize != other.titohiqlyvalidsize:
            return False
        if any(self.objidtitohiqly != other.objidtitohiqly):
            return False
        if self.objidtitohiqlyvalidsize != other.objidtitohiqlyvalidsize:
            return False
        if self.distancewithlowconfidence != other.distancewithlowconfidence:
            return False
        if self.distancewithhiahconfidence != other.distancewithhiahconfidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def framenum(self):
        """Message field 'framenum'."""
        return self._framenum

    @framenum.setter
    def framenum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framenum' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'framenum' field must be an unsigned integer in [0, 4294967295]"
        self._framenum = value

    @builtins.property
    def lanewidth(self):
        """Message field 'lanewidth'."""
        return self._lanewidth

    @lanewidth.setter
    def lanewidth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lanewidth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lanewidth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lanewidth = value

    @builtins.property
    def offslat(self):
        """Message field 'offslat'."""
        return self._offslat

    @offslat.setter
    def offslat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offslat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offslat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offslat = value

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

    @builtins.property
    def crvtrate(self):
        """Message field 'crvtrate'."""
        return self._crvtrate

    @crvtrate.setter
    def crvtrate(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'crvtrate' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'crvtrate' numpy.ndarray() must have a size of 3"
            self._crvtrate = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'crvtrate' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._crvtrate = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def crvtratevalidsize(self):
        """Message field 'crvtratevalidsize'."""
        return self._crvtratevalidsize

    @crvtratevalidsize.setter
    def crvtratevalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crvtratevalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crvtratevalidsize' field must be an unsigned integer in [0, 255]"
        self._crvtratevalidsize = value

    @builtins.property
    def seglen(self):
        """Message field 'seglen'."""
        return self._seglen

    @seglen.setter
    def seglen(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'seglen' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'seglen' numpy.ndarray() must have a size of 3"
            self._seglen = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'seglen' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._seglen = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def seglenvalidsize(self):
        """Message field 'seglenvalidsize'."""
        return self._seglenvalidsize

    @seglenvalidsize.setter
    def seglenvalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seglenvalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seglenvalidsize' field must be an unsigned integer in [0, 255]"
        self._seglenvalidsize = value

    @builtins.property
    def strtd(self):
        """Message field 'strtd'."""
        return self._strtd

    @strtd.setter
    def strtd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strtd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'strtd' field must be an unsigned integer in [0, 255]"
        self._strtd = value

    @builtins.property
    def vld(self):
        """Message field 'vld'."""
        return self._vld

    @vld.setter
    def vld(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vld' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vld' field must be an unsigned integer in [0, 255]"
        self._vld = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'reserved' numpy.ndarray() must have a size of 2"
            self._reserved = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def titohiqly(self):
        """Message field 'titohiqly'."""
        return self._titohiqly

    @titohiqly.setter
    def titohiqly(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'titohiqly' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 32, \
                "The 'titohiqly' numpy.ndarray() must have a size of 32"
            self._titohiqly = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 32 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'titohiqly' field must be a set or sequence with length 32 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._titohiqly = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def titohiqlyvalidsize(self):
        """Message field 'titohiqlyvalidsize'."""
        return self._titohiqlyvalidsize

    @titohiqlyvalidsize.setter
    def titohiqlyvalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'titohiqlyvalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'titohiqlyvalidsize' field must be an unsigned integer in [0, 255]"
        self._titohiqlyvalidsize = value

    @builtins.property
    def objidtitohiqly(self):
        """Message field 'objidtitohiqly'."""
        return self._objidtitohiqly

    @objidtitohiqly.setter
    def objidtitohiqly(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'objidtitohiqly' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 32, \
                "The 'objidtitohiqly' numpy.ndarray() must have a size of 32"
            self._objidtitohiqly = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'objidtitohiqly' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._objidtitohiqly = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def objidtitohiqlyvalidsize(self):
        """Message field 'objidtitohiqlyvalidsize'."""
        return self._objidtitohiqlyvalidsize

    @objidtitohiqlyvalidsize.setter
    def objidtitohiqlyvalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objidtitohiqlyvalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'objidtitohiqlyvalidsize' field must be an unsigned integer in [0, 255]"
        self._objidtitohiqlyvalidsize = value

    @builtins.property
    def distancewithlowconfidence(self):
        """Message field 'distancewithlowconfidence'."""
        return self._distancewithlowconfidence

    @distancewithlowconfidence.setter
    def distancewithlowconfidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distancewithlowconfidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distancewithlowconfidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distancewithlowconfidence = value

    @builtins.property
    def distancewithhiahconfidence(self):
        """Message field 'distancewithhiahconfidence'."""
        return self._distancewithhiahconfidence

    @distancewithhiahconfidence.setter
    def distancewithhiahconfidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distancewithhiahconfidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distancewithhiahconfidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distancewithhiahconfidence = value
