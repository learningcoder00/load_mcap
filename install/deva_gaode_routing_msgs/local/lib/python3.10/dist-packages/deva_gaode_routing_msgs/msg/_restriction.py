# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/Restriction.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pass_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Restriction(type):
    """Metaclass of message 'Restriction'."""

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
                'deva_gaode_routing_msgs.msg.Restriction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__restriction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__restriction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__restriction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__restriction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__restriction

            from deva_gaode_routing_msgs.msg import RestrictionDetail
            if RestrictionDetail.__class__._TYPE_SUPPORT is None:
                RestrictionDetail.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Restriction(metaclass=Metaclass_Restriction):
    """Message class 'Restriction'."""

    __slots__ = [
        '_id',
        '_limit_type',
        '_node_id',
        '_pass_list',
        '_out_road',
        '_passage',
        '_slope',
        '_toll_mode',
        '_toll_lane_type',
        '_toll_name',
        '_restriction_detail',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'limit_type': 'int32',
        'node_id': 'uint64',
        'pass_list': 'sequence<uint64>',
        'out_road': 'uint64',
        'passage': 'int32',
        'slope': 'int32',
        'toll_mode': 'string',
        'toll_lane_type': 'string',
        'toll_name': 'string',
        'restriction_detail': 'deva_gaode_routing_msgs/RestrictionDetail',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RestrictionDetail'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.limit_type = kwargs.get('limit_type', int())
        self.node_id = kwargs.get('node_id', int())
        self.pass_list = array.array('Q', kwargs.get('pass_list', []))
        self.out_road = kwargs.get('out_road', int())
        self.passage = kwargs.get('passage', int())
        self.slope = kwargs.get('slope', int())
        self.toll_mode = kwargs.get('toll_mode', str())
        self.toll_lane_type = kwargs.get('toll_lane_type', str())
        self.toll_name = kwargs.get('toll_name', str())
        from deva_gaode_routing_msgs.msg import RestrictionDetail
        self.restriction_detail = kwargs.get('restriction_detail', RestrictionDetail())

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
        if self.id != other.id:
            return False
        if self.limit_type != other.limit_type:
            return False
        if self.node_id != other.node_id:
            return False
        if self.pass_list != other.pass_list:
            return False
        if self.out_road != other.out_road:
            return False
        if self.passage != other.passage:
            return False
        if self.slope != other.slope:
            return False
        if self.toll_mode != other.toll_mode:
            return False
        if self.toll_lane_type != other.toll_lane_type:
            return False
        if self.toll_name != other.toll_name:
            return False
        if self.restriction_detail != other.restriction_detail:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def limit_type(self):
        """Message field 'limit_type'."""
        return self._limit_type

    @limit_type.setter
    def limit_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'limit_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'limit_type' field must be an integer in [-2147483648, 2147483647]"
        self._limit_type = value

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id = value

    @builtins.property
    def pass_list(self):
        """Message field 'pass_list'."""
        return self._pass_list

    @pass_list.setter
    def pass_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'pass_list' array.array() must have the type code of 'Q'"
            self._pass_list = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'pass_list' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._pass_list = array.array('Q', value)

    @builtins.property
    def out_road(self):
        """Message field 'out_road'."""
        return self._out_road

    @out_road.setter
    def out_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'out_road' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'out_road' field must be an unsigned integer in [0, 18446744073709551615]"
        self._out_road = value

    @builtins.property
    def passage(self):
        """Message field 'passage'."""
        return self._passage

    @passage.setter
    def passage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'passage' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'passage' field must be an integer in [-2147483648, 2147483647]"
        self._passage = value

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
    def toll_mode(self):
        """Message field 'toll_mode'."""
        return self._toll_mode

    @toll_mode.setter
    def toll_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'toll_mode' field must be of type 'str'"
        self._toll_mode = value

    @builtins.property
    def toll_lane_type(self):
        """Message field 'toll_lane_type'."""
        return self._toll_lane_type

    @toll_lane_type.setter
    def toll_lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'toll_lane_type' field must be of type 'str'"
        self._toll_lane_type = value

    @builtins.property
    def toll_name(self):
        """Message field 'toll_name'."""
        return self._toll_name

    @toll_name.setter
    def toll_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'toll_name' field must be of type 'str'"
        self._toll_name = value

    @builtins.property
    def restriction_detail(self):
        """Message field 'restriction_detail'."""
        return self._restriction_detail

    @restriction_detail.setter
    def restriction_detail(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RestrictionDetail
            assert \
                isinstance(value, RestrictionDetail), \
                "The 'restriction_detail' field must be a sub message of type 'RestrictionDetail'"
        self._restriction_detail = value
