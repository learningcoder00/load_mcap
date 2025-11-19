# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFDiagList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFDiagList(type):
    """Metaclass of message 'SFDiagList'."""

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
            module = import_type_support('deva_aeb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_aeb_msgs.msg.SFDiagList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_diag_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_diag_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_diag_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_diag_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_diag_list

            from deva_aeb_msgs.msg import SFDiagInfo
            if SFDiagInfo.__class__._TYPE_SUPPORT is None:
                SFDiagInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFDiagList(metaclass=Metaclass_SFDiagList):
    """Message class 'SFDiagList'."""

    __slots__ = [
        '_timestamp',
        '_framenum',
        '_weather',
        '_scene',
        '_rdsuf',
        '_light',
        '_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'framenum': 'uint32',
        'weather': 'deva_aeb_msgs/SFDiagInfo',
        'scene': 'deva_aeb_msgs/SFDiagInfo',
        'rdsuf': 'deva_aeb_msgs/SFDiagInfo',
        'light': 'deva_aeb_msgs/SFDiagInfo',
        'time': 'deva_aeb_msgs/SFDiagInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.framenum = kwargs.get('framenum', int())
        from deva_aeb_msgs.msg import SFDiagInfo
        self.weather = kwargs.get('weather', SFDiagInfo())
        from deva_aeb_msgs.msg import SFDiagInfo
        self.scene = kwargs.get('scene', SFDiagInfo())
        from deva_aeb_msgs.msg import SFDiagInfo
        self.rdsuf = kwargs.get('rdsuf', SFDiagInfo())
        from deva_aeb_msgs.msg import SFDiagInfo
        self.light = kwargs.get('light', SFDiagInfo())
        from deva_aeb_msgs.msg import SFDiagInfo
        self.time = kwargs.get('time', SFDiagInfo())

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
        if self.timestamp != other.timestamp:
            return False
        if self.framenum != other.framenum:
            return False
        if self.weather != other.weather:
            return False
        if self.scene != other.scene:
            return False
        if self.rdsuf != other.rdsuf:
            return False
        if self.light != other.light:
            return False
        if self.time != other.time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def framenum(self):
        """Message field 'framenum'."""
        return self._framenum

    @framenum.setter
    def framenum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framenum' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'framenum' field must be an unsigned integer in [0, 4294967295]"
        self._framenum = value

    @builtins.property
    def weather(self):
        """Message field 'weather'."""
        return self._weather

    @weather.setter
    def weather(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagInfo
            assert \
                isinstance(value, SFDiagInfo), \
                "The 'weather' field must be a sub message of type 'SFDiagInfo'"
        self._weather = value

    @builtins.property
    def scene(self):
        """Message field 'scene'."""
        return self._scene

    @scene.setter
    def scene(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagInfo
            assert \
                isinstance(value, SFDiagInfo), \
                "The 'scene' field must be a sub message of type 'SFDiagInfo'"
        self._scene = value

    @builtins.property
    def rdsuf(self):
        """Message field 'rdsuf'."""
        return self._rdsuf

    @rdsuf.setter
    def rdsuf(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagInfo
            assert \
                isinstance(value, SFDiagInfo), \
                "The 'rdsuf' field must be a sub message of type 'SFDiagInfo'"
        self._rdsuf = value

    @builtins.property
    def light(self):
        """Message field 'light'."""
        return self._light

    @light.setter
    def light(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagInfo
            assert \
                isinstance(value, SFDiagInfo), \
                "The 'light' field must be a sub message of type 'SFDiagInfo'"
        self._light = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagInfo
            assert \
                isinstance(value, SFDiagInfo), \
                "The 'time' field must be a sub message of type 'SFDiagInfo'"
        self._time = value
