# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/SegmentInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SegmentInfoProto(type):
    """Metaclass of message 'SegmentInfoProto'."""

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
                'deva_navi_msgs.msg.SegmentInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__segment_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__segment_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__segment_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__segment_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__segment_info_proto

            from deva_navi_msgs.msg import Coord3DDoubleProto
            if Coord3DDoubleProto.__class__._TYPE_SUPPORT is None:
                Coord3DDoubleProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import IconRoadProto
            if IconRoadProto.__class__._TYPE_SUPPORT is None:
                IconRoadProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import LinkInfoProto
            if LinkInfoProto.__class__._TYPE_SUPPORT is None:
                LinkInfoProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegmentInfoProto(metaclass=Metaclass_SegmentInfoProto):
    """Message class 'SegmentInfoProto'."""

    __slots__ = [
        '_link_infos',
        '_points',
        '_is_valid',
        '_related_path_id',
        '_segment_index',
        '_main_action',
        '_assistant_action',
        '_slope',
        '_length',
        '_toll_cost',
        '_toll_dist',
        '_travel_time',
        '_traffic_light_num',
        '_is_end_of_road',
        '_toll_road_name',
        '_guideboard_name',
        '_exit_name',
        '_crossing_name',
        '_maneuver_icons',
        '_uturn_and_arrivedest',
    ]

    _fields_and_field_types = {
        'link_infos': 'sequence<deva_navi_msgs/LinkInfoProto>',
        'points': 'sequence<deva_navi_msgs/Coord3DDoubleProto>',
        'is_valid': 'boolean',
        'related_path_id': 'int64',
        'segment_index': 'int32',
        'main_action': 'int32',
        'assistant_action': 'int32',
        'slope': 'int32',
        'length': 'int32',
        'toll_cost': 'int32',
        'toll_dist': 'int32',
        'travel_time': 'int64',
        'traffic_light_num': 'int64',
        'is_end_of_road': 'boolean',
        'toll_road_name': 'string',
        'guideboard_name': 'string',
        'exit_name': 'string',
        'crossing_name': 'string',
        'maneuver_icons': 'sequence<deva_navi_msgs/IconRoadProto>',
        'uturn_and_arrivedest': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'LinkInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'IconRoadProto')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link_infos = kwargs.get('link_infos', [])
        self.points = kwargs.get('points', [])
        self.is_valid = kwargs.get('is_valid', bool())
        self.related_path_id = kwargs.get('related_path_id', int())
        self.segment_index = kwargs.get('segment_index', int())
        self.main_action = kwargs.get('main_action', int())
        self.assistant_action = kwargs.get('assistant_action', int())
        self.slope = kwargs.get('slope', int())
        self.length = kwargs.get('length', int())
        self.toll_cost = kwargs.get('toll_cost', int())
        self.toll_dist = kwargs.get('toll_dist', int())
        self.travel_time = kwargs.get('travel_time', int())
        self.traffic_light_num = kwargs.get('traffic_light_num', int())
        self.is_end_of_road = kwargs.get('is_end_of_road', bool())
        self.toll_road_name = kwargs.get('toll_road_name', str())
        self.guideboard_name = kwargs.get('guideboard_name', str())
        self.exit_name = kwargs.get('exit_name', str())
        self.crossing_name = kwargs.get('crossing_name', str())
        self.maneuver_icons = kwargs.get('maneuver_icons', [])
        self.uturn_and_arrivedest = kwargs.get('uturn_and_arrivedest', int())

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
        if self.link_infos != other.link_infos:
            return False
        if self.points != other.points:
            return False
        if self.is_valid != other.is_valid:
            return False
        if self.related_path_id != other.related_path_id:
            return False
        if self.segment_index != other.segment_index:
            return False
        if self.main_action != other.main_action:
            return False
        if self.assistant_action != other.assistant_action:
            return False
        if self.slope != other.slope:
            return False
        if self.length != other.length:
            return False
        if self.toll_cost != other.toll_cost:
            return False
        if self.toll_dist != other.toll_dist:
            return False
        if self.travel_time != other.travel_time:
            return False
        if self.traffic_light_num != other.traffic_light_num:
            return False
        if self.is_end_of_road != other.is_end_of_road:
            return False
        if self.toll_road_name != other.toll_road_name:
            return False
        if self.guideboard_name != other.guideboard_name:
            return False
        if self.exit_name != other.exit_name:
            return False
        if self.crossing_name != other.crossing_name:
            return False
        if self.maneuver_icons != other.maneuver_icons:
            return False
        if self.uturn_and_arrivedest != other.uturn_and_arrivedest:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def link_infos(self):
        """Message field 'link_infos'."""
        return self._link_infos

    @link_infos.setter
    def link_infos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import LinkInfoProto
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
                 all(isinstance(v, LinkInfoProto) for v in value) and
                 True), \
                "The 'link_infos' field must be a set or sequence and each value of type 'LinkInfoProto'"
        self._link_infos = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
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
                 all(isinstance(v, Coord3DDoubleProto) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Coord3DDoubleProto'"
        self._points = value

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value

    @builtins.property
    def related_path_id(self):
        """Message field 'related_path_id'."""
        return self._related_path_id

    @related_path_id.setter
    def related_path_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'related_path_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'related_path_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._related_path_id = value

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
    def main_action(self):
        """Message field 'main_action'."""
        return self._main_action

    @main_action.setter
    def main_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'main_action' field must be an integer in [-2147483648, 2147483647]"
        self._main_action = value

    @builtins.property
    def assistant_action(self):
        """Message field 'assistant_action'."""
        return self._assistant_action

    @assistant_action.setter
    def assistant_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assistant_action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'assistant_action' field must be an integer in [-2147483648, 2147483647]"
        self._assistant_action = value

    @builtins.property
    def slope(self):
        """Message field 'slope'."""
        return self._slope

    @slope.setter
    def slope(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slope' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'slope' field must be an integer in [-2147483648, 2147483647]"
        self._slope = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'length' field must be an integer in [-2147483648, 2147483647]"
        self._length = value

    @builtins.property
    def toll_cost(self):
        """Message field 'toll_cost'."""
        return self._toll_cost

    @toll_cost.setter
    def toll_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toll_cost' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'toll_cost' field must be an integer in [-2147483648, 2147483647]"
        self._toll_cost = value

    @builtins.property
    def toll_dist(self):
        """Message field 'toll_dist'."""
        return self._toll_dist

    @toll_dist.setter
    def toll_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toll_dist' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'toll_dist' field must be an integer in [-2147483648, 2147483647]"
        self._toll_dist = value

    @builtins.property
    def travel_time(self):
        """Message field 'travel_time'."""
        return self._travel_time

    @travel_time.setter
    def travel_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'travel_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'travel_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._travel_time = value

    @builtins.property
    def traffic_light_num(self):
        """Message field 'traffic_light_num'."""
        return self._traffic_light_num

    @traffic_light_num.setter
    def traffic_light_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_light_num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'traffic_light_num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._traffic_light_num = value

    @builtins.property
    def is_end_of_road(self):
        """Message field 'is_end_of_road'."""
        return self._is_end_of_road

    @is_end_of_road.setter
    def is_end_of_road(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_end_of_road' field must be of type 'bool'"
        self._is_end_of_road = value

    @builtins.property
    def toll_road_name(self):
        """Message field 'toll_road_name'."""
        return self._toll_road_name

    @toll_road_name.setter
    def toll_road_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'toll_road_name' field must be of type 'str'"
        self._toll_road_name = value

    @builtins.property
    def guideboard_name(self):
        """Message field 'guideboard_name'."""
        return self._guideboard_name

    @guideboard_name.setter
    def guideboard_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'guideboard_name' field must be of type 'str'"
        self._guideboard_name = value

    @builtins.property
    def exit_name(self):
        """Message field 'exit_name'."""
        return self._exit_name

    @exit_name.setter
    def exit_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'exit_name' field must be of type 'str'"
        self._exit_name = value

    @builtins.property
    def crossing_name(self):
        """Message field 'crossing_name'."""
        return self._crossing_name

    @crossing_name.setter
    def crossing_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'crossing_name' field must be of type 'str'"
        self._crossing_name = value

    @builtins.property
    def maneuver_icons(self):
        """Message field 'maneuver_icons'."""
        return self._maneuver_icons

    @maneuver_icons.setter
    def maneuver_icons(self, value):
        if __debug__:
            from deva_navi_msgs.msg import IconRoadProto
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
                 all(isinstance(v, IconRoadProto) for v in value) and
                 True), \
                "The 'maneuver_icons' field must be a set or sequence and each value of type 'IconRoadProto'"
        self._maneuver_icons = value

    @builtins.property
    def uturn_and_arrivedest(self):
        """Message field 'uturn_and_arrivedest'."""
        return self._uturn_and_arrivedest

    @uturn_and_arrivedest.setter
    def uturn_and_arrivedest(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uturn_and_arrivedest' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uturn_and_arrivedest' field must be an integer in [-2147483648, 2147483647]"
        self._uturn_and_arrivedest = value
