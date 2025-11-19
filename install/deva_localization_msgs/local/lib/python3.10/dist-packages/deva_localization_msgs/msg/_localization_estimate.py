# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_localization_msgs:msg/LocalizationEstimate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalizationEstimate(type):
    """Metaclass of message 'LocalizationEstimate'."""

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
            module = import_type_support('deva_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_localization_msgs.msg.LocalizationEstimate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__localization_estimate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__localization_estimate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__localization_estimate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__localization_estimate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__localization_estimate

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_localization_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalizationEstimate(metaclass=Metaclass_LocalizationEstimate):
    """Message class 'LocalizationEstimate'."""

    __slots__ = [
        '_header',
        '_pose',
        '_global_pose',
        '_measurement_time',
        '_state_message',
        '_global_pose_state_message',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'pose': 'deva_localization_msgs/Pose',
        'global_pose': 'deva_localization_msgs/Pose',
        'measurement_time': 'double',
        'state_message': 'string',
        'global_pose_state_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_localization_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_localization_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_localization_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from deva_localization_msgs.msg import Pose
        self.global_pose = kwargs.get('global_pose', Pose())
        self.measurement_time = kwargs.get('measurement_time', float())
        self.state_message = kwargs.get('state_message', str())
        self.global_pose_state_message = kwargs.get('global_pose_state_message', str())

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
        if self.pose != other.pose:
            return False
        if self.global_pose != other.global_pose:
            return False
        if self.measurement_time != other.measurement_time:
            return False
        if self.state_message != other.state_message:
            return False
        if self.global_pose_state_message != other.global_pose_state_message:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from deva_localization_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def global_pose(self):
        """Message field 'global_pose'."""
        return self._global_pose

    @global_pose.setter
    def global_pose(self, value):
        if __debug__:
            from deva_localization_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'global_pose' field must be a sub message of type 'Pose'"
        self._global_pose = value

    @builtins.property
    def measurement_time(self):
        """Message field 'measurement_time'."""
        return self._measurement_time

    @measurement_time.setter
    def measurement_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'measurement_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'measurement_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._measurement_time = value

    @builtins.property
    def state_message(self):
        """Message field 'state_message'."""
        return self._state_message

    @state_message.setter
    def state_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_message' field must be of type 'str'"
        self._state_message = value

    @builtins.property
    def global_pose_state_message(self):
        """Message field 'global_pose_state_message'."""
        return self._global_pose_state_message

    @global_pose_state_message.setter
    def global_pose_state_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'global_pose_state_message' field must be of type 'str'"
        self._global_pose_state_message = value
