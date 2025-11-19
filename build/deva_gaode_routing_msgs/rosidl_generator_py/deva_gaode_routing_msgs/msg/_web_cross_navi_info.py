# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebCrossNaviInfo(type):
    """Metaclass of message 'WebCrossNaviInfo'."""

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
                'deva_gaode_routing_msgs.msg.WebCrossNaviInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_cross_navi_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_cross_navi_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_cross_navi_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_cross_navi_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_cross_navi_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebCrossNaviInfo(metaclass=Metaclass_WebCrossNaviInfo):
    """Message class 'WebCrossNaviInfo'."""

    __slots__ = [
        '_assist_action',
        '_cross_maneuver_id',
        '_cur_to_segment_dist',
        '_cur_to_segment_time',
        '_dest_direction',
        '_main_action',
        '_maneuver_id',
        '_next_road_name',
        '_out_cnt',
        '_path_id',
        '_rev',
        '_reversed',
        '_seg_idx',
        '_tunnel_flag',
        '_via_num',
    ]

    _fields_and_field_types = {
        'assist_action': 'int32',
        'cross_maneuver_id': 'int32',
        'cur_to_segment_dist': 'int32',
        'cur_to_segment_time': 'int32',
        'dest_direction': 'int32',
        'main_action': 'int32',
        'maneuver_id': 'int32',
        'next_road_name': 'string',
        'out_cnt': 'int32',
        'path_id': 'int32',
        'rev': 'int32',
        'reversed': 'int32',
        'seg_idx': 'int32',
        'tunnel_flag': 'int32',
        'via_num': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.assist_action = kwargs.get('assist_action', int())
        self.cross_maneuver_id = kwargs.get('cross_maneuver_id', int())
        self.cur_to_segment_dist = kwargs.get('cur_to_segment_dist', int())
        self.cur_to_segment_time = kwargs.get('cur_to_segment_time', int())
        self.dest_direction = kwargs.get('dest_direction', int())
        self.main_action = kwargs.get('main_action', int())
        self.maneuver_id = kwargs.get('maneuver_id', int())
        self.next_road_name = kwargs.get('next_road_name', str())
        self.out_cnt = kwargs.get('out_cnt', int())
        self.path_id = kwargs.get('path_id', int())
        self.rev = kwargs.get('rev', int())
        self.reversed = kwargs.get('reversed', int())
        self.seg_idx = kwargs.get('seg_idx', int())
        self.tunnel_flag = kwargs.get('tunnel_flag', int())
        self.via_num = kwargs.get('via_num', int())

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
        if self.assist_action != other.assist_action:
            return False
        if self.cross_maneuver_id != other.cross_maneuver_id:
            return False
        if self.cur_to_segment_dist != other.cur_to_segment_dist:
            return False
        if self.cur_to_segment_time != other.cur_to_segment_time:
            return False
        if self.dest_direction != other.dest_direction:
            return False
        if self.main_action != other.main_action:
            return False
        if self.maneuver_id != other.maneuver_id:
            return False
        if self.next_road_name != other.next_road_name:
            return False
        if self.out_cnt != other.out_cnt:
            return False
        if self.path_id != other.path_id:
            return False
        if self.rev != other.rev:
            return False
        if self.reversed != other.reversed:
            return False
        if self.seg_idx != other.seg_idx:
            return False
        if self.tunnel_flag != other.tunnel_flag:
            return False
        if self.via_num != other.via_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def assist_action(self):
        """Message field 'assist_action'."""
        return self._assist_action

    @assist_action.setter
    def assist_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assist_action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'assist_action' field must be an integer in [-2147483648, 2147483647]"
        self._assist_action = value

    @builtins.property
    def cross_maneuver_id(self):
        """Message field 'cross_maneuver_id'."""
        return self._cross_maneuver_id

    @cross_maneuver_id.setter
    def cross_maneuver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cross_maneuver_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cross_maneuver_id' field must be an integer in [-2147483648, 2147483647]"
        self._cross_maneuver_id = value

    @builtins.property
    def cur_to_segment_dist(self):
        """Message field 'cur_to_segment_dist'."""
        return self._cur_to_segment_dist

    @cur_to_segment_dist.setter
    def cur_to_segment_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_to_segment_dist' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_to_segment_dist' field must be an integer in [-2147483648, 2147483647]"
        self._cur_to_segment_dist = value

    @builtins.property
    def cur_to_segment_time(self):
        """Message field 'cur_to_segment_time'."""
        return self._cur_to_segment_time

    @cur_to_segment_time.setter
    def cur_to_segment_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_to_segment_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cur_to_segment_time' field must be an integer in [-2147483648, 2147483647]"
        self._cur_to_segment_time = value

    @builtins.property
    def dest_direction(self):
        """Message field 'dest_direction'."""
        return self._dest_direction

    @dest_direction.setter
    def dest_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dest_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dest_direction' field must be an integer in [-2147483648, 2147483647]"
        self._dest_direction = value

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
    def maneuver_id(self):
        """Message field 'maneuver_id'."""
        return self._maneuver_id

    @maneuver_id.setter
    def maneuver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuver_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'maneuver_id' field must be an integer in [-2147483648, 2147483647]"
        self._maneuver_id = value

    @builtins.property
    def next_road_name(self):
        """Message field 'next_road_name'."""
        return self._next_road_name

    @next_road_name.setter
    def next_road_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'next_road_name' field must be of type 'str'"
        self._next_road_name = value

    @builtins.property
    def out_cnt(self):
        """Message field 'out_cnt'."""
        return self._out_cnt

    @out_cnt.setter
    def out_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'out_cnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'out_cnt' field must be an integer in [-2147483648, 2147483647]"
        self._out_cnt = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'path_id' field must be an integer in [-2147483648, 2147483647]"
        self._path_id = value

    @builtins.property
    def rev(self):
        """Message field 'rev'."""
        return self._rev

    @rev.setter
    def rev(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rev' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rev' field must be an integer in [-2147483648, 2147483647]"
        self._rev = value

    @builtins.property  # noqa: A003
    def reversed(self):  # noqa: A003
        """Message field 'reversed'."""
        return self._reversed

    @reversed.setter  # noqa: A003
    def reversed(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reversed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'reversed' field must be an integer in [-2147483648, 2147483647]"
        self._reversed = value

    @builtins.property
    def seg_idx(self):
        """Message field 'seg_idx'."""
        return self._seg_idx

    @seg_idx.setter
    def seg_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seg_idx' field must be an integer in [-2147483648, 2147483647]"
        self._seg_idx = value

    @builtins.property
    def tunnel_flag(self):
        """Message field 'tunnel_flag'."""
        return self._tunnel_flag

    @tunnel_flag.setter
    def tunnel_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tunnel_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tunnel_flag' field must be an integer in [-2147483648, 2147483647]"
        self._tunnel_flag = value

    @builtins.property
    def via_num(self):
        """Message field 'via_num'."""
        return self._via_num

    @via_num.setter
    def via_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'via_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'via_num' field must be an integer in [-2147483648, 2147483647]"
        self._via_num = value
