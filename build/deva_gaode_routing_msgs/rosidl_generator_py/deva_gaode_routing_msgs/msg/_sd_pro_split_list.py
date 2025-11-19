# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdProSplitList(type):
    """Metaclass of message 'SdProSplitList'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.SdProSplitList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_pro_split_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_pro_split_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_pro_split_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_pro_split_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_pro_split_list

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdProSplitList(metaclass=Metaclass_SdProSplitList):
    """Message class 'SdProSplitList'."""

    __slots__ = [
        '_sub_path_id',
        '_turn_angle',
        '_right_of_way',
    ]

    _fields_and_field_types = {
        'sub_path_id': 'uint32',
        'turn_angle': 'double',
        'right_of_way': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sub_path_id = kwargs.get('sub_path_id', int())
        self.turn_angle = kwargs.get('turn_angle', float())
        self.right_of_way = kwargs.get('right_of_way', int())

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
        if self.sub_path_id != other.sub_path_id:
            return False
        if self.turn_angle != other.turn_angle:
            return False
        if self.right_of_way != other.right_of_way:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sub_path_id(self):
        """Message field 'sub_path_id'."""
        return self._sub_path_id

    @sub_path_id.setter
    def sub_path_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_path_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sub_path_id' field must be an unsigned integer in [0, 4294967295]"
        self._sub_path_id = value

    @builtins.property
    def turn_angle(self):
        """Message field 'turn_angle'."""
        return self._turn_angle

    @turn_angle.setter
    def turn_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turn_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turn_angle = value

    @builtins.property
    def right_of_way(self):
        """Message field 'right_of_way'."""
        return self._right_of_way

    @right_of_way.setter
    def right_of_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_of_way' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_of_way' field must be an unsigned integer in [0, 4294967295]"
        self._right_of_way = value
