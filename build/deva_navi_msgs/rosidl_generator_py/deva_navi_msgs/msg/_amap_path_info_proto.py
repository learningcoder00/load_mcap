# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'city_adcode_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AmapPathInfoProto(type):
    """Metaclass of message 'AmapPathInfoProto'."""

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
                'deva_navi_msgs.msg.AmapPathInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__amap_path_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__amap_path_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__amap_path_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__amap_path_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__amap_path_info_proto

            from deva_navi_msgs.msg import ChargeStationInfoProto
            if ChargeStationInfoProto.__class__._TYPE_SUPPORT is None:
                ChargeStationInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import Coord3DDoubleProto
            if Coord3DDoubleProto.__class__._TYPE_SUPPORT is None:
                Coord3DDoubleProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import ElecPathInfoProto
            if ElecPathInfoProto.__class__._TYPE_SUPPORT is None:
                ElecPathInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import GroupSegmentProto
            if GroupSegmentProto.__class__._TYPE_SUPPORT is None:
                GroupSegmentProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import LineIconPointProto
            if LineIconPointProto.__class__._TYPE_SUPPORT is None:
                LineIconPointProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import OddSegInfoProto
            if OddSegInfoProto.__class__._TYPE_SUPPORT is None:
                OddSegInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import POIInfoProto
            if POIInfoProto.__class__._TYPE_SUPPORT is None:
                POIInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import PathDescriptionInfoProto
            if PathDescriptionInfoProto.__class__._TYPE_SUPPORT is None:
                PathDescriptionInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import RestrictionInfoProto
            if RestrictionInfoProto.__class__._TYPE_SUPPORT is None:
                RestrictionInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import SegmentInfoProto
            if SegmentInfoProto.__class__._TYPE_SUPPORT is None:
                SegmentInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import TipInfoProto
            if TipInfoProto.__class__._TYPE_SUPPORT is None:
                TipInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import ViaPointInfoProto
            if ViaPointInfoProto.__class__._TYPE_SUPPORT is None:
                ViaPointInfoProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AmapPathInfoProto(metaclass=Metaclass_AmapPathInfoProto):
    """Message class 'AmapPathInfoProto'."""

    __slots__ = [
        '_all_3d_traffic_lights',
        '_segment_infos',
        '_line_icon_points',
        '_city_adcode_list',
        '_via_point_info',
        '_charge_station_info',
        '_odd_seg_infos',
        '_plan_channel_id',
        '_offline_req_custom_identity_id',
        '_is_valid',
        '_path_id',
        '_type',
        '_length',
        '_strategy',
        '_travel_time',
        '_static_travel_time',
        '_toll_cost',
        '_navi_id',
        '_is_online',
        '_group_segments',
        '_restriction_info',
        '_end_poi',
        '_tip',
        '_end_direction',
        '_is_holiday_free',
        '_is_truck_path',
        '_data_version',
        '_normal_plan_time',
        '_route_type',
        '_elec_path_info',
        '_path_description_info',
        '_remain_toll_cost',
        '_main_route_remain_toll_cost',
    ]

    _fields_and_field_types = {
        'all_3d_traffic_lights': 'sequence<deva_navi_msgs/Coord3DDoubleProto>',
        'segment_infos': 'sequence<deva_navi_msgs/SegmentInfoProto>',
        'line_icon_points': 'sequence<deva_navi_msgs/LineIconPointProto>',
        'city_adcode_list': 'sequence<int64>',
        'via_point_info': 'sequence<deva_navi_msgs/ViaPointInfoProto>',
        'charge_station_info': 'sequence<deva_navi_msgs/ChargeStationInfoProto>',
        'odd_seg_infos': 'sequence<deva_navi_msgs/OddSegInfoProto>',
        'plan_channel_id': 'string',
        'offline_req_custom_identity_id': 'string',
        'is_valid': 'boolean',
        'path_id': 'int64',
        'type': 'int32',
        'length': 'int64',
        'strategy': 'int64',
        'travel_time': 'int64',
        'static_travel_time': 'int64',
        'toll_cost': 'int32',
        'navi_id': 'string',
        'is_online': 'boolean',
        'group_segments': 'sequence<deva_navi_msgs/GroupSegmentProto>',
        'restriction_info': 'deva_navi_msgs/RestrictionInfoProto',
        'end_poi': 'deva_navi_msgs/POIInfoProto',
        'tip': 'deva_navi_msgs/TipInfoProto',
        'end_direction': 'int32',
        'is_holiday_free': 'boolean',
        'is_truck_path': 'boolean',
        'data_version': 'int64',
        'normal_plan_time': 'int64',
        'route_type': 'int32',
        'elec_path_info': 'deva_navi_msgs/ElecPathInfoProto',
        'path_description_info': 'deva_navi_msgs/PathDescriptionInfoProto',
        'remain_toll_cost': 'int64',
        'main_route_remain_toll_cost': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'SegmentInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'LineIconPointProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'ViaPointInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'ChargeStationInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'OddSegInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'GroupSegmentProto')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'RestrictionInfoProto'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'POIInfoProto'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'TipInfoProto'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'ElecPathInfoProto'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'PathDescriptionInfoProto'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_3d_traffic_lights = kwargs.get('all_3d_traffic_lights', [])
        self.segment_infos = kwargs.get('segment_infos', [])
        self.line_icon_points = kwargs.get('line_icon_points', [])
        self.city_adcode_list = array.array('q', kwargs.get('city_adcode_list', []))
        self.via_point_info = kwargs.get('via_point_info', [])
        self.charge_station_info = kwargs.get('charge_station_info', [])
        self.odd_seg_infos = kwargs.get('odd_seg_infos', [])
        self.plan_channel_id = kwargs.get('plan_channel_id', str())
        self.offline_req_custom_identity_id = kwargs.get('offline_req_custom_identity_id', str())
        self.is_valid = kwargs.get('is_valid', bool())
        self.path_id = kwargs.get('path_id', int())
        self.type = kwargs.get('type', int())
        self.length = kwargs.get('length', int())
        self.strategy = kwargs.get('strategy', int())
        self.travel_time = kwargs.get('travel_time', int())
        self.static_travel_time = kwargs.get('static_travel_time', int())
        self.toll_cost = kwargs.get('toll_cost', int())
        self.navi_id = kwargs.get('navi_id', str())
        self.is_online = kwargs.get('is_online', bool())
        self.group_segments = kwargs.get('group_segments', [])
        from deva_navi_msgs.msg import RestrictionInfoProto
        self.restriction_info = kwargs.get('restriction_info', RestrictionInfoProto())
        from deva_navi_msgs.msg import POIInfoProto
        self.end_poi = kwargs.get('end_poi', POIInfoProto())
        from deva_navi_msgs.msg import TipInfoProto
        self.tip = kwargs.get('tip', TipInfoProto())
        self.end_direction = kwargs.get('end_direction', int())
        self.is_holiday_free = kwargs.get('is_holiday_free', bool())
        self.is_truck_path = kwargs.get('is_truck_path', bool())
        self.data_version = kwargs.get('data_version', int())
        self.normal_plan_time = kwargs.get('normal_plan_time', int())
        self.route_type = kwargs.get('route_type', int())
        from deva_navi_msgs.msg import ElecPathInfoProto
        self.elec_path_info = kwargs.get('elec_path_info', ElecPathInfoProto())
        from deva_navi_msgs.msg import PathDescriptionInfoProto
        self.path_description_info = kwargs.get('path_description_info', PathDescriptionInfoProto())
        self.remain_toll_cost = kwargs.get('remain_toll_cost', int())
        self.main_route_remain_toll_cost = kwargs.get('main_route_remain_toll_cost', int())

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
        if self.all_3d_traffic_lights != other.all_3d_traffic_lights:
            return False
        if self.segment_infos != other.segment_infos:
            return False
        if self.line_icon_points != other.line_icon_points:
            return False
        if self.city_adcode_list != other.city_adcode_list:
            return False
        if self.via_point_info != other.via_point_info:
            return False
        if self.charge_station_info != other.charge_station_info:
            return False
        if self.odd_seg_infos != other.odd_seg_infos:
            return False
        if self.plan_channel_id != other.plan_channel_id:
            return False
        if self.offline_req_custom_identity_id != other.offline_req_custom_identity_id:
            return False
        if self.is_valid != other.is_valid:
            return False
        if self.path_id != other.path_id:
            return False
        if self.type != other.type:
            return False
        if self.length != other.length:
            return False
        if self.strategy != other.strategy:
            return False
        if self.travel_time != other.travel_time:
            return False
        if self.static_travel_time != other.static_travel_time:
            return False
        if self.toll_cost != other.toll_cost:
            return False
        if self.navi_id != other.navi_id:
            return False
        if self.is_online != other.is_online:
            return False
        if self.group_segments != other.group_segments:
            return False
        if self.restriction_info != other.restriction_info:
            return False
        if self.end_poi != other.end_poi:
            return False
        if self.tip != other.tip:
            return False
        if self.end_direction != other.end_direction:
            return False
        if self.is_holiday_free != other.is_holiday_free:
            return False
        if self.is_truck_path != other.is_truck_path:
            return False
        if self.data_version != other.data_version:
            return False
        if self.normal_plan_time != other.normal_plan_time:
            return False
        if self.route_type != other.route_type:
            return False
        if self.elec_path_info != other.elec_path_info:
            return False
        if self.path_description_info != other.path_description_info:
            return False
        if self.remain_toll_cost != other.remain_toll_cost:
            return False
        if self.main_route_remain_toll_cost != other.main_route_remain_toll_cost:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_3d_traffic_lights(self):
        """Message field 'all_3d_traffic_lights'."""
        return self._all_3d_traffic_lights

    @all_3d_traffic_lights.setter
    def all_3d_traffic_lights(self, value):
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
                "The 'all_3d_traffic_lights' field must be a set or sequence and each value of type 'Coord3DDoubleProto'"
        self._all_3d_traffic_lights = value

    @builtins.property
    def segment_infos(self):
        """Message field 'segment_infos'."""
        return self._segment_infos

    @segment_infos.setter
    def segment_infos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import SegmentInfoProto
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
                 all(isinstance(v, SegmentInfoProto) for v in value) and
                 True), \
                "The 'segment_infos' field must be a set or sequence and each value of type 'SegmentInfoProto'"
        self._segment_infos = value

    @builtins.property
    def line_icon_points(self):
        """Message field 'line_icon_points'."""
        return self._line_icon_points

    @line_icon_points.setter
    def line_icon_points(self, value):
        if __debug__:
            from deva_navi_msgs.msg import LineIconPointProto
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
                 all(isinstance(v, LineIconPointProto) for v in value) and
                 True), \
                "The 'line_icon_points' field must be a set or sequence and each value of type 'LineIconPointProto'"
        self._line_icon_points = value

    @builtins.property
    def city_adcode_list(self):
        """Message field 'city_adcode_list'."""
        return self._city_adcode_list

    @city_adcode_list.setter
    def city_adcode_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'city_adcode_list' array.array() must have the type code of 'q'"
            self._city_adcode_list = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'city_adcode_list' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._city_adcode_list = array.array('q', value)

    @builtins.property
    def via_point_info(self):
        """Message field 'via_point_info'."""
        return self._via_point_info

    @via_point_info.setter
    def via_point_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import ViaPointInfoProto
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
                 all(isinstance(v, ViaPointInfoProto) for v in value) and
                 True), \
                "The 'via_point_info' field must be a set or sequence and each value of type 'ViaPointInfoProto'"
        self._via_point_info = value

    @builtins.property
    def charge_station_info(self):
        """Message field 'charge_station_info'."""
        return self._charge_station_info

    @charge_station_info.setter
    def charge_station_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import ChargeStationInfoProto
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
                 all(isinstance(v, ChargeStationInfoProto) for v in value) and
                 True), \
                "The 'charge_station_info' field must be a set or sequence and each value of type 'ChargeStationInfoProto'"
        self._charge_station_info = value

    @builtins.property
    def odd_seg_infos(self):
        """Message field 'odd_seg_infos'."""
        return self._odd_seg_infos

    @odd_seg_infos.setter
    def odd_seg_infos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import OddSegInfoProto
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
                 all(isinstance(v, OddSegInfoProto) for v in value) and
                 True), \
                "The 'odd_seg_infos' field must be a set or sequence and each value of type 'OddSegInfoProto'"
        self._odd_seg_infos = value

    @builtins.property
    def plan_channel_id(self):
        """Message field 'plan_channel_id'."""
        return self._plan_channel_id

    @plan_channel_id.setter
    def plan_channel_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plan_channel_id' field must be of type 'str'"
        self._plan_channel_id = value

    @builtins.property
    def offline_req_custom_identity_id(self):
        """Message field 'offline_req_custom_identity_id'."""
        return self._offline_req_custom_identity_id

    @offline_req_custom_identity_id.setter
    def offline_req_custom_identity_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'offline_req_custom_identity_id' field must be of type 'str'"
        self._offline_req_custom_identity_id = value

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
    def path_id(self):
        """Message field 'path_id'."""
        return self._path_id

    @path_id.setter
    def path_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'path_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._path_id = value

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
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'length' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._length = value

    @builtins.property
    def strategy(self):
        """Message field 'strategy'."""
        return self._strategy

    @strategy.setter
    def strategy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strategy' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'strategy' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._strategy = value

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
    def static_travel_time(self):
        """Message field 'static_travel_time'."""
        return self._static_travel_time

    @static_travel_time.setter
    def static_travel_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'static_travel_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'static_travel_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._static_travel_time = value

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
    def navi_id(self):
        """Message field 'navi_id'."""
        return self._navi_id

    @navi_id.setter
    def navi_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'navi_id' field must be of type 'str'"
        self._navi_id = value

    @builtins.property
    def is_online(self):
        """Message field 'is_online'."""
        return self._is_online

    @is_online.setter
    def is_online(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_online' field must be of type 'bool'"
        self._is_online = value

    @builtins.property
    def group_segments(self):
        """Message field 'group_segments'."""
        return self._group_segments

    @group_segments.setter
    def group_segments(self, value):
        if __debug__:
            from deva_navi_msgs.msg import GroupSegmentProto
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
                 all(isinstance(v, GroupSegmentProto) for v in value) and
                 True), \
                "The 'group_segments' field must be a set or sequence and each value of type 'GroupSegmentProto'"
        self._group_segments = value

    @builtins.property
    def restriction_info(self):
        """Message field 'restriction_info'."""
        return self._restriction_info

    @restriction_info.setter
    def restriction_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import RestrictionInfoProto
            assert \
                isinstance(value, RestrictionInfoProto), \
                "The 'restriction_info' field must be a sub message of type 'RestrictionInfoProto'"
        self._restriction_info = value

    @builtins.property
    def end_poi(self):
        """Message field 'end_poi'."""
        return self._end_poi

    @end_poi.setter
    def end_poi(self, value):
        if __debug__:
            from deva_navi_msgs.msg import POIInfoProto
            assert \
                isinstance(value, POIInfoProto), \
                "The 'end_poi' field must be a sub message of type 'POIInfoProto'"
        self._end_poi = value

    @builtins.property
    def tip(self):
        """Message field 'tip'."""
        return self._tip

    @tip.setter
    def tip(self, value):
        if __debug__:
            from deva_navi_msgs.msg import TipInfoProto
            assert \
                isinstance(value, TipInfoProto), \
                "The 'tip' field must be a sub message of type 'TipInfoProto'"
        self._tip = value

    @builtins.property
    def end_direction(self):
        """Message field 'end_direction'."""
        return self._end_direction

    @end_direction.setter
    def end_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'end_direction' field must be an integer in [-2147483648, 2147483647]"
        self._end_direction = value

    @builtins.property
    def is_holiday_free(self):
        """Message field 'is_holiday_free'."""
        return self._is_holiday_free

    @is_holiday_free.setter
    def is_holiday_free(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_holiday_free' field must be of type 'bool'"
        self._is_holiday_free = value

    @builtins.property
    def is_truck_path(self):
        """Message field 'is_truck_path'."""
        return self._is_truck_path

    @is_truck_path.setter
    def is_truck_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_truck_path' field must be of type 'bool'"
        self._is_truck_path = value

    @builtins.property
    def data_version(self):
        """Message field 'data_version'."""
        return self._data_version

    @data_version.setter
    def data_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_version' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'data_version' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._data_version = value

    @builtins.property
    def normal_plan_time(self):
        """Message field 'normal_plan_time'."""
        return self._normal_plan_time

    @normal_plan_time.setter
    def normal_plan_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'normal_plan_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'normal_plan_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._normal_plan_time = value

    @builtins.property
    def route_type(self):
        """Message field 'route_type'."""
        return self._route_type

    @route_type.setter
    def route_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'route_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'route_type' field must be an integer in [-2147483648, 2147483647]"
        self._route_type = value

    @builtins.property
    def elec_path_info(self):
        """Message field 'elec_path_info'."""
        return self._elec_path_info

    @elec_path_info.setter
    def elec_path_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import ElecPathInfoProto
            assert \
                isinstance(value, ElecPathInfoProto), \
                "The 'elec_path_info' field must be a sub message of type 'ElecPathInfoProto'"
        self._elec_path_info = value

    @builtins.property
    def path_description_info(self):
        """Message field 'path_description_info'."""
        return self._path_description_info

    @path_description_info.setter
    def path_description_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import PathDescriptionInfoProto
            assert \
                isinstance(value, PathDescriptionInfoProto), \
                "The 'path_description_info' field must be a sub message of type 'PathDescriptionInfoProto'"
        self._path_description_info = value

    @builtins.property
    def remain_toll_cost(self):
        """Message field 'remain_toll_cost'."""
        return self._remain_toll_cost

    @remain_toll_cost.setter
    def remain_toll_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_toll_cost' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'remain_toll_cost' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._remain_toll_cost = value

    @builtins.property
    def main_route_remain_toll_cost(self):
        """Message field 'main_route_remain_toll_cost'."""
        return self._main_route_remain_toll_cost

    @main_route_remain_toll_cost.setter
    def main_route_remain_toll_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_route_remain_toll_cost' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'main_route_remain_toll_cost' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._main_route_remain_toll_cost = value
