# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionRoadSignList(type):
    """Metaclass of message 'SFFusionRoadSignList'."""

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
                'deva_aeb_msgs.msg.SFFusionRoadSignList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_road_sign_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_road_sign_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_road_sign_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_road_sign_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_road_sign_list

            from deva_aeb_msgs.msg import SFCrosswalk
            if SFCrosswalk.__class__._TYPE_SUPPORT is None:
                SFCrosswalk.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFRoadArrow
            if SFRoadArrow.__class__._TYPE_SUPPORT is None:
                SFRoadArrow.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFStopline
            if SFStopline.__class__._TYPE_SUPPORT is None:
                SFStopline.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionRoadSignList(metaclass=Metaclass_SFFusionRoadSignList):
    """Message class 'SFFusionRoadSignList'."""

    __slots__ = [
        '_sllist',
        '_cwlist',
        '_ralist',
        '_timestamp',
        '_framenum',
        '_cwcount',
        '_racount',
        '_slvalidsize',
        '_cwvalidsize',
        '_ravalidsize',
        '_reserved',
    ]

    _fields_and_field_types = {
        'sllist': 'deva_aeb_msgs/SFStopline[8]',
        'cwlist': 'deva_aeb_msgs/SFCrosswalk[4]',
        'ralist': 'deva_aeb_msgs/SFRoadArrow[8]',
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'cwcount': 'uint8',
        'racount': 'uint8',
        'slvalidsize': 'uint8',
        'cwvalidsize': 'uint8',
        'ravalidsize': 'uint8',
        'reserved': 'uint8[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFStopline'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFCrosswalk'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFRoadArrow'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_aeb_msgs.msg import SFStopline
        self.sllist = kwargs.get(
            'sllist',
            [SFStopline() for x in range(8)]
        )
        from deva_aeb_msgs.msg import SFCrosswalk
        self.cwlist = kwargs.get(
            'cwlist',
            [SFCrosswalk() for x in range(4)]
        )
        from deva_aeb_msgs.msg import SFRoadArrow
        self.ralist = kwargs.get(
            'ralist',
            [SFRoadArrow() for x in range(8)]
        )
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        self.cwcount = kwargs.get('cwcount', int())
        self.racount = kwargs.get('racount', int())
        self.slvalidsize = kwargs.get('slvalidsize', int())
        self.cwvalidsize = kwargs.get('cwvalidsize', int())
        self.ravalidsize = kwargs.get('ravalidsize', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')

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
        if self.sllist != other.sllist:
            return False
        if self.cwlist != other.cwlist:
            return False
        if self.ralist != other.ralist:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.framenum != other.framenum:
            return False
        if self.cwcount != other.cwcount:
            return False
        if self.racount != other.racount:
            return False
        if self.slvalidsize != other.slvalidsize:
            return False
        if self.cwvalidsize != other.cwvalidsize:
            return False
        if self.ravalidsize != other.ravalidsize:
            return False
        if any(self.reserved != other.reserved):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sllist(self):
        """Message field 'sllist'."""
        return self._sllist

    @sllist.setter
    def sllist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFStopline
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
                 all(isinstance(v, SFStopline) for v in value) and
                 True), \
                "The 'sllist' field must be a set or sequence with length 8 and each value of type 'SFStopline'"
        self._sllist = value

    @builtins.property
    def cwlist(self):
        """Message field 'cwlist'."""
        return self._cwlist

    @cwlist.setter
    def cwlist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFCrosswalk
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
                 all(isinstance(v, SFCrosswalk) for v in value) and
                 True), \
                "The 'cwlist' field must be a set or sequence with length 4 and each value of type 'SFCrosswalk'"
        self._cwlist = value

    @builtins.property
    def ralist(self):
        """Message field 'ralist'."""
        return self._ralist

    @ralist.setter
    def ralist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFRoadArrow
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
                 all(isinstance(v, SFRoadArrow) for v in value) and
                 True), \
                "The 'ralist' field must be a set or sequence with length 8 and each value of type 'SFRoadArrow'"
        self._ralist = value

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
    def cwcount(self):
        """Message field 'cwcount'."""
        return self._cwcount

    @cwcount.setter
    def cwcount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cwcount' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cwcount' field must be an unsigned integer in [0, 255]"
        self._cwcount = value

    @builtins.property
    def racount(self):
        """Message field 'racount'."""
        return self._racount

    @racount.setter
    def racount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'racount' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'racount' field must be an unsigned integer in [0, 255]"
        self._racount = value

    @builtins.property
    def slvalidsize(self):
        """Message field 'slvalidsize'."""
        return self._slvalidsize

    @slvalidsize.setter
    def slvalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slvalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'slvalidsize' field must be an unsigned integer in [0, 255]"
        self._slvalidsize = value

    @builtins.property
    def cwvalidsize(self):
        """Message field 'cwvalidsize'."""
        return self._cwvalidsize

    @cwvalidsize.setter
    def cwvalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cwvalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cwvalidsize' field must be an unsigned integer in [0, 255]"
        self._cwvalidsize = value

    @builtins.property
    def ravalidsize(self):
        """Message field 'ravalidsize'."""
        return self._ravalidsize

    @ravalidsize.setter
    def ravalidsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ravalidsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ravalidsize' field must be an unsigned integer in [0, 255]"
        self._ravalidsize = value

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
