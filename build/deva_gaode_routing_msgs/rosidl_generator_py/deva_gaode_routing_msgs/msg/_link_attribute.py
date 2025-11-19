# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'road_kinds'
# Member 'vehicle_types'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LinkAttribute(type):
    """Metaclass of message 'LinkAttribute'."""

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
                'deva_gaode_routing_msgs.msg.LinkAttribute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link_attribute
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link_attribute
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link_attribute
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link_attribute
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link_attribute

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


class LinkAttribute(metaclass=Metaclass_LinkAttribute):
    """Message class 'LinkAttribute'."""

    __slots__ = [
        '_link_id',
        '_length',
        '_link_direction',
        '_lane_num_sum',
        '_lane_num_s2e',
        '_lane_num_e2s',
        '_speed_limit_s2e',
        '_speed_limit_e2s',
        '_road_class',
        '_toll_type',
        '_road_kinds',
        '_coverage_status',
        '_function_class',
        '_construction_type',
        '_condition_type',
        '_speed_class',
        '_admin_code',
        '_vehicle_types',
        '_compacity',
        '_is_special',
        '_is_in_city',
        '_is_cross_tile',
    ]

    _fields_and_field_types = {
        'link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'length': 'int32',
        'link_direction': 'uint8',
        'lane_num_sum': 'uint8',
        'lane_num_s2e': 'uint8',
        'lane_num_e2s': 'uint8',
        'speed_limit_s2e': 'uint8',
        'speed_limit_e2s': 'uint8',
        'road_class': 'int8',
        'toll_type': 'uint8',
        'road_kinds': 'sequence<uint8>',
        'coverage_status': 'uint16',
        'function_class': 'uint8',
        'construction_type': 'uint8',
        'condition_type': 'uint8',
        'speed_class': 'uint8',
        'admin_code': 'uint32',
        'vehicle_types': 'sequence<uint8>',
        'compacity': 'uint8',
        'is_special': 'boolean',
        'is_in_city': 'boolean',
        'is_cross_tile': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.link_id = kwargs.get('link_id', LinkIDType())
        self.length = kwargs.get('length', int())
        self.link_direction = kwargs.get('link_direction', int())
        self.lane_num_sum = kwargs.get('lane_num_sum', int())
        self.lane_num_s2e = kwargs.get('lane_num_s2e', int())
        self.lane_num_e2s = kwargs.get('lane_num_e2s', int())
        self.speed_limit_s2e = kwargs.get('speed_limit_s2e', int())
        self.speed_limit_e2s = kwargs.get('speed_limit_e2s', int())
        self.road_class = kwargs.get('road_class', int())
        self.toll_type = kwargs.get('toll_type', int())
        self.road_kinds = array.array('B', kwargs.get('road_kinds', []))
        self.coverage_status = kwargs.get('coverage_status', int())
        self.function_class = kwargs.get('function_class', int())
        self.construction_type = kwargs.get('construction_type', int())
        self.condition_type = kwargs.get('condition_type', int())
        self.speed_class = kwargs.get('speed_class', int())
        self.admin_code = kwargs.get('admin_code', int())
        self.vehicle_types = array.array('B', kwargs.get('vehicle_types', []))
        self.compacity = kwargs.get('compacity', int())
        self.is_special = kwargs.get('is_special', bool())
        self.is_in_city = kwargs.get('is_in_city', bool())
        self.is_cross_tile = kwargs.get('is_cross_tile', bool())

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
        if self.link_id != other.link_id:
            return False
        if self.length != other.length:
            return False
        if self.link_direction != other.link_direction:
            return False
        if self.lane_num_sum != other.lane_num_sum:
            return False
        if self.lane_num_s2e != other.lane_num_s2e:
            return False
        if self.lane_num_e2s != other.lane_num_e2s:
            return False
        if self.speed_limit_s2e != other.speed_limit_s2e:
            return False
        if self.speed_limit_e2s != other.speed_limit_e2s:
            return False
        if self.road_class != other.road_class:
            return False
        if self.toll_type != other.toll_type:
            return False
        if self.road_kinds != other.road_kinds:
            return False
        if self.coverage_status != other.coverage_status:
            return False
        if self.function_class != other.function_class:
            return False
        if self.construction_type != other.construction_type:
            return False
        if self.condition_type != other.condition_type:
            return False
        if self.speed_class != other.speed_class:
            return False
        if self.admin_code != other.admin_code:
            return False
        if self.vehicle_types != other.vehicle_types:
            return False
        if self.compacity != other.compacity:
            return False
        if self.is_special != other.is_special:
            return False
        if self.is_in_city != other.is_in_city:
            return False
        if self.is_cross_tile != other.is_cross_tile:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def link_id(self):
        """Message field 'link_id'."""
        return self._link_id

    @link_id.setter
    def link_id(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LinkIDType
            assert \
                isinstance(value, LinkIDType), \
                "The 'link_id' field must be a sub message of type 'LinkIDType'"
        self._link_id = value

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
    def link_direction(self):
        """Message field 'link_direction'."""
        return self._link_direction

    @link_direction.setter
    def link_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'link_direction' field must be an unsigned integer in [0, 255]"
        self._link_direction = value

    @builtins.property
    def lane_num_sum(self):
        """Message field 'lane_num_sum'."""
        return self._lane_num_sum

    @lane_num_sum.setter
    def lane_num_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_sum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_sum' field must be an unsigned integer in [0, 255]"
        self._lane_num_sum = value

    @builtins.property
    def lane_num_s2e(self):
        """Message field 'lane_num_s2e'."""
        return self._lane_num_s2e

    @lane_num_s2e.setter
    def lane_num_s2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_s2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_s2e' field must be an unsigned integer in [0, 255]"
        self._lane_num_s2e = value

    @builtins.property
    def lane_num_e2s(self):
        """Message field 'lane_num_e2s'."""
        return self._lane_num_e2s

    @lane_num_e2s.setter
    def lane_num_e2s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num_e2s' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_num_e2s' field must be an unsigned integer in [0, 255]"
        self._lane_num_e2s = value

    @builtins.property
    def speed_limit_s2e(self):
        """Message field 'speed_limit_s2e'."""
        return self._speed_limit_s2e

    @speed_limit_s2e.setter
    def speed_limit_s2e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_s2e' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_limit_s2e' field must be an unsigned integer in [0, 255]"
        self._speed_limit_s2e = value

    @builtins.property
    def speed_limit_e2s(self):
        """Message field 'speed_limit_e2s'."""
        return self._speed_limit_e2s

    @speed_limit_e2s.setter
    def speed_limit_e2s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_limit_e2s' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_limit_e2s' field must be an unsigned integer in [0, 255]"
        self._speed_limit_e2s = value

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
            assert value >= -128 and value < 128, \
                "The 'road_class' field must be an integer in [-128, 127]"
        self._road_class = value

    @builtins.property
    def toll_type(self):
        """Message field 'toll_type'."""
        return self._toll_type

    @toll_type.setter
    def toll_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toll_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'toll_type' field must be an unsigned integer in [0, 255]"
        self._toll_type = value

    @builtins.property
    def road_kinds(self):
        """Message field 'road_kinds'."""
        return self._road_kinds

    @road_kinds.setter
    def road_kinds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'road_kinds' array.array() must have the type code of 'B'"
            self._road_kinds = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'road_kinds' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._road_kinds = array.array('B', value)

    @builtins.property
    def coverage_status(self):
        """Message field 'coverage_status'."""
        return self._coverage_status

    @coverage_status.setter
    def coverage_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coverage_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'coverage_status' field must be an unsigned integer in [0, 65535]"
        self._coverage_status = value

    @builtins.property
    def function_class(self):
        """Message field 'function_class'."""
        return self._function_class

    @function_class.setter
    def function_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'function_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'function_class' field must be an unsigned integer in [0, 255]"
        self._function_class = value

    @builtins.property
    def construction_type(self):
        """Message field 'construction_type'."""
        return self._construction_type

    @construction_type.setter
    def construction_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'construction_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'construction_type' field must be an unsigned integer in [0, 255]"
        self._construction_type = value

    @builtins.property
    def condition_type(self):
        """Message field 'condition_type'."""
        return self._condition_type

    @condition_type.setter
    def condition_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'condition_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'condition_type' field must be an unsigned integer in [0, 255]"
        self._condition_type = value

    @builtins.property
    def speed_class(self):
        """Message field 'speed_class'."""
        return self._speed_class

    @speed_class.setter
    def speed_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_class' field must be an unsigned integer in [0, 255]"
        self._speed_class = value

    @builtins.property
    def admin_code(self):
        """Message field 'admin_code'."""
        return self._admin_code

    @admin_code.setter
    def admin_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'admin_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'admin_code' field must be an unsigned integer in [0, 4294967295]"
        self._admin_code = value

    @builtins.property
    def vehicle_types(self):
        """Message field 'vehicle_types'."""
        return self._vehicle_types

    @vehicle_types.setter
    def vehicle_types(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'vehicle_types' array.array() must have the type code of 'B'"
            self._vehicle_types = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'vehicle_types' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._vehicle_types = array.array('B', value)

    @builtins.property
    def compacity(self):
        """Message field 'compacity'."""
        return self._compacity

    @compacity.setter
    def compacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'compacity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'compacity' field must be an unsigned integer in [0, 255]"
        self._compacity = value

    @builtins.property
    def is_special(self):
        """Message field 'is_special'."""
        return self._is_special

    @is_special.setter
    def is_special(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_special' field must be of type 'bool'"
        self._is_special = value

    @builtins.property
    def is_in_city(self):
        """Message field 'is_in_city'."""
        return self._is_in_city

    @is_in_city.setter
    def is_in_city(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_in_city' field must be of type 'bool'"
        self._is_in_city = value

    @builtins.property
    def is_cross_tile(self):
        """Message field 'is_cross_tile'."""
        return self._is_cross_tile

    @is_cross_tile.setter
    def is_cross_tile(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_cross_tile' field must be of type 'bool'"
        self._is_cross_tile = value
