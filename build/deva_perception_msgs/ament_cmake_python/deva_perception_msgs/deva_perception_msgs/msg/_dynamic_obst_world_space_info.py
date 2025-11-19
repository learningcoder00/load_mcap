# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'sigma_vel'
# Member 'sigma_position'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamicObstWorldSpaceInfo(type):
    """Metaclass of message 'DynamicObstWorldSpaceInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INVALID': 0,
        'UNKNOWN': 1,
        'MOVING': 2,
        'STATIONARY': 3,
        'STOPPED': 4,
        'MOVING_SLOWLY': 5,
        'ENUM_SIZE': 6,
        'LEFT_NEXT_NEXT': -2,
        'LEFT_NEXT': -1,
        'EGOLANE': 0,
        'RIGHT_NEXT': 1,
        'RIGHT_NEXT_NEXT': 2,
        'LANE_UNKNOWN': 3,
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
                'deva_perception_msgs.msg.DynamicObstWorldSpaceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamic_obst_world_space_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamic_obst_world_space_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamic_obst_world_space_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamic_obst_world_space_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamic_obst_world_space_info

            from deva_perception_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INVALID': cls.__constants['INVALID'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'MOVING': cls.__constants['MOVING'],
            'STATIONARY': cls.__constants['STATIONARY'],
            'STOPPED': cls.__constants['STOPPED'],
            'MOVING_SLOWLY': cls.__constants['MOVING_SLOWLY'],
            'ENUM_SIZE': cls.__constants['ENUM_SIZE'],
            'LEFT_NEXT_NEXT': cls.__constants['LEFT_NEXT_NEXT'],
            'LEFT_NEXT': cls.__constants['LEFT_NEXT'],
            'EGOLANE': cls.__constants['EGOLANE'],
            'RIGHT_NEXT': cls.__constants['RIGHT_NEXT'],
            'RIGHT_NEXT_NEXT': cls.__constants['RIGHT_NEXT_NEXT'],
            'LANE_UNKNOWN': cls.__constants['LANE_UNKNOWN'],
        }

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['INVALID']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['UNKNOWN']

    @property
    def MOVING(self):
        """Message constant 'MOVING'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['MOVING']

    @property
    def STATIONARY(self):
        """Message constant 'STATIONARY'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['STATIONARY']

    @property
    def STOPPED(self):
        """Message constant 'STOPPED'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['STOPPED']

    @property
    def MOVING_SLOWLY(self):
        """Message constant 'MOVING_SLOWLY'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['MOVING_SLOWLY']

    @property
    def ENUM_SIZE(self):
        """Message constant 'ENUM_SIZE'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['ENUM_SIZE']

    @property
    def LEFT_NEXT_NEXT(self):
        """Message constant 'LEFT_NEXT_NEXT'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['LEFT_NEXT_NEXT']

    @property
    def LEFT_NEXT(self):
        """Message constant 'LEFT_NEXT'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['LEFT_NEXT']

    @property
    def EGOLANE(self):
        """Message constant 'EGOLANE'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['EGOLANE']

    @property
    def RIGHT_NEXT(self):
        """Message constant 'RIGHT_NEXT'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['RIGHT_NEXT']

    @property
    def RIGHT_NEXT_NEXT(self):
        """Message constant 'RIGHT_NEXT_NEXT'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['RIGHT_NEXT_NEXT']

    @property
    def LANE_UNKNOWN(self):
        """Message constant 'LANE_UNKNOWN'."""
        return Metaclass_DynamicObstWorldSpaceInfo.__constants['LANE_UNKNOWN']


class DynamicObstWorldSpaceInfo(metaclass=Metaclass_DynamicObstWorldSpaceInfo):
    """
    Message class 'DynamicObstWorldSpaceInfo'.

    Constants:
      INVALID
      UNKNOWN
      MOVING
      STATIONARY
      STOPPED
      MOVING_SLOWLY
      ENUM_SIZE
      LEFT_NEXT_NEXT
      LEFT_NEXT
      EGOLANE
      RIGHT_NEXT
      RIGHT_NEXT_NEXT
      LANE_UNKNOWN
    """

    __slots__ = [
        '_yaw',
        '_length',
        '_width',
        '_height',
        '_poly',
        '_poly_vcs',
        '_position',
        '_ttc',
        '_vel',
        '_vel_abs_world',
        '_acc',
        '_acc_abs_world',
        '_motion_status',
        '_yaw_rate',
        '_sigma_vel',
        '_sigma_yaw',
        '_sigma_width',
        '_sigma_height',
        '_sigma_length',
        '_sigma_position',
        '_sigma_yaw_rate',
        '_lane_assignment',
        '_cipv',
    ]

    _fields_and_field_types = {
        'yaw': 'float',
        'length': 'float',
        'width': 'float',
        'height': 'float',
        'poly': 'deva_perception_msgs/Polygon',
        'poly_vcs': 'deva_perception_msgs/Polygon',
        'position': 'geometry_msgs/Point',
        'ttc': 'float',
        'vel': 'geometry_msgs/Point',
        'vel_abs_world': 'geometry_msgs/Point',
        'acc': 'geometry_msgs/Point',
        'acc_abs_world': 'geometry_msgs/Point',
        'motion_status': 'uint8',
        'yaw_rate': 'float',
        'sigma_vel': 'sequence<float>',
        'sigma_yaw': 'float',
        'sigma_width': 'float',
        'sigma_height': 'float',
        'sigma_length': 'float',
        'sigma_position': 'sequence<float>',
        'sigma_yaw_rate': 'float',
        'lane_assignment': 'int8',
        'cipv': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yaw = kwargs.get('yaw', float())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        from deva_perception_msgs.msg import Polygon
        self.poly = kwargs.get('poly', Polygon())
        from deva_perception_msgs.msg import Polygon
        self.poly_vcs = kwargs.get('poly_vcs', Polygon())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.ttc = kwargs.get('ttc', float())
        from geometry_msgs.msg import Point
        self.vel = kwargs.get('vel', Point())
        from geometry_msgs.msg import Point
        self.vel_abs_world = kwargs.get('vel_abs_world', Point())
        from geometry_msgs.msg import Point
        self.acc = kwargs.get('acc', Point())
        from geometry_msgs.msg import Point
        self.acc_abs_world = kwargs.get('acc_abs_world', Point())
        self.motion_status = kwargs.get('motion_status', int())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.sigma_vel = array.array('f', kwargs.get('sigma_vel', []))
        self.sigma_yaw = kwargs.get('sigma_yaw', float())
        self.sigma_width = kwargs.get('sigma_width', float())
        self.sigma_height = kwargs.get('sigma_height', float())
        self.sigma_length = kwargs.get('sigma_length', float())
        self.sigma_position = array.array('f', kwargs.get('sigma_position', []))
        self.sigma_yaw_rate = kwargs.get('sigma_yaw_rate', float())
        self.lane_assignment = kwargs.get('lane_assignment', int())
        self.cipv = kwargs.get('cipv', int())

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
        if self.yaw != other.yaw:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.poly != other.poly:
            return False
        if self.poly_vcs != other.poly_vcs:
            return False
        if self.position != other.position:
            return False
        if self.ttc != other.ttc:
            return False
        if self.vel != other.vel:
            return False
        if self.vel_abs_world != other.vel_abs_world:
            return False
        if self.acc != other.acc:
            return False
        if self.acc_abs_world != other.acc_abs_world:
            return False
        if self.motion_status != other.motion_status:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.sigma_vel != other.sigma_vel:
            return False
        if self.sigma_yaw != other.sigma_yaw:
            return False
        if self.sigma_width != other.sigma_width:
            return False
        if self.sigma_height != other.sigma_height:
            return False
        if self.sigma_length != other.sigma_length:
            return False
        if self.sigma_position != other.sigma_position:
            return False
        if self.sigma_yaw_rate != other.sigma_yaw_rate:
            return False
        if self.lane_assignment != other.lane_assignment:
            return False
        if self.cipv != other.cipv:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def poly(self):
        """Message field 'poly'."""
        return self._poly

    @poly.setter
    def poly(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'poly' field must be a sub message of type 'Polygon'"
        self._poly = value

    @builtins.property
    def poly_vcs(self):
        """Message field 'poly_vcs'."""
        return self._poly_vcs

    @poly_vcs.setter
    def poly_vcs(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'poly_vcs' field must be a sub message of type 'Polygon'"
        self._poly_vcs = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def ttc(self):
        """Message field 'ttc'."""
        return self._ttc

    @ttc.setter
    def ttc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ttc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ttc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ttc = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'vel' field must be a sub message of type 'Point'"
        self._vel = value

    @builtins.property
    def vel_abs_world(self):
        """Message field 'vel_abs_world'."""
        return self._vel_abs_world

    @vel_abs_world.setter
    def vel_abs_world(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'vel_abs_world' field must be a sub message of type 'Point'"
        self._vel_abs_world = value

    @builtins.property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'acc' field must be a sub message of type 'Point'"
        self._acc = value

    @builtins.property
    def acc_abs_world(self):
        """Message field 'acc_abs_world'."""
        return self._acc_abs_world

    @acc_abs_world.setter
    def acc_abs_world(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'acc_abs_world' field must be a sub message of type 'Point'"
        self._acc_abs_world = value

    @builtins.property
    def motion_status(self):
        """Message field 'motion_status'."""
        return self._motion_status

    @motion_status.setter
    def motion_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_status' field must be an unsigned integer in [0, 255]"
        self._motion_status = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value

    @builtins.property
    def sigma_vel(self):
        """Message field 'sigma_vel'."""
        return self._sigma_vel

    @sigma_vel.setter
    def sigma_vel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'sigma_vel' array.array() must have the type code of 'f'"
            self._sigma_vel = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'sigma_vel' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sigma_vel = array.array('f', value)

    @builtins.property
    def sigma_yaw(self):
        """Message field 'sigma_yaw'."""
        return self._sigma_yaw

    @sigma_yaw.setter
    def sigma_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigma_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigma_yaw = value

    @builtins.property
    def sigma_width(self):
        """Message field 'sigma_width'."""
        return self._sigma_width

    @sigma_width.setter
    def sigma_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigma_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigma_width = value

    @builtins.property
    def sigma_height(self):
        """Message field 'sigma_height'."""
        return self._sigma_height

    @sigma_height.setter
    def sigma_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigma_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigma_height = value

    @builtins.property
    def sigma_length(self):
        """Message field 'sigma_length'."""
        return self._sigma_length

    @sigma_length.setter
    def sigma_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigma_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigma_length = value

    @builtins.property
    def sigma_position(self):
        """Message field 'sigma_position'."""
        return self._sigma_position

    @sigma_position.setter
    def sigma_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'sigma_position' array.array() must have the type code of 'f'"
            self._sigma_position = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'sigma_position' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sigma_position = array.array('f', value)

    @builtins.property
    def sigma_yaw_rate(self):
        """Message field 'sigma_yaw_rate'."""
        return self._sigma_yaw_rate

    @sigma_yaw_rate.setter
    def sigma_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma_yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sigma_yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sigma_yaw_rate = value

    @builtins.property
    def lane_assignment(self):
        """Message field 'lane_assignment'."""
        return self._lane_assignment

    @lane_assignment.setter
    def lane_assignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_assignment' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lane_assignment' field must be an integer in [-128, 127]"
        self._lane_assignment = value

    @builtins.property
    def cipv(self):
        """Message field 'cipv'."""
        return self._cipv

    @cipv.setter
    def cipv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cipv' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'cipv' field must be an integer in [-128, 127]"
        self._cipv = value
