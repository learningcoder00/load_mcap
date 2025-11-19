# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/RoadBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadBoundary(type):
    """Metaclass of message 'RoadBoundary'."""

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
                'environment_model_msgs.msg.RoadBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_boundary

            from environment_model_msgs.msg import BoundaryPoint
            if BoundaryPoint.__class__._TYPE_SUPPORT is None:
                BoundaryPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoadBoundary(metaclass=Metaclass_RoadBoundary):
    """Message class 'RoadBoundary'."""

    __slots__ = [
        '_left_physical_bound_line',
        '_right_physical_bound_line',
        '_left_law_bound_line',
        '_right_law_bound_line',
        '_feature',
        '_isolated_obj_ids',
    ]

    _fields_and_field_types = {
        'left_physical_bound_line': 'sequence<environment_model_msgs/BoundaryPoint>',
        'right_physical_bound_line': 'sequence<environment_model_msgs/BoundaryPoint>',
        'left_law_bound_line': 'sequence<environment_model_msgs/BoundaryPoint>',
        'right_law_bound_line': 'sequence<environment_model_msgs/BoundaryPoint>',
        'feature': 'uint8',
        'isolated_obj_ids': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundaryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundaryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundaryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundaryPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_physical_bound_line = kwargs.get('left_physical_bound_line', [])
        self.right_physical_bound_line = kwargs.get('right_physical_bound_line', [])
        self.left_law_bound_line = kwargs.get('left_law_bound_line', [])
        self.right_law_bound_line = kwargs.get('right_law_bound_line', [])
        self.feature = kwargs.get('feature', int())
        self.isolated_obj_ids = kwargs.get('isolated_obj_ids', [])

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
        if self.left_physical_bound_line != other.left_physical_bound_line:
            return False
        if self.right_physical_bound_line != other.right_physical_bound_line:
            return False
        if self.left_law_bound_line != other.left_law_bound_line:
            return False
        if self.right_law_bound_line != other.right_law_bound_line:
            return False
        if self.feature != other.feature:
            return False
        if self.isolated_obj_ids != other.isolated_obj_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_physical_bound_line(self):
        """Message field 'left_physical_bound_line'."""
        return self._left_physical_bound_line

    @left_physical_bound_line.setter
    def left_physical_bound_line(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundaryPoint
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
                 all(isinstance(v, BoundaryPoint) for v in value) and
                 True), \
                "The 'left_physical_bound_line' field must be a set or sequence and each value of type 'BoundaryPoint'"
        self._left_physical_bound_line = value

    @builtins.property
    def right_physical_bound_line(self):
        """Message field 'right_physical_bound_line'."""
        return self._right_physical_bound_line

    @right_physical_bound_line.setter
    def right_physical_bound_line(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundaryPoint
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
                 all(isinstance(v, BoundaryPoint) for v in value) and
                 True), \
                "The 'right_physical_bound_line' field must be a set or sequence and each value of type 'BoundaryPoint'"
        self._right_physical_bound_line = value

    @builtins.property
    def left_law_bound_line(self):
        """Message field 'left_law_bound_line'."""
        return self._left_law_bound_line

    @left_law_bound_line.setter
    def left_law_bound_line(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundaryPoint
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
                 all(isinstance(v, BoundaryPoint) for v in value) and
                 True), \
                "The 'left_law_bound_line' field must be a set or sequence and each value of type 'BoundaryPoint'"
        self._left_law_bound_line = value

    @builtins.property
    def right_law_bound_line(self):
        """Message field 'right_law_bound_line'."""
        return self._right_law_bound_line

    @right_law_bound_line.setter
    def right_law_bound_line(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundaryPoint
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
                 all(isinstance(v, BoundaryPoint) for v in value) and
                 True), \
                "The 'right_law_bound_line' field must be a set or sequence and each value of type 'BoundaryPoint'"
        self._right_law_bound_line = value

    @builtins.property
    def feature(self):
        """Message field 'feature'."""
        return self._feature

    @feature.setter
    def feature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'feature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'feature' field must be an unsigned integer in [0, 255]"
        self._feature = value

    @builtins.property
    def isolated_obj_ids(self):
        """Message field 'isolated_obj_ids'."""
        return self._isolated_obj_ids

    @isolated_obj_ids.setter
    def isolated_obj_ids(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'isolated_obj_ids' field must be a set or sequence and each value of type 'str'"
        self._isolated_obj_ids = value
