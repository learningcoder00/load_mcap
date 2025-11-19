# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/ChannelLaneMarking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChannelLaneMarking(type):
    """Metaclass of message 'ChannelLaneMarking'."""

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
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.ChannelLaneMarking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__channel_lane_marking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__channel_lane_marking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__channel_lane_marking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__channel_lane_marking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__channel_lane_marking

            from deva_common_msgs.msg import EquationCurve
            if EquationCurve.__class__._TYPE_SUPPORT is None:
                EquationCurve.__class__.__import_type_support__()

            from deva_common_msgs.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

            from deva_map_msgs.msg import ChannelMarkingType
            if ChannelMarkingType.__class__._TYPE_SUPPORT is None:
                ChannelMarkingType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChannelLaneMarking(metaclass=Metaclass_ChannelLaneMarking):
    """Message class 'ChannelLaneMarking'."""

    __slots__ = [
        '_available',
        '_perception_lane_id',
        '_marking_equation_vec',
        '_marking_type_vec',
        '_marking_point_vec',
    ]

    _fields_and_field_types = {
        'available': 'boolean',
        'perception_lane_id': 'uint8',
        'marking_equation_vec': 'sequence<deva_common_msgs/EquationCurve>',
        'marking_type_vec': 'sequence<deva_map_msgs/ChannelMarkingType>',
        'marking_point_vec': 'sequence<deva_common_msgs/Point2d>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'EquationCurve')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'ChannelMarkingType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Point2d')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.available = kwargs.get('available', bool())
        self.perception_lane_id = kwargs.get('perception_lane_id', int())
        self.marking_equation_vec = kwargs.get('marking_equation_vec', [])
        self.marking_type_vec = kwargs.get('marking_type_vec', [])
        self.marking_point_vec = kwargs.get('marking_point_vec', [])

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
        if self.available != other.available:
            return False
        if self.perception_lane_id != other.perception_lane_id:
            return False
        if self.marking_equation_vec != other.marking_equation_vec:
            return False
        if self.marking_type_vec != other.marking_type_vec:
            return False
        if self.marking_point_vec != other.marking_point_vec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @builtins.property
    def perception_lane_id(self):
        """Message field 'perception_lane_id'."""
        return self._perception_lane_id

    @perception_lane_id.setter
    def perception_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'perception_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'perception_lane_id' field must be an unsigned integer in [0, 255]"
        self._perception_lane_id = value

    @builtins.property
    def marking_equation_vec(self):
        """Message field 'marking_equation_vec'."""
        return self._marking_equation_vec

    @marking_equation_vec.setter
    def marking_equation_vec(self, value):
        if __debug__:
            from deva_common_msgs.msg import EquationCurve
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
                 all(isinstance(v, EquationCurve) for v in value) and
                 True), \
                "The 'marking_equation_vec' field must be a set or sequence and each value of type 'EquationCurve'"
        self._marking_equation_vec = value

    @builtins.property
    def marking_type_vec(self):
        """Message field 'marking_type_vec'."""
        return self._marking_type_vec

    @marking_type_vec.setter
    def marking_type_vec(self, value):
        if __debug__:
            from deva_map_msgs.msg import ChannelMarkingType
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
                 all(isinstance(v, ChannelMarkingType) for v in value) and
                 True), \
                "The 'marking_type_vec' field must be a set or sequence and each value of type 'ChannelMarkingType'"
        self._marking_type_vec = value

    @builtins.property
    def marking_point_vec(self):
        """Message field 'marking_point_vec'."""
        return self._marking_point_vec

    @marking_point_vec.setter
    def marking_point_vec(self, value):
        if __debug__:
            from deva_common_msgs.msg import Point2d
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
                 all(isinstance(v, Point2d) for v in value) and
                 True), \
                "The 'marking_point_vec' field must be a set or sequence and each value of type 'Point2d'"
        self._marking_point_vec = value
