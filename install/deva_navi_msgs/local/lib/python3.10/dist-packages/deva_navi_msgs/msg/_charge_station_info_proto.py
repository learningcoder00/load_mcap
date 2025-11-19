# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargeStationInfoProto(type):
    """Metaclass of message 'ChargeStationInfoProto'."""

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
                'deva_navi_msgs.msg.ChargeStationInfoProto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charge_station_info_proto
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charge_station_info_proto
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charge_station_info_proto
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charge_station_info_proto
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charge_station_info_proto

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


class ChargeStationInfoProto(metaclass=Metaclass_ChargeStationInfoProto):
    """Message class 'ChargeStationInfoProto'."""

    __slots__ = [
        '_segment_idx',
        '_direction',
        '_show',
        '_projective',
        '_poi_id',
        '_name',
        '_brand_name',
        '_max_power',
        '_charge_percent',
        '_charge_time',
        '_remaining_capacity',
    ]

    _fields_and_field_types = {
        'segment_idx': 'int32',
        'direction': 'int32',
        'show': 'deva_navi_msgs/Coord3DDoubleProto',
        'projective': 'deva_navi_msgs/Coord3DDoubleProto',
        'poi_id': 'string',
        'name': 'string',
        'brand_name': 'string',
        'max_power': 'int32',
        'charge_percent': 'int32',
        'charge_time': 'int32',
        'remaining_capacity': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_navi_msgs', 'msg'], 'Coord3DDoubleProto'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.segment_idx = kwargs.get('segment_idx', int())
        self.direction = kwargs.get('direction', int())
        from deva_navi_msgs.msg import Coord3DDoubleProto
        self.show = kwargs.get('show', Coord3DDoubleProto())
        from deva_navi_msgs.msg import Coord3DDoubleProto
        self.projective = kwargs.get('projective', Coord3DDoubleProto())
        self.poi_id = kwargs.get('poi_id', str())
        self.name = kwargs.get('name', str())
        self.brand_name = kwargs.get('brand_name', str())
        self.max_power = kwargs.get('max_power', int())
        self.charge_percent = kwargs.get('charge_percent', int())
        self.charge_time = kwargs.get('charge_time', int())
        self.remaining_capacity = kwargs.get('remaining_capacity', int())

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
        if self.segment_idx != other.segment_idx:
            return False
        if self.direction != other.direction:
            return False
        if self.show != other.show:
            return False
        if self.projective != other.projective:
            return False
        if self.poi_id != other.poi_id:
            return False
        if self.name != other.name:
            return False
        if self.brand_name != other.brand_name:
            return False
        if self.max_power != other.max_power:
            return False
        if self.charge_percent != other.charge_percent:
            return False
        if self.charge_time != other.charge_time:
            return False
        if self.remaining_capacity != other.remaining_capacity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def segment_idx(self):
        """Message field 'segment_idx'."""
        return self._segment_idx

    @segment_idx.setter
    def segment_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'segment_idx' field must be an integer in [-2147483648, 2147483647]"
        self._segment_idx = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'direction' field must be an integer in [-2147483648, 2147483647]"
        self._direction = value

    @builtins.property
    def show(self):
        """Message field 'show'."""
        return self._show

    @show.setter
    def show(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
            assert \
                isinstance(value, Coord3DDoubleProto), \
                "The 'show' field must be a sub message of type 'Coord3DDoubleProto'"
        self._show = value

    @builtins.property
    def projective(self):
        """Message field 'projective'."""
        return self._projective

    @projective.setter
    def projective(self, value):
        if __debug__:
            from deva_navi_msgs.msg import Coord3DDoubleProto
            assert \
                isinstance(value, Coord3DDoubleProto), \
                "The 'projective' field must be a sub message of type 'Coord3DDoubleProto'"
        self._projective = value

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
    def brand_name(self):
        """Message field 'brand_name'."""
        return self._brand_name

    @brand_name.setter
    def brand_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'brand_name' field must be of type 'str'"
        self._brand_name = value

    @builtins.property
    def max_power(self):
        """Message field 'max_power'."""
        return self._max_power

    @max_power.setter
    def max_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_power' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_power' field must be an integer in [-2147483648, 2147483647]"
        self._max_power = value

    @builtins.property
    def charge_percent(self):
        """Message field 'charge_percent'."""
        return self._charge_percent

    @charge_percent.setter
    def charge_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charge_percent' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charge_percent' field must be an integer in [-2147483648, 2147483647]"
        self._charge_percent = value

    @builtins.property
    def charge_time(self):
        """Message field 'charge_time'."""
        return self._charge_time

    @charge_time.setter
    def charge_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charge_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'charge_time' field must be an integer in [-2147483648, 2147483647]"
        self._charge_time = value

    @builtins.property
    def remaining_capacity(self):
        """Message field 'remaining_capacity'."""
        return self._remaining_capacity

    @remaining_capacity.setter
    def remaining_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_capacity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'remaining_capacity' field must be an integer in [-2147483648, 2147483647]"
        self._remaining_capacity = value
