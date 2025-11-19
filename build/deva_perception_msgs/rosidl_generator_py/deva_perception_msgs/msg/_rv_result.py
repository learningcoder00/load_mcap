# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RVResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RVResult(type):
    """Metaclass of message 'RVResult'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.RVResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_result

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_perception_msgs.msg import DynamicObstacleList
            if DynamicObstacleList.__class__._TYPE_SUPPORT is None:
                DynamicObstacleList.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import FixedObstacleList
            if FixedObstacleList.__class__._TYPE_SUPPORT is None:
                FixedObstacleList.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RVResult(metaclass=Metaclass_RVResult):
    """Message class 'RVResult'."""

    __slots__ = [
        '_header',
        '_translation',
        '_orientation',
        '_dynamic_obs_list',
        '_fixed_obs_list',
        '_extra_infos',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'translation': 'geometry_msgs/Vector3',
        'orientation': 'geometry_msgs/Quaternion',
        'dynamic_obs_list': 'sequence<deva_perception_msgs/DynamicObstacleList>',
        'fixed_obs_list': 'sequence<deva_perception_msgs/FixedObstacleList>',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'DynamicObstacleList')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'FixedObstacleList')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.translation = kwargs.get('translation', Vector3())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.dynamic_obs_list = kwargs.get('dynamic_obs_list', [])
        self.fixed_obs_list = kwargs.get('fixed_obs_list', [])
        self.extra_infos = kwargs.get('extra_infos', [])

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
        if self.header != other.header:
            return False
        if self.translation != other.translation:
            return False
        if self.orientation != other.orientation:
            return False
        if self.dynamic_obs_list != other.dynamic_obs_list:
            return False
        if self.fixed_obs_list != other.fixed_obs_list:
            return False
        if self.extra_infos != other.extra_infos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'translation' field must be a sub message of type 'Vector3'"
        self._translation = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def dynamic_obs_list(self):
        """Message field 'dynamic_obs_list'."""
        return self._dynamic_obs_list

    @dynamic_obs_list.setter
    def dynamic_obs_list(self, value):
        if __debug__:
            from deva_perception_msgs.msg import DynamicObstacleList
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
                 all(isinstance(v, DynamicObstacleList) for v in value) and
                 True), \
                "The 'dynamic_obs_list' field must be a set or sequence and each value of type 'DynamicObstacleList'"
        self._dynamic_obs_list = value

    @builtins.property
    def fixed_obs_list(self):
        """Message field 'fixed_obs_list'."""
        return self._fixed_obs_list

    @fixed_obs_list.setter
    def fixed_obs_list(self, value):
        if __debug__:
            from deva_perception_msgs.msg import FixedObstacleList
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
                 all(isinstance(v, FixedObstacleList) for v in value) and
                 True), \
                "The 'fixed_obs_list' field must be a set or sequence and each value of type 'FixedObstacleList'"
        self._fixed_obs_list = value

    @builtins.property
    def extra_infos(self):
        """Message field 'extra_infos'."""
        return self._extra_infos

    @extra_infos.setter
    def extra_infos(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ExtraInfo
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
                 all(isinstance(v, ExtraInfo) for v in value) and
                 True), \
                "The 'extra_infos' field must be a set or sequence and each value of type 'ExtraInfo'"
        self._extra_infos = value
