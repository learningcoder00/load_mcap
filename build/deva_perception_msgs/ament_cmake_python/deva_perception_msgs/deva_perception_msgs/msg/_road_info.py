# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RoadInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadInfo(type):
    """Metaclass of message 'RoadInfo'."""

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
                'deva_perception_msgs.msg.RoadInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoadInfo(metaclass=Metaclass_RoadInfo):
    """Message class 'RoadInfo'."""

    __slots__ = [
        '_has_traffic_light',
        '_road_type',
        '_road_class',
    ]

    _fields_and_field_types = {
        'has_traffic_light': 'int32',
        'road_type': 'uint8',
        'road_class': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_traffic_light = kwargs.get('has_traffic_light', int())
        self.road_type = kwargs.get('road_type', int())
        self.road_class = kwargs.get('road_class', int())

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
        if self.has_traffic_light != other.has_traffic_light:
            return False
        if self.road_type != other.road_type:
            return False
        if self.road_class != other.road_class:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_traffic_light(self):
        """Message field 'has_traffic_light'."""
        return self._has_traffic_light

    @has_traffic_light.setter
    def has_traffic_light(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'has_traffic_light' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'has_traffic_light' field must be an integer in [-2147483648, 2147483647]"
        self._has_traffic_light = value

    @builtins.property
    def road_type(self):
        """Message field 'road_type'."""
        return self._road_type

    @road_type.setter
    def road_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_type' field must be an unsigned integer in [0, 255]"
        self._road_type = value

    @builtins.property
    def road_class(self):
        """Message field 'road_class'."""
        return self._road_class

    @road_class.setter
    def road_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_class' field must be an unsigned integer in [0, 255]"
        self._road_class = value
