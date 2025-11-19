# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/StitchData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StitchData(type):
    """Metaclass of message 'StitchData'."""

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
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.StitchData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stitch_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stitch_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stitch_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stitch_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stitch_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StitchData(metaclass=Metaclass_StitchData):
    """Message class 'StitchData'."""

    __slots__ = [
        '_stitch_mode',
        '_planner_mode',
        '_actual_planner_mode',
        '_current_x',
        '_current_y',
        '_stitch_s',
        '_stitch_l',
        '_stitch_x',
        '_stitch_y',
        '_stitch_z',
        '_stitch_heading',
        '_stitch_alpha',
        '_stitch_v',
        '_stitch_steer',
    ]

    _fields_and_field_types = {
        'stitch_mode': 'uint8',
        'planner_mode': 'uint8',
        'actual_planner_mode': 'uint8',
        'current_x': 'double',
        'current_y': 'double',
        'stitch_s': 'double',
        'stitch_l': 'double',
        'stitch_x': 'double',
        'stitch_y': 'double',
        'stitch_z': 'double',
        'stitch_heading': 'double',
        'stitch_alpha': 'double',
        'stitch_v': 'double',
        'stitch_steer': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.stitch_mode = kwargs.get('stitch_mode', int())
        self.planner_mode = kwargs.get('planner_mode', int())
        self.actual_planner_mode = kwargs.get('actual_planner_mode', int())
        self.current_x = kwargs.get('current_x', float())
        self.current_y = kwargs.get('current_y', float())
        self.stitch_s = kwargs.get('stitch_s', float())
        self.stitch_l = kwargs.get('stitch_l', float())
        self.stitch_x = kwargs.get('stitch_x', float())
        self.stitch_y = kwargs.get('stitch_y', float())
        self.stitch_z = kwargs.get('stitch_z', float())
        self.stitch_heading = kwargs.get('stitch_heading', float())
        self.stitch_alpha = kwargs.get('stitch_alpha', float())
        self.stitch_v = kwargs.get('stitch_v', float())
        self.stitch_steer = kwargs.get('stitch_steer', float())

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
        if self.stitch_mode != other.stitch_mode:
            return False
        if self.planner_mode != other.planner_mode:
            return False
        if self.actual_planner_mode != other.actual_planner_mode:
            return False
        if self.current_x != other.current_x:
            return False
        if self.current_y != other.current_y:
            return False
        if self.stitch_s != other.stitch_s:
            return False
        if self.stitch_l != other.stitch_l:
            return False
        if self.stitch_x != other.stitch_x:
            return False
        if self.stitch_y != other.stitch_y:
            return False
        if self.stitch_z != other.stitch_z:
            return False
        if self.stitch_heading != other.stitch_heading:
            return False
        if self.stitch_alpha != other.stitch_alpha:
            return False
        if self.stitch_v != other.stitch_v:
            return False
        if self.stitch_steer != other.stitch_steer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stitch_mode(self):
        """Message field 'stitch_mode'."""
        return self._stitch_mode

    @stitch_mode.setter
    def stitch_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stitch_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stitch_mode' field must be an unsigned integer in [0, 255]"
        self._stitch_mode = value

    @builtins.property
    def planner_mode(self):
        """Message field 'planner_mode'."""
        return self._planner_mode

    @planner_mode.setter
    def planner_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'planner_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'planner_mode' field must be an unsigned integer in [0, 255]"
        self._planner_mode = value

    @builtins.property
    def actual_planner_mode(self):
        """Message field 'actual_planner_mode'."""
        return self._actual_planner_mode

    @actual_planner_mode.setter
    def actual_planner_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actual_planner_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'actual_planner_mode' field must be an unsigned integer in [0, 255]"
        self._actual_planner_mode = value

    @builtins.property
    def current_x(self):
        """Message field 'current_x'."""
        return self._current_x

    @current_x.setter
    def current_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_x = value

    @builtins.property
    def current_y(self):
        """Message field 'current_y'."""
        return self._current_y

    @current_y.setter
    def current_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_y = value

    @builtins.property
    def stitch_s(self):
        """Message field 'stitch_s'."""
        return self._stitch_s

    @stitch_s.setter
    def stitch_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_s = value

    @builtins.property
    def stitch_l(self):
        """Message field 'stitch_l'."""
        return self._stitch_l

    @stitch_l.setter
    def stitch_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_l = value

    @builtins.property
    def stitch_x(self):
        """Message field 'stitch_x'."""
        return self._stitch_x

    @stitch_x.setter
    def stitch_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_x = value

    @builtins.property
    def stitch_y(self):
        """Message field 'stitch_y'."""
        return self._stitch_y

    @stitch_y.setter
    def stitch_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_y = value

    @builtins.property
    def stitch_z(self):
        """Message field 'stitch_z'."""
        return self._stitch_z

    @stitch_z.setter
    def stitch_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_z = value

    @builtins.property
    def stitch_heading(self):
        """Message field 'stitch_heading'."""
        return self._stitch_heading

    @stitch_heading.setter
    def stitch_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_heading = value

    @builtins.property
    def stitch_alpha(self):
        """Message field 'stitch_alpha'."""
        return self._stitch_alpha

    @stitch_alpha.setter
    def stitch_alpha(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_alpha' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_alpha' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_alpha = value

    @builtins.property
    def stitch_v(self):
        """Message field 'stitch_v'."""
        return self._stitch_v

    @stitch_v.setter
    def stitch_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_v = value

    @builtins.property
    def stitch_steer(self):
        """Message field 'stitch_steer'."""
        return self._stitch_steer

    @stitch_steer.setter
    def stitch_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stitch_steer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stitch_steer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stitch_steer = value
