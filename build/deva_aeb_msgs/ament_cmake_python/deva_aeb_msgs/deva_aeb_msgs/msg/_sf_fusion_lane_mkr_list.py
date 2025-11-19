# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionLaneMkrList(type):
    """Metaclass of message 'SFFusionLaneMkrList'."""

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
                'deva_aeb_msgs.msg.SFFusionLaneMkrList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_lane_mkr_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_lane_mkr_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_lane_mkr_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_lane_mkr_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_lane_mkr_list

            from deva_aeb_msgs.msg import LaneFstInfo
            if LaneFstInfo.__class__._TYPE_SUPPORT is None:
                LaneFstInfo.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import LaneSecInfo
            if LaneSecInfo.__class__._TYPE_SUPPORT is None:
                LaneSecInfo.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import RearLaneInfo
            if RearLaneInfo.__class__._TYPE_SUPPORT is None:
                RearLaneInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionLaneMkrList(metaclass=Metaclass_SFFusionLaneMkrList):
    """Message class 'SFFusionLaneMkrList'."""

    __slots__ = [
        '_timestamp',
        '_framenum',
        '_lanechg',
        '_reserved',
        '_distostopline',
        '_clsle',
        '_clsri',
        '_secclsle',
        '_secclsri',
        '_thiclsle',
        '_thiclsri',
        '_rearclsle',
        '_rearclsri',
        '_rearsecclsle',
        '_rearsecclsri',
        '_rearthiclsle',
        '_rearthiclsri',
        '_isambiguouslinepatternleft',
        '_isambiguouslinepatternright',
        '_cmpforvisnyaw',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'lanechg': 'uint8',
        'reserved': 'uint8',
        'distostopline': 'float',
        'clsle': 'deva_aeb_msgs/LaneFstInfo',
        'clsri': 'deva_aeb_msgs/LaneFstInfo',
        'secclsle': 'deva_aeb_msgs/LaneSecInfo',
        'secclsri': 'deva_aeb_msgs/LaneSecInfo',
        'thiclsle': 'deva_aeb_msgs/LaneSecInfo',
        'thiclsri': 'deva_aeb_msgs/LaneSecInfo',
        'rearclsle': 'deva_aeb_msgs/RearLaneInfo',
        'rearclsri': 'deva_aeb_msgs/RearLaneInfo',
        'rearsecclsle': 'deva_aeb_msgs/RearLaneInfo',
        'rearsecclsri': 'deva_aeb_msgs/RearLaneInfo',
        'rearthiclsle': 'deva_aeb_msgs/RearLaneInfo',
        'rearthiclsri': 'deva_aeb_msgs/RearLaneInfo',
        'isambiguouslinepatternleft': 'uint8',
        'isambiguouslinepatternright': 'uint8',
        'cmpforvisnyaw': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneFstInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneFstInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneSecInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneSecInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneSecInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'LaneSecInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RearLaneInfo'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        self.lanechg = kwargs.get('lanechg', int())
        self.reserved = kwargs.get('reserved', int())
        self.distostopline = kwargs.get('distostopline', float())
        from deva_aeb_msgs.msg import LaneFstInfo
        self.clsle = kwargs.get('clsle', LaneFstInfo())
        from deva_aeb_msgs.msg import LaneFstInfo
        self.clsri = kwargs.get('clsri', LaneFstInfo())
        from deva_aeb_msgs.msg import LaneSecInfo
        self.secclsle = kwargs.get('secclsle', LaneSecInfo())
        from deva_aeb_msgs.msg import LaneSecInfo
        self.secclsri = kwargs.get('secclsri', LaneSecInfo())
        from deva_aeb_msgs.msg import LaneSecInfo
        self.thiclsle = kwargs.get('thiclsle', LaneSecInfo())
        from deva_aeb_msgs.msg import LaneSecInfo
        self.thiclsri = kwargs.get('thiclsri', LaneSecInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearclsle = kwargs.get('rearclsle', RearLaneInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearclsri = kwargs.get('rearclsri', RearLaneInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearsecclsle = kwargs.get('rearsecclsle', RearLaneInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearsecclsri = kwargs.get('rearsecclsri', RearLaneInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearthiclsle = kwargs.get('rearthiclsle', RearLaneInfo())
        from deva_aeb_msgs.msg import RearLaneInfo
        self.rearthiclsri = kwargs.get('rearthiclsri', RearLaneInfo())
        self.isambiguouslinepatternleft = kwargs.get('isambiguouslinepatternleft', int())
        self.isambiguouslinepatternright = kwargs.get('isambiguouslinepatternright', int())
        self.cmpforvisnyaw = kwargs.get('cmpforvisnyaw', float())

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
        if self.lanechg != other.lanechg:
            return False
        if self.reserved != other.reserved:
            return False
        if self.distostopline != other.distostopline:
            return False
        if self.clsle != other.clsle:
            return False
        if self.clsri != other.clsri:
            return False
        if self.secclsle != other.secclsle:
            return False
        if self.secclsri != other.secclsri:
            return False
        if self.thiclsle != other.thiclsle:
            return False
        if self.thiclsri != other.thiclsri:
            return False
        if self.rearclsle != other.rearclsle:
            return False
        if self.rearclsri != other.rearclsri:
            return False
        if self.rearsecclsle != other.rearsecclsle:
            return False
        if self.rearsecclsri != other.rearsecclsri:
            return False
        if self.rearthiclsle != other.rearthiclsle:
            return False
        if self.rearthiclsri != other.rearthiclsri:
            return False
        if self.isambiguouslinepatternleft != other.isambiguouslinepatternleft:
            return False
        if self.isambiguouslinepatternright != other.isambiguouslinepatternright:
            return False
        if self.cmpforvisnyaw != other.cmpforvisnyaw:
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
    def lanechg(self):
        """Message field 'lanechg'."""
        return self._lanechg

    @lanechg.setter
    def lanechg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanechg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanechg' field must be an unsigned integer in [0, 255]"
        self._lanechg = value

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
    def distostopline(self):
        """Message field 'distostopline'."""
        return self._distostopline

    @distostopline.setter
    def distostopline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distostopline' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distostopline' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distostopline = value

    @builtins.property
    def clsle(self):
        """Message field 'clsle'."""
        return self._clsle

    @clsle.setter
    def clsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneFstInfo
            assert \
                isinstance(value, LaneFstInfo), \
                "The 'clsle' field must be a sub message of type 'LaneFstInfo'"
        self._clsle = value

    @builtins.property
    def clsri(self):
        """Message field 'clsri'."""
        return self._clsri

    @clsri.setter
    def clsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneFstInfo
            assert \
                isinstance(value, LaneFstInfo), \
                "The 'clsri' field must be a sub message of type 'LaneFstInfo'"
        self._clsri = value

    @builtins.property
    def secclsle(self):
        """Message field 'secclsle'."""
        return self._secclsle

    @secclsle.setter
    def secclsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneSecInfo
            assert \
                isinstance(value, LaneSecInfo), \
                "The 'secclsle' field must be a sub message of type 'LaneSecInfo'"
        self._secclsle = value

    @builtins.property
    def secclsri(self):
        """Message field 'secclsri'."""
        return self._secclsri

    @secclsri.setter
    def secclsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneSecInfo
            assert \
                isinstance(value, LaneSecInfo), \
                "The 'secclsri' field must be a sub message of type 'LaneSecInfo'"
        self._secclsri = value

    @builtins.property
    def thiclsle(self):
        """Message field 'thiclsle'."""
        return self._thiclsle

    @thiclsle.setter
    def thiclsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneSecInfo
            assert \
                isinstance(value, LaneSecInfo), \
                "The 'thiclsle' field must be a sub message of type 'LaneSecInfo'"
        self._thiclsle = value

    @builtins.property
    def thiclsri(self):
        """Message field 'thiclsri'."""
        return self._thiclsri

    @thiclsri.setter
    def thiclsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import LaneSecInfo
            assert \
                isinstance(value, LaneSecInfo), \
                "The 'thiclsri' field must be a sub message of type 'LaneSecInfo'"
        self._thiclsri = value

    @builtins.property
    def rearclsle(self):
        """Message field 'rearclsle'."""
        return self._rearclsle

    @rearclsle.setter
    def rearclsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearclsle' field must be a sub message of type 'RearLaneInfo'"
        self._rearclsle = value

    @builtins.property
    def rearclsri(self):
        """Message field 'rearclsri'."""
        return self._rearclsri

    @rearclsri.setter
    def rearclsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearclsri' field must be a sub message of type 'RearLaneInfo'"
        self._rearclsri = value

    @builtins.property
    def rearsecclsle(self):
        """Message field 'rearsecclsle'."""
        return self._rearsecclsle

    @rearsecclsle.setter
    def rearsecclsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearsecclsle' field must be a sub message of type 'RearLaneInfo'"
        self._rearsecclsle = value

    @builtins.property
    def rearsecclsri(self):
        """Message field 'rearsecclsri'."""
        return self._rearsecclsri

    @rearsecclsri.setter
    def rearsecclsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearsecclsri' field must be a sub message of type 'RearLaneInfo'"
        self._rearsecclsri = value

    @builtins.property
    def rearthiclsle(self):
        """Message field 'rearthiclsle'."""
        return self._rearthiclsle

    @rearthiclsle.setter
    def rearthiclsle(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearthiclsle' field must be a sub message of type 'RearLaneInfo'"
        self._rearthiclsle = value

    @builtins.property
    def rearthiclsri(self):
        """Message field 'rearthiclsri'."""
        return self._rearthiclsri

    @rearthiclsri.setter
    def rearthiclsri(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RearLaneInfo
            assert \
                isinstance(value, RearLaneInfo), \
                "The 'rearthiclsri' field must be a sub message of type 'RearLaneInfo'"
        self._rearthiclsri = value

    @builtins.property
    def isambiguouslinepatternleft(self):
        """Message field 'isambiguouslinepatternleft'."""
        return self._isambiguouslinepatternleft

    @isambiguouslinepatternleft.setter
    def isambiguouslinepatternleft(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'isambiguouslinepatternleft' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'isambiguouslinepatternleft' field must be an unsigned integer in [0, 255]"
        self._isambiguouslinepatternleft = value

    @builtins.property
    def isambiguouslinepatternright(self):
        """Message field 'isambiguouslinepatternright'."""
        return self._isambiguouslinepatternright

    @isambiguouslinepatternright.setter
    def isambiguouslinepatternright(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'isambiguouslinepatternright' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'isambiguouslinepatternright' field must be an unsigned integer in [0, 255]"
        self._isambiguouslinepatternright = value

    @builtins.property
    def cmpforvisnyaw(self):
        """Message field 'cmpforvisnyaw'."""
        return self._cmpforvisnyaw

    @cmpforvisnyaw.setter
    def cmpforvisnyaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cmpforvisnyaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmpforvisnyaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmpforvisnyaw = value
