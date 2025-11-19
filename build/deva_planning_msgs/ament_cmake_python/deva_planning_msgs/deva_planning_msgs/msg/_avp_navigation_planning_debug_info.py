# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/AvpNavigationPlanningDebugInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvpNavigationPlanningDebugInfo(type):
    """Metaclass of message 'AvpNavigationPlanningDebugInfo'."""

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
            module = import_type_support('deva_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs.msg.AvpNavigationPlanningDebugInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avp_navigation_planning_debug_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avp_navigation_planning_debug_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avp_navigation_planning_debug_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avp_navigation_planning_debug_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avp_navigation_planning_debug_info

            from deva_planning_msgs.msg import AvpDebugInfo
            if AvpDebugInfo.__class__._TYPE_SUPPORT is None:
                AvpDebugInfo.__class__.__import_type_support__()

            from deva_planning_msgs.msg import NavOpenspaceDebugInfo
            if NavOpenspaceDebugInfo.__class__._TYPE_SUPPORT is None:
                NavOpenspaceDebugInfo.__class__.__import_type_support__()

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


class AvpNavigationPlanningDebugInfo(metaclass=Metaclass_AvpNavigationPlanningDebugInfo):
    """Message class 'AvpNavigationPlanningDebugInfo'."""

    __slots__ = [
        '_header',
        '_planning_header',
        '_prediction_header',
        '_localization_header',
        '_chassis_header',
        '_avp_local_map_header',
        '_perception_map_header',
        '_avp_debug_info',
        '_nav_openspace_debug_info',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'planning_header': 'std_msgs/Header',
        'prediction_header': 'std_msgs/Header',
        'localization_header': 'std_msgs/Header',
        'chassis_header': 'std_msgs/Header',
        'avp_local_map_header': 'std_msgs/Header',
        'perception_map_header': 'std_msgs/Header',
        'avp_debug_info': 'deva_planning_msgs/AvpDebugInfo',
        'nav_openspace_debug_info': 'deva_planning_msgs/NavOpenspaceDebugInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'AvpDebugInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'NavOpenspaceDebugInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from std_msgs.msg import Header
        self.planning_header = kwargs.get('planning_header', Header())
        from std_msgs.msg import Header
        self.prediction_header = kwargs.get('prediction_header', Header())
        from std_msgs.msg import Header
        self.localization_header = kwargs.get('localization_header', Header())
        from std_msgs.msg import Header
        self.chassis_header = kwargs.get('chassis_header', Header())
        from std_msgs.msg import Header
        self.avp_local_map_header = kwargs.get('avp_local_map_header', Header())
        from std_msgs.msg import Header
        self.perception_map_header = kwargs.get('perception_map_header', Header())
        from deva_planning_msgs.msg import AvpDebugInfo
        self.avp_debug_info = kwargs.get('avp_debug_info', AvpDebugInfo())
        from deva_planning_msgs.msg import NavOpenspaceDebugInfo
        self.nav_openspace_debug_info = kwargs.get('nav_openspace_debug_info', NavOpenspaceDebugInfo())

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
        if self.planning_header != other.planning_header:
            return False
        if self.prediction_header != other.prediction_header:
            return False
        if self.localization_header != other.localization_header:
            return False
        if self.chassis_header != other.chassis_header:
            return False
        if self.avp_local_map_header != other.avp_local_map_header:
            return False
        if self.perception_map_header != other.perception_map_header:
            return False
        if self.avp_debug_info != other.avp_debug_info:
            return False
        if self.nav_openspace_debug_info != other.nav_openspace_debug_info:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def planning_header(self):
        """Message field 'planning_header'."""
        return self._planning_header

    @planning_header.setter
    def planning_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'planning_header' field must be a sub message of type 'Header'"
        self._planning_header = value

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
    def avp_local_map_header(self):
        """Message field 'avp_local_map_header'."""
        return self._avp_local_map_header

    @avp_local_map_header.setter
    def avp_local_map_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'avp_local_map_header' field must be a sub message of type 'Header'"
        self._avp_local_map_header = value

    @builtins.property
    def perception_map_header(self):
        """Message field 'perception_map_header'."""
        return self._perception_map_header

    @perception_map_header.setter
    def perception_map_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'perception_map_header' field must be a sub message of type 'Header'"
        self._perception_map_header = value

    @builtins.property
    def avp_debug_info(self):
        """Message field 'avp_debug_info'."""
        return self._avp_debug_info

    @avp_debug_info.setter
    def avp_debug_info(self, value):
        if __debug__:
            from deva_planning_msgs.msg import AvpDebugInfo
            assert \
                isinstance(value, AvpDebugInfo), \
                "The 'avp_debug_info' field must be a sub message of type 'AvpDebugInfo'"
        self._avp_debug_info = value

    @builtins.property
    def nav_openspace_debug_info(self):
        """Message field 'nav_openspace_debug_info'."""
        return self._nav_openspace_debug_info

    @nav_openspace_debug_info.setter
    def nav_openspace_debug_info(self, value):
        if __debug__:
            from deva_planning_msgs.msg import NavOpenspaceDebugInfo
            assert \
                isinstance(value, NavOpenspaceDebugInfo), \
                "The 'nav_openspace_debug_info' field must be a sub message of type 'NavOpenspaceDebugInfo'"
        self._nav_openspace_debug_info = value
