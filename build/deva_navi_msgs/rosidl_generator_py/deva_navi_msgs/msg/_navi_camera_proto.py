# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/NaviCameraProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'speed'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NaviCameraProto(type):
    """Metaclass of message 'NaviCameraProto'."""

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
            module = import_type_support('deva_navi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_navi_msgs.msg.NaviCameraProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navi_camera_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navi_camera_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navi_camera_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navi_camera_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navi_camera_proto

            from deva_navi_msgs.msg import Coord3DDoubleProto
            if Coord3DDoubleProto.__class__._TYPE_SUPPORT is None:
                Coord3DDoubleProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import NaviSubCameraProto
            if NaviSubCameraProto.__class__._TYPE_SUPPORT is None:
                NaviSubCameraProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NaviCameraProto(metaclass=Metaclass_NaviCameraProto):
    """Message class 'NaviCameraProto'."""

    __slots__ = [
        '_coord_3d',
        '_type',
        '_distance',
        '_speed',
        '_road_class',
        '_segment_index',
        '_link_index',
        '_distance_to_end',
        '_sub_cameras',
        '_penalty',
        '_id',
        '_is_new',
        '_is_hidden',
    ]

    _fields_and_field_types = {
        'coord_3d': 'deva_navi_msgs/Coord3DDoubleProto',
        'type': 'int32',
        'distance': 'int32',
        'speed': 'sequence<int32>',
        'road_class': 'int32',
        'segment_index': 'int32',
        'link_index': 'int32',
        'distance_to_end': 'int32',
        'sub_cameras': 'sequence<deva_navi_msgs/NaviSubCameraProto>',
        'penalty': 'int32',
        'id': 'int64',
        'is_new': 'boolean',
        'is_hidden': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'NaviSubCameraProto')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_navi_msgs.msg import Coord3DDoubleProto
        self.coord_3d = kwargs.get('coord_3d', Coord3DDoubleProto())
        self.type = kwargs.get('type', int())
        self.distance = kwargs.get('distance', int())
        self.speed = array.array('i', kwargs.get('speed', []))
        self.road_class = kwargs.get('road_class', int())
        self.segment_index = kwargs.get('segment_index', int())
        self.link_index = kwargs.get('link_index', int())
        self.distance_to_end = kwargs.get('distance_to_end', int())
        self.sub_cameras = kwargs.get('sub_cameras', [])
        self.penalty = kwargs.get('penalty', int())
        self.id = kwargs.get('id', int())
        self.is_new = kwargs.get('is_new', bool())
        self.is_hidden = kwargs.get('is_hidden', bool())

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
        if self.coord_3d != other.coord_3d:
            return False
        if self.type != other.type:
            return False
        if self.distance != other.distance:
            return False
        if self.speed != other.speed:
            return False
        if self.road_class != other.road_class:
            return False
        if self.segment_index != other.segment_index:
            return False
        if self.link_index != other.link_index:
            return False
        if self.distance_to_end != other.distance_to_end:
            return False
        if self.sub_cameras != other.sub_cameras:
            return False
        if self.penalty != other.penalty:
            return False
        if self.id != other.id:
            return False
        if self.is_new != other.is_new:
            return False
        if self.is_hidden != other.is_hidden:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def coord_3d(self):
        """Message field 'coord_3d'."""
        return self._coord_3d

    @coord_3d.setter
    def coord_3d(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
            assert \
                isinstance(value, Coord3DDoubleProto), \
                "The 'coord_3d' field must be a sub message of type 'Coord3DDoubleProto'"
        self._coord_3d = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'distance' field must be an integer in [-2147483648, 2147483647]"
        self._distance = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'speed' array.array() must have the type code of 'i'"
            self._speed = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'speed' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._speed = array.array('i', value)

    @builtins.property
    def road_class(self):
        """Message field 'road_class'."""
        return self._road_class

    @road_class.setter
    def road_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_class' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'road_class' field must be an integer in [-2147483648, 2147483647]"
        self._road_class = value

    @builtins.property
    def segment_index(self):
        """Message field 'segment_index'."""
        return self._segment_index

    @segment_index.setter
    def segment_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'segment_index' field must be an integer in [-2147483648, 2147483647]"
        self._segment_index = value

    @builtins.property
    def link_index(self):
        """Message field 'link_index'."""
        return self._link_index

    @link_index.setter
    def link_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'link_index' field must be an integer in [-2147483648, 2147483647]"
        self._link_index = value

    @builtins.property
    def distance_to_end(self):
        """Message field 'distance_to_end'."""
        return self._distance_to_end

    @distance_to_end.setter
    def distance_to_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_to_end' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'distance_to_end' field must be an integer in [-2147483648, 2147483647]"
        self._distance_to_end = value

    @builtins.property
    def sub_cameras(self):
        """Message field 'sub_cameras'."""
        return self._sub_cameras

    @sub_cameras.setter
    def sub_cameras(self, value):
        if __debug__:
            from deva_navi_msgs.msg import NaviSubCameraProto
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
                 all(isinstance(v, NaviSubCameraProto) for v in value) and
                 True), \
                "The 'sub_cameras' field must be a set or sequence and each value of type 'NaviSubCameraProto'"
        self._sub_cameras = value

    @builtins.property
    def penalty(self):
        """Message field 'penalty'."""
        return self._penalty

    @penalty.setter
    def penalty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'penalty' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'penalty' field must be an integer in [-2147483648, 2147483647]"
        self._penalty = value

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
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._id = value

    @builtins.property
    def is_new(self):
        """Message field 'is_new'."""
        return self._is_new

    @is_new.setter
    def is_new(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_new' field must be of type 'bool'"
        self._is_new = value

    @builtins.property
    def is_hidden(self):
        """Message field 'is_hidden'."""
        return self._is_hidden

    @is_hidden.setter
    def is_hidden(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_hidden' field must be of type 'bool'"
        self._is_hidden = value
