# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/LocalMapHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalMapHeader(type):
    """Metaclass of message 'LocalMapHeader'."""

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
            module = import_type_support('deva_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_map_msgs.msg.LocalMapHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_map_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_map_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_map_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_map_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_map_header

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalMapHeader(metaclass=Metaclass_LocalMapHeader):
    """Message class 'LocalMapHeader'."""

    __slots__ = [
        '_send_localmap_header',
        '_received_preseptionmap_header',
        '_preseptionmap_header',
    ]

    _fields_and_field_types = {
        'send_localmap_header': 'deva_common_msgs/Header',
        'received_preseptionmap_header': 'deva_common_msgs/Header',
        'preseptionmap_header': 'deva_common_msgs/Header',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.send_localmap_header = kwargs.get('send_localmap_header', Header())
        from deva_common_msgs.msg import Header
        self.received_preseptionmap_header = kwargs.get('received_preseptionmap_header', Header())
        from deva_common_msgs.msg import Header
        self.preseptionmap_header = kwargs.get('preseptionmap_header', Header())

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
        if self.send_localmap_header != other.send_localmap_header:
            return False
        if self.received_preseptionmap_header != other.received_preseptionmap_header:
            return False
        if self.preseptionmap_header != other.preseptionmap_header:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def send_localmap_header(self):
        """Message field 'send_localmap_header'."""
        return self._send_localmap_header

    @send_localmap_header.setter
    def send_localmap_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'send_localmap_header' field must be a sub message of type 'Header'"
        self._send_localmap_header = value

    @builtins.property
    def received_preseptionmap_header(self):
        """Message field 'received_preseptionmap_header'."""
        return self._received_preseptionmap_header

    @received_preseptionmap_header.setter
    def received_preseptionmap_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'received_preseptionmap_header' field must be a sub message of type 'Header'"
        self._received_preseptionmap_header = value

    @builtins.property
    def preseptionmap_header(self):
        """Message field 'preseptionmap_header'."""
        return self._preseptionmap_header

    @preseptionmap_header.setter
    def preseptionmap_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'preseptionmap_header' field must be a sub message of type 'Header'"
        self._preseptionmap_header = value
