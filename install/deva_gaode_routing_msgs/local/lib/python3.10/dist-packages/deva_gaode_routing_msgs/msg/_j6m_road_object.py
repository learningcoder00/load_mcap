# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_J6mRoadObject(type):
    """Metaclass of message 'J6mRoadObject'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.J6mRoadObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__j6m_road_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__j6m_road_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__j6m_road_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__j6m_road_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__j6m_road_object

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LinkIDType
            if LinkIDType.__class__._TYPE_SUPPORT is None:
                LinkIDType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class J6mRoadObject(metaclass=Metaclass_J6mRoadObject):
    """Message class 'J6mRoadObject'."""

    __slots__ = [
        '_road_object_id',
        '_road_object_type',
        '_road_object_subtype',
        '_road_object_center_point',
        '_road_object_heading',
        '_road_attributes',
        '_confidence',
        '_offset',
        '_coordinates',
        '_referenced_lane_ids',
    ]

    _fields_and_field_types = {
        'road_object_id': 'deva_gaode_routing_msgs/LinkIDType',
        'road_object_type': 'uint8',
        'road_object_subtype': 'uint8',
        'road_object_center_point': 'deva_gaode_routing_msgs/Coordinate',
        'road_object_heading': 'uint16',
        'road_attributes': 'string',
        'confidence': 'uint32',
        'offset': 'uint32',
        'coordinates': 'sequence<deva_gaode_routing_msgs/Coordinate>',
        'referenced_lane_ids': 'sequence<deva_gaode_routing_msgs/LinkIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.road_object_id = kwargs.get('road_object_id', LinkIDType())
        self.road_object_type = kwargs.get('road_object_type', int())
        self.road_object_subtype = kwargs.get('road_object_subtype', int())
        from deva_gaode_routing_msgs.msg import Coordinate
        self.road_object_center_point = kwargs.get('road_object_center_point', Coordinate())
        self.road_object_heading = kwargs.get('road_object_heading', int())
        self.road_attributes = kwargs.get('road_attributes', str())
        self.confidence = kwargs.get('confidence', int())
        self.offset = kwargs.get('offset', int())
        self.coordinates = kwargs.get('coordinates', [])
        self.referenced_lane_ids = kwargs.get('referenced_lane_ids', [])

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
        if self.road_object_id != other.road_object_id:
            return False
        if self.road_object_type != other.road_object_type:
            return False
        if self.road_object_subtype != other.road_object_subtype:
            return False
        if self.road_object_center_point != other.road_object_center_point:
            return False
        if self.road_object_heading != other.road_object_heading:
            return False
        if self.road_attributes != other.road_attributes:
            return False
        if self.confidence != other.confidence:
            return False
        if self.offset != other.offset:
            return False
        if self.coordinates != other.coordinates:
            return False
        if self.referenced_lane_ids != other.referenced_lane_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def road_object_id(self):
        """Message field 'road_object_id'."""
        return self._road_object_id

    @road_object_id.setter
    def road_object_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'road_object_id' field must be a sub message of type 'LinkIDType'"
        self._road_object_id = value

    @builtins.property
    def road_object_type(self):
        """Message field 'road_object_type'."""
        return self._road_object_type

    @road_object_type.setter
    def road_object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_object_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_object_type' field must be an unsigned integer in [0, 255]"
        self._road_object_type = value

    @builtins.property
    def road_object_subtype(self):
        """Message field 'road_object_subtype'."""
        return self._road_object_subtype

    @road_object_subtype.setter
    def road_object_subtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_object_subtype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_object_subtype' field must be an unsigned integer in [0, 255]"
        self._road_object_subtype = value

    @builtins.property
    def road_object_center_point(self):
        """Message field 'road_object_center_point'."""
        return self._road_object_center_point

    @road_object_center_point.setter
    def road_object_center_point(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'road_object_center_point' field must be a sub message of type 'Coordinate'"
        self._road_object_center_point = value

    @builtins.property
    def road_object_heading(self):
        """Message field 'road_object_heading'."""
        return self._road_object_heading

    @road_object_heading.setter
    def road_object_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_object_heading' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'road_object_heading' field must be an unsigned integer in [0, 65535]"
        self._road_object_heading = value

    @builtins.property
    def road_attributes(self):
        """Message field 'road_attributes'."""
        return self._road_attributes

    @road_attributes.setter
    def road_attributes(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'road_attributes' field must be of type 'str'"
        self._road_attributes = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'confidence' field must be an unsigned integer in [0, 4294967295]"
        self._confidence = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset' field must be an unsigned integer in [0, 4294967295]"
        self._offset = value

    @builtins.property
    def coordinates(self):
        """Message field 'coordinates'."""
        return self._coordinates

    @coordinates.setter
    def coordinates(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
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
                 all(isinstance(v, Coordinate) for v in value) and
                 True), \
                "The 'coordinates' field must be a set or sequence and each value of type 'Coordinate'"
        self._coordinates = value

    @builtins.property
    def referenced_lane_ids(self):
        """Message field 'referenced_lane_ids'."""
        return self._referenced_lane_ids

    @referenced_lane_ids.setter
    def referenced_lane_ids(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
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
                 all(isinstance(v, LinkIDType) for v in value) and
                 True), \
                "The 'referenced_lane_ids' field must be a set or sequence and each value of type 'LinkIDType'"
        self._referenced_lane_ids = value
