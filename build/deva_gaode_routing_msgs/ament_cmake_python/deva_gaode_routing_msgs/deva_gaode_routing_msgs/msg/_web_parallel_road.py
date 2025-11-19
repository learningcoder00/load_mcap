# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebParallelRoad(type):
    """Metaclass of message 'WebParallelRoad'."""

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
                'deva_gaode_routing_msgs.msg.WebParallelRoad')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_parallel_road
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_parallel_road
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_parallel_road
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_parallel_road
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_parallel_road

            from deva_gaode_routing_msgs.msg import WebLocParallelRoad
            if WebLocParallelRoad.__class__._TYPE_SUPPORT is None:
                WebLocParallelRoad.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebParallelRoad(metaclass=Metaclass_WebParallelRoad):
    """Message class 'WebParallelRoad'."""

    __slots__ = [
        '_count',
        '_flag',
        '_hw_flag',
        '_status',
        '_parallel_road_list',
    ]

    _fields_and_field_types = {
        'count': 'int32',
        'flag': 'int32',
        'hw_flag': 'int32',
        'status': 'int32',
        'parallel_road_list': 'sequence<deva_gaode_routing_msgs/WebLocParallelRoad>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebLocParallelRoad')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count = kwargs.get('count', int())
        self.flag = kwargs.get('flag', int())
        self.hw_flag = kwargs.get('hw_flag', int())
        self.status = kwargs.get('status', int())
        self.parallel_road_list = kwargs.get('parallel_road_list', [])

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
        if self.count != other.count:
            return False
        if self.flag != other.flag:
            return False
        if self.hw_flag != other.hw_flag:
            return False
        if self.status != other.status:
            return False
        if self.parallel_road_list != other.parallel_road_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count' field must be an integer in [-2147483648, 2147483647]"
        self._count = value

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'flag' field must be an integer in [-2147483648, 2147483647]"
        self._flag = value

    @builtins.property
    def hw_flag(self):
        """Message field 'hw_flag'."""
        return self._hw_flag

    @hw_flag.setter
    def hw_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hw_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hw_flag' field must be an integer in [-2147483648, 2147483647]"
        self._hw_flag = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def parallel_road_list(self):
        """Message field 'parallel_road_list'."""
        return self._parallel_road_list

    @parallel_road_list.setter
    def parallel_road_list(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebLocParallelRoad
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
                 all(isinstance(v, WebLocParallelRoad) for v in value) and
                 True), \
                "The 'parallel_road_list' field must be a set or sequence and each value of type 'WebLocParallelRoad'"
        self._parallel_road_list = value
