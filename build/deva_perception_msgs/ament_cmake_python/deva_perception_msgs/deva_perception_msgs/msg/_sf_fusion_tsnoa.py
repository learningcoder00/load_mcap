# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionTSNOA(type):
    """Metaclass of message 'SFFusionTSNOA'."""

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
                'deva_perception_msgs.msg.SFFusionTSNOA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_tsnoa
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_tsnoa
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_tsnoa
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_tsnoa
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_tsnoa

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


class SFFusionTSNOA(metaclass=Metaclass_SFFusionTSNOA):
    """Message class 'SFFusionTSNOA'."""

    __slots__ = [
        '_id',
        '_dstlgttoeve',
        '_dstlattoeve',
        '_height',
        '_direction',
        '_electcsgn',
        '_lanelocn',
        '_locn',
        '_rlvc',
        '_notrlvres',
        '_qly',
        '_typ',
        '_val',
        '_is_ramp',
        '_region',
        '_reserved',
        '_spplinfoval',
        '_spplinfotype',
        '_tsquadranglevcs',
        '_tsquadrangleimg',
        '_utmx',
        '_utmy',
        '_utmz',
        '_pole',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'dstlgttoeve': 'float',
        'dstlattoeve': 'float',
        'height': 'float',
        'direction': 'float',
        'electcsgn': 'uint8',
        'lanelocn': 'uint8',
        'locn': 'uint8',
        'rlvc': 'uint8',
        'notrlvres': 'uint8',
        'qly': 'uint8',
        'typ': 'uint8',
        'val': 'uint8',
        'is_ramp': 'boolean',
        'region': 'deva_perception_msgs/TrafficRegion',
        'reserved': 'uint8',
        'spplinfoval': 'uint16',
        'spplinfotype': 'uint8',
        'tsquadranglevcs': 'deva_perception_msgs/QuadrangleVcs',
        'tsquadrangleimg': 'deva_perception_msgs/QuadrangleImg',
        'utmx': 'float',
        'utmy': 'float',
        'utmz': 'float',
        'pole': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'QuadrangleVcs'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'QuadrangleImg'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.dstlgttoeve = kwargs.get('dstlgttoeve', float())
        self.dstlattoeve = kwargs.get('dstlattoeve', float())
        self.height = kwargs.get('height', float())
        self.direction = kwargs.get('direction', float())
        self.electcsgn = kwargs.get('electcsgn', int())
        self.lanelocn = kwargs.get('lanelocn', int())
        self.locn = kwargs.get('locn', int())
        self.rlvc = kwargs.get('rlvc', int())
        self.notrlvres = kwargs.get('notrlvres', int())
        self.qly = kwargs.get('qly', int())
        self.typ = kwargs.get('typ', int())
        self.val = kwargs.get('val', int())
        self.is_ramp = kwargs.get('is_ramp', bool())
        from deva_perception_msgs.msg import TrafficRegion
        self.region = kwargs.get('region', TrafficRegion())
        self.reserved = kwargs.get('reserved', int())
        self.spplinfoval = kwargs.get('spplinfoval', int())
        self.spplinfotype = kwargs.get('spplinfotype', int())
        from deva_perception_msgs.msg import QuadrangleVcs
        self.tsquadranglevcs = kwargs.get('tsquadranglevcs', QuadrangleVcs())
        from deva_perception_msgs.msg import QuadrangleImg
        self.tsquadrangleimg = kwargs.get('tsquadrangleimg', QuadrangleImg())
        self.utmx = kwargs.get('utmx', float())
        self.utmy = kwargs.get('utmy', float())
        self.utmz = kwargs.get('utmz', float())
        self.pole = kwargs.get('pole', int())

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
        if self.dstlgttoeve != other.dstlgttoeve:
            return False
        if self.dstlattoeve != other.dstlattoeve:
            return False
        if self.height != other.height:
            return False
        if self.direction != other.direction:
            return False
        if self.electcsgn != other.electcsgn:
            return False
        if self.lanelocn != other.lanelocn:
            return False
        if self.locn != other.locn:
            return False
        if self.rlvc != other.rlvc:
            return False
        if self.notrlvres != other.notrlvres:
            return False
        if self.qly != other.qly:
            return False
        if self.typ != other.typ:
            return False
        if self.val != other.val:
            return False
        if self.is_ramp != other.is_ramp:
            return False
        if self.region != other.region:
            return False
        if self.reserved != other.reserved:
            return False
        if self.spplinfoval != other.spplinfoval:
            return False
        if self.spplinfotype != other.spplinfotype:
            return False
        if self.tsquadranglevcs != other.tsquadranglevcs:
            return False
        if self.tsquadrangleimg != other.tsquadrangleimg:
            return False
        if self.utmx != other.utmx:
            return False
        if self.utmy != other.utmy:
            return False
        if self.utmz != other.utmz:
            return False
        if self.pole != other.pole:
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
    def dstlgttoeve(self):
        """Message field 'dstlgttoeve'."""
        return self._dstlgttoeve

    @dstlgttoeve.setter
    def dstlgttoeve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dstlgttoeve' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dstlgttoeve' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dstlgttoeve = value

    @builtins.property
    def dstlattoeve(self):
        """Message field 'dstlattoeve'."""
        return self._dstlattoeve

    @dstlattoeve.setter
    def dstlattoeve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dstlattoeve' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dstlattoeve' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dstlattoeve = value

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
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'direction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'direction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._direction = value

    @builtins.property
    def electcsgn(self):
        """Message field 'electcsgn'."""
        return self._electcsgn

    @electcsgn.setter
    def electcsgn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'electcsgn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'electcsgn' field must be an unsigned integer in [0, 255]"
        self._electcsgn = value

    @builtins.property
    def lanelocn(self):
        """Message field 'lanelocn'."""
        return self._lanelocn

    @lanelocn.setter
    def lanelocn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelocn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanelocn' field must be an unsigned integer in [0, 255]"
        self._lanelocn = value

    @builtins.property
    def locn(self):
        """Message field 'locn'."""
        return self._locn

    @locn.setter
    def locn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'locn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'locn' field must be an unsigned integer in [0, 255]"
        self._locn = value

    @builtins.property
    def rlvc(self):
        """Message field 'rlvc'."""
        return self._rlvc

    @rlvc.setter
    def rlvc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rlvc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rlvc' field must be an unsigned integer in [0, 255]"
        self._rlvc = value

    @builtins.property
    def notrlvres(self):
        """Message field 'notrlvres'."""
        return self._notrlvres

    @notrlvres.setter
    def notrlvres(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'notrlvres' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'notrlvres' field must be an unsigned integer in [0, 255]"
        self._notrlvres = value

    @builtins.property
    def qly(self):
        """Message field 'qly'."""
        return self._qly

    @qly.setter
    def qly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qly' field must be an unsigned integer in [0, 255]"
        self._qly = value

    @builtins.property
    def typ(self):
        """Message field 'typ'."""
        return self._typ

    @typ.setter
    def typ(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'typ' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'typ' field must be an unsigned integer in [0, 255]"
        self._typ = value

    @builtins.property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'val' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'val' field must be an unsigned integer in [0, 255]"
        self._val = value

    @builtins.property
    def is_ramp(self):
        """Message field 'is_ramp'."""
        return self._is_ramp

    @is_ramp.setter
    def is_ramp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ramp' field must be of type 'bool'"
        self._is_ramp = value

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
    def spplinfoval(self):
        """Message field 'spplinfoval'."""
        return self._spplinfoval

    @spplinfoval.setter
    def spplinfoval(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spplinfoval' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'spplinfoval' field must be an unsigned integer in [0, 65535]"
        self._spplinfoval = value

    @builtins.property
    def spplinfotype(self):
        """Message field 'spplinfotype'."""
        return self._spplinfotype

    @spplinfotype.setter
    def spplinfotype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spplinfotype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spplinfotype' field must be an unsigned integer in [0, 255]"
        self._spplinfotype = value

    @builtins.property
    def tsquadranglevcs(self):
        """Message field 'tsquadranglevcs'."""
        return self._tsquadranglevcs

    @tsquadranglevcs.setter
    def tsquadranglevcs(self, value):
        if __debug__:
            from deva_perception_msgs.msg import QuadrangleVcs
            assert \
                isinstance(value, QuadrangleVcs), \
                "The 'tsquadranglevcs' field must be a sub message of type 'QuadrangleVcs'"
        self._tsquadranglevcs = value

    @builtins.property
    def tsquadrangleimg(self):
        """Message field 'tsquadrangleimg'."""
        return self._tsquadrangleimg

    @tsquadrangleimg.setter
    def tsquadrangleimg(self, value):
        if __debug__:
            from deva_perception_msgs.msg import QuadrangleImg
            assert \
                isinstance(value, QuadrangleImg), \
                "The 'tsquadrangleimg' field must be a sub message of type 'QuadrangleImg'"
        self._tsquadrangleimg = value

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
    def pole(self):
        """Message field 'pole'."""
        return self._pole

    @pole.setter
    def pole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pole' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pole' field must be an unsigned integer in [0, 4294967295]"
        self._pole = value
