# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/LinkInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LinkInfoProto(type):
    """Metaclass of message 'LinkInfoProto'."""

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
                'deva_navi_msgs.msg.LinkInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link_info_proto

            from deva_navi_msgs.msg import Coord3DDoubleProto
            if Coord3DDoubleProto.__class__._TYPE_SUPPORT is None:
                Coord3DDoubleProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import GantryInfoProto
            if GantryInfoProto.__class__._TYPE_SUPPORT is None:
                GantryInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import NaviCameraProto
            if NaviCameraProto.__class__._TYPE_SUPPORT is None:
                NaviCameraProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import RoadFacilityProto
            if RoadFacilityProto.__class__._TYPE_SUPPORT is None:
                RoadFacilityProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import TurnInfoProto
            if TurnInfoProto.__class__._TYPE_SUPPORT is None:
                TurnInfoProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinkInfoProto(metaclass=Metaclass_LinkInfoProto):
    """Message class 'LinkInfoProto'."""

    __slots__ = [
        '_points',
        '_gantry_infos',
        '_cameras',
        '_is_valid',
        '_related_path_id',
        '_related_segment_index',
        '_link_index',
        '_length',
        '_travel_time',
        '_static_travel_time',
        '_road_name',
        '_road_facilities',
        '_topo_id_64',
        '_urid',
        '_link_direction',
        '_main_action',
        '_assistant_action',
        '_adcode',
        '_link_type',
        '_formway',
        '_road_class',
        '_road_direction',
        '_ownership',
        '_is_toll',
        '_is_over_head',
        '_has_parallel_road',
        '_has_multi_out',
        '_has_traffic_light',
        '_has_mix_fork',
        '_is_at_service',
        '_is_restricting',
        '_limit_flag',
        '_speed',
        '_turn_infos',
        '_service_name',
        '_inner_road',
        '_is_parking_road',
        '_traffic_status',
    ]

    _fields_and_field_types = {
        'points': 'sequence<deva_navi_msgs/Coord3DDoubleProto>',
        'gantry_infos': 'sequence<deva_navi_msgs/GantryInfoProto>',
        'cameras': 'sequence<deva_navi_msgs/NaviCameraProto>',
        'is_valid': 'boolean',
        'related_path_id': 'int64',
        'related_segment_index': 'int32',
        'link_index': 'int32',
        'length': 'int32',
        'travel_time': 'int64',
        'static_travel_time': 'int64',
        'road_name': 'string',
        'road_facilities': 'sequence<deva_navi_msgs/RoadFacilityProto>',
        'topo_id_64': 'int64',
        'urid': 'int32',
        'link_direction': 'int32',
        'main_action': 'int32',
        'assistant_action': 'int32',
        'adcode': 'int64',
        'link_type': 'int32',
        'formway': 'int32',
        'road_class': 'int32',
        'road_direction': 'int32',
        'ownership': 'int32',
        'is_toll': 'boolean',
        'is_over_head': 'boolean',
        'has_parallel_road': 'boolean',
        'has_multi_out': 'boolean',
        'has_traffic_light': 'boolean',
        'has_mix_fork': 'boolean',
        'is_at_service': 'boolean',
        'is_restricting': 'boolean',
        'limit_flag': 'int32',
        'speed': 'int32',
        'turn_infos': 'sequence<deva_navi_msgs/TurnInfoProto>',
        'service_name': 'string',
        'inner_road': 'boolean',
        'is_parking_road': 'boolean',
        'traffic_status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'GantryInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'NaviCameraProto')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'RoadFacilityProto')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'TurnInfoProto')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.points = kwargs.get('points', [])
        self.gantry_infos = kwargs.get('gantry_infos', [])
        self.cameras = kwargs.get('cameras', [])
        self.is_valid = kwargs.get('is_valid', bool())
        self.related_path_id = kwargs.get('related_path_id', int())
        self.related_segment_index = kwargs.get('related_segment_index', int())
        self.link_index = kwargs.get('link_index', int())
        self.length = kwargs.get('length', int())
        self.travel_time = kwargs.get('travel_time', int())
        self.static_travel_time = kwargs.get('static_travel_time', int())
        self.road_name = kwargs.get('road_name', str())
        self.road_facilities = kwargs.get('road_facilities', [])
        self.topo_id_64 = kwargs.get('topo_id_64', int())
        self.urid = kwargs.get('urid', int())
        self.link_direction = kwargs.get('link_direction', int())
        self.main_action = kwargs.get('main_action', int())
        self.assistant_action = kwargs.get('assistant_action', int())
        self.adcode = kwargs.get('adcode', int())
        self.link_type = kwargs.get('link_type', int())
        self.formway = kwargs.get('formway', int())
        self.road_class = kwargs.get('road_class', int())
        self.road_direction = kwargs.get('road_direction', int())
        self.ownership = kwargs.get('ownership', int())
        self.is_toll = kwargs.get('is_toll', bool())
        self.is_over_head = kwargs.get('is_over_head', bool())
        self.has_parallel_road = kwargs.get('has_parallel_road', bool())
        self.has_multi_out = kwargs.get('has_multi_out', bool())
        self.has_traffic_light = kwargs.get('has_traffic_light', bool())
        self.has_mix_fork = kwargs.get('has_mix_fork', bool())
        self.is_at_service = kwargs.get('is_at_service', bool())
        self.is_restricting = kwargs.get('is_restricting', bool())
        self.limit_flag = kwargs.get('limit_flag', int())
        self.speed = kwargs.get('speed', int())
        self.turn_infos = kwargs.get('turn_infos', [])
        self.service_name = kwargs.get('service_name', str())
        self.inner_road = kwargs.get('inner_road', bool())
        self.is_parking_road = kwargs.get('is_parking_road', bool())
        self.traffic_status = kwargs.get('traffic_status', int())

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
        if self.points != other.points:
            return False
        if self.gantry_infos != other.gantry_infos:
            return False
        if self.cameras != other.cameras:
            return False
        if self.is_valid != other.is_valid:
            return False
        if self.related_path_id != other.related_path_id:
            return False
        if self.related_segment_index != other.related_segment_index:
            return False
        if self.link_index != other.link_index:
            return False
        if self.length != other.length:
            return False
        if self.travel_time != other.travel_time:
            return False
        if self.static_travel_time != other.static_travel_time:
            return False
        if self.road_name != other.road_name:
            return False
        if self.road_facilities != other.road_facilities:
            return False
        if self.topo_id_64 != other.topo_id_64:
            return False
        if self.urid != other.urid:
            return False
        if self.link_direction != other.link_direction:
            return False
        if self.main_action != other.main_action:
            return False
        if self.assistant_action != other.assistant_action:
            return False
        if self.adcode != other.adcode:
            return False
        if self.link_type != other.link_type:
            return False
        if self.formway != other.formway:
            return False
        if self.road_class != other.road_class:
            return False
        if self.road_direction != other.road_direction:
            return False
        if self.ownership != other.ownership:
            return False
        if self.is_toll != other.is_toll:
            return False
        if self.is_over_head != other.is_over_head:
            return False
        if self.has_parallel_road != other.has_parallel_road:
            return False
        if self.has_multi_out != other.has_multi_out:
            return False
        if self.has_traffic_light != other.has_traffic_light:
            return False
        if self.has_mix_fork != other.has_mix_fork:
            return False
        if self.is_at_service != other.is_at_service:
            return False
        if self.is_restricting != other.is_restricting:
            return False
        if self.limit_flag != other.limit_flag:
            return False
        if self.speed != other.speed:
            return False
        if self.turn_infos != other.turn_infos:
            return False
        if self.service_name != other.service_name:
            return False
        if self.inner_road != other.inner_road:
            return False
        if self.is_parking_road != other.is_parking_road:
            return False
        if self.traffic_status != other.traffic_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def gantry_infos(self):
        """Message field 'gantry_infos'."""
        return self._gantry_infos

    @gantry_infos.setter
    def gantry_infos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import GantryInfoProto
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
                 all(isinstance(v, GantryInfoProto) for v in value) and
                 True), \
                "The 'gantry_infos' field must be a set or sequence and each value of type 'GantryInfoProto'"
        self._gantry_infos = value

    @builtins.property
    def cameras(self):
        """Message field 'cameras'."""
        return self._cameras

    @cameras.setter
    def cameras(self, value):
        if __debug__:
            from deva_navi_msgs.msg import NaviCameraProto
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
                 all(isinstance(v, NaviCameraProto) for v in value) and
                 True), \
                "The 'cameras' field must be a set or sequence and each value of type 'NaviCameraProto'"
        self._cameras = value

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
    def related_segment_index(self):
        """Message field 'related_segment_index'."""
        return self._related_segment_index

    @related_segment_index.setter
    def related_segment_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'related_segment_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'related_segment_index' field must be an integer in [-2147483648, 2147483647]"
        self._related_segment_index = value

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
    def road_name(self):
        """Message field 'road_name'."""
        return self._road_name

    @road_name.setter
    def road_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'road_name' field must be of type 'str'"
        self._road_name = value

    @builtins.property
    def road_facilities(self):
        """Message field 'road_facilities'."""
        return self._road_facilities

    @road_facilities.setter
    def road_facilities(self, value):
        if __debug__:
            from deva_navi_msgs.msg import RoadFacilityProto
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
                 all(isinstance(v, RoadFacilityProto) for v in value) and
                 True), \
                "The 'road_facilities' field must be a set or sequence and each value of type 'RoadFacilityProto'"
        self._road_facilities = value

    @builtins.property
    def topo_id_64(self):
        """Message field 'topo_id_64'."""
        return self._topo_id_64

    @topo_id_64.setter
    def topo_id_64(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'topo_id_64' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'topo_id_64' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._topo_id_64 = value

    @builtins.property
    def urid(self):
        """Message field 'urid'."""
        return self._urid

    @urid.setter
    def urid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'urid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'urid' field must be an integer in [-2147483648, 2147483647]"
        self._urid = value

    @builtins.property
    def link_direction(self):
        """Message field 'link_direction'."""
        return self._link_direction

    @link_direction.setter
    def link_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'link_direction' field must be an integer in [-2147483648, 2147483647]"
        self._link_direction = value

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
    def adcode(self):
        """Message field 'adcode'."""
        return self._adcode

    @adcode.setter
    def adcode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adcode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'adcode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._adcode = value

    @builtins.property
    def link_type(self):
        """Message field 'link_type'."""
        return self._link_type

    @link_type.setter
    def link_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'link_type' field must be an integer in [-2147483648, 2147483647]"
        self._link_type = value

    @builtins.property
    def formway(self):
        """Message field 'formway'."""
        return self._formway

    @formway.setter
    def formway(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'formway' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'formway' field must be an integer in [-2147483648, 2147483647]"
        self._formway = value

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
    def road_direction(self):
        """Message field 'road_direction'."""
        return self._road_direction

    @road_direction.setter
    def road_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'road_direction' field must be an integer in [-2147483648, 2147483647]"
        self._road_direction = value

    @builtins.property
    def ownership(self):
        """Message field 'ownership'."""
        return self._ownership

    @ownership.setter
    def ownership(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ownership' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ownership' field must be an integer in [-2147483648, 2147483647]"
        self._ownership = value

    @builtins.property
    def is_toll(self):
        """Message field 'is_toll'."""
        return self._is_toll

    @is_toll.setter
    def is_toll(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_toll' field must be of type 'bool'"
        self._is_toll = value

    @builtins.property
    def is_over_head(self):
        """Message field 'is_over_head'."""
        return self._is_over_head

    @is_over_head.setter
    def is_over_head(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_over_head' field must be of type 'bool'"
        self._is_over_head = value

    @builtins.property
    def has_parallel_road(self):
        """Message field 'has_parallel_road'."""
        return self._has_parallel_road

    @has_parallel_road.setter
    def has_parallel_road(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_parallel_road' field must be of type 'bool'"
        self._has_parallel_road = value

    @builtins.property
    def has_multi_out(self):
        """Message field 'has_multi_out'."""
        return self._has_multi_out

    @has_multi_out.setter
    def has_multi_out(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_multi_out' field must be of type 'bool'"
        self._has_multi_out = value

    @builtins.property
    def has_traffic_light(self):
        """Message field 'has_traffic_light'."""
        return self._has_traffic_light

    @has_traffic_light.setter
    def has_traffic_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_traffic_light' field must be of type 'bool'"
        self._has_traffic_light = value

    @builtins.property
    def has_mix_fork(self):
        """Message field 'has_mix_fork'."""
        return self._has_mix_fork

    @has_mix_fork.setter
    def has_mix_fork(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_mix_fork' field must be of type 'bool'"
        self._has_mix_fork = value

    @builtins.property
    def is_at_service(self):
        """Message field 'is_at_service'."""
        return self._is_at_service

    @is_at_service.setter
    def is_at_service(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_at_service' field must be of type 'bool'"
        self._is_at_service = value

    @builtins.property
    def is_restricting(self):
        """Message field 'is_restricting'."""
        return self._is_restricting

    @is_restricting.setter
    def is_restricting(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_restricting' field must be of type 'bool'"
        self._is_restricting = value

    @builtins.property
    def limit_flag(self):
        """Message field 'limit_flag'."""
        return self._limit_flag

    @limit_flag.setter
    def limit_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'limit_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'limit_flag' field must be an integer in [-2147483648, 2147483647]"
        self._limit_flag = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'speed' field must be an integer in [-2147483648, 2147483647]"
        self._speed = value

    @builtins.property
    def turn_infos(self):
        """Message field 'turn_infos'."""
        return self._turn_infos

    @turn_infos.setter
    def turn_infos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import TurnInfoProto
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
                 all(isinstance(v, TurnInfoProto) for v in value) and
                 True), \
                "The 'turn_infos' field must be a set or sequence and each value of type 'TurnInfoProto'"
        self._turn_infos = value

    @builtins.property
    def service_name(self):
        """Message field 'service_name'."""
        return self._service_name

    @service_name.setter
    def service_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'service_name' field must be of type 'str'"
        self._service_name = value

    @builtins.property
    def inner_road(self):
        """Message field 'inner_road'."""
        return self._inner_road

    @inner_road.setter
    def inner_road(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'inner_road' field must be of type 'bool'"
        self._inner_road = value

    @builtins.property
    def is_parking_road(self):
        """Message field 'is_parking_road'."""
        return self._is_parking_road

    @is_parking_road.setter
    def is_parking_road(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_parking_road' field must be of type 'bool'"
        self._is_parking_road = value

    @builtins.property
    def traffic_status(self):
        """Message field 'traffic_status'."""
        return self._traffic_status

    @traffic_status.setter
    def traffic_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'traffic_status' field must be an integer in [-2147483648, 2147483647]"
        self._traffic_status = value
