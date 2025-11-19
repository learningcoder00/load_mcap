# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionTFLListNOA(type):
    """Metaclass of message 'SFFusionTFLListNOA'."""

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
                'deva_perception_msgs.msg.SFFusionTFLListNOA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_tfl_list_noa
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_tfl_list_noa
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_tfl_list_noa
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_tfl_list_noa
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_tfl_list_noa

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_perception_msgs.msg import E2eTrafficDetPair
            if E2eTrafficDetPair.__class__._TYPE_SUPPORT is None:
                E2eTrafficDetPair.__class__.__import_type_support__()

            from deva_perception_msgs.msg import PoPFusionTFLNOA
            if PoPFusionTFLNOA.__class__._TYPE_SUPPORT is None:
                PoPFusionTFLNOA.__class__.__import_type_support__()

            from deva_perception_msgs.msg import PoPTFLNOA
            if PoPTFLNOA.__class__._TYPE_SUPPORT is None:
                PoPTFLNOA.__class__.__import_type_support__()

            from deva_perception_msgs.msg import SFFusionTFLNOA
            if SFFusionTFLNOA.__class__._TYPE_SUPPORT is None:
                SFFusionTFLNOA.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficE2eStablePair
            if TrafficE2eStablePair.__class__._TYPE_SUPPORT is None:
                TrafficE2eStablePair.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficRount
            if TrafficRount.__class__._TYPE_SUPPORT is None:
                TrafficRount.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionTFLListNOA(metaclass=Metaclass_SFFusionTFLListNOA):
    """Message class 'SFFusionTFLListNOA'."""

    __slots__ = [
        '_header',
        '_timestamp',
        '_framenum',
        '_tflcount',
        '_reserved',
        '_tfllist',
        '_validsize',
        '_tfllist_all',
        '_all_validsize',
        '_pop_tfllist',
        '_pop_lightnum',
        '_pop_fs_tfllist',
        '_pop_fs_lightnum',
        '_e2e_traffic_det_maps',
        '_tracked_traffic_e2e_stable_maps',
        '_tracked_traffic_e2ebc',
        '_tracked_traffic_e2ebc_stable',
        '_rount_info',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'tflcount': 'uint8',
        'reserved': 'uint8[2]',
        'tfllist': 'deva_perception_msgs/SFFusionTFLNOA[8]',
        'validsize': 'uint8',
        'tfllist_all': 'sequence<deva_perception_msgs/SFFusionTFLNOA>',
        'all_validsize': 'uint8',
        'pop_tfllist': 'deva_perception_msgs/PoPTFLNOA[8]',
        'pop_lightnum': 'uint8',
        'pop_fs_tfllist': 'deva_perception_msgs/PoPFusionTFLNOA[8]',
        'pop_fs_lightnum': 'uint8',
        'e2e_traffic_det_maps': 'sequence<deva_perception_msgs/E2eTrafficDetPair>',
        'tracked_traffic_e2e_stable_maps': 'sequence<deva_perception_msgs/TrafficE2eStablePair>',
        'tracked_traffic_e2ebc': 'uint8',
        'tracked_traffic_e2ebc_stable': 'boolean',
        'rount_info': 'deva_perception_msgs/TrafficRount',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'SFFusionTFLNOA'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'SFFusionTFLNOA')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'PoPTFLNOA'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'PoPFusionTFLNOA'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eTrafficDetPair')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficE2eStablePair')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRount'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        self.tflcount = kwargs.get('tflcount', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')
        from deva_perception_msgs.msg import SFFusionTFLNOA
        self.tfllist = kwargs.get(
            'tfllist',
            [SFFusionTFLNOA() for x in range(8)]
        )
        self.validsize = kwargs.get('validsize', int())
        self.tfllist_all = kwargs.get('tfllist_all', [])
        self.all_validsize = kwargs.get('all_validsize', int())
        from deva_perception_msgs.msg import PoPTFLNOA
        self.pop_tfllist = kwargs.get(
            'pop_tfllist',
            [PoPTFLNOA() for x in range(8)]
        )
        self.pop_lightnum = kwargs.get('pop_lightnum', int())
        from deva_perception_msgs.msg import PoPFusionTFLNOA
        self.pop_fs_tfllist = kwargs.get(
            'pop_fs_tfllist',
            [PoPFusionTFLNOA() for x in range(8)]
        )
        self.pop_fs_lightnum = kwargs.get('pop_fs_lightnum', int())
        self.e2e_traffic_det_maps = kwargs.get('e2e_traffic_det_maps', [])
        self.tracked_traffic_e2e_stable_maps = kwargs.get('tracked_traffic_e2e_stable_maps', [])
        self.tracked_traffic_e2ebc = kwargs.get('tracked_traffic_e2ebc', int())
        self.tracked_traffic_e2ebc_stable = kwargs.get('tracked_traffic_e2ebc_stable', bool())
        from deva_perception_msgs.msg import TrafficRount
        self.rount_info = kwargs.get('rount_info', TrafficRount())

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
        if self.header != other.header:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.framenum != other.framenum:
            return False
        if self.tflcount != other.tflcount:
            return False
        if any(self.reserved != other.reserved):
            return False
        if self.tfllist != other.tfllist:
            return False
        if self.validsize != other.validsize:
            return False
        if self.tfllist_all != other.tfllist_all:
            return False
        if self.all_validsize != other.all_validsize:
            return False
        if self.pop_tfllist != other.pop_tfllist:
            return False
        if self.pop_lightnum != other.pop_lightnum:
            return False
        if self.pop_fs_tfllist != other.pop_fs_tfllist:
            return False
        if self.pop_fs_lightnum != other.pop_fs_lightnum:
            return False
        if self.e2e_traffic_det_maps != other.e2e_traffic_det_maps:
            return False
        if self.tracked_traffic_e2e_stable_maps != other.tracked_traffic_e2e_stable_maps:
            return False
        if self.tracked_traffic_e2ebc != other.tracked_traffic_e2ebc:
            return False
        if self.tracked_traffic_e2ebc_stable != other.tracked_traffic_e2ebc_stable:
            return False
        if self.rount_info != other.rount_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def tflcount(self):
        """Message field 'tflcount'."""
        return self._tflcount

    @tflcount.setter
    def tflcount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tflcount' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tflcount' field must be an unsigned integer in [0, 255]"
        self._tflcount = value

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
    def tfllist(self):
        """Message field 'tfllist'."""
        return self._tfllist

    @tfllist.setter
    def tfllist(self, value):
        if __debug__:
            from deva_perception_msgs.msg import SFFusionTFLNOA
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
                 len(value) == 8 and
                 all(isinstance(v, SFFusionTFLNOA) for v in value) and
                 True), \
                "The 'tfllist' field must be a set or sequence with length 8 and each value of type 'SFFusionTFLNOA'"
        self._tfllist = value

    @builtins.property
    def validsize(self):
        """Message field 'validsize'."""
        return self._validsize

    @validsize.setter
    def validsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'validsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'validsize' field must be an unsigned integer in [0, 255]"
        self._validsize = value

    @builtins.property
    def tfllist_all(self):
        """Message field 'tfllist_all'."""
        return self._tfllist_all

    @tfllist_all.setter
    def tfllist_all(self, value):
        if __debug__:
            from deva_perception_msgs.msg import SFFusionTFLNOA
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
                 all(isinstance(v, SFFusionTFLNOA) for v in value) and
                 True), \
                "The 'tfllist_all' field must be a set or sequence and each value of type 'SFFusionTFLNOA'"
        self._tfllist_all = value

    @builtins.property
    def all_validsize(self):
        """Message field 'all_validsize'."""
        return self._all_validsize

    @all_validsize.setter
    def all_validsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'all_validsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'all_validsize' field must be an unsigned integer in [0, 255]"
        self._all_validsize = value

    @builtins.property
    def pop_tfllist(self):
        """Message field 'pop_tfllist'."""
        return self._pop_tfllist

    @pop_tfllist.setter
    def pop_tfllist(self, value):
        if __debug__:
            from deva_perception_msgs.msg import PoPTFLNOA
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
                 len(value) == 8 and
                 all(isinstance(v, PoPTFLNOA) for v in value) and
                 True), \
                "The 'pop_tfllist' field must be a set or sequence with length 8 and each value of type 'PoPTFLNOA'"
        self._pop_tfllist = value

    @builtins.property
    def pop_lightnum(self):
        """Message field 'pop_lightnum'."""
        return self._pop_lightnum

    @pop_lightnum.setter
    def pop_lightnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pop_lightnum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pop_lightnum' field must be an unsigned integer in [0, 255]"
        self._pop_lightnum = value

    @builtins.property
    def pop_fs_tfllist(self):
        """Message field 'pop_fs_tfllist'."""
        return self._pop_fs_tfllist

    @pop_fs_tfllist.setter
    def pop_fs_tfllist(self, value):
        if __debug__:
            from deva_perception_msgs.msg import PoPFusionTFLNOA
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
                 len(value) == 8 and
                 all(isinstance(v, PoPFusionTFLNOA) for v in value) and
                 True), \
                "The 'pop_fs_tfllist' field must be a set or sequence with length 8 and each value of type 'PoPFusionTFLNOA'"
        self._pop_fs_tfllist = value

    @builtins.property
    def pop_fs_lightnum(self):
        """Message field 'pop_fs_lightnum'."""
        return self._pop_fs_lightnum

    @pop_fs_lightnum.setter
    def pop_fs_lightnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pop_fs_lightnum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pop_fs_lightnum' field must be an unsigned integer in [0, 255]"
        self._pop_fs_lightnum = value

    @builtins.property
    def e2e_traffic_det_maps(self):
        """Message field 'e2e_traffic_det_maps'."""
        return self._e2e_traffic_det_maps

    @e2e_traffic_det_maps.setter
    def e2e_traffic_det_maps(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eTrafficDetPair
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
                 all(isinstance(v, E2eTrafficDetPair) for v in value) and
                 True), \
                "The 'e2e_traffic_det_maps' field must be a set or sequence and each value of type 'E2eTrafficDetPair'"
        self._e2e_traffic_det_maps = value

    @builtins.property
    def tracked_traffic_e2e_stable_maps(self):
        """Message field 'tracked_traffic_e2e_stable_maps'."""
        return self._tracked_traffic_e2e_stable_maps

    @tracked_traffic_e2e_stable_maps.setter
    def tracked_traffic_e2e_stable_maps(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficE2eStablePair
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
                 all(isinstance(v, TrafficE2eStablePair) for v in value) and
                 True), \
                "The 'tracked_traffic_e2e_stable_maps' field must be a set or sequence and each value of type 'TrafficE2eStablePair'"
        self._tracked_traffic_e2e_stable_maps = value

    @builtins.property
    def tracked_traffic_e2ebc(self):
        """Message field 'tracked_traffic_e2ebc'."""
        return self._tracked_traffic_e2ebc

    @tracked_traffic_e2ebc.setter
    def tracked_traffic_e2ebc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracked_traffic_e2ebc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracked_traffic_e2ebc' field must be an unsigned integer in [0, 255]"
        self._tracked_traffic_e2ebc = value

    @builtins.property
    def tracked_traffic_e2ebc_stable(self):
        """Message field 'tracked_traffic_e2ebc_stable'."""
        return self._tracked_traffic_e2ebc_stable

    @tracked_traffic_e2ebc_stable.setter
    def tracked_traffic_e2ebc_stable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tracked_traffic_e2ebc_stable' field must be of type 'bool'"
        self._tracked_traffic_e2ebc_stable = value

    @builtins.property
    def rount_info(self):
        """Message field 'rount_info'."""
        return self._rount_info

    @rount_info.setter
    def rount_info(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRount
            assert \
                isinstance(value, TrafficRount), \
                "The 'rount_info' field must be a sub message of type 'TrafficRount'"
        self._rount_info = value
