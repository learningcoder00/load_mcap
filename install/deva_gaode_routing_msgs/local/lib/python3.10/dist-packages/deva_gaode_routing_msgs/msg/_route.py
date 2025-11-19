# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/Route.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Route(type):
    """Metaclass of message 'Route'."""

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
                'deva_gaode_routing_msgs.msg.Route')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RGIntersectionResult
            if RGIntersectionResult.__class__._TYPE_SUPPORT is None:
                RGIntersectionResult.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RGLaneInfoResult
            if RGLaneInfoResult.__class__._TYPE_SUPPORT is None:
                RGLaneInfoResult.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RGRedLightResult
            if RGRedLightResult.__class__._TYPE_SUPPORT is None:
                RGRedLightResult.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import RGVTipsPointResult
            if RGVTipsPointResult.__class__._TYPE_SUPPORT is None:
                RGVTipsPointResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Route(metaclass=Metaclass_Route):
    """Message class 'Route'."""

    __slots__ = [
        '_route_points',
        '_rg_intersection_result',
        '_rg_lane_info_result',
        '_rg_red_light_result',
        '_rg_tips_result',
    ]

    _fields_and_field_types = {
        'route_points': 'sequence<deva_gaode_routing_msgs/Coordinate>',
        'rg_intersection_result': 'sequence<deva_gaode_routing_msgs/RGIntersectionResult>',
        'rg_lane_info_result': 'sequence<deva_gaode_routing_msgs/RGLaneInfoResult>',
        'rg_red_light_result': 'sequence<deva_gaode_routing_msgs/RGRedLightResult>',
        'rg_tips_result': 'sequence<deva_gaode_routing_msgs/RGVTipsPointResult>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RGIntersectionResult')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RGLaneInfoResult')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RGRedLightResult')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'RGVTipsPointResult')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.route_points = kwargs.get('route_points', [])
        self.rg_intersection_result = kwargs.get('rg_intersection_result', [])
        self.rg_lane_info_result = kwargs.get('rg_lane_info_result', [])
        self.rg_red_light_result = kwargs.get('rg_red_light_result', [])
        self.rg_tips_result = kwargs.get('rg_tips_result', [])

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
        if self.route_points != other.route_points:
            return False
        if self.rg_intersection_result != other.rg_intersection_result:
            return False
        if self.rg_lane_info_result != other.rg_lane_info_result:
            return False
        if self.rg_red_light_result != other.rg_red_light_result:
            return False
        if self.rg_tips_result != other.rg_tips_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route_points(self):
        """Message field 'route_points'."""
        return self._route_points

    @route_points.setter
    def route_points(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
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
                 all(isinstance(v, Coordinate) for v in value) and
                 True), \
                "The 'route_points' field must be a set or sequence and each value of type 'Coordinate'"
        self._route_points = value

    @builtins.property
    def rg_intersection_result(self):
        """Message field 'rg_intersection_result'."""
        return self._rg_intersection_result

    @rg_intersection_result.setter
    def rg_intersection_result(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RGIntersectionResult
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
                 all(isinstance(v, RGIntersectionResult) for v in value) and
                 True), \
                "The 'rg_intersection_result' field must be a set or sequence and each value of type 'RGIntersectionResult'"
        self._rg_intersection_result = value

    @builtins.property
    def rg_lane_info_result(self):
        """Message field 'rg_lane_info_result'."""
        return self._rg_lane_info_result

    @rg_lane_info_result.setter
    def rg_lane_info_result(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RGLaneInfoResult
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
                 all(isinstance(v, RGLaneInfoResult) for v in value) and
                 True), \
                "The 'rg_lane_info_result' field must be a set or sequence and each value of type 'RGLaneInfoResult'"
        self._rg_lane_info_result = value

    @builtins.property
    def rg_red_light_result(self):
        """Message field 'rg_red_light_result'."""
        return self._rg_red_light_result

    @rg_red_light_result.setter
    def rg_red_light_result(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RGRedLightResult
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
                 all(isinstance(v, RGRedLightResult) for v in value) and
                 True), \
                "The 'rg_red_light_result' field must be a set or sequence and each value of type 'RGRedLightResult'"
        self._rg_red_light_result = value

    @builtins.property
    def rg_tips_result(self):
        """Message field 'rg_tips_result'."""
        return self._rg_tips_result

    @rg_tips_result.setter
    def rg_tips_result(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import RGVTipsPointResult
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
                 all(isinstance(v, RGVTipsPointResult) for v in value) and
                 True), \
                "The 'rg_tips_result' field must be a set or sequence and each value of type 'RGVTipsPointResult'"
        self._rg_tips_result = value
