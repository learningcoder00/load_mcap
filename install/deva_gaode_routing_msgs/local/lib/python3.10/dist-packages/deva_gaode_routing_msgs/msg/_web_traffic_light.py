# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebTrafficLight(type):
    """Metaclass of message 'WebTrafficLight'."""

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
                'deva_gaode_routing_msgs.msg.WebTrafficLight')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__web_traffic_light
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__web_traffic_light
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__web_traffic_light
            cls._TYPE_SUPPORT = module.type_support_msg__msg__web_traffic_light
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__web_traffic_light

            from deva_gaode_routing_msgs.msg import WebLightInfo
            if WebLightInfo.__class__._TYPE_SUPPORT is None:
                WebLightInfo.__class__.__import_type_support__()

            from deva_gaode_routing_msgs.msg import WebPoint
            if WebPoint.__class__._TYPE_SUPPORT is None:
                WebPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebTrafficLight(metaclass=Metaclass_WebTrafficLight):
    """Message class 'WebTrafficLight'."""

    __slots__ = [
        '_road_id',
        '_road_index',
        '_setp_index',
        '_path_id',
        '_position',
        '_status',
        '_light_info',
    ]

    _fields_and_field_types = {
        'road_id': 'int32',
        'road_index': 'int32',
        'setp_index': 'int32',
        'path_id': 'int32',
        'position': 'deva_gaode_routing_msgs/WebPoint',
        'status': 'int32',
        'light_info': 'deva_gaode_routing_msgs/WebLightInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_gaode_routing_msgs', 'msg'], 'WebLightInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.road_id = kwargs.get('road_id', int())
        self.road_index = kwargs.get('road_index', int())
        self.setp_index = kwargs.get('setp_index', int())
        self.path_id = kwargs.get('path_id', int())
        from deva_gaode_routing_msgs.msg import WebPoint
        self.position = kwargs.get('position', WebPoint())
        self.status = kwargs.get('status', int())
        from deva_gaode_routing_msgs.msg import WebLightInfo
        self.light_info = kwargs.get('light_info', WebLightInfo())

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
        if self.road_id != other.road_id:
            return False
        if self.road_index != other.road_index:
            return False
        if self.setp_index != other.setp_index:
            return False
        if self.path_id != other.path_id:
            return False
        if self.position != other.position:
            return False
        if self.status != other.status:
            return False
        if self.light_info != other.light_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def road_id(self):
        """Message field 'road_id'."""
        return self._road_id

    @road_id.setter
    def road_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'road_id' field must be an integer in [-2147483648, 2147483647]"
        self._road_id = value

    @builtins.property
    def road_index(self):
        """Message field 'road_index'."""
        return self._road_index

    @road_index.setter
    def road_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'road_index' field must be an integer in [-2147483648, 2147483647]"
        self._road_index = value

    @builtins.property
    def setp_index(self):
        """Message field 'setp_index'."""
        return self._setp_index

    @setp_index.setter
    def setp_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'setp_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'setp_index' field must be an integer in [-2147483648, 2147483647]"
        self._setp_index = value

    @builtins.property
    def path_id(self):
        """Message field 'path_id'."""
        return self._path_id

    @path_id.setter
    def path_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'path_id' field must be an integer in [-2147483648, 2147483647]"
        self._path_id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebPoint
            assert \
                isinstance(value, WebPoint), \
                "The 'position' field must be a sub message of type 'WebPoint'"
        self._position = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def light_info(self):
        """Message field 'light_info'."""
        return self._light_info

    @light_info.setter
    def light_info(self, value):
        if __debug__:
            from deva_gaode_routing_msgs.msg import WebLightInfo
            assert \
                isinstance(value, WebLightInfo), \
                "The 'light_info' field must be a sub message of type 'WebLightInfo'"
        self._light_info = value
