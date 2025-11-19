# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/SensorTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorTime(type):
    """Metaclass of message 'SensorTime'."""

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
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.SensorTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_time

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorTime(metaclass=Metaclass_SensorTime):
    """Message class 'SensorTime'."""

    __slots__ = [
        '_localization_header',
        '_prediction_header',
        '_decision_header',
        '_chassis_header',
        '_traffic_light_header',
        '_traffic_pole_header',
        '_cone_header',
        '_map_header',
        '_padmsg_header',
        '_pull_over_header',
        '_routing_header',
        '_start_planning_header',
        '_finish_planning_header',
        '_navigator_start_header',
        '_navigator_end_header',
    ]

    _fields_and_field_types = {
        'localization_header': 'std_msgs/Header',
        'prediction_header': 'std_msgs/Header',
        'decision_header': 'std_msgs/Header',
        'chassis_header': 'std_msgs/Header',
        'traffic_light_header': 'std_msgs/Header',
        'traffic_pole_header': 'std_msgs/Header',
        'cone_header': 'std_msgs/Header',
        'map_header': 'std_msgs/Header',
        'padmsg_header': 'std_msgs/Header',
        'pull_over_header': 'std_msgs/Header',
        'routing_header': 'std_msgs/Header',
        'start_planning_header': 'std_msgs/Header',
        'finish_planning_header': 'std_msgs/Header',
        'navigator_start_header': 'std_msgs/Header',
        'navigator_end_header': 'std_msgs/Header',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.localization_header = kwargs.get('localization_header', Header())
        from std_msgs.msg import Header
        self.prediction_header = kwargs.get('prediction_header', Header())
        from std_msgs.msg import Header
        self.decision_header = kwargs.get('decision_header', Header())
        from std_msgs.msg import Header
        self.chassis_header = kwargs.get('chassis_header', Header())
        from std_msgs.msg import Header
        self.traffic_light_header = kwargs.get('traffic_light_header', Header())
        from std_msgs.msg import Header
        self.traffic_pole_header = kwargs.get('traffic_pole_header', Header())
        from std_msgs.msg import Header
        self.cone_header = kwargs.get('cone_header', Header())
        from std_msgs.msg import Header
        self.map_header = kwargs.get('map_header', Header())
        from std_msgs.msg import Header
        self.padmsg_header = kwargs.get('padmsg_header', Header())
        from std_msgs.msg import Header
        self.pull_over_header = kwargs.get('pull_over_header', Header())
        from std_msgs.msg import Header
        self.routing_header = kwargs.get('routing_header', Header())
        from std_msgs.msg import Header
        self.start_planning_header = kwargs.get('start_planning_header', Header())
        from std_msgs.msg import Header
        self.finish_planning_header = kwargs.get('finish_planning_header', Header())
        from std_msgs.msg import Header
        self.navigator_start_header = kwargs.get('navigator_start_header', Header())
        from std_msgs.msg import Header
        self.navigator_end_header = kwargs.get('navigator_end_header', Header())

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
        if self.localization_header != other.localization_header:
            return False
        if self.prediction_header != other.prediction_header:
            return False
        if self.decision_header != other.decision_header:
            return False
        if self.chassis_header != other.chassis_header:
            return False
        if self.traffic_light_header != other.traffic_light_header:
            return False
        if self.traffic_pole_header != other.traffic_pole_header:
            return False
        if self.cone_header != other.cone_header:
            return False
        if self.map_header != other.map_header:
            return False
        if self.padmsg_header != other.padmsg_header:
            return False
        if self.pull_over_header != other.pull_over_header:
            return False
        if self.routing_header != other.routing_header:
            return False
        if self.start_planning_header != other.start_planning_header:
            return False
        if self.finish_planning_header != other.finish_planning_header:
            return False
        if self.navigator_start_header != other.navigator_start_header:
            return False
        if self.navigator_end_header != other.navigator_end_header:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def localization_header(self):
        """Message field 'localization_header'."""
        return self._localization_header

    @localization_header.setter
    def localization_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'localization_header' field must be a sub message of type 'Header'"
        self._localization_header = value

    @builtins.property
    def prediction_header(self):
        """Message field 'prediction_header'."""
        return self._prediction_header

    @prediction_header.setter
    def prediction_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'prediction_header' field must be a sub message of type 'Header'"
        self._prediction_header = value

    @builtins.property
    def decision_header(self):
        """Message field 'decision_header'."""
        return self._decision_header

    @decision_header.setter
    def decision_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'decision_header' field must be a sub message of type 'Header'"
        self._decision_header = value

    @builtins.property
    def chassis_header(self):
        """Message field 'chassis_header'."""
        return self._chassis_header

    @chassis_header.setter
    def chassis_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'chassis_header' field must be a sub message of type 'Header'"
        self._chassis_header = value

    @builtins.property
    def traffic_light_header(self):
        """Message field 'traffic_light_header'."""
        return self._traffic_light_header

    @traffic_light_header.setter
    def traffic_light_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'traffic_light_header' field must be a sub message of type 'Header'"
        self._traffic_light_header = value

    @builtins.property
    def traffic_pole_header(self):
        """Message field 'traffic_pole_header'."""
        return self._traffic_pole_header

    @traffic_pole_header.setter
    def traffic_pole_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'traffic_pole_header' field must be a sub message of type 'Header'"
        self._traffic_pole_header = value

    @builtins.property
    def cone_header(self):
        """Message field 'cone_header'."""
        return self._cone_header

    @cone_header.setter
    def cone_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'cone_header' field must be a sub message of type 'Header'"
        self._cone_header = value

    @builtins.property
    def map_header(self):
        """Message field 'map_header'."""
        return self._map_header

    @map_header.setter
    def map_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'map_header' field must be a sub message of type 'Header'"
        self._map_header = value

    @builtins.property
    def padmsg_header(self):
        """Message field 'padmsg_header'."""
        return self._padmsg_header

    @padmsg_header.setter
    def padmsg_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'padmsg_header' field must be a sub message of type 'Header'"
        self._padmsg_header = value

    @builtins.property
    def pull_over_header(self):
        """Message field 'pull_over_header'."""
        return self._pull_over_header

    @pull_over_header.setter
    def pull_over_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'pull_over_header' field must be a sub message of type 'Header'"
        self._pull_over_header = value

    @builtins.property
    def routing_header(self):
        """Message field 'routing_header'."""
        return self._routing_header

    @routing_header.setter
    def routing_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'routing_header' field must be a sub message of type 'Header'"
        self._routing_header = value

    @builtins.property
    def start_planning_header(self):
        """Message field 'start_planning_header'."""
        return self._start_planning_header

    @start_planning_header.setter
    def start_planning_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'start_planning_header' field must be a sub message of type 'Header'"
        self._start_planning_header = value

    @builtins.property
    def finish_planning_header(self):
        """Message field 'finish_planning_header'."""
        return self._finish_planning_header

    @finish_planning_header.setter
    def finish_planning_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'finish_planning_header' field must be a sub message of type 'Header'"
        self._finish_planning_header = value

    @builtins.property
    def navigator_start_header(self):
        """Message field 'navigator_start_header'."""
        return self._navigator_start_header

    @navigator_start_header.setter
    def navigator_start_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'navigator_start_header' field must be a sub message of type 'Header'"
        self._navigator_start_header = value

    @builtins.property
    def navigator_end_header(self):
        """Message field 'navigator_end_header'."""
        return self._navigator_end_header

    @navigator_end_header.setter
    def navigator_end_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'navigator_end_header' field must be a sub message of type 'Header'"
        self._navigator_end_header = value
