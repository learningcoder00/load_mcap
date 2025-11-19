# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RVLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RVLight(type):
    """Metaclass of message 'RVLight'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CAR_LIGHT': 1,
        'VAN_LIGHT': 2,
        'MOTOR_LIGHT': 3,
        'TRAFFIC_SIGN': 4,
        'HEAD': 100,
        'TAIL': 101,
        'NO_OCC': 151,
        'MINOR_OCC': 152,
        'PARTIAL_OCC': 153,
        'SEVERE_OCC': 154,
        'NO_TRUN': 201,
        'MINOR_TRUN': 202,
        'PARTIAL_TRUN': 203,
        'SEVERE_TRUN': 204,
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
                'deva_perception_msgs.msg.RVLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_light

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

            from deva_perception_msgs.msg import ObstacleCommon
            if ObstacleCommon.__class__._TYPE_SUPPORT is None:
                ObstacleCommon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CAR_LIGHT': cls.__constants['CAR_LIGHT'],
            'VAN_LIGHT': cls.__constants['VAN_LIGHT'],
            'MOTOR_LIGHT': cls.__constants['MOTOR_LIGHT'],
            'TRAFFIC_SIGN': cls.__constants['TRAFFIC_SIGN'],
            'HEAD': cls.__constants['HEAD'],
            'TAIL': cls.__constants['TAIL'],
            'NO_OCC': cls.__constants['NO_OCC'],
            'MINOR_OCC': cls.__constants['MINOR_OCC'],
            'PARTIAL_OCC': cls.__constants['PARTIAL_OCC'],
            'SEVERE_OCC': cls.__constants['SEVERE_OCC'],
            'NO_TRUN': cls.__constants['NO_TRUN'],
            'MINOR_TRUN': cls.__constants['MINOR_TRUN'],
            'PARTIAL_TRUN': cls.__constants['PARTIAL_TRUN'],
            'SEVERE_TRUN': cls.__constants['SEVERE_TRUN'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_RVLight.__constants['UNKNOWN']

    @property
    def CAR_LIGHT(self):
        """Message constant 'CAR_LIGHT'."""
        return Metaclass_RVLight.__constants['CAR_LIGHT']

    @property
    def VAN_LIGHT(self):
        """Message constant 'VAN_LIGHT'."""
        return Metaclass_RVLight.__constants['VAN_LIGHT']

    @property
    def MOTOR_LIGHT(self):
        """Message constant 'MOTOR_LIGHT'."""
        return Metaclass_RVLight.__constants['MOTOR_LIGHT']

    @property
    def TRAFFIC_SIGN(self):
        """Message constant 'TRAFFIC_SIGN'."""
        return Metaclass_RVLight.__constants['TRAFFIC_SIGN']

    @property
    def HEAD(self):
        """Message constant 'HEAD'."""
        return Metaclass_RVLight.__constants['HEAD']

    @property
    def TAIL(self):
        """Message constant 'TAIL'."""
        return Metaclass_RVLight.__constants['TAIL']

    @property
    def NO_OCC(self):
        """Message constant 'NO_OCC'."""
        return Metaclass_RVLight.__constants['NO_OCC']

    @property
    def MINOR_OCC(self):
        """Message constant 'MINOR_OCC'."""
        return Metaclass_RVLight.__constants['MINOR_OCC']

    @property
    def PARTIAL_OCC(self):
        """Message constant 'PARTIAL_OCC'."""
        return Metaclass_RVLight.__constants['PARTIAL_OCC']

    @property
    def SEVERE_OCC(self):
        """Message constant 'SEVERE_OCC'."""
        return Metaclass_RVLight.__constants['SEVERE_OCC']

    @property
    def NO_TRUN(self):
        """Message constant 'NO_TRUN'."""
        return Metaclass_RVLight.__constants['NO_TRUN']

    @property
    def MINOR_TRUN(self):
        """Message constant 'MINOR_TRUN'."""
        return Metaclass_RVLight.__constants['MINOR_TRUN']

    @property
    def PARTIAL_TRUN(self):
        """Message constant 'PARTIAL_TRUN'."""
        return Metaclass_RVLight.__constants['PARTIAL_TRUN']

    @property
    def SEVERE_TRUN(self):
        """Message constant 'SEVERE_TRUN'."""
        return Metaclass_RVLight.__constants['SEVERE_TRUN']


class RVLight(metaclass=Metaclass_RVLight):
    """
    Message class 'RVLight'.

    Constants:
      UNKNOWN
      CAR_LIGHT
      VAN_LIGHT
      MOTOR_LIGHT
      TRAFFIC_SIGN
      HEAD
      TAIL
      NO_OCC
      MINOR_OCC
      PARTIAL_OCC
      SEVERE_OCC
      NO_TRUN
      MINOR_TRUN
      PARTIAL_TRUN
      SEVERE_TRUN
    """

    __slots__ = [
        '_obstacle',
        '_light_type',
        '_heading_type',
        '_depth',
        '_sign_occ_type',
        '_sign_trun_type',
        '_extra_infos',
    ]

    _fields_and_field_types = {
        'obstacle': 'deva_perception_msgs/ObstacleCommon',
        'light_type': 'uint8',
        'heading_type': 'uint8',
        'depth': 'float',
        'sign_occ_type': 'uint8',
        'sign_trun_type': 'uint8',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ObstacleCommon'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import ObstacleCommon
        self.obstacle = kwargs.get('obstacle', ObstacleCommon())
        self.light_type = kwargs.get('light_type', int())
        self.heading_type = kwargs.get('heading_type', int())
        self.depth = kwargs.get('depth', float())
        self.sign_occ_type = kwargs.get('sign_occ_type', int())
        self.sign_trun_type = kwargs.get('sign_trun_type', int())
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
        if self.obstacle != other.obstacle:
            return False
        if self.light_type != other.light_type:
            return False
        if self.heading_type != other.heading_type:
            return False
        if self.depth != other.depth:
            return False
        if self.sign_occ_type != other.sign_occ_type:
            return False
        if self.sign_trun_type != other.sign_trun_type:
            return False
        if self.extra_infos != other.extra_infos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obstacle(self):
        """Message field 'obstacle'."""
        return self._obstacle

    @obstacle.setter
    def obstacle(self, value):
        if __debug__:
            from deva_perception_msgs.msg import ObstacleCommon
            assert \
                isinstance(value, ObstacleCommon), \
                "The 'obstacle' field must be a sub message of type 'ObstacleCommon'"
        self._obstacle = value

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
    def heading_type(self):
        """Message field 'heading_type'."""
        return self._heading_type

    @heading_type.setter
    def heading_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heading_type' field must be an unsigned integer in [0, 255]"
        self._heading_type = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth = value

    @builtins.property
    def sign_occ_type(self):
        """Message field 'sign_occ_type'."""
        return self._sign_occ_type

    @sign_occ_type.setter
    def sign_occ_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_occ_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sign_occ_type' field must be an unsigned integer in [0, 255]"
        self._sign_occ_type = value

    @builtins.property
    def sign_trun_type(self):
        """Message field 'sign_trun_type'."""
        return self._sign_trun_type

    @sign_trun_type.setter
    def sign_trun_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_trun_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sign_trun_type' field must be an unsigned integer in [0, 255]"
        self._sign_trun_type = value

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
