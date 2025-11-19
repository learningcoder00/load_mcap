# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/VehicleStatusCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatusCommand(type):
    """Metaclass of message 'VehicleStatusCommand'."""

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
            module = import_type_support('deva_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_control_msgs.msg.VehicleStatusCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status_command

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROTOCOL_VERSION__DEFAULT': '2.0',
            'USE_GEAR_CMD__DEFAULT': False,
            'USE_EPB_CMD__DEFAULT': False,
            'USE_TURN_LIGHT_CMD__DEFAULT': False,
            'USE_WIPER_CMD__DEFAULT': False,
            'USE_BYWIRE_ENABLE_CMD__DEFAULT': False,
            'USE_PARK_CMD__DEFAULT': False,
        }

    @property
    def PROTOCOL_VERSION__DEFAULT(cls):
        """Return default value for message field 'protocol_version'."""
        return '2.0'

    @property
    def USE_GEAR_CMD__DEFAULT(cls):
        """Return default value for message field 'use_gear_cmd'."""
        return False

    @property
    def USE_EPB_CMD__DEFAULT(cls):
        """Return default value for message field 'use_epb_cmd'."""
        return False

    @property
    def USE_TURN_LIGHT_CMD__DEFAULT(cls):
        """Return default value for message field 'use_turn_light_cmd'."""
        return False

    @property
    def USE_WIPER_CMD__DEFAULT(cls):
        """Return default value for message field 'use_wiper_cmd'."""
        return False

    @property
    def USE_BYWIRE_ENABLE_CMD__DEFAULT(cls):
        """Return default value for message field 'use_bywire_enable_cmd'."""
        return False

    @property
    def USE_PARK_CMD__DEFAULT(cls):
        """Return default value for message field 'use_park_cmd'."""
        return False


