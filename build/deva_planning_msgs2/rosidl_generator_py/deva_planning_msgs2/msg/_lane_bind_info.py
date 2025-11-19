# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/LaneBindInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'scalable_flags'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneBindInfo(type):
    """Metaclass of message 'LaneBindInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BIND_ONLANE_BLOCK': 1,
        'BIND_ONLANE_NOT_BLOCK': 2,
        'BIND_CUTIN': 3,
        'BIND_CUTOUT': 4,
        'BIND_CROSS': 5,
        'BIND_NEAR': 6,
        'BIND_NUDGE': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.LaneBindInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_bind_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_bind_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_bind_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_bind_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_bind_info

            from deva_planning_msgs2.msg import String2SLBoundary
            if String2SLBoundary.__class__._TYPE_SUPPORT is None:
                String2SLBoundary.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import String2String
            if String2String.__class__._TYPE_SUPPORT is None:
                String2String.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import UInt2String
            if UInt2String.__class__._TYPE_SUPPORT is None:
                UInt2String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BIND_ONLANE_BLOCK': cls.__constants['BIND_ONLANE_BLOCK'],
            'BIND_ONLANE_NOT_BLOCK': cls.__constants['BIND_ONLANE_NOT_BLOCK'],
            'BIND_CUTIN': cls.__constants['BIND_CUTIN'],
            'BIND_CUTOUT': cls.__constants['BIND_CUTOUT'],
            'BIND_CROSS': cls.__constants['BIND_CROSS'],
            'BIND_NEAR': cls.__constants['BIND_NEAR'],
            'BIND_NUDGE': cls.__constants['BIND_NUDGE'],
        }

    @property
    def BIND_ONLANE_BLOCK(self):
        """Message constant 'BIND_ONLANE_BLOCK'."""
        return Metaclass_LaneBindInfo.__constants['BIND_ONLANE_BLOCK']

    @property
    def BIND_ONLANE_NOT_BLOCK(self):
        """Message constant 'BIND_ONLANE_NOT_BLOCK'."""
        return Metaclass_LaneBindInfo.__constants['BIND_ONLANE_NOT_BLOCK']

    @property
    def BIND_CUTIN(self):
        """Message constant 'BIND_CUTIN'."""
        return Metaclass_LaneBindInfo.__constants['BIND_CUTIN']

    @property
    def BIND_CUTOUT(self):
        """Message constant 'BIND_CUTOUT'."""
        return Metaclass_LaneBindInfo.__constants['BIND_CUTOUT']

    @property
    def BIND_CROSS(self):
        """Message constant 'BIND_CROSS'."""
        return Metaclass_LaneBindInfo.__constants['BIND_CROSS']

    @property
    def BIND_NEAR(self):
        """Message constant 'BIND_NEAR'."""
        return Metaclass_LaneBindInfo.__constants['BIND_NEAR']

    @property
    def BIND_NUDGE(self):
        """Message constant 'BIND_NUDGE'."""
        return Metaclass_LaneBindInfo.__constants['BIND_NUDGE']


class LaneBindInfo(metaclass=Metaclass_LaneBindInfo):
    """
    Message class 'LaneBindInfo'.

    Constants:
      BIND_ONLANE_BLOCK
      BIND_ONLANE_NOT_BLOCK
      BIND_CUTIN
      BIND_CUTOUT
      BIND_CROSS
      BIND_NEAR
      BIND_NUDGE
    """

    __slots__ = [
        '_ref_id',
        '_binded_obs',
        '_sl_boundary',
        '_scalable_flags',
        '_scalable_multimap',
    ]

    _fields_and_field_types = {
        'ref_id': 'int32',
        'binded_obs': 'sequence<deva_planning_msgs2/UInt2String>',
        'sl_boundary': 'sequence<deva_planning_msgs2/String2SLBoundary>',
        'scalable_flags': 'sequence<uint8>',
        'scalable_multimap': 'sequence<deva_planning_msgs2/String2String>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'UInt2String')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2SLBoundary')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'String2String')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ref_id = kwargs.get('ref_id', int())
        self.binded_obs = kwargs.get('binded_obs', [])
        self.sl_boundary = kwargs.get('sl_boundary', [])
        self.scalable_flags = array.array('B', kwargs.get('scalable_flags', []))
        self.scalable_multimap = kwargs.get('scalable_multimap', [])

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
        if self.ref_id != other.ref_id:
            return False
        if self.binded_obs != other.binded_obs:
            return False
        if self.sl_boundary != other.sl_boundary:
            return False
        if self.scalable_flags != other.scalable_flags:
            return False
        if self.scalable_multimap != other.scalable_multimap:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ref_id(self):
        """Message field 'ref_id'."""
        return self._ref_id

    @ref_id.setter
    def ref_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ref_id' field must be an integer in [-2147483648, 2147483647]"
        self._ref_id = value

    @builtins.property
    def binded_obs(self):
        """Message field 'binded_obs'."""
        return self._binded_obs

    @binded_obs.setter
    def binded_obs(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import UInt2String
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
                 all(isinstance(v, UInt2String) for v in value) and
                 True), \
                "The 'binded_obs' field must be a set or sequence and each value of type 'UInt2String'"
        self._binded_obs = value

    @builtins.property
    def sl_boundary(self):
        """Message field 'sl_boundary'."""
        return self._sl_boundary

    @sl_boundary.setter
    def sl_boundary(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2SLBoundary
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
                 all(isinstance(v, String2SLBoundary) for v in value) and
                 True), \
                "The 'sl_boundary' field must be a set or sequence and each value of type 'String2SLBoundary'"
        self._sl_boundary = value

    @builtins.property
    def scalable_flags(self):
        """Message field 'scalable_flags'."""
        return self._scalable_flags

    @scalable_flags.setter
    def scalable_flags(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'scalable_flags' array.array() must have the type code of 'B'"
            self._scalable_flags = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'scalable_flags' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._scalable_flags = array.array('B', value)

    @builtins.property
    def scalable_multimap(self):
        """Message field 'scalable_multimap'."""
        return self._scalable_multimap

    @scalable_multimap.setter
    def scalable_multimap(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import String2String
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
                 all(isinstance(v, String2String) for v in value) and
                 True), \
                "The 'scalable_multimap' field must be a set or sequence and each value of type 'String2String'"
        self._scalable_multimap = value
