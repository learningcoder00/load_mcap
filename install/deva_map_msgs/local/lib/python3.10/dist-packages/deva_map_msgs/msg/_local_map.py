# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_map_msgs:msg/LocalMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalMap(type):
    """Metaclass of message 'LocalMap'."""

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
                'deva_map_msgs.msg.LocalMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_map

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_map_msgs.msg import AvpLocalMap
            if AvpLocalMap.__class__._TYPE_SUPPORT is None:
                AvpLocalMap.__class__.__import_type_support__()

            from deva_map_msgs.msg import LocalMapHeader
            if LocalMapHeader.__class__._TYPE_SUPPORT is None:
                LocalMapHeader.__class__.__import_type_support__()

            from deva_map_msgs.msg import STLocalMap
            if STLocalMap.__class__._TYPE_SUPPORT is None:
                STLocalMap.__class__.__import_type_support__()

            from deva_perception_msgs.msg import USTBoundary
            if USTBoundary.__class__._TYPE_SUPPORT is None:
                USTBoundary.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalMap(metaclass=Metaclass_LocalMap):
    """Message class 'LocalMap'."""

    __slots__ = [
        '_header',
        '_map_version',
        '_error_code',
        '_error_message',
        '_map_mode',
        '_is_localization_mode',
        '_st_map',
        '_ust_map',
        '_avp_map',
        '_sensor_header',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'map_version': 'string',
        'error_code': 'uint16',
        'error_message': 'string',
        'map_mode': 'uint16',
        'is_localization_mode': 'boolean',
        'st_map': 'deva_map_msgs/STLocalMap',
        'ust_map': 'sequence<deva_perception_msgs/USTBoundary>',
        'avp_map': 'deva_map_msgs/AvpLocalMap',
        'sensor_header': 'deva_map_msgs/LocalMapHeader',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'STLocalMap'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'USTBoundary')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'AvpLocalMap'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_map_msgs', 'msg'], 'LocalMapHeader'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.map_version = kwargs.get('map_version', str())
        self.error_code = kwargs.get('error_code', int())
        self.error_message = kwargs.get('error_message', str())
        self.map_mode = kwargs.get('map_mode', int())
        self.is_localization_mode = kwargs.get('is_localization_mode', bool())
        from deva_map_msgs.msg import STLocalMap
        self.st_map = kwargs.get('st_map', STLocalMap())
        self.ust_map = kwargs.get('ust_map', [])
        from deva_map_msgs.msg import AvpLocalMap
        self.avp_map = kwargs.get('avp_map', AvpLocalMap())
        from deva_map_msgs.msg import LocalMapHeader
        self.sensor_header = kwargs.get('sensor_header', LocalMapHeader())

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
        if self.header != other.header:
            return False
        if self.map_version != other.map_version:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        if self.map_mode != other.map_mode:
            return False
        if self.is_localization_mode != other.is_localization_mode:
            return False
        if self.st_map != other.st_map:
            return False
        if self.ust_map != other.ust_map:
            return False
        if self.avp_map != other.avp_map:
            return False
        if self.sensor_header != other.sensor_header:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def map_version(self):
        """Message field 'map_version'."""
        return self._map_version

    @map_version.setter
    def map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_version' field must be of type 'str'"
        self._map_version = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

    @builtins.property
    def map_mode(self):
        """Message field 'map_mode'."""
        return self._map_mode

    @map_mode.setter
    def map_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_mode' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'map_mode' field must be an unsigned integer in [0, 65535]"
        self._map_mode = value

    @builtins.property
    def is_localization_mode(self):
        """Message field 'is_localization_mode'."""
        return self._is_localization_mode

    @is_localization_mode.setter
    def is_localization_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_localization_mode' field must be of type 'bool'"
        self._is_localization_mode = value

    @builtins.property
    def st_map(self):
        """Message field 'st_map'."""
        return self._st_map

    @st_map.setter
    def st_map(self, value):
        if __debug__:
            from deva_map_msgs.msg import STLocalMap
            assert \
                isinstance(value, STLocalMap), \
                "The 'st_map' field must be a sub message of type 'STLocalMap'"
        self._st_map = value

    @builtins.property
    def ust_map(self):
        """Message field 'ust_map'."""
        return self._ust_map

    @ust_map.setter
    def ust_map(self, value):
        if __debug__:
            from deva_perception_msgs.msg import USTBoundary
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
                 all(isinstance(v, USTBoundary) for v in value) and
                 True), \
                "The 'ust_map' field must be a set or sequence and each value of type 'USTBoundary'"
        self._ust_map = value

    @builtins.property
    def avp_map(self):
        """Message field 'avp_map'."""
        return self._avp_map

    @avp_map.setter
    def avp_map(self, value):
        if __debug__:
            from deva_map_msgs.msg import AvpLocalMap
            assert \
                isinstance(value, AvpLocalMap), \
                "The 'avp_map' field must be a sub message of type 'AvpLocalMap'"
        self._avp_map = value

    @builtins.property
    def sensor_header(self):
        """Message field 'sensor_header'."""
        return self._sensor_header

    @sensor_header.setter
    def sensor_header(self, value):
        if __debug__:
            from deva_map_msgs.msg import LocalMapHeader
            assert \
                isinstance(value, LocalMapHeader), \
                "The 'sensor_header' field must be a sub message of type 'LocalMapHeader'"
        self._sensor_header = value