class VehicleStatusCommand(metaclass=Metaclass_VehicleStatusCommand):
    """Message class 'VehicleStatusCommand'."""

    __slots__ = [
        '_header',
        '_protocol_version',
        '_node_name',
        '_use_gear_cmd',
        '_gear_en',
        '_gear_cmd_val',
        '_use_epb_cmd',
        '_epb_en',
        '_epb_cmd_val',
        '_use_turn_light_cmd',
        '_turn_light_en',
        '_turn_light_cmd',
        '_use_wiper_cmd',
        '_wiper_en',
        '_wiper_cmd',
        '_use_bywire_enable_cmd',
        '_lateral_en',
        '_longitudinal_en',
        '_use_park_cmd',
        '_park_action',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'protocol_version': 'string',
        'node_name': 'string',
        'use_gear_cmd': 'boolean',
        'gear_en': 'boolean',
        'gear_cmd_val': 'int8',
        'use_epb_cmd': 'boolean',
        'epb_en': 'boolean',
        'epb_cmd_val': 'int8',
        'use_turn_light_cmd': 'boolean',
        'turn_light_en': 'boolean',
        'turn_light_cmd': 'uint8',
        'use_wiper_cmd': 'boolean',
        'wiper_en': 'boolean',
        'wiper_cmd': 'boolean',
        'use_bywire_enable_cmd': 'boolean',
        'lateral_en': 'boolean',
        'longitudinal_en': 'boolean',
        'use_park_cmd': 'boolean',
        'park_action': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.protocol_version = kwargs.get(
            'protocol_version', VehicleStatusCommand.PROTOCOL_VERSION__DEFAULT)
        self.node_name = kwargs.get('node_name', str())
        self.use_gear_cmd = kwargs.get(
            'use_gear_cmd', VehicleStatusCommand.USE_GEAR_CMD__DEFAULT)
        self.gear_en = kwargs.get('gear_en', bool())
        self.gear_cmd_val = kwargs.get('gear_cmd_val', int())
        self.use_epb_cmd = kwargs.get(
            'use_epb_cmd', VehicleStatusCommand.USE_EPB_CMD__DEFAULT)
        self.epb_en = kwargs.get('epb_en', bool())
        self.epb_cmd_val = kwargs.get('epb_cmd_val', int())
        self.use_turn_light_cmd = kwargs.get(
            'use_turn_light_cmd', VehicleStatusCommand.USE_TURN_LIGHT_CMD__DEFAULT)
        self.turn_light_en = kwargs.get('turn_light_en', bool())
        self.turn_light_cmd = kwargs.get('turn_light_cmd', int())
        self.use_wiper_cmd = kwargs.get(
            'use_wiper_cmd', VehicleStatusCommand.USE_WIPER_CMD__DEFAULT)
        self.wiper_en = kwargs.get('wiper_en', bool())
        self.wiper_cmd = kwargs.get('wiper_cmd', bool())
        self.use_bywire_enable_cmd = kwargs.get(
            'use_bywire_enable_cmd', VehicleStatusCommand.USE_BYWIRE_ENABLE_CMD__DEFAULT)
        self.lateral_en = kwargs.get('lateral_en', bool())
        self.longitudinal_en = kwargs.get('longitudinal_en', bool())
        self.use_park_cmd = kwargs.get(
            'use_park_cmd', VehicleStatusCommand.USE_PARK_CMD__DEFAULT)
        self.park_action = kwargs.get('park_action', int())

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
        if self.protocol_version != other.protocol_version:
            return False
        if self.node_name != other.node_name:
            return False
        if self.use_gear_cmd != other.use_gear_cmd:
            return False
        if self.gear_en != other.gear_en:
            return False
        if self.gear_cmd_val != other.gear_cmd_val:
            return False
        if self.use_epb_cmd != other.use_epb_cmd:
            return False
        if self.epb_en != other.epb_en:
            return False
        if self.epb_cmd_val != other.epb_cmd_val:
            return False
        if self.use_turn_light_cmd != other.use_turn_light_cmd:
            return False
        if self.turn_light_en != other.turn_light_en:
            return False
        if self.turn_light_cmd != other.turn_light_cmd:
            return False
        if self.use_wiper_cmd != other.use_wiper_cmd:
            return False
        if self.wiper_en != other.wiper_en:
            return False
        if self.wiper_cmd != other.wiper_cmd:
            return False
        if self.use_bywire_enable_cmd != other.use_bywire_enable_cmd:
            return False
        if self.lateral_en != other.lateral_en:
            return False
        if self.longitudinal_en != other.longitudinal_en:
            return False
        if self.use_park_cmd != other.use_park_cmd:
            return False
        if self.park_action != other.park_action:
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
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'protocol_version' field must be of type 'str'"
        self._protocol_version = value

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def use_gear_cmd(self):
        """Message field 'use_gear_cmd'."""
        return self._use_gear_cmd

    @use_gear_cmd.setter
    def use_gear_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_gear_cmd' field must be of type 'bool'"
        self._use_gear_cmd = value

    @builtins.property
    def gear_en(self):
        """Message field 'gear_en'."""
        return self._gear_en

    @gear_en.setter
    def gear_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_en' field must be of type 'bool'"
        self._gear_en = value

    @builtins.property
    def gear_cmd_val(self):
        """Message field 'gear_cmd_val'."""
        return self._gear_cmd_val

    @gear_cmd_val.setter
    def gear_cmd_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_cmd_val' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gear_cmd_val' field must be an integer in [-128, 127]"
        self._gear_cmd_val = value

    @builtins.property
    def use_epb_cmd(self):
        """Message field 'use_epb_cmd'."""
        return self._use_epb_cmd

    @use_epb_cmd.setter
    def use_epb_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_epb_cmd' field must be of type 'bool'"
        self._use_epb_cmd = value

    @builtins.property
    def epb_en(self):
        """Message field 'epb_en'."""
        return self._epb_en

    @epb_en.setter
    def epb_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'epb_en' field must be of type 'bool'"
        self._epb_en = value

    @builtins.property
    def epb_cmd_val(self):
        """Message field 'epb_cmd_val'."""
        return self._epb_cmd_val

    @epb_cmd_val.setter
    def epb_cmd_val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_cmd_val' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'epb_cmd_val' field must be an integer in [-128, 127]"
        self._epb_cmd_val = value

    @builtins.property
    def use_turn_light_cmd(self):
        """Message field 'use_turn_light_cmd'."""
        return self._use_turn_light_cmd

    @use_turn_light_cmd.setter
    def use_turn_light_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_turn_light_cmd' field must be of type 'bool'"
        self._use_turn_light_cmd = value

    @builtins.property
    def turn_light_en(self):
        """Message field 'turn_light_en'."""
        return self._turn_light_en

    @turn_light_en.setter
    def turn_light_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_light_en' field must be of type 'bool'"
        self._turn_light_en = value

    @builtins.property
    def turn_light_cmd(self):
        """Message field 'turn_light_cmd'."""
        return self._turn_light_cmd

    @turn_light_cmd.setter
    def turn_light_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_light_cmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_light_cmd' field must be an unsigned integer in [0, 255]"
        self._turn_light_cmd = value

    @builtins.property
    def use_wiper_cmd(self):
        """Message field 'use_wiper_cmd'."""
        return self._use_wiper_cmd

    @use_wiper_cmd.setter
    def use_wiper_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_wiper_cmd' field must be of type 'bool'"
        self._use_wiper_cmd = value

    @builtins.property
    def wiper_en(self):
        """Message field 'wiper_en'."""
        return self._wiper_en

    @wiper_en.setter
    def wiper_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wiper_en' field must be of type 'bool'"
        self._wiper_en = value

    @builtins.property
    def wiper_cmd(self):
        """Message field 'wiper_cmd'."""
        return self._wiper_cmd

    @wiper_cmd.setter
    def wiper_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wiper_cmd' field must be of type 'bool'"
        self._wiper_cmd = value

    @builtins.property
    def use_bywire_enable_cmd(self):
        """Message field 'use_bywire_enable_cmd'."""
        return self._use_bywire_enable_cmd

    @use_bywire_enable_cmd.setter
    def use_bywire_enable_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_bywire_enable_cmd' field must be of type 'bool'"
        self._use_bywire_enable_cmd = value

    @builtins.property
    def lateral_en(self):
        """Message field 'lateral_en'."""
        return self._lateral_en

    @lateral_en.setter
    def lateral_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lateral_en' field must be of type 'bool'"
        self._lateral_en = value

    @builtins.property
    def longitudinal_en(self):
        """Message field 'longitudinal_en'."""
        return self._longitudinal_en

    @longitudinal_en.setter
    def longitudinal_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longitudinal_en' field must be of type 'bool'"
        self._longitudinal_en = value

    @builtins.property
    def use_park_cmd(self):
        """Message field 'use_park_cmd'."""
        return self._use_park_cmd

    @use_park_cmd.setter
    def use_park_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_park_cmd' field must be of type 'bool'"
        self._use_park_cmd = value

    @builtins.property
    def park_action(self):
        """Message field 'park_action'."""
        return self._park_action

    @park_action.setter
    def park_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'park_action' field must be an unsigned integer in [0, 255]"
        self._park_action = value
