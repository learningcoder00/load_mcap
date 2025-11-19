# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebLightInfo(type):
    """Metaclass of message 'WebLightInfo'."""

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
                'deva_gaode_routing_msgs.msg.WebLightInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_light_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_light_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_light_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_light_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_light_info

            from deva_gaode_routing_msgs.msg import WebLightState
            if WebLightState.__class__._TYPE_SUPPORT is None:
                WebLightState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebLightInfo(metaclass=Metaclass_WebLightInfo):
    """Message class 'WebLightInfo'."""

    __slots__ = [
        '_dir',
        '_wait_num',
        '_light_states',
        '_desc',
    ]

    _fields_and_field_types = {
        'dir': 'int32',
        'wait_num': 'int32',
        'light_states': 'sequence<deva_gaode_routing_msgs/WebLightState>',
        'desc': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebLightState')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dir = kwargs.get('dir', int())
        self.wait_num = kwargs.get('wait_num', int())
        self.light_states = kwargs.get('light_states', [])
        self.desc = kwargs.get('desc', str())

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
        if self.dir != other.dir:
            return False
        if self.wait_num != other.wait_num:
            return False
        if self.light_states != other.light_states:
            return False
        if self.desc != other.desc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def dir(self):  # noqa: A003
        """Message field 'dir'."""
        return self._dir

    @dir.setter  # noqa: A003
    def dir(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dir' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dir' field must be an integer in [-2147483648, 2147483647]"
        self._dir = value

    @builtins.property
    def wait_num(self):
        """Message field 'wait_num'."""
        return self._wait_num

    @wait_num.setter
    def wait_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wait_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'wait_num' field must be an integer in [-2147483648, 2147483647]"
        self._wait_num = value

    @builtins.property
    def light_states(self):
        """Message field 'light_states'."""
        return self._light_states

    @light_states.setter
    def light_states(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebLightState
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
                 all(isinstance(v, WebLightState) for v in value) and
                 True), \
                "The 'light_states' field must be a set or sequence and each value of type 'WebLightState'"
        self._light_states = value

    @builtins.property
    def desc(self):
        """Message field 'desc'."""
        return self._desc

    @desc.setter
    def desc(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'desc' field must be of type 'str'"
        self._desc = value
