# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/DbaStateMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DbaStateMsg(type):
    """Metaclass of message 'DbaStateMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMMAND_NONE': 0,
        'SEARCH_SLOT': 1,
        'PARK_IN': 2,
        'PARK_OUT': 3,
        'CRUISE': 4,
        'QUIT': 5,
        'DIRECTION_NONE': 0,
        'LEFT': 1,
        'LEFT_FRONT': 2,
        'FRONT': 3,
        'RIGHT_FRONT': 4,
        'RIGHT': 5,
        'RIGHT_LEFT': 6,
        'LEFT_RIGHT': 7,
        'APA': 1,
        'HPP': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.DbaStateMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dba_state_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dba_state_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dba_state_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dba_state_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dba_state_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMMAND_NONE': cls.__constants['COMMAND_NONE'],
            'SEARCH_SLOT': cls.__constants['SEARCH_SLOT'],
            'PARK_IN': cls.__constants['PARK_IN'],
            'PARK_OUT': cls.__constants['PARK_OUT'],
            'CRUISE': cls.__constants['CRUISE'],
            'QUIT': cls.__constants['QUIT'],
            'DIRECTION_NONE': cls.__constants['DIRECTION_NONE'],
            'LEFT': cls.__constants['LEFT'],
            'LEFT_FRONT': cls.__constants['LEFT_FRONT'],
            'FRONT': cls.__constants['FRONT'],
            'RIGHT_FRONT': cls.__constants['RIGHT_FRONT'],
            'RIGHT': cls.__constants['RIGHT'],
            'RIGHT_LEFT': cls.__constants['RIGHT_LEFT'],
            'LEFT_RIGHT': cls.__constants['LEFT_RIGHT'],
            'APA': cls.__constants['APA'],
            'HPP': cls.__constants['HPP'],
        }

    @property
    def COMMAND_NONE(self):
        """Message constant 'COMMAND_NONE'."""
        return Metaclass_DbaStateMsg.__constants['COMMAND_NONE']

    @property
    def SEARCH_SLOT(self):
        """Message constant 'SEARCH_SLOT'."""
        return Metaclass_DbaStateMsg.__constants['SEARCH_SLOT']

    @property
    def PARK_IN(self):
        """Message constant 'PARK_IN'."""
        return Metaclass_DbaStateMsg.__constants['PARK_IN']

    @property
    def PARK_OUT(self):
        """Message constant 'PARK_OUT'."""
        return Metaclass_DbaStateMsg.__constants['PARK_OUT']

    @property
    def CRUISE(self):
        """Message constant 'CRUISE'."""
        return Metaclass_DbaStateMsg.__constants['CRUISE']

    @property
    def QUIT(self):
        """Message constant 'QUIT'."""
        return Metaclass_DbaStateMsg.__constants['QUIT']

    @property
    def DIRECTION_NONE(self):
        """Message constant 'DIRECTION_NONE'."""
        return Metaclass_DbaStateMsg.__constants['DIRECTION_NONE']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_DbaStateMsg.__constants['LEFT']

    @property
    def LEFT_FRONT(self):
        """Message constant 'LEFT_FRONT'."""
        return Metaclass_DbaStateMsg.__constants['LEFT_FRONT']

    @property
    def FRONT(self):
        """Message constant 'FRONT'."""
        return Metaclass_DbaStateMsg.__constants['FRONT']

    @property
    def RIGHT_FRONT(self):
        """Message constant 'RIGHT_FRONT'."""
        return Metaclass_DbaStateMsg.__constants['RIGHT_FRONT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_DbaStateMsg.__constants['RIGHT']

    @property
    def RIGHT_LEFT(self):
        """Message constant 'RIGHT_LEFT'."""
        return Metaclass_DbaStateMsg.__constants['RIGHT_LEFT']

    @property
    def LEFT_RIGHT(self):
        """Message constant 'LEFT_RIGHT'."""
        return Metaclass_DbaStateMsg.__constants['LEFT_RIGHT']

    @property
    def APA(self):
        """Message constant 'APA'."""
        return Metaclass_DbaStateMsg.__constants['APA']

    @property
    def HPP(self):
        """Message constant 'HPP'."""
        return Metaclass_DbaStateMsg.__constants['HPP']


class DbaStateMsg(metaclass=Metaclass_DbaStateMsg):
    """
    Message class 'DbaStateMsg'.

    Constants:
      COMMAND_NONE
      SEARCH_SLOT
      PARK_IN
      PARK_OUT
      CRUISE
      QUIT
      DIRECTION_NONE
      LEFT
      LEFT_FRONT
      FRONT
      RIGHT_FRONT
      RIGHT
      RIGHT_LEFT
      LEFT_RIGHT
      APA
      HPP
    """

    __slots__ = [
        '_publish_timestamp',
        '_epb_state',
        '_speed',
        '_acc_enable',
        '_brake_enable',
        '_door_open_state',
        '_turn_lamp_lever_state',
        '_late_enable',
        '_late_driveover',
        '_longit_enable',
        '_longit_driveover',
        '_gear',
        '_belt',
        '_command',
        '_save_map',
        '_slot_id',
        '_park_out_direction',
        '_run_mode',
    ]

    _fields_and_field_types = {
        'publish_timestamp': 'double',
        'epb_state': 'uint8',
        'speed': 'float',
        'acc_enable': 'boolean',
        'brake_enable': 'boolean',
        'door_open_state': 'boolean[4]',
        'turn_lamp_lever_state': 'uint8',
        'late_enable': 'boolean',
        'late_driveover': 'boolean',
        'longit_enable': 'boolean',
        'longit_driveover': 'boolean',
        'gear': 'uint8',
        'belt': 'boolean[5]',
        'command': 'uint8',
        'save_map': 'boolean',
        'slot_id': 'uint64',
        'park_out_direction': 'uint8',
        'run_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.publish_timestamp = kwargs.get('publish_timestamp', float())
        self.epb_state = kwargs.get('epb_state', int())
        self.speed = kwargs.get('speed', float())
        self.acc_enable = kwargs.get('acc_enable', bool())
        self.brake_enable = kwargs.get('brake_enable', bool())
        self.door_open_state = kwargs.get(
            'door_open_state',
            [bool() for x in range(4)]
        )
        self.turn_lamp_lever_state = kwargs.get('turn_lamp_lever_state', int())
        self.late_enable = kwargs.get('late_enable', bool())
        self.late_driveover = kwargs.get('late_driveover', bool())
        self.longit_enable = kwargs.get('longit_enable', bool())
        self.longit_driveover = kwargs.get('longit_driveover', bool())
        self.gear = kwargs.get('gear', int())
        self.belt = kwargs.get(
            'belt',
            [bool() for x in range(5)]
        )
        self.command = kwargs.get('command', int())
        self.save_map = kwargs.get('save_map', bool())
        self.slot_id = kwargs.get('slot_id', int())
        self.park_out_direction = kwargs.get('park_out_direction', int())
        self.run_mode = kwargs.get('run_mode', int())

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
        if self.publish_timestamp != other.publish_timestamp:
            return False
        if self.epb_state != other.epb_state:
            return False
        if self.speed != other.speed:
            return False
        if self.acc_enable != other.acc_enable:
            return False
        if self.brake_enable != other.brake_enable:
            return False
        if self.door_open_state != other.door_open_state:
            return False
        if self.turn_lamp_lever_state != other.turn_lamp_lever_state:
            return False
        if self.late_enable != other.late_enable:
            return False
        if self.late_driveover != other.late_driveover:
            return False
        if self.longit_enable != other.longit_enable:
            return False
        if self.longit_driveover != other.longit_driveover:
            return False
        if self.gear != other.gear:
            return False
        if self.belt != other.belt:
            return False
        if self.command != other.command:
            return False
        if self.save_map != other.save_map:
            return False
        if self.slot_id != other.slot_id:
            return False
        if self.park_out_direction != other.park_out_direction:
            return False
        if self.run_mode != other.run_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def publish_timestamp(self):
        """Message field 'publish_timestamp'."""
        return self._publish_timestamp

    @publish_timestamp.setter
    def publish_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'publish_timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'publish_timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._publish_timestamp = value

    @builtins.property
    def epb_state(self):
        """Message field 'epb_state'."""
        return self._epb_state

    @epb_state.setter
    def epb_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'epb_state' field must be an unsigned integer in [0, 255]"
        self._epb_state = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def acc_enable(self):
        """Message field 'acc_enable'."""
        return self._acc_enable

    @acc_enable.setter
    def acc_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acc_enable' field must be of type 'bool'"
        self._acc_enable = value

    @builtins.property
    def brake_enable(self):
        """Message field 'brake_enable'."""
        return self._brake_enable

    @brake_enable.setter
    def brake_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_enable' field must be of type 'bool'"
        self._brake_enable = value

    @builtins.property
    def door_open_state(self):
        """Message field 'door_open_state'."""
        return self._door_open_state

    @door_open_state.setter
    def door_open_state(self, value):
        if __debug__:
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
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'door_open_state' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._door_open_state = value

    @builtins.property
    def turn_lamp_lever_state(self):
        """Message field 'turn_lamp_lever_state'."""
        return self._turn_lamp_lever_state

    @turn_lamp_lever_state.setter
    def turn_lamp_lever_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_lamp_lever_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_lamp_lever_state' field must be an unsigned integer in [0, 255]"
        self._turn_lamp_lever_state = value

    @builtins.property
    def late_enable(self):
        """Message field 'late_enable'."""
        return self._late_enable

    @late_enable.setter
    def late_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'late_enable' field must be of type 'bool'"
        self._late_enable = value

    @builtins.property
    def late_driveover(self):
        """Message field 'late_driveover'."""
        return self._late_driveover

    @late_driveover.setter
    def late_driveover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'late_driveover' field must be of type 'bool'"
        self._late_driveover = value

    @builtins.property
    def longit_enable(self):
        """Message field 'longit_enable'."""
        return self._longit_enable

    @longit_enable.setter
    def longit_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_enable' field must be of type 'bool'"
        self._longit_enable = value

    @builtins.property
    def longit_driveover(self):
        """Message field 'longit_driveover'."""
        return self._longit_driveover

    @longit_driveover.setter
    def longit_driveover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_driveover' field must be of type 'bool'"
        self._longit_driveover = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value

    @builtins.property
    def belt(self):
        """Message field 'belt'."""
        return self._belt

    @belt.setter
    def belt(self, value):
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'belt' field must be a set or sequence with length 5 and each value of type 'bool'"
        self._belt = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def save_map(self):
        """Message field 'save_map'."""
        return self._save_map

    @save_map.setter
    def save_map(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save_map' field must be of type 'bool'"
        self._save_map = value

    @builtins.property
    def slot_id(self):
        """Message field 'slot_id'."""
        return self._slot_id

    @slot_id.setter
    def slot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'slot_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._slot_id = value

    @builtins.property
    def park_out_direction(self):
        """Message field 'park_out_direction'."""
        return self._park_out_direction

    @park_out_direction.setter
    def park_out_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'park_out_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'park_out_direction' field must be an unsigned integer in [0, 255]"
        self._park_out_direction = value

    @builtins.property
    def run_mode(self):
        """Message field 'run_mode'."""
        return self._run_mode

    @run_mode.setter
    def run_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'run_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'run_mode' field must be an unsigned integer in [0, 255]"
        self._run_mode = value
