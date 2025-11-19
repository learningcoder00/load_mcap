# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/LaneArrayv2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneArrayv2(type):
    """Metaclass of message 'LaneArrayv2'."""

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
                'deva_perception_msgs.msg.LaneArrayv2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_arrayv2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_arrayv2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_arrayv2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_arrayv2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_arrayv2

            from deva_perception_msgs.msg import Crosswalk
            if Crosswalk.__class__._TYPE_SUPPORT is None:
                Crosswalk.__class__.__import_type_support__()

            from deva_perception_msgs.msg import Entrance
            if Entrance.__class__._TYPE_SUPPORT is None:
                Entrance.__class__.__import_type_support__()

            from deva_perception_msgs.msg import Lanev2
            if Lanev2.__class__._TYPE_SUPPORT is None:
                Lanev2.__class__.__import_type_support__()

            from deva_perception_msgs.msg import NoparkingZone
            if NoparkingZone.__class__._TYPE_SUPPORT is None:
                NoparkingZone.__class__.__import_type_support__()

            from deva_perception_msgs.msg import PartitionZone
            if PartitionZone.__class__._TYPE_SUPPORT is None:
                PartitionZone.__class__.__import_type_support__()

            from deva_perception_msgs.msg import PerceptCenterLine
            if PerceptCenterLine.__class__._TYPE_SUPPORT is None:
                PerceptCenterLine.__class__.__import_type_support__()

            from deva_perception_msgs.msg import SteeringArrow
            if SteeringArrow.__class__._TYPE_SUPPORT is None:
                SteeringArrow.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneArrayv2(metaclass=Metaclass_LaneArrayv2):
    """Message class 'LaneArrayv2'."""

    __slots__ = [
        '_header',
        '_vehicle_left_lane_id',
        '_vehicle_right_lane_id',
        '_lane_array',
        '_crosswalk_array',
        '_steering_arrow_array',
        '_noparking_zone_array',
        '_partition_zone_array',
        '_center_line_array',
        '_entrance_array',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_left_lane_id': 'int32',
        'vehicle_right_lane_id': 'int32',
        'lane_array': 'sequence<deva_perception_msgs/Lanev2>',
        'crosswalk_array': 'sequence<deva_perception_msgs/Crosswalk>',
        'steering_arrow_array': 'sequence<deva_perception_msgs/SteeringArrow>',
        'noparking_zone_array': 'sequence<deva_perception_msgs/NoparkingZone>',
        'partition_zone_array': 'sequence<deva_perception_msgs/PartitionZone>',
        'center_line_array': 'sequence<deva_perception_msgs/PerceptCenterLine>',
        'entrance_array': 'sequence<deva_perception_msgs/Entrance>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Lanev2')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Crosswalk')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'SteeringArrow')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'NoparkingZone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'PartitionZone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'PerceptCenterLine')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Entrance')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.vehicle_left_lane_id = kwargs.get('vehicle_left_lane_id', int())
        self.vehicle_right_lane_id = kwargs.get('vehicle_right_lane_id', int())
        self.lane_array = kwargs.get('lane_array', [])
        self.crosswalk_array = kwargs.get('crosswalk_array', [])
        self.steering_arrow_array = kwargs.get('steering_arrow_array', [])
        self.noparking_zone_array = kwargs.get('noparking_zone_array', [])
        self.partition_zone_array = kwargs.get('partition_zone_array', [])
        self.center_line_array = kwargs.get('center_line_array', [])
        self.entrance_array = kwargs.get('entrance_array', [])

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
        if self.vehicle_left_lane_id != other.vehicle_left_lane_id:
            return False
        if self.vehicle_right_lane_id != other.vehicle_right_lane_id:
            return False
        if self.lane_array != other.lane_array:
            return False
        if self.crosswalk_array != other.crosswalk_array:
            return False
        if self.steering_arrow_array != other.steering_arrow_array:
            return False
        if self.noparking_zone_array != other.noparking_zone_array:
            return False
        if self.partition_zone_array != other.partition_zone_array:
            return False
        if self.center_line_array != other.center_line_array:
            return False
        if self.entrance_array != other.entrance_array:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def vehicle_left_lane_id(self):
        """Message field 'vehicle_left_lane_id'."""
        return self._vehicle_left_lane_id

    @vehicle_left_lane_id.setter
    def vehicle_left_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_left_lane_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_left_lane_id' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_left_lane_id = value

    @builtins.property
    def vehicle_right_lane_id(self):
        """Message field 'vehicle_right_lane_id'."""
        return self._vehicle_right_lane_id

    @vehicle_right_lane_id.setter
    def vehicle_right_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_right_lane_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_right_lane_id' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_right_lane_id = value

    @builtins.property
    def lane_array(self):
        """Message field 'lane_array'."""
        return self._lane_array

    @lane_array.setter
    def lane_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Lanev2
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
                 all(isinstance(v, Lanev2) for v in value) and
                 True), \
                "The 'lane_array' field must be a set or sequence and each value of type 'Lanev2'"
        self._lane_array = value

    @builtins.property
    def crosswalk_array(self):
        """Message field 'crosswalk_array'."""
        return self._crosswalk_array

    @crosswalk_array.setter
    def crosswalk_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Crosswalk
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
                 all(isinstance(v, Crosswalk) for v in value) and
                 True), \
                "The 'crosswalk_array' field must be a set or sequence and each value of type 'Crosswalk'"
        self._crosswalk_array = value

    @builtins.property
    def steering_arrow_array(self):
        """Message field 'steering_arrow_array'."""
        return self._steering_arrow_array

    @steering_arrow_array.setter
    def steering_arrow_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import SteeringArrow
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
                 all(isinstance(v, SteeringArrow) for v in value) and
                 True), \
                "The 'steering_arrow_array' field must be a set or sequence and each value of type 'SteeringArrow'"
        self._steering_arrow_array = value

    @builtins.property
    def noparking_zone_array(self):
        """Message field 'noparking_zone_array'."""
        return self._noparking_zone_array

    @noparking_zone_array.setter
    def noparking_zone_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import NoparkingZone
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
                 all(isinstance(v, NoparkingZone) for v in value) and
                 True), \
                "The 'noparking_zone_array' field must be a set or sequence and each value of type 'NoparkingZone'"
        self._noparking_zone_array = value

    @builtins.property
    def partition_zone_array(self):
        """Message field 'partition_zone_array'."""
        return self._partition_zone_array

    @partition_zone_array.setter
    def partition_zone_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import PartitionZone
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
                 all(isinstance(v, PartitionZone) for v in value) and
                 True), \
                "The 'partition_zone_array' field must be a set or sequence and each value of type 'PartitionZone'"
        self._partition_zone_array = value

    @builtins.property
    def center_line_array(self):
        """Message field 'center_line_array'."""
        return self._center_line_array

    @center_line_array.setter
    def center_line_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import PerceptCenterLine
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
                 all(isinstance(v, PerceptCenterLine) for v in value) and
                 True), \
                "The 'center_line_array' field must be a set or sequence and each value of type 'PerceptCenterLine'"
        self._center_line_array = value

    @builtins.property
    def entrance_array(self):
        """Message field 'entrance_array'."""
        return self._entrance_array

    @entrance_array.setter
    def entrance_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Entrance
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
                 all(isinstance(v, Entrance) for v in value) and
                 True), \
                "The 'entrance_array' field must be a set or sequence and each value of type 'Entrance'"
        self._entrance_array = value
