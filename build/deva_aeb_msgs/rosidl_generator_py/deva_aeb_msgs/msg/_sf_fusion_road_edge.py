# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionRoadEdge(type):
    """Metaclass of message 'SFFusionRoadEdge'."""

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
                'deva_aeb_msgs.msg.SFFusionRoadEdge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_road_edge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_road_edge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_road_edge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_road_edge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_road_edge

            from deva_aeb_msgs.msg import RoadInfo
            if RoadInfo.__class__._TYPE_SUPPORT is None:
                RoadInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionRoadEdge(metaclass=Metaclass_SFFusionRoadEdge):
    """Message class 'SFFusionRoadEdge'."""

    __slots__ = [
        '_timestamp',
        '_framenum',
        '_frontleft',
        '_frontright',
        '_rearleft',
        '_rearright',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'frontleft': 'deva_aeb_msgs/RoadInfo',
        'frontright': 'deva_aeb_msgs/RoadInfo',
        'rearleft': 'deva_aeb_msgs/RoadInfo',
        'rearright': 'deva_aeb_msgs/RoadInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RoadInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RoadInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RoadInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'RoadInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        from deva_aeb_msgs.msg import RoadInfo
        self.frontleft = kwargs.get('frontleft', RoadInfo())
        from deva_aeb_msgs.msg import RoadInfo
        self.frontright = kwargs.get('frontright', RoadInfo())
        from deva_aeb_msgs.msg import RoadInfo
        self.rearleft = kwargs.get('rearleft', RoadInfo())
        from deva_aeb_msgs.msg import RoadInfo
        self.rearright = kwargs.get('rearright', RoadInfo())

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
        if self.frontleft != other.frontleft:
            return False
        if self.frontright != other.frontright:
            return False
        if self.rearleft != other.rearleft:
            return False
        if self.rearright != other.rearright:
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
    def frontleft(self):
        """Message field 'frontleft'."""
        return self._frontleft

    @frontleft.setter
    def frontleft(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RoadInfo
            assert \
                isinstance(value, RoadInfo), \
                "The 'frontleft' field must be a sub message of type 'RoadInfo'"
        self._frontleft = value

    @builtins.property
    def frontright(self):
        """Message field 'frontright'."""
        return self._frontright

    @frontright.setter
    def frontright(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RoadInfo
            assert \
                isinstance(value, RoadInfo), \
                "The 'frontright' field must be a sub message of type 'RoadInfo'"
        self._frontright = value

    @builtins.property
    def rearleft(self):
        """Message field 'rearleft'."""
        return self._rearleft

    @rearleft.setter
    def rearleft(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RoadInfo
            assert \
                isinstance(value, RoadInfo), \
                "The 'rearleft' field must be a sub message of type 'RoadInfo'"
        self._rearleft = value

    @builtins.property
    def rearright(self):
        """Message field 'rearright'."""
        return self._rearright

    @rearright.setter
    def rearright(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import RoadInfo
            assert \
                isinstance(value, RoadInfo), \
                "The 'rearright' field must be a sub message of type 'RoadInfo'"
        self._rearright = value
