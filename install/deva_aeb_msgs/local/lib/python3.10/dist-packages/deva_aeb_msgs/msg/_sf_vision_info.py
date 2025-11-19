# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFVisionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFVisionInfo(type):
    """Metaclass of message 'SFVisionInfo'."""

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
                'deva_aeb_msgs.msg.SFVisionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_vision_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_vision_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_vision_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_vision_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_vision_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFVisionInfo(metaclass=Metaclass_SFVisionInfo):
    """Message class 'SFVisionInfo'."""

    __slots__ = [
        '_cornerx',
        '_cornery',
        '_distinlane',
        '_objcutinflag',
        '_objcutinlanetype',
        '_reserved',
        '_visionposx',
        '_visionposy',
        '_laneassignment',
        '_iscipv',
        '_mtncatergory',
        '_mtnstatus',
        '_distconvergence',
        '_coverdproperty',
        '_unstable',
    ]

    _fields_and_field_types = {
        'cornerx': 'float',
        'cornery': 'float',
        'distinlane': 'float',
        'objcutinflag': 'uint8',
        'objcutinlanetype': 'uint8',
        'reserved': 'uint8[3]',
        'visionposx': 'float',
        'visionposy': 'float',
        'laneassignment': 'uint8',
        'iscipv': 'uint8',
        'mtncatergory': 'uint8',
        'mtnstatus': 'uint8',
        'distconvergence': 'uint8',
        'coverdproperty': 'uint8',
        'unstable': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cornerx = kwargs.get('cornerx', float())
        self.cornery = kwargs.get('cornery', float())
        self.distinlane = kwargs.get('distinlane', float())
        self.objcutinflag = kwargs.get('objcutinflag', int())
        self.objcutinlanetype = kwargs.get('objcutinlanetype', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')
        self.visionposx = kwargs.get('visionposx', float())
        self.visionposy = kwargs.get('visionposy', float())
        self.laneassignment = kwargs.get('laneassignment', int())
        self.iscipv = kwargs.get('iscipv', int())
        self.mtncatergory = kwargs.get('mtncatergory', int())
        self.mtnstatus = kwargs.get('mtnstatus', int())
        self.distconvergence = kwargs.get('distconvergence', int())
        self.coverdproperty = kwargs.get('coverdproperty', int())
        self.unstable = kwargs.get('unstable', int())

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
        if self.cornerx != other.cornerx:
            return False
        if self.cornery != other.cornery:
            return False
        if self.distinlane != other.distinlane:
            return False
        if self.objcutinflag != other.objcutinflag:
            return False
        if self.objcutinlanetype != other.objcutinlanetype:
            return False
        if any(self.reserved != other.reserved):
            return False
        if self.visionposx != other.visionposx:
            return False
        if self.visionposy != other.visionposy:
            return False
        if self.laneassignment != other.laneassignment:
            return False
        if self.iscipv != other.iscipv:
            return False
        if self.mtncatergory != other.mtncatergory:
            return False
        if self.mtnstatus != other.mtnstatus:
            return False
        if self.distconvergence != other.distconvergence:
            return False
        if self.coverdproperty != other.coverdproperty:
            return False
        if self.unstable != other.unstable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cornerx(self):
        """Message field 'cornerx'."""
        return self._cornerx

    @cornerx.setter
    def cornerx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cornerx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cornerx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cornerx = value

    @builtins.property
    def cornery(self):
        """Message field 'cornery'."""
        return self._cornery

    @cornery.setter
    def cornery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cornery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cornery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cornery = value

    @builtins.property
    def distinlane(self):
        """Message field 'distinlane'."""
        return self._distinlane

    @distinlane.setter
    def distinlane(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distinlane' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distinlane' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distinlane = value

    @builtins.property
    def objcutinflag(self):
        """Message field 'objcutinflag'."""
        return self._objcutinflag

    @objcutinflag.setter
    def objcutinflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objcutinflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'objcutinflag' field must be an unsigned integer in [0, 255]"
        self._objcutinflag = value

    @builtins.property
    def objcutinlanetype(self):
        """Message field 'objcutinlanetype'."""
        return self._objcutinlanetype

    @objcutinlanetype.setter
    def objcutinlanetype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objcutinlanetype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'objcutinlanetype' field must be an unsigned integer in [0, 255]"
        self._objcutinlanetype = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'reserved' numpy.ndarray() must have a size of 3"
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def visionposx(self):
        """Message field 'visionposx'."""
        return self._visionposx

    @visionposx.setter
    def visionposx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'visionposx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'visionposx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._visionposx = value

    @builtins.property
    def visionposy(self):
        """Message field 'visionposy'."""
        return self._visionposy

    @visionposy.setter
    def visionposy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'visionposy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'visionposy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._visionposy = value

    @builtins.property
    def laneassignment(self):
        """Message field 'laneassignment'."""
        return self._laneassignment

    @laneassignment.setter
    def laneassignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laneassignment' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'laneassignment' field must be an unsigned integer in [0, 255]"
        self._laneassignment = value

    @builtins.property
    def iscipv(self):
        """Message field 'iscipv'."""
        return self._iscipv

    @iscipv.setter
    def iscipv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iscipv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'iscipv' field must be an unsigned integer in [0, 255]"
        self._iscipv = value

    @builtins.property
    def mtncatergory(self):
        """Message field 'mtncatergory'."""
        return self._mtncatergory

    @mtncatergory.setter
    def mtncatergory(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mtncatergory' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mtncatergory' field must be an unsigned integer in [0, 255]"
        self._mtncatergory = value

    @builtins.property
    def mtnstatus(self):
        """Message field 'mtnstatus'."""
        return self._mtnstatus

    @mtnstatus.setter
    def mtnstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mtnstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mtnstatus' field must be an unsigned integer in [0, 255]"
        self._mtnstatus = value

    @builtins.property
    def distconvergence(self):
        """Message field 'distconvergence'."""
        return self._distconvergence

    @distconvergence.setter
    def distconvergence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distconvergence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'distconvergence' field must be an unsigned integer in [0, 255]"
        self._distconvergence = value

    @builtins.property
    def coverdproperty(self):
        """Message field 'coverdproperty'."""
        return self._coverdproperty

    @coverdproperty.setter
    def coverdproperty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coverdproperty' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'coverdproperty' field must be an unsigned integer in [0, 255]"
        self._coverdproperty = value

    @builtins.property
    def unstable(self):
        """Message field 'unstable'."""
        return self._unstable

    @unstable.setter
    def unstable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unstable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'unstable' field must be an unsigned integer in [0, 255]"
        self._unstable = value
