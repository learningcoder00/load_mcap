# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalPathMsg(type):
    """Metaclass of message 'GlobalPathMsg'."""

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
                'deva_gaode_routing_msgs.msg.GlobalPathMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_path_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_path_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_path_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_path_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_path_msg

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebStep
            if WebStep.__class__._TYPE_SUPPORT is None:
                WebStep.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GlobalPathMsg(metaclass=Metaclass_GlobalPathMsg):
    """Message class 'GlobalPathMsg'."""

    __slots__ = [
        '_global_coords',
        '_global_steps',
    ]

    _fields_and_field_types = {
        'global_coords': 'sequence<deva_gaode_routing_msgs/WebPoint>',
        'global_steps': 'sequence<deva_gaode_routing_msgs/WebStep>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebStep')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.global_coords = kwargs.get('global_coords', [])
        self.global_steps = kwargs.get('global_steps', [])

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
        if self.global_coords != other.global_coords:
            return False
        if self.global_steps != other.global_steps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def global_coords(self):
        """Message field 'global_coords'."""
        return self._global_coords

    @global_coords.setter
    def global_coords(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
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
                 all(isinstance(v, WebPoint) for v in value) and
                 True), \
                "The 'global_coords' field must be a set or sequence and each value of type 'WebPoint'"
        self._global_coords = value

    @builtins.property
    def global_steps(self):
        """Message field 'global_steps'."""
        return self._global_steps

    @global_steps.setter
    def global_steps(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebStep
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
                 all(isinstance(v, WebStep) for v in value) and
                 True), \
                "The 'global_steps' field must be a set or sequence and each value of type 'WebStep'"
        self._global_steps = value
