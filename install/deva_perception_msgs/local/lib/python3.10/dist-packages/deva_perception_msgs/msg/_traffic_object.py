# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/TrafficObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficObject(type):
    """Metaclass of message 'TrafficObject'."""

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
                'deva_perception_msgs.msg.TrafficObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_object

            from deva_perception_msgs.msg import TrafficRegion
            if TrafficRegion.__class__._TYPE_SUPPORT is None:
                TrafficRegion.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficStatus
            if TrafficStatus.__class__._TYPE_SUPPORT is None:
                TrafficStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficObject(metaclass=Metaclass_TrafficObject):
    """Message class 'TrafficObject'."""

    __slots__ = [
        '_class_idx',
        '_det_is_focus_light',
        '_sign_appx_type',
        '_region',
        '_new_h_region',
        '_status',
        '_f120_ori_color',
        '_f120_ori_color_light_type',
        '_color',
        '_origin_color',
        '_light_type',
        '_origin_light_type',
        '_count_down',
        '_orig_count_down',
        '_has_count_down',
        '_ori_has_count_down',
        '_f120_origin_sign_type',
        '_origin_sign_type',
        '_sign_type',
        '_sign_confidence',
        '_digit_confidence',
        '_digit_type',
        '_digit_class_idx',
        '_ego_x',
        '_ego_y',
        '_ego_z',
        '_ramp_confidence',
        '_is_ramp',
        '_origin_is_ramp',
        '_is_ramp_from_41',
        '_is_ramp_double_checked',
        '_pole',
        '_is_rechecked_ramp',
        '_rechecked_ramp_score',
        '_bind_ramp_region',
        '_ego_x_out',
        '_is_recheck_result',
        '_model_depth',
        '_tl_oriention',
    ]

    _fields_and_field_types = {
        'class_idx': 'uint8',
        'det_is_focus_light': 'boolean',
        'sign_appx_type': 'uint8',
        'region': 'deva_perception_msgs/TrafficRegion',
        'new_h_region': 'deva_perception_msgs/TrafficRegion',
        'status': 'deva_perception_msgs/TrafficStatus[4]',
        'f120_ori_color': 'uint8',
        'f120_ori_color_light_type': 'uint8',
        'color': 'uint8',
        'origin_color': 'uint8',
        'light_type': 'uint8',
        'origin_light_type': 'uint8',
        'count_down': 'int32',
        'orig_count_down': 'int32',
        'has_count_down': 'boolean',
        'ori_has_count_down': 'boolean',
        'f120_origin_sign_type': 'int32',
        'origin_sign_type': 'int32',
        'sign_type': 'int32',
        'sign_confidence': 'float',
        'digit_confidence': 'float',
        'digit_type': 'int32',
        'digit_class_idx': 'uint8',
        'ego_x': 'float',
        'ego_y': 'float',
        'ego_z': 'float',
        'ramp_confidence': 'float',
        'is_ramp': 'boolean',
        'origin_is_ramp': 'boolean',
        'is_ramp_from_41': 'boolean',
        'is_ramp_double_checked': 'boolean',
        'pole': 'int32',
        'is_rechecked_ramp': 'boolean',
        'rechecked_ramp_score': 'float',
        'bind_ramp_region': 'deva_perception_msgs/TrafficRegion',
        'ego_x_out': 'float',
        'is_recheck_result': 'boolean',
        'model_depth': 'float',
        'tl_oriention': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficStatus'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficRegion'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_idx = kwargs.get('class_idx', int())
        self.det_is_focus_light = kwargs.get('det_is_focus_light', bool())
        self.sign_appx_type = kwargs.get('sign_appx_type', int())
        from deva_perception_msgs.msg import TrafficRegion
        self.region = kwargs.get('region', TrafficRegion())
        from deva_perception_msgs.msg import TrafficRegion
        self.new_h_region = kwargs.get('new_h_region', TrafficRegion())
        from deva_perception_msgs.msg import TrafficStatus
        self.status = kwargs.get(
            'status',
            [TrafficStatus() for x in range(4)]
        )
        self.f120_ori_color = kwargs.get('f120_ori_color', int())
        self.f120_ori_color_light_type = kwargs.get('f120_ori_color_light_type', int())
        self.color = kwargs.get('color', int())
        self.origin_color = kwargs.get('origin_color', int())
        self.light_type = kwargs.get('light_type', int())
        self.origin_light_type = kwargs.get('origin_light_type', int())
        self.count_down = kwargs.get('count_down', int())
        self.orig_count_down = kwargs.get('orig_count_down', int())
        self.has_count_down = kwargs.get('has_count_down', bool())
        self.ori_has_count_down = kwargs.get('ori_has_count_down', bool())
        self.f120_origin_sign_type = kwargs.get('f120_origin_sign_type', int())
        self.origin_sign_type = kwargs.get('origin_sign_type', int())
        self.sign_type = kwargs.get('sign_type', int())
        self.sign_confidence = kwargs.get('sign_confidence', float())
        self.digit_confidence = kwargs.get('digit_confidence', float())
        self.digit_type = kwargs.get('digit_type', int())
        self.digit_class_idx = kwargs.get('digit_class_idx', int())
        self.ego_x = kwargs.get('ego_x', float())
        self.ego_y = kwargs.get('ego_y', float())
        self.ego_z = kwargs.get('ego_z', float())
        self.ramp_confidence = kwargs.get('ramp_confidence', float())
        self.is_ramp = kwargs.get('is_ramp', bool())
        self.origin_is_ramp = kwargs.get('origin_is_ramp', bool())
        self.is_ramp_from_41 = kwargs.get('is_ramp_from_41', bool())
        self.is_ramp_double_checked = kwargs.get('is_ramp_double_checked', bool())
        self.pole = kwargs.get('pole', int())
        self.is_rechecked_ramp = kwargs.get('is_rechecked_ramp', bool())
        self.rechecked_ramp_score = kwargs.get('rechecked_ramp_score', float())
        from deva_perception_msgs.msg import TrafficRegion
        self.bind_ramp_region = kwargs.get('bind_ramp_region', TrafficRegion())
        self.ego_x_out = kwargs.get('ego_x_out', float())
        self.is_recheck_result = kwargs.get('is_recheck_result', bool())
        self.model_depth = kwargs.get('model_depth', float())
        self.tl_oriention = kwargs.get('tl_oriention', int())

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
        if self.class_idx != other.class_idx:
            return False
        if self.det_is_focus_light != other.det_is_focus_light:
            return False
        if self.sign_appx_type != other.sign_appx_type:
            return False
        if self.region != other.region:
            return False
        if self.new_h_region != other.new_h_region:
            return False
        if self.status != other.status:
            return False
        if self.f120_ori_color != other.f120_ori_color:
            return False
        if self.f120_ori_color_light_type != other.f120_ori_color_light_type:
            return False
        if self.color != other.color:
            return False
        if self.origin_color != other.origin_color:
            return False
        if self.light_type != other.light_type:
            return False
        if self.origin_light_type != other.origin_light_type:
            return False
        if self.count_down != other.count_down:
            return False
        if self.orig_count_down != other.orig_count_down:
            return False
        if self.has_count_down != other.has_count_down:
            return False
        if self.ori_has_count_down != other.ori_has_count_down:
            return False
        if self.f120_origin_sign_type != other.f120_origin_sign_type:
            return False
        if self.origin_sign_type != other.origin_sign_type:
            return False
        if self.sign_type != other.sign_type:
            return False
        if self.sign_confidence != other.sign_confidence:
            return False
        if self.digit_confidence != other.digit_confidence:
            return False
        if self.digit_type != other.digit_type:
            return False
        if self.digit_class_idx != other.digit_class_idx:
            return False
        if self.ego_x != other.ego_x:
            return False
        if self.ego_y != other.ego_y:
            return False
        if self.ego_z != other.ego_z:
            return False
        if self.ramp_confidence != other.ramp_confidence:
            return False
        if self.is_ramp != other.is_ramp:
            return False
        if self.origin_is_ramp != other.origin_is_ramp:
            return False
        if self.is_ramp_from_41 != other.is_ramp_from_41:
            return False
        if self.is_ramp_double_checked != other.is_ramp_double_checked:
            return False
        if self.pole != other.pole:
            return False
        if self.is_rechecked_ramp != other.is_rechecked_ramp:
            return False
        if self.rechecked_ramp_score != other.rechecked_ramp_score:
            return False
        if self.bind_ramp_region != other.bind_ramp_region:
            return False
        if self.ego_x_out != other.ego_x_out:
            return False
        if self.is_recheck_result != other.is_recheck_result:
            return False
        if self.model_depth != other.model_depth:
            return False
        if self.tl_oriention != other.tl_oriention:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def class_idx(self):
        """Message field 'class_idx'."""
        return self._class_idx

    @class_idx.setter
    def class_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'class_idx' field must be an unsigned integer in [0, 255]"
        self._class_idx = value

    @builtins.property
    def det_is_focus_light(self):
        """Message field 'det_is_focus_light'."""
        return self._det_is_focus_light

    @det_is_focus_light.setter
    def det_is_focus_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'det_is_focus_light' field must be of type 'bool'"
        self._det_is_focus_light = value

    @builtins.property
    def sign_appx_type(self):
        """Message field 'sign_appx_type'."""
        return self._sign_appx_type

    @sign_appx_type.setter
    def sign_appx_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_appx_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sign_appx_type' field must be an unsigned integer in [0, 255]"
        self._sign_appx_type = value

    @builtins.property
    def region(self):
        """Message field 'region'."""
        return self._region

    @region.setter
    def region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'region' field must be a sub message of type 'TrafficRegion'"
        self._region = value

    @builtins.property
    def new_h_region(self):
        """Message field 'new_h_region'."""
        return self._new_h_region

    @new_h_region.setter
    def new_h_region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'new_h_region' field must be a sub message of type 'TrafficRegion'"
        self._new_h_region = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficStatus
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
                 len(value) == 4 and
                 all(isinstance(v, TrafficStatus) for v in value) and
                 True), \
                "The 'status' field must be a set or sequence with length 4 and each value of type 'TrafficStatus'"
        self._status = value

    @builtins.property
    def f120_ori_color(self):
        """Message field 'f120_ori_color'."""
        return self._f120_ori_color

    @f120_ori_color.setter
    def f120_ori_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f120_ori_color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f120_ori_color' field must be an unsigned integer in [0, 255]"
        self._f120_ori_color = value

    @builtins.property
    def f120_ori_color_light_type(self):
        """Message field 'f120_ori_color_light_type'."""
        return self._f120_ori_color_light_type

    @f120_ori_color_light_type.setter
    def f120_ori_color_light_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f120_ori_color_light_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f120_ori_color_light_type' field must be an unsigned integer in [0, 255]"
        self._f120_ori_color_light_type = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def origin_color(self):
        """Message field 'origin_color'."""
        return self._origin_color

    @origin_color.setter
    def origin_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'origin_color' field must be an unsigned integer in [0, 255]"
        self._origin_color = value

    @builtins.property
    def light_type(self):
        """Message field 'light_type'."""
        return self._light_type

    @light_type.setter
    def light_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'light_type' field must be an unsigned integer in [0, 255]"
        self._light_type = value

    @builtins.property
    def origin_light_type(self):
        """Message field 'origin_light_type'."""
        return self._origin_light_type

    @origin_light_type.setter
    def origin_light_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_light_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'origin_light_type' field must be an unsigned integer in [0, 255]"
        self._origin_light_type = value

    @builtins.property
    def count_down(self):
        """Message field 'count_down'."""
        return self._count_down

    @count_down.setter
    def count_down(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count_down' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count_down' field must be an integer in [-2147483648, 2147483647]"
        self._count_down = value

    @builtins.property
    def orig_count_down(self):
        """Message field 'orig_count_down'."""
        return self._orig_count_down

    @orig_count_down.setter
    def orig_count_down(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orig_count_down' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'orig_count_down' field must be an integer in [-2147483648, 2147483647]"
        self._orig_count_down = value

    @builtins.property
    def has_count_down(self):
        """Message field 'has_count_down'."""
        return self._has_count_down

    @has_count_down.setter
    def has_count_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_count_down' field must be of type 'bool'"
        self._has_count_down = value

    @builtins.property
    def ori_has_count_down(self):
        """Message field 'ori_has_count_down'."""
        return self._ori_has_count_down

    @ori_has_count_down.setter
    def ori_has_count_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ori_has_count_down' field must be of type 'bool'"
        self._ori_has_count_down = value

    @builtins.property
    def f120_origin_sign_type(self):
        """Message field 'f120_origin_sign_type'."""
        return self._f120_origin_sign_type

    @f120_origin_sign_type.setter
    def f120_origin_sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f120_origin_sign_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'f120_origin_sign_type' field must be an integer in [-2147483648, 2147483647]"
        self._f120_origin_sign_type = value

    @builtins.property
    def origin_sign_type(self):
        """Message field 'origin_sign_type'."""
        return self._origin_sign_type

    @origin_sign_type.setter
    def origin_sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_sign_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'origin_sign_type' field must be an integer in [-2147483648, 2147483647]"
        self._origin_sign_type = value

    @builtins.property
    def sign_type(self):
        """Message field 'sign_type'."""
        return self._sign_type

    @sign_type.setter
    def sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sign_type' field must be an integer in [-2147483648, 2147483647]"
        self._sign_type = value

    @builtins.property
    def sign_confidence(self):
        """Message field 'sign_confidence'."""
        return self._sign_confidence

    @sign_confidence.setter
    def sign_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sign_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sign_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sign_confidence = value

    @builtins.property
    def digit_confidence(self):
        """Message field 'digit_confidence'."""
        return self._digit_confidence

    @digit_confidence.setter
    def digit_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'digit_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'digit_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._digit_confidence = value

    @builtins.property
    def digit_type(self):
        """Message field 'digit_type'."""
        return self._digit_type

    @digit_type.setter
    def digit_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'digit_type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'digit_type' field must be an integer in [-2147483648, 2147483647]"
        self._digit_type = value

    @builtins.property
    def digit_class_idx(self):
        """Message field 'digit_class_idx'."""
        return self._digit_class_idx

    @digit_class_idx.setter
    def digit_class_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'digit_class_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'digit_class_idx' field must be an unsigned integer in [0, 255]"
        self._digit_class_idx = value

    @builtins.property
    def ego_x(self):
        """Message field 'ego_x'."""
        return self._ego_x

    @ego_x.setter
    def ego_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ego_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ego_x = value

    @builtins.property
    def ego_y(self):
        """Message field 'ego_y'."""
        return self._ego_y

    @ego_y.setter
    def ego_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ego_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ego_y = value

    @builtins.property
    def ego_z(self):
        """Message field 'ego_z'."""
        return self._ego_z

    @ego_z.setter
    def ego_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ego_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ego_z = value

    @builtins.property
    def ramp_confidence(self):
        """Message field 'ramp_confidence'."""
        return self._ramp_confidence

    @ramp_confidence.setter
    def ramp_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ramp_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ramp_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ramp_confidence = value

    @builtins.property
    def is_ramp(self):
        """Message field 'is_ramp'."""
        return self._is_ramp

    @is_ramp.setter
    def is_ramp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ramp' field must be of type 'bool'"
        self._is_ramp = value

    @builtins.property
    def origin_is_ramp(self):
        """Message field 'origin_is_ramp'."""
        return self._origin_is_ramp

    @origin_is_ramp.setter
    def origin_is_ramp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'origin_is_ramp' field must be of type 'bool'"
        self._origin_is_ramp = value

    @builtins.property
    def is_ramp_from_41(self):
        """Message field 'is_ramp_from_41'."""
        return self._is_ramp_from_41

    @is_ramp_from_41.setter
    def is_ramp_from_41(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ramp_from_41' field must be of type 'bool'"
        self._is_ramp_from_41 = value

    @builtins.property
    def is_ramp_double_checked(self):
        """Message field 'is_ramp_double_checked'."""
        return self._is_ramp_double_checked

    @is_ramp_double_checked.setter
    def is_ramp_double_checked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ramp_double_checked' field must be of type 'bool'"
        self._is_ramp_double_checked = value

    @builtins.property
    def pole(self):
        """Message field 'pole'."""
        return self._pole

    @pole.setter
    def pole(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pole' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pole' field must be an integer in [-2147483648, 2147483647]"
        self._pole = value

    @builtins.property
    def is_rechecked_ramp(self):
        """Message field 'is_rechecked_ramp'."""
        return self._is_rechecked_ramp

    @is_rechecked_ramp.setter
    def is_rechecked_ramp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_rechecked_ramp' field must be of type 'bool'"
        self._is_rechecked_ramp = value

    @builtins.property
    def rechecked_ramp_score(self):
        """Message field 'rechecked_ramp_score'."""
        return self._rechecked_ramp_score

    @rechecked_ramp_score.setter
    def rechecked_ramp_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rechecked_ramp_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rechecked_ramp_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rechecked_ramp_score = value

    @builtins.property
    def bind_ramp_region(self):
        """Message field 'bind_ramp_region'."""
        return self._bind_ramp_region

    @bind_ramp_region.setter
    def bind_ramp_region(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficRegion
            assert \
                isinstance(value, TrafficRegion), \
                "The 'bind_ramp_region' field must be a sub message of type 'TrafficRegion'"
        self._bind_ramp_region = value

    @builtins.property
    def ego_x_out(self):
        """Message field 'ego_x_out'."""
        return self._ego_x_out

    @ego_x_out.setter
    def ego_x_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ego_x_out' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ego_x_out' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ego_x_out = value

    @builtins.property
    def is_recheck_result(self):
        """Message field 'is_recheck_result'."""
        return self._is_recheck_result

    @is_recheck_result.setter
    def is_recheck_result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_recheck_result' field must be of type 'bool'"
        self._is_recheck_result = value

    @builtins.property
    def model_depth(self):
        """Message field 'model_depth'."""
        return self._model_depth

    @model_depth.setter
    def model_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'model_depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'model_depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._model_depth = value

    @builtins.property
    def tl_oriention(self):
        """Message field 'tl_oriention'."""
        return self._tl_oriention

    @tl_oriention.setter
    def tl_oriention(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tl_oriention' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tl_oriention' field must be an unsigned integer in [0, 255]"
        self._tl_oriention = value
