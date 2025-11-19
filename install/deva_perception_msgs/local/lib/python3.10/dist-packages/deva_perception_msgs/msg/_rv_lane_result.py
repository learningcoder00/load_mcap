# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RvLaneResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RvLaneResult(type):
    """Metaclass of message 'RvLaneResult'."""

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
                'deva_perception_msgs.msg.RvLaneResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_lane_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_lane_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_lane_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_lane_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_lane_result

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_perception_msgs.msg import Crosswalk2dArray
            if Crosswalk2dArray.__class__._TYPE_SUPPORT is None:
                Crosswalk2dArray.__class__.__import_type_support__()

            from deva_perception_msgs.msg import LaneLine2dArray
            if LaneLine2dArray.__class__._TYPE_SUPPORT is None:
                LaneLine2dArray.__class__.__import_type_support__()

            from deva_perception_msgs.msg import StopLine2dArray
            if StopLine2dArray.__class__._TYPE_SUPPORT is None:
                StopLine2dArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RvLaneResult(metaclass=Metaclass_RvLaneResult):
    """Message class 'RvLaneResult'."""

    __slots__ = [
        '_header',
        '_laneline_2d_array',
        '_stopline_2d_array',
        '_crosswalk_2d_array',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'laneline_2d_array': 'sequence<deva_perception_msgs/LaneLine2dArray>',
        'stopline_2d_array': 'sequence<deva_perception_msgs/StopLine2dArray>',
        'crosswalk_2d_array': 'sequence<deva_perception_msgs/Crosswalk2dArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'LaneLine2dArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'StopLine2dArray')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Crosswalk2dArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.laneline_2d_array = kwargs.get('laneline_2d_array', [])
        self.stopline_2d_array = kwargs.get('stopline_2d_array', [])
        self.crosswalk_2d_array = kwargs.get('crosswalk_2d_array', [])

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
        if self.laneline_2d_array != other.laneline_2d_array:
            return False
        if self.stopline_2d_array != other.stopline_2d_array:
            return False
        if self.crosswalk_2d_array != other.crosswalk_2d_array:
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
    def laneline_2d_array(self):
        """Message field 'laneline_2d_array'."""
        return self._laneline_2d_array

    @laneline_2d_array.setter
    def laneline_2d_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import LaneLine2dArray
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
                 all(isinstance(v, LaneLine2dArray) for v in value) and
                 True), \
                "The 'laneline_2d_array' field must be a set or sequence and each value of type 'LaneLine2dArray'"
        self._laneline_2d_array = value

    @builtins.property
    def stopline_2d_array(self):
        """Message field 'stopline_2d_array'."""
        return self._stopline_2d_array

    @stopline_2d_array.setter
    def stopline_2d_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import StopLine2dArray
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
                 all(isinstance(v, StopLine2dArray) for v in value) and
                 True), \
                "The 'stopline_2d_array' field must be a set or sequence and each value of type 'StopLine2dArray'"
        self._stopline_2d_array = value

    @builtins.property
    def crosswalk_2d_array(self):
        """Message field 'crosswalk_2d_array'."""
        return self._crosswalk_2d_array

    @crosswalk_2d_array.setter
    def crosswalk_2d_array(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Crosswalk2dArray
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
                 all(isinstance(v, Crosswalk2dArray) for v in value) and
                 True), \
                "The 'crosswalk_2d_array' field must be a set or sequence and each value of type 'Crosswalk2dArray'"
        self._crosswalk_2d_array = value
