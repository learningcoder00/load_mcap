# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'types'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StructuredFeaturePoint(type):
    """Metaclass of message 'StructuredFeaturePoint'."""

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
            module = import_type_support('environment_model_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'environment_model_msgs.msg.StructuredFeaturePoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__structured_feature_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__structured_feature_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__structured_feature_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__structured_feature_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__structured_feature_point

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

            from environment_model_msgs.msg import Vec3d
            if Vec3d.__class__._TYPE_SUPPORT is None:
                Vec3d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StructuredFeaturePoint(metaclass=Metaclass_StructuredFeaturePoint):
    """Message class 'StructuredFeaturePoint'."""

    __slots__ = [
        '_id',
        '_link_id',
        '_types',
        '_direction',
        '_position',
        '_project_percent',
        '_prev_ids',
        '_next_ids',
        '_lane_ids',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'link_id': 'uint64',
        'types': 'sequence<uint8>',
        'direction': 'uint8',
        'position': 'environment_model_msgs/Vec3d',
        'project_percent': 'float',
        'prev_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'next_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'lane_ids': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'Vec3d'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_gaode_routing_msgs.msg import FeatureIDType
        self.id = kwargs.get('id', FeatureIDType())
        self.link_id = kwargs.get('link_id', int())
        self.types = array.array('B', kwargs.get('types', []))
        self.direction = kwargs.get('direction', int())
        from environment_model_msgs.msg import Vec3d
        self.position = kwargs.get('position', Vec3d())
        self.project_percent = kwargs.get('project_percent', float())
        self.prev_ids = kwargs.get('prev_ids', [])
        self.next_ids = kwargs.get('next_ids', [])
        self.lane_ids = kwargs.get('lane_ids', [])

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
        if self.link_id != other.link_id:
            return False
        if self.types != other.types:
            return False
        if self.direction != other.direction:
            return False
        if self.position != other.position:
            return False
        if self.project_percent != other.project_percent:
            return False
        if self.prev_ids != other.prev_ids:
            return False
        if self.next_ids != other.next_ids:
            return False
        if self.lane_ids != other.lane_ids:
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
    def link_id(self):
        """Message field 'link_id'."""
        return self._link_id

    @link_id.setter
    def link_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'link_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._link_id = value

    @builtins.property
    def types(self):
        """Message field 'types'."""
        return self._types

    @types.setter
    def types(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'types' array.array() must have the type code of 'B'"
            self._types = value
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
                "The 'types' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._types = array.array('B', value)

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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from environment_model_msgs.msg import Vec3d
            assert \
                isinstance(value, Vec3d), \
                "The 'position' field must be a sub message of type 'Vec3d'"
        self._position = value

    @builtins.property
    def project_percent(self):
        """Message field 'project_percent'."""
        return self._project_percent

    @project_percent.setter
    def project_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'project_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'project_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._project_percent = value

    @builtins.property
    def prev_ids(self):
        """Message field 'prev_ids'."""
        return self._prev_ids

    @prev_ids.setter
    def prev_ids(self, value):
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
                "The 'prev_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._prev_ids = value

    @builtins.property
    def next_ids(self):
        """Message field 'next_ids'."""
        return self._next_ids

    @next_ids.setter
    def next_ids(self, value):
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
                "The 'next_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._next_ids = value

    @builtins.property
    def lane_ids(self):
        """Message field 'lane_ids'."""
        return self._lane_ids

    @lane_ids.setter
    def lane_ids(self, value):
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
                "The 'lane_ids' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._lane_ids = value
