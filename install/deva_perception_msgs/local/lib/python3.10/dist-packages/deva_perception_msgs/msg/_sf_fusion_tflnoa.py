# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'type_list'
# Member 'color_list'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionTFLNOA(type):
    """Metaclass of message 'SFFusionTFLNOA'."""

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
                'deva_perception_msgs.msg.SFFusionTFLNOA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_tflnoa
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_tflnoa
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_tflnoa
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_tflnoa
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_tflnoa

            from deva_perception_msgs.msg import QuadrangleImg
            if QuadrangleImg.__class__._TYPE_SUPPORT is None:
                QuadrangleImg.__class__.__import_type_support__()

            from deva_perception_msgs.msg import QuadrangleVcs
            if QuadrangleVcs.__class__._TYPE_SUPPORT is None:
                QuadrangleVcs.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficRegion
            if TrafficRegion.__class__._TYPE_SUPPORT is None:
                TrafficRegion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionTFLNOA(metaclass=Metaclass_SFFusionTFLNOA):
    """Message class 'SFFusionTFLNOA'."""

    __slots__ = [
        '_id',
        '_lifetime',
        '_relevancy',
        '_type',
        '_color',
        '_cycle_time',
        '_number',
        '_confi',
        '_flashstatus',
        '_background',
        '_reserved',
        '_poslgt',
        '_poslat',
        '_height',
        '_region',
        '_tflquadranglevcs',
        '_tflquadrangleimg',
        '_utmx',
        '_utmy',
        '_utmz',
        '_type_list',
        '_color_list',
        '_blocked',
        '_has_count_down',
        '_light_num',
        '_focus',
        '_pole',
        '_sync_from_track_id',
        '_source',
        '_f120_region',
        '_f30_region',
        '_i_back1',
        '_i_back2',
        '_i_back3',
        '_f_back1',
        '_f_back2',
        '_f_back3',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'lifetime': 'uint32',
        'relevancy': 'uint8',
        'type': 'uint8',
        'color': 'uint8',
        'cycle_time': 'uint8',
        'number': 'uint8',
        'confi': 'uint8',
        'flashstatus': 'uint8',
        'background': 'uint8',
        'reserved': 'uint8',
        'poslgt': 'float',
        'poslat': 'float',
        'height': 'float',
        'region': 'deva_perception_msgs/TrafficRegion',
        'tflquadranglevcs': 'deva_perception_msgs/QuadrangleVcs',
        'tflquadrangleimg': 'deva_perception_msgs/QuadrangleImg',
        'utmx': 'float',
        'utmy': 'float',
        'utmz': 'float',
        'type_list': 'uint8[4]',
        'color_list': 'uint8[4]',
        'blocked': 'uint8',
        'has_count_down': 'uint8',
        'light_num': 'uint8',
        'focus': 'uint8',
        'pole': 'int8',
        'sync_from_track_id': 'int64',
        'source': 'uint8',
        'f120_region': 'deva_perception_msgs/TrafficRegion',
        'f30_region': 'deva_perception_msgs/TrafficRegion',
        'i_back1': 'uint8',
        'i_back2': 'uint8',
        'i_back3': 'uint8',
        'f_back1': 'float',
        'f_back2': 'float',
        'f_back3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'QuadrangleVcs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'QuadrangleImg'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
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
        self.lifetime = kwargs.get('lifetime', int())
        self.relevancy = kwargs.get('relevancy', int())
        self.type = kwargs.get('type', int())
        self.color = kwargs.get('color', int())
        self.cycle_time = kwargs.get('cycle_time', int())
        self.number = kwargs.get('number', int())
        self.confi = kwargs.get('confi', int())
        self.flashstatus = kwargs.get('flashstatus', int())
        self.background = kwargs.get('background', int())
        self.reserved = kwargs.get('reserved', int())
        self.poslgt = kwargs.get('poslgt', float())
        self.poslat = kwargs.get('poslat', float())
        self.height = kwargs.get('height', float())
        from deva_perception_msgs.msg import TrafficRegion
        self.region = kwargs.get('region', TrafficRegion())
        from deva_perception_msgs.msg import QuadrangleVcs
        self.tflquadranglevcs = kwargs.get('tflquadranglevcs', QuadrangleVcs())
        from deva_perception_msgs.msg import QuadrangleImg
        self.tflquadrangleimg = kwargs.get('tflquadrangleimg', QuadrangleImg())
        self.utmx = kwargs.get('utmx', float())
        self.utmy = kwargs.get('utmy', float())
        self.utmz = kwargs.get('utmz', float())
        if 'type_list' not in kwargs:
            self.type_list = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.type_list = kwargs.get('type_list')
        if 'color_list' not in kwargs:
            self.color_list = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.color_list = kwargs.get('color_list')
        self.blocked = kwargs.get('blocked', int())
        self.has_count_down = kwargs.get('has_count_down', int())
        self.light_num = kwargs.get('light_num', int())
        self.focus = kwargs.get('focus', int())
        self.pole = kwargs.get('pole', int())
        self.sync_from_track_id = kwargs.get('sync_from_track_id', int())
        self.source = kwargs.get('source', int())
        from deva_perception_msgs.msg import TrafficRegion
        self.f120_region = kwargs.get('f120_region', TrafficRegion())
        from deva_perception_msgs.msg import TrafficRegion
        self.f30_region = kwargs.get('f30_region', TrafficRegion())
        self.i_back1 = kwargs.get('i_back1', int())
        self.i_back2 = kwargs.get('i_back2', int())
        self.i_back3 = kwargs.get('i_back3', int())
        self.f_back1 = kwargs.get('f_back1', float())
        self.f_back2 = kwargs.get('f_back2', float())
        self.f_back3 = kwargs.get('f_back3', float())

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
        if self.relevancy != other.relevancy:
            return False
        if self.type != other.type:
            return False
        if self.color != other.color:
            return False
        if self.cycle_time != other.cycle_time:
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
        if self.height != other.height:
            return False
        if self.region != other.region:
            return False
        if self.tflquadranglevcs != other.tflquadranglevcs:
            return False
        if self.tflquadrangleimg != other.tflquadrangleimg:
            return False
        if self.utmx != other.utmx:
            return False
        if self.utmy != other.utmy:
            return False
        if self.utmz != other.utmz:
            return False
        if any(self.type_list != other.type_list):
            return False
        if any(self.color_list != other.color_list):
            return False
        if self.blocked != other.blocked:
            return False
        if self.has_count_down != other.has_count_down:
            return False
        if self.light_num != other.light_num:
            return False
        if self.focus != other.focus:
            return False
        if self.pole != other.pole:
            return False
        if self.sync_from_track_id != other.sync_from_track_id:
            return False
        if self.source != other.source:
            return False
        if self.f120_region != other.f120_region:
            return False
        if self.f30_region != other.f30_region:
            return False
        if self.i_back1 != other.i_back1:
            return False
        if self.i_back2 != other.i_back2:
            return False
        if self.i_back3 != other.i_back3:
            return False
        if self.f_back1 != other.f_back1:
            return False
        if self.f_back2 != other.f_back2:
            return False
        if self.f_back3 != other.f_back3:
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
    def cycle_time(self):
        """Message field 'cycle_time'."""
        return self._cycle_time

    @cycle_time.setter
    def cycle_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cycle_time' field must be an unsigned integer in [0, 255]"
        self._cycle_time = value

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
    def region(self):
        """Message field 'region'."""
        return self._region

    @region.setter
    def region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'region' field must be a sub message of type 'TrafficRegion'"
        self._region = value

    @builtins.property
    def tflquadranglevcs(self):
        """Message field 'tflquadranglevcs'."""
        return self._tflquadranglevcs

    @tflquadranglevcs.setter
    def tflquadranglevcs(self, value):
        if __debug__:
            from deva_perception_msgs.msg import QuadrangleVcs
            assert \
                isinstance(value, QuadrangleVcs), \
                "The 'tflquadranglevcs' field must be a sub message of type 'QuadrangleVcs'"
        self._tflquadranglevcs = value

    @builtins.property
    def tflquadrangleimg(self):
        """Message field 'tflquadrangleimg'."""
        return self._tflquadrangleimg

    @tflquadrangleimg.setter
    def tflquadrangleimg(self, value):
        if __debug__:
            from deva_perception_msgs.msg import QuadrangleImg
            assert \
                isinstance(value, QuadrangleImg), \
                "The 'tflquadrangleimg' field must be a sub message of type 'QuadrangleImg'"
        self._tflquadrangleimg = value

    @builtins.property
    def utmx(self):
        """Message field 'utmx'."""
        return self._utmx

    @utmx.setter
    def utmx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'utmx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'utmx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._utmx = value

    @builtins.property
    def utmy(self):
        """Message field 'utmy'."""
        return self._utmy

    @utmy.setter
    def utmy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'utmy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'utmy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._utmy = value

    @builtins.property
    def utmz(self):
        """Message field 'utmz'."""
        return self._utmz

    @utmz.setter
    def utmz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'utmz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'utmz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._utmz = value

    @builtins.property
    def type_list(self):
        """Message field 'type_list'."""
        return self._type_list

    @type_list.setter
    def type_list(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'type_list' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'type_list' numpy.ndarray() must have a size of 4"
            self._type_list = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'type_list' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._type_list = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def color_list(self):
        """Message field 'color_list'."""
        return self._color_list

    @color_list.setter
    def color_list(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'color_list' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'color_list' numpy.ndarray() must have a size of 4"
            self._color_list = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'color_list' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._color_list = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def blocked(self):
        """Message field 'blocked'."""
        return self._blocked

    @blocked.setter
    def blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blocked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blocked' field must be an unsigned integer in [0, 255]"
        self._blocked = value

    @builtins.property
    def has_count_down(self):
        """Message field 'has_count_down'."""
        return self._has_count_down

    @has_count_down.setter
    def has_count_down(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'has_count_down' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'has_count_down' field must be an unsigned integer in [0, 255]"
        self._has_count_down = value

    @builtins.property
    def light_num(self):
        """Message field 'light_num'."""
        return self._light_num

    @light_num.setter
    def light_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'light_num' field must be an unsigned integer in [0, 255]"
        self._light_num = value

    @builtins.property
    def focus(self):
        """Message field 'focus'."""
        return self._focus

    @focus.setter
    def focus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'focus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'focus' field must be an unsigned integer in [0, 255]"
        self._focus = value

    @builtins.property
    def pole(self):
        """Message field 'pole'."""
        return self._pole

    @pole.setter
    def pole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pole' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pole' field must be an integer in [-128, 127]"
        self._pole = value

    @builtins.property
    def sync_from_track_id(self):
        """Message field 'sync_from_track_id'."""
        return self._sync_from_track_id

    @sync_from_track_id.setter
    def sync_from_track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sync_from_track_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sync_from_track_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sync_from_track_id = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def f120_region(self):
        """Message field 'f120_region'."""
        return self._f120_region

    @f120_region.setter
    def f120_region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'f120_region' field must be a sub message of type 'TrafficRegion'"
        self._f120_region = value

    @builtins.property
    def f30_region(self):
        """Message field 'f30_region'."""
        return self._f30_region

    @f30_region.setter
    def f30_region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'f30_region' field must be a sub message of type 'TrafficRegion'"
        self._f30_region = value

    @builtins.property
    def i_back1(self):
        """Message field 'i_back1'."""
        return self._i_back1

    @i_back1.setter
    def i_back1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i_back1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'i_back1' field must be an unsigned integer in [0, 255]"
        self._i_back1 = value

    @builtins.property
    def i_back2(self):
        """Message field 'i_back2'."""
        return self._i_back2

    @i_back2.setter
    def i_back2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i_back2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'i_back2' field must be an unsigned integer in [0, 255]"
        self._i_back2 = value

    @builtins.property
    def i_back3(self):
        """Message field 'i_back3'."""
        return self._i_back3

    @i_back3.setter
    def i_back3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i_back3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'i_back3' field must be an unsigned integer in [0, 255]"
        self._i_back3 = value

    @builtins.property
    def f_back1(self):
        """Message field 'f_back1'."""
        return self._f_back1

    @f_back1.setter
    def f_back1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_back1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_back1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_back1 = value

    @builtins.property
    def f_back2(self):
        """Message field 'f_back2'."""
        return self._f_back2

    @f_back2.setter
    def f_back2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_back2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_back2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_back2 = value

    @builtins.property
    def f_back3(self):
        """Message field 'f_back3'."""
        return self._f_back3

    @f_back3.setter
    def f_back3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_back3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_back3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_back3 = value
