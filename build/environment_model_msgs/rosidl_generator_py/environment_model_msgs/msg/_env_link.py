# generated from rosidl_generator_py/resource/_idl.py.em
# with input from environment_model_msgs:msg/EnvLink.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvLink(type):
    """Metaclass of message 'EnvLink'."""

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
                'environment_model_msgs.msg.EnvLink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__env_link
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__env_link
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__env_link
            cls._TYPE_SUPPORT = module.type_support_msg__msg__env_link
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__env_link

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvLink(metaclass=Metaclass_EnvLink):
    """Message class 'EnvLink'."""

    __slots__ = [
        '_id',
        '_parent_link_id',
        '_angle_with_parent',
        '_length',
        '_is_on_routing',
        '_lane_num',
        '_sub_link_num',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'parent_link_id': 'uint64',
        'angle_with_parent': 'float',
        'length': 'double',
        'is_on_routing': 'boolean',
        'lane_num': 'int32',
        'sub_link_num': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.parent_link_id = kwargs.get('parent_link_id', int())
        self.angle_with_parent = kwargs.get('angle_with_parent', float())
        self.length = kwargs.get('length', float())
        self.is_on_routing = kwargs.get('is_on_routing', bool())
        self.lane_num = kwargs.get('lane_num', int())
        self.sub_link_num = kwargs.get('sub_link_num', int())

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
        if self.parent_link_id != other.parent_link_id:
            return False
        if self.angle_with_parent != other.angle_with_parent:
            return False
        if self.length != other.length:
            return False
        if self.is_on_routing != other.is_on_routing:
            return False
        if self.lane_num != other.lane_num:
            return False
        if self.sub_link_num != other.sub_link_num:
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
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

    @builtins.property
    def parent_link_id(self):
        """Message field 'parent_link_id'."""
        return self._parent_link_id

    @parent_link_id.setter
    def parent_link_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parent_link_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'parent_link_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._parent_link_id = value

    @builtins.property
    def angle_with_parent(self):
        """Message field 'angle_with_parent'."""
        return self._angle_with_parent

    @angle_with_parent.setter
    def angle_with_parent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_with_parent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_with_parent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_with_parent = value

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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length = value

    @builtins.property
    def is_on_routing(self):
        """Message field 'is_on_routing'."""
        return self._is_on_routing

    @is_on_routing.setter
    def is_on_routing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_routing' field must be of type 'bool'"
        self._is_on_routing = value

    @builtins.property
    def lane_num(self):
        """Message field 'lane_num'."""
        return self._lane_num

    @lane_num.setter
    def lane_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_num' field must be an integer in [-2147483648, 2147483647]"
        self._lane_num = value

    @builtins.property
    def sub_link_num(self):
        """Message field 'sub_link_num'."""
        return self._sub_link_num

    @sub_link_num.setter
    def sub_link_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_link_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sub_link_num' field must be an integer in [-2147483648, 2147483647]"
        self._sub_link_num = value
