# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/POIInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'points'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_POIInfoProto(type):
    """Metaclass of message 'POIInfoProto'."""

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
                'deva_navi_msgs.msg.POIInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__poi_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__poi_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__poi_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__poi_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__poi_info_proto

            from deva_navi_msgs.msg import ChargingArgumentsInfoProto
            if ChargingArgumentsInfoProto.__class__._TYPE_SUPPORT is None:
                ChargingArgumentsInfoProto.__class__.__import_type_support__()

            from deva_navi_msgs.msg import Coord3DDoubleProto
            if Coord3DDoubleProto.__class__._TYPE_SUPPORT is None:
                Coord3DDoubleProto.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class POIInfoProto(metaclass=Metaclass_POIInfoProto):
    """Message class 'POIInfoProto'."""

    __slots__ = [
        '_real_pos',
        '_navi_pos',
        '_sigshelter',
        '_type',
        '_road_id',
        '_poi_id',
        '_name',
        '_floor_name',
        '_parent_name',
        '_parent_simple_name',
        '_angel',
        '_points',
        '_parent_id',
        '_parent_rel',
        '_type_code',
        '_from_jump',
        '_overhead',
        '_point_cnt',
        '_check_point_link_id',
        '_overhead_back_alt_diff',
        '_floor',
        '_extend_info_flag',
        '_src_app',
        '_charge_info',
    ]

    _fields_and_field_types = {
        'real_pos': 'deva_navi_msgs/Coord3DDoubleProto',
        'navi_pos': 'deva_navi_msgs/Coord3DDoubleProto',
        'sigshelter': 'float',
        'type': 'int32',
        'road_id': 'int64',
        'poi_id': 'string',
        'name': 'string',
        'floor_name': 'string',
        'parent_name': 'string',
        'parent_simple_name': 'string',
        'angel': 'string',
        'points': 'sequence<int32>',
        'parent_id': 'string',
        'parent_rel': 'string',
        'type_code': 'string',
        'from_jump': 'int32',
        'overhead': 'int32',
        'point_cnt': 'int32',
        'check_point_link_id': 'int64',
        'overhead_back_alt_diff': 'float',
        'floor': 'int32',
        'extend_info_flag': 'string',
        'src_app': 'string',
        'charge_info': 'deva_navi_msgs/ChargingArgumentsInfoProto',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'ChargingArgumentsInfoProto'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_navi_msgs.msg import Coord3DDoubleProto
        self.real_pos = kwargs.get('real_pos', Coord3DDoubleProto())
        from deva_navi_msgs.msg import Coord3DDoubleProto
        self.navi_pos = kwargs.get('navi_pos', Coord3DDoubleProto())
        self.sigshelter = kwargs.get('sigshelter', float())
        self.type = kwargs.get('type', int())
        self.road_id = kwargs.get('road_id', int())
        self.poi_id = kwargs.get('poi_id', str())
        self.name = kwargs.get('name', str())
        self.floor_name = kwargs.get('floor_name', str())
        self.parent_name = kwargs.get('parent_name', str())
        self.parent_simple_name = kwargs.get('parent_simple_name', str())
        self.angel = kwargs.get('angel', str())
        self.points = array.array('i', kwargs.get('points', []))
        self.parent_id = kwargs.get('parent_id', str())
        self.parent_rel = kwargs.get('parent_rel', str())
        self.type_code = kwargs.get('type_code', str())
        self.from_jump = kwargs.get('from_jump', int())
        self.overhead = kwargs.get('overhead', int())
        self.point_cnt = kwargs.get('point_cnt', int())
        self.check_point_link_id = kwargs.get('check_point_link_id', int())
        self.overhead_back_alt_diff = kwargs.get('overhead_back_alt_diff', float())
        self.floor = kwargs.get('floor', int())
        self.extend_info_flag = kwargs.get('extend_info_flag', str())
        self.src_app = kwargs.get('src_app', str())
        from deva_navi_msgs.msg import ChargingArgumentsInfoProto
        self.charge_info = kwargs.get('charge_info', ChargingArgumentsInfoProto())

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
        if self.real_pos != other.real_pos:
            return False
        if self.navi_pos != other.navi_pos:
            return False
        if self.sigshelter != other.sigshelter:
            return False
        if self.type != other.type:
            return False
        if self.road_id != other.road_id:
            return False
        if self.poi_id != other.poi_id:
            return False
        if self.name != other.name:
            return False
        if self.floor_name != other.floor_name:
            return False
        if self.parent_name != other.parent_name:
            return False
        if self.parent_simple_name != other.parent_simple_name:
            return False
        if self.angel != other.angel:
            return False
        if self.points != other.points:
            return False
        if self.parent_id != other.parent_id:
            return False
        if self.parent_rel != other.parent_rel:
            return False
        if self.type_code != other.type_code:
            return False
        if self.from_jump != other.from_jump:
            return False
        if self.overhead != other.overhead:
            return False
        if self.point_cnt != other.point_cnt:
            return False
        if self.check_point_link_id != other.check_point_link_id:
            return False
        if self.overhead_back_alt_diff != other.overhead_back_alt_diff:
            return False
        if self.floor != other.floor:
            return False
        if self.extend_info_flag != other.extend_info_flag:
            return False
        if self.src_app != other.src_app:
            return False
        if self.charge_info != other.charge_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def real_pos(self):
        """Message field 'real_pos'."""
        return self._real_pos

    @real_pos.setter
    def real_pos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
            assert \
                isinstance(value, Coord3DDoubleProto), \
                "The 'real_pos' field must be a sub message of type 'Coord3DDoubleProto'"
        self._real_pos = value

    @builtins.property
    def navi_pos(self):
        """Message field 'navi_pos'."""
        return self._navi_pos

    @navi_pos.setter
    def navi_pos(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
            assert \
                isinstance(value, Coord3DDoubleProto), \
                "The 'navi_pos' field must be a sub message of type 'Coord3DDoubleProto'"
        self._navi_pos = value

    @builtins.property
    def sigshelter(self):
        """Message field 'sigshelter'."""
        return self._sigshelter

    @sigshelter.setter
    def sigshelter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigshelter' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigshelter' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigshelter = value

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
    def road_id(self):
        """Message field 'road_id'."""
        return self._road_id

    @road_id.setter
    def road_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'road_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._road_id = value

    @builtins.property
    def poi_id(self):
        """Message field 'poi_id'."""
        return self._poi_id

    @poi_id.setter
    def poi_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'poi_id' field must be of type 'str'"
        self._poi_id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def floor_name(self):
        """Message field 'floor_name'."""
        return self._floor_name

    @floor_name.setter
    def floor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'floor_name' field must be of type 'str'"
        self._floor_name = value

    @builtins.property
    def parent_name(self):
        """Message field 'parent_name'."""
        return self._parent_name

    @parent_name.setter
    def parent_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_name' field must be of type 'str'"
        self._parent_name = value

    @builtins.property
    def parent_simple_name(self):
        """Message field 'parent_simple_name'."""
        return self._parent_simple_name

    @parent_simple_name.setter
    def parent_simple_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_simple_name' field must be of type 'str'"
        self._parent_simple_name = value

    @builtins.property
    def angel(self):
        """Message field 'angel'."""
        return self._angel

    @angel.setter
    def angel(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'angel' field must be of type 'str'"
        self._angel = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'points' array.array() must have the type code of 'i'"
            self._points = value
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
                "The 'points' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._points = array.array('i', value)

    @builtins.property
    def parent_id(self):
        """Message field 'parent_id'."""
        return self._parent_id

    @parent_id.setter
    def parent_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_id' field must be of type 'str'"
        self._parent_id = value

    @builtins.property
    def parent_rel(self):
        """Message field 'parent_rel'."""
        return self._parent_rel

    @parent_rel.setter
    def parent_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_rel' field must be of type 'str'"
        self._parent_rel = value

    @builtins.property
    def type_code(self):
        """Message field 'type_code'."""
        return self._type_code

    @type_code.setter
    def type_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type_code' field must be of type 'str'"
        self._type_code = value

    @builtins.property
    def from_jump(self):
        """Message field 'from_jump'."""
        return self._from_jump

    @from_jump.setter
    def from_jump(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'from_jump' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'from_jump' field must be an integer in [-2147483648, 2147483647]"
        self._from_jump = value

    @builtins.property
    def overhead(self):
        """Message field 'overhead'."""
        return self._overhead

    @overhead.setter
    def overhead(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'overhead' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'overhead' field must be an integer in [-2147483648, 2147483647]"
        self._overhead = value

    @builtins.property
    def point_cnt(self):
        """Message field 'point_cnt'."""
        return self._point_cnt

    @point_cnt.setter
    def point_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_cnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'point_cnt' field must be an integer in [-2147483648, 2147483647]"
        self._point_cnt = value

    @builtins.property
    def check_point_link_id(self):
        """Message field 'check_point_link_id'."""
        return self._check_point_link_id

    @check_point_link_id.setter
    def check_point_link_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'check_point_link_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'check_point_link_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._check_point_link_id = value

    @builtins.property
    def overhead_back_alt_diff(self):
        """Message field 'overhead_back_alt_diff'."""
        return self._overhead_back_alt_diff

    @overhead_back_alt_diff.setter
    def overhead_back_alt_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'overhead_back_alt_diff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'overhead_back_alt_diff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._overhead_back_alt_diff = value

    @builtins.property
    def floor(self):
        """Message field 'floor'."""
        return self._floor

    @floor.setter
    def floor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'floor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'floor' field must be an integer in [-2147483648, 2147483647]"
        self._floor = value

    @builtins.property
    def extend_info_flag(self):
        """Message field 'extend_info_flag'."""
        return self._extend_info_flag

    @extend_info_flag.setter
    def extend_info_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'extend_info_flag' field must be of type 'str'"
        self._extend_info_flag = value

    @builtins.property
    def src_app(self):
        """Message field 'src_app'."""
        return self._src_app

    @src_app.setter
    def src_app(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'src_app' field must be of type 'str'"
        self._src_app = value

    @builtins.property
    def charge_info(self):
        """Message field 'charge_info'."""
        return self._charge_info

    @charge_info.setter
    def charge_info(self, value):
        if __debug__:
            from deva_navi_msgs.msg import ChargingArgumentsInfoProto
            assert \
                isinstance(value, ChargingArgumentsInfoProto), \
                "The 'charge_info' field must be a sub message of type 'ChargingArgumentsInfoProto'"
        self._charge_info = value
