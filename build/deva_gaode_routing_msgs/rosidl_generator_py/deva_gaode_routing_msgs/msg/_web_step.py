# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebStep.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebStep(type):
    """Metaclass of message 'WebStep'."""

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
                'deva_gaode_routing_msgs.msg.WebStep')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_step
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_step
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_step
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_step
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_step

            from deva_gaode_routing_msgs.msg import WebRoad
            if WebRoad.__class__._TYPE_SUPPORT is None:
                WebRoad.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebStep(metaclass=Metaclass_WebStep):
    """Message class 'WebStep'."""

    __slots__ = [
        '_id',
        '_roads',
        '_traffic_light_count',
        '_distance',
        '_time',
        '_forward_direction',
        '_forward_type',
        '_main_action',
        '_assistant_action',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'roads': 'sequence<deva_gaode_routing_msgs/WebRoad>',
        'traffic_light_count': 'int32',
        'distance': 'float',
        'time': 'float',
        'forward_direction': 'uint32',
        'forward_type': 'uint32',
        'main_action': 'uint32',
        'assistant_action': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebRoad')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.roads = kwargs.get('roads', [])
        self.traffic_light_count = kwargs.get('traffic_light_count', int())
        self.distance = kwargs.get('distance', float())
        self.time = kwargs.get('time', float())
        self.forward_direction = kwargs.get('forward_direction', int())
        self.forward_type = kwargs.get('forward_type', int())
        self.main_action = kwargs.get('main_action', int())
        self.assistant_action = kwargs.get('assistant_action', int())

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
        if self.roads != other.roads:
            return False
        if self.traffic_light_count != other.traffic_light_count:
            return False
        if self.distance != other.distance:
            return False
        if self.time != other.time:
            return False
        if self.forward_direction != other.forward_direction:
            return False
        if self.forward_type != other.forward_type:
            return False
        if self.main_action != other.main_action:
            return False
        if self.assistant_action != other.assistant_action:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def roads(self):
        """Message field 'roads'."""
        return self._roads

    @roads.setter
    def roads(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebRoad
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
                 all(isinstance(v, WebRoad) for v in value) and
                 True), \
                "The 'roads' field must be a set or sequence and each value of type 'WebRoad'"
        self._roads = value

    @builtins.property
    def traffic_light_count(self):
        """Message field 'traffic_light_count'."""
        return self._traffic_light_count

    @traffic_light_count.setter
    def traffic_light_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_light_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'traffic_light_count' field must be an integer in [-2147483648, 2147483647]"
        self._traffic_light_count = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time = value

    @builtins.property
    def forward_direction(self):
        """Message field 'forward_direction'."""
        return self._forward_direction

    @forward_direction.setter
    def forward_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'forward_direction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'forward_direction' field must be an unsigned integer in [0, 4294967295]"
        self._forward_direction = value

    @builtins.property
    def forward_type(self):
        """Message field 'forward_type'."""
        return self._forward_type

    @forward_type.setter
    def forward_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'forward_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'forward_type' field must be an unsigned integer in [0, 4294967295]"
        self._forward_type = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'main_action' field must be an unsigned integer in [0, 4294967295]"
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
            assert value >= 0 and value < 4294967296, \
                "The 'assistant_action' field must be an unsigned integer in [0, 4294967295]"
        self._assistant_action = value
