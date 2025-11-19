# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/LaneById.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lane_type'
# Member 'border_types'
# Member 'border_colors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneById(type):
    """Metaclass of message 'LaneById'."""

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
                'deva_gaode_routing_msgs.msg.LaneById')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_by_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_by_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_by_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_by_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_by_id

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import LaneGroupIDType
            if LaneGroupIDType.__class__._TYPE_SUPPORT is None:
                LaneGroupIDType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneById(metaclass=Metaclass_LaneById):
    """Message class 'LaneById'."""

    __slots__ = [
        '_id',
        '_lane_group_id_type',
        '_feature_point_id_s',
        '_direction',
        '_lane_type',
        '_border_types',
        '_border_colors',
        '_lane_width',
        '_lane_start_width',
        '_lane_end_width',
        '_previous_id_s',
        '_next_id_s',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'lane_group_id_type': 'deva_gaode_routing_msgs/LaneGroupIDType',
        'feature_point_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'direction': 'uint8',
        'lane_type': 'sequence<uint8>',
        'border_types': 'sequence<uint8>',
        'border_colors': 'sequence<uint8>',
        'lane_width': 'float',
        'lane_start_width': 'float',
        'lane_end_width': 'float',
        'previous_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'next_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LaneGroupIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.id = kwargs.get('id', FeatureIDType())
        from deva_gaode_routing_msgs.msg import LaneGroupIDType
        self.lane_group_id_type = kwargs.get('lane_group_id_type', LaneGroupIDType())
        self.feature_point_id_s = kwargs.get('feature_point_id_s', [])
        self.direction = kwargs.get('direction', int())
        self.lane_type = array.array('B', kwargs.get('lane_type', []))
        self.border_types = array.array('B', kwargs.get('border_types', []))
        self.border_colors = array.array('B', kwargs.get('border_colors', []))
        self.lane_width = kwargs.get('lane_width', float())
        self.lane_start_width = kwargs.get('lane_start_width', float())
        self.lane_end_width = kwargs.get('lane_end_width', float())
        self.previous_id_s = kwargs.get('previous_id_s', [])
        self.next_id_s = kwargs.get('next_id_s', [])

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
        if self.lane_group_id_type != other.lane_group_id_type:
            return False
        if self.feature_point_id_s != other.feature_point_id_s:
            return False
        if self.direction != other.direction:
            return False
        if self.lane_type != other.lane_type:
            return False
        if self.border_types != other.border_types:
            return False
        if self.border_colors != other.border_colors:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.lane_start_width != other.lane_start_width:
            return False
        if self.lane_end_width != other.lane_end_width:
            return False
        if self.previous_id_s != other.previous_id_s:
            return False
        if self.next_id_s != other.next_id_s:
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
            from deva_gaode_routing_msgs.msg import FeatureIDType
            assert \
                isinstance(value, FeatureIDType), \
                "The 'id' field must be a sub message of type 'FeatureIDType'"
        self._id = value

    @builtins.property
    def lane_group_id_type(self):
        """Message field 'lane_group_id_type'."""
        return self._lane_group_id_type

    @lane_group_id_type.setter
    def lane_group_id_type(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import LaneGroupIDType
            assert \
                isinstance(value, LaneGroupIDType), \
                "The 'lane_group_id_type' field must be a sub message of type 'LaneGroupIDType'"
        self._lane_group_id_type = value

    @builtins.property
    def feature_point_id_s(self):
        """Message field 'feature_point_id_s'."""
        return self._feature_point_id_s

    @feature_point_id_s.setter
    def feature_point_id_s(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
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
                 all(isinstance(v, FeatureIDType) for v in value) and
                 True), \
                "The 'feature_point_id_s' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._feature_point_id_s = value

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
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'lane_type' array.array() must have the type code of 'B'"
            self._lane_type = value
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
                "The 'lane_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._lane_type = array.array('B', value)

    @builtins.property
    def border_types(self):
        """Message field 'border_types'."""
        return self._border_types

    @border_types.setter
    def border_types(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'border_types' array.array() must have the type code of 'B'"
            self._border_types = value
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
                "The 'border_types' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._border_types = array.array('B', value)

    @builtins.property
    def border_colors(self):
        """Message field 'border_colors'."""
        return self._border_colors

    @border_colors.setter
    def border_colors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'border_colors' array.array() must have the type code of 'B'"
            self._border_colors = value
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
                "The 'border_colors' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._border_colors = array.array('B', value)

    @builtins.property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_width = value

    @builtins.property
    def lane_start_width(self):
        """Message field 'lane_start_width'."""
        return self._lane_start_width

    @lane_start_width.setter
    def lane_start_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_start_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_start_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_start_width = value

    @builtins.property
    def lane_end_width(self):
        """Message field 'lane_end_width'."""
        return self._lane_end_width

    @lane_end_width.setter
    def lane_end_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_end_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_end_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_end_width = value

    @builtins.property
    def previous_id_s(self):
        """Message field 'previous_id_s'."""
        return self._previous_id_s

    @previous_id_s.setter
    def previous_id_s(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
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
                 all(isinstance(v, FeatureIDType) for v in value) and
                 True), \
                "The 'previous_id_s' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._previous_id_s = value

    @builtins.property
    def next_id_s(self):
        """Message field 'next_id_s'."""
        return self._next_id_s

    @next_id_s.setter
    def next_id_s(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import FeatureIDType
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
                 all(isinstance(v, FeatureIDType) for v in value) and
                 True), \
                "The 'next_id_s' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._next_id_s = value
