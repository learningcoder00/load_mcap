# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvPoint(type):
    """Metaclass of message 'EnvPoint'."""

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
                'environment_model_msgs.msg.EnvPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_point

            from environment_model_msgs.msg import BoundPoint
            if BoundPoint.__class__._TYPE_SUPPORT is None:
                BoundPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvPoint(metaclass=Metaclass_EnvPoint):
    """Message class 'EnvPoint'."""

    __slots__ = [
        '_x',
        '_y',
        '_heading',
        '_s',
        '_kappa',
        '_left_lan_bound',
        '_right_lane_bound',
        '_left_road_bound',
        '_right_road_bound',
        '_speed_limit',
        '_enum_lane_type',
        '_enum_road_type',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'heading': 'double',
        's': 'double',
        'kappa': 'double',
        'left_lan_bound': 'environment_model_msgs/BoundPoint',
        'right_lane_bound': 'environment_model_msgs/BoundPoint',
        'left_road_bound': 'environment_model_msgs/BoundPoint',
        'right_road_bound': 'environment_model_msgs/BoundPoint',
        'speed_limit': 'double',
        'enum_lane_type': 'uint8',
        'enum_road_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['environment_model_msgs', 'msg'], 'BoundPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.heading = kwargs.get('heading', float())
        self.s = kwargs.get('s', float())
        self.kappa = kwargs.get('kappa', float())
        from environment_model_msgs.msg import BoundPoint
        self.left_lan_bound = kwargs.get('left_lan_bound', BoundPoint())
        from environment_model_msgs.msg import BoundPoint
        self.right_lane_bound = kwargs.get('right_lane_bound', BoundPoint())
        from environment_model_msgs.msg import BoundPoint
        self.left_road_bound = kwargs.get('left_road_bound', BoundPoint())
        from environment_model_msgs.msg import BoundPoint
        self.right_road_bound = kwargs.get('right_road_bound', BoundPoint())
        self.speed_limit = kwargs.get('speed_limit', float())
        self.enum_lane_type = kwargs.get('enum_lane_type', int())
        self.enum_road_type = kwargs.get('enum_road_type', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.heading != other.heading:
            return False
        if self.s != other.s:
            return False
        if self.kappa != other.kappa:
            return False
        if self.left_lan_bound != other.left_lan_bound:
            return False
        if self.right_lane_bound != other.right_lane_bound:
            return False
        if self.left_road_bound != other.left_road_bound:
            return False
        if self.right_road_bound != other.right_road_bound:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        if self.enum_lane_type != other.enum_lane_type:
            return False
        if self.enum_road_type != other.enum_road_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s = value

    @builtins.property
    def kappa(self):
        """Message field 'kappa'."""
        return self._kappa

    @kappa.setter
    def kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kappa = value

    @builtins.property
    def left_lan_bound(self):
        """Message field 'left_lan_bound'."""
        return self._left_lan_bound

    @left_lan_bound.setter
    def left_lan_bound(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundPoint
            assert \
                isinstance(value, BoundPoint), \
                "The 'left_lan_bound' field must be a sub message of type 'BoundPoint'"
        self._left_lan_bound = value

    @builtins.property
    def right_lane_bound(self):
        """Message field 'right_lane_bound'."""
        return self._right_lane_bound

    @right_lane_bound.setter
    def right_lane_bound(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundPoint
            assert \
                isinstance(value, BoundPoint), \
                "The 'right_lane_bound' field must be a sub message of type 'BoundPoint'"
        self._right_lane_bound = value

    @builtins.property
    def left_road_bound(self):
        """Message field 'left_road_bound'."""
        return self._left_road_bound

    @left_road_bound.setter
    def left_road_bound(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundPoint
            assert \
                isinstance(value, BoundPoint), \
                "The 'left_road_bound' field must be a sub message of type 'BoundPoint'"
        self._left_road_bound = value

    @builtins.property
    def right_road_bound(self):
        """Message field 'right_road_bound'."""
        return self._right_road_bound

    @right_road_bound.setter
    def right_road_bound(self, value):
        if __debug__:
            from environment_model_msgs.msg import BoundPoint
            assert \
                isinstance(value, BoundPoint), \
                "The 'right_road_bound' field must be a sub message of type 'BoundPoint'"
        self._right_road_bound = value

    @builtins.property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_limit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_limit = value

    @builtins.property
    def enum_lane_type(self):
        """Message field 'enum_lane_type'."""
        return self._enum_lane_type

    @enum_lane_type.setter
    def enum_lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_lane_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_lane_type' field must be an unsigned integer in [0, 255]"
        self._enum_lane_type = value

    @builtins.property
    def enum_road_type(self):
        """Message field 'enum_road_type'."""
        return self._enum_road_type

    @enum_road_type.setter
    def enum_road_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enum_road_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enum_road_type' field must be an unsigned integer in [0, 255]"
        self._enum_road_type = value
