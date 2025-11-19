# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'types'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FeaturePointById(type):
    """Metaclass of message 'FeaturePointById'."""

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
                'deva_gaode_routing_msgs.msg.FeaturePointById')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feature_point_by_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feature_point_by_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feature_point_by_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feature_point_by_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feature_point_by_id

            from deva_gaode_routing_msgs.msg import Coordinate
            if Coordinate.__class__._TYPE_SUPPORT is None:
                Coordinate.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import FeatureIDType
            if FeatureIDType.__class__._TYPE_SUPPORT is None:
                FeatureIDType.__class__.__import_type_support__()

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


class FeaturePointById(metaclass=Metaclass_FeaturePointById):
    """Message class 'FeaturePointById'."""

    __slots__ = [
        '_id',
        '_types',
        '_direction',
        '_coordinate',
        '_link_id',
        '_project_percent',
        '_lane_id_s',
        '_previous_id_s',
        '_next_id_s',
    ]

    _fields_and_field_types = {
        'id': 'deva_gaode_routing_msgs/FeatureIDType',
        'types': 'sequence<uint8>',
        'direction': 'uint8',
        'coordinate': 'deva_gaode_routing_msgs/Coordinate',
        'link_id': 'deva_gaode_routing_msgs/LinkIDType',
        'project_percent': 'float',
        'lane_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'previous_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
        'next_id_s': 'sequence<deva_gaode_routing_msgs/FeatureIDType>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'FeatureIDType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'Coordinate'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'LinkIDType'),  # noqa: E501
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
        self.types = array.array('B', kwargs.get('types', []))
        self.direction = kwargs.get('direction', int())
        from deva_gaode_routing_msgs.msg import Coordinate
        self.coordinate = kwargs.get('coordinate', Coordinate())
        from deva_gaode_routing_msgs.msg import LinkIDType
        self.link_id = kwargs.get('link_id', LinkIDType())
        self.project_percent = kwargs.get('project_percent', float())
        self.lane_id_s = kwargs.get('lane_id_s', [])
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
        if self.types != other.types:
            return False
        if self.direction != other.direction:
            return False
        if self.coordinate != other.coordinate:
            return False
        if self.link_id != other.link_id:
            return False
        if self.project_percent != other.project_percent:
            return False
        if self.lane_id_s != other.lane_id_s:
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
    def coordinate(self):
        """Message field 'coordinate'."""
        return self._coordinate

    @coordinate.setter
    def coordinate(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import Coordinate
            assert \
                isinstance(value, Coordinate), \
                "The 'coordinate' field must be a sub message of type 'Coordinate'"
        self._coordinate = value

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
    def lane_id_s(self):
        """Message field 'lane_id_s'."""
        return self._lane_id_s

    @lane_id_s.setter
    def lane_id_s(self, value):
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
                "The 'lane_id_s' field must be a set or sequence and each value of type 'FeatureIDType'"
        self._lane_id_s = value

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
