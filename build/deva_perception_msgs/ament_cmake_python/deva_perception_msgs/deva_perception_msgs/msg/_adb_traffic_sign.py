# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/AdbTrafficSign.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdbTrafficSign(type):
    """Metaclass of message 'AdbTrafficSign'."""

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
                'deva_perception_msgs.msg.AdbTrafficSign')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adb_traffic_sign
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adb_traffic_sign
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adb_traffic_sign
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adb_traffic_sign
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adb_traffic_sign

            from deva_perception_msgs.msg import ExtraInfo
            if ExtraInfo.__class__._TYPE_SUPPORT is None:
                ExtraInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdbTrafficSign(metaclass=Metaclass_AdbTrafficSign):
    """Message class 'AdbTrafficSign'."""

    __slots__ = [
        '_id',
        '_conf',
        '_parsing_conf',
        '_track_info',
        '_age',
        '_life_time',
        '_distance',
        '_horizon_left_angle',
        '_horizon_right_angle',
        '_vertical_bottom_angle',
        '_vertical_top_angle',
        '_extra_infos',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'conf': 'uint8',
        'parsing_conf': 'uint8',
        'track_info': 'uint8',
        'age': 'uint32',
        'life_time': 'uint32',
        'distance': 'float',
        'horizon_left_angle': 'float',
        'horizon_right_angle': 'float',
        'vertical_bottom_angle': 'float',
        'vertical_top_angle': 'float',
        'extra_infos': 'sequence<deva_perception_msgs/ExtraInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'ExtraInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.conf = kwargs.get('conf', int())
        self.parsing_conf = kwargs.get('parsing_conf', int())
        self.track_info = kwargs.get('track_info', int())
        self.age = kwargs.get('age', int())
        self.life_time = kwargs.get('life_time', int())
        self.distance = kwargs.get('distance', float())
        self.horizon_left_angle = kwargs.get('horizon_left_angle', float())
        self.horizon_right_angle = kwargs.get('horizon_right_angle', float())
        self.vertical_bottom_angle = kwargs.get('vertical_bottom_angle', float())
        self.vertical_top_angle = kwargs.get('vertical_top_angle', float())
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
        if self.id != other.id:
            return False
        if self.conf != other.conf:
            return False
        if self.parsing_conf != other.parsing_conf:
            return False
        if self.track_info != other.track_info:
            return False
        if self.age != other.age:
            return False
        if self.life_time != other.life_time:
            return False
        if self.distance != other.distance:
            return False
        if self.horizon_left_angle != other.horizon_left_angle:
            return False
        if self.horizon_right_angle != other.horizon_right_angle:
            return False
        if self.vertical_bottom_angle != other.vertical_bottom_angle:
            return False
        if self.vertical_top_angle != other.vertical_top_angle:
            return False
        if self.extra_infos != other.extra_infos:
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
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def conf(self):
        """Message field 'conf'."""
        return self._conf

    @conf.setter
    def conf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'conf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'conf' field must be an unsigned integer in [0, 255]"
        self._conf = value

    @builtins.property
    def parsing_conf(self):
        """Message field 'parsing_conf'."""
        return self._parsing_conf

    @parsing_conf.setter
    def parsing_conf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parsing_conf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parsing_conf' field must be an unsigned integer in [0, 255]"
        self._parsing_conf = value

    @builtins.property
    def track_info(self):
        """Message field 'track_info'."""
        return self._track_info

    @track_info.setter
    def track_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_info' field must be an unsigned integer in [0, 255]"
        self._track_info = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'age' field must be an unsigned integer in [0, 4294967295]"
        self._age = value

    @builtins.property
    def life_time(self):
        """Message field 'life_time'."""
        return self._life_time

    @life_time.setter
    def life_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'life_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'life_time' field must be an unsigned integer in [0, 4294967295]"
        self._life_time = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def horizon_left_angle(self):
        """Message field 'horizon_left_angle'."""
        return self._horizon_left_angle

    @horizon_left_angle.setter
    def horizon_left_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizon_left_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizon_left_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizon_left_angle = value

    @builtins.property
    def horizon_right_angle(self):
        """Message field 'horizon_right_angle'."""
        return self._horizon_right_angle

    @horizon_right_angle.setter
    def horizon_right_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizon_right_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizon_right_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizon_right_angle = value

    @builtins.property
    def vertical_bottom_angle(self):
        """Message field 'vertical_bottom_angle'."""
        return self._vertical_bottom_angle

    @vertical_bottom_angle.setter
    def vertical_bottom_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_bottom_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_bottom_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_bottom_angle = value

    @builtins.property
    def vertical_top_angle(self):
        """Message field 'vertical_top_angle'."""
        return self._vertical_top_angle

    @vertical_top_angle.setter
    def vertical_top_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_top_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_top_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_top_angle = value

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
