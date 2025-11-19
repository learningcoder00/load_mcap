# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/LaneAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneAction(type):
    """Metaclass of message 'LaneAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LANE_ACTION_NULL': 255,
        'LANE_ACTION_AHEAD': 0,
        'LANE_ACTION_LEFT': 1,
        'LANE_ACTION_AHEAD_LEFT': 2,
        'LANE_ACTION_RIGHT': 3,
        'LANE_ACTION_AHEAD_RIGHT': 4,
        'LANE_ACTION_LU_TURN': 5,
        'LANE_ACTION_LEFT_RIGHT': 6,
        'LANE_ACTION_AHEAD_LEFT_RIGHT': 7,
        'LANE_ACTION_RU_TURN': 8,
        'LANE_ACTION_AHEAD_LU_TURN': 9,
        'LANE_ACTION_AHEAD_RU_TURN': 10,
        'LANE_ACTION_LEFT_LU_TURN': 11,
        'LANE_ACTION_RIGHT_RU_TURN': 12,
        'LANE_ACTION_AHEAD_LEFT_LU_TURN': 16,
        'LANE_ACTION_RIGHT_LU_TURN': 17,
        'LANE_ACTION_LEFT_RIGHT_LU_TURN': 18,
        'LANE_ACTION_AHEAD_RIGHT_LU_TURN': 19,
        'LANE_ACTION_LEFT_RU_TURN': 20,
        'LANE_ACTION_BUS': 21,
        'LANE_ACTION_EMPTY': 22,
        'LANE_ACTION_VARIABLE': 23,
        'LANE_ACTION_DEDICATED': 24,
        'LANE_ACTION_TIDAL': 25,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.LaneAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_action

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LANE_ACTION_NULL': cls.__constants['LANE_ACTION_NULL'],
            'LANE_ACTION_AHEAD': cls.__constants['LANE_ACTION_AHEAD'],
            'LANE_ACTION_LEFT': cls.__constants['LANE_ACTION_LEFT'],
            'LANE_ACTION_AHEAD_LEFT': cls.__constants['LANE_ACTION_AHEAD_LEFT'],
            'LANE_ACTION_RIGHT': cls.__constants['LANE_ACTION_RIGHT'],
            'LANE_ACTION_AHEAD_RIGHT': cls.__constants['LANE_ACTION_AHEAD_RIGHT'],
            'LANE_ACTION_LU_TURN': cls.__constants['LANE_ACTION_LU_TURN'],
            'LANE_ACTION_LEFT_RIGHT': cls.__constants['LANE_ACTION_LEFT_RIGHT'],
            'LANE_ACTION_AHEAD_LEFT_RIGHT': cls.__constants['LANE_ACTION_AHEAD_LEFT_RIGHT'],
            'LANE_ACTION_RU_TURN': cls.__constants['LANE_ACTION_RU_TURN'],
            'LANE_ACTION_AHEAD_LU_TURN': cls.__constants['LANE_ACTION_AHEAD_LU_TURN'],
            'LANE_ACTION_AHEAD_RU_TURN': cls.__constants['LANE_ACTION_AHEAD_RU_TURN'],
            'LANE_ACTION_LEFT_LU_TURN': cls.__constants['LANE_ACTION_LEFT_LU_TURN'],
            'LANE_ACTION_RIGHT_RU_TURN': cls.__constants['LANE_ACTION_RIGHT_RU_TURN'],
            'LANE_ACTION_AHEAD_LEFT_LU_TURN': cls.__constants['LANE_ACTION_AHEAD_LEFT_LU_TURN'],
            'LANE_ACTION_RIGHT_LU_TURN': cls.__constants['LANE_ACTION_RIGHT_LU_TURN'],
            'LANE_ACTION_LEFT_RIGHT_LU_TURN': cls.__constants['LANE_ACTION_LEFT_RIGHT_LU_TURN'],
            'LANE_ACTION_AHEAD_RIGHT_LU_TURN': cls.__constants['LANE_ACTION_AHEAD_RIGHT_LU_TURN'],
            'LANE_ACTION_LEFT_RU_TURN': cls.__constants['LANE_ACTION_LEFT_RU_TURN'],
            'LANE_ACTION_BUS': cls.__constants['LANE_ACTION_BUS'],
            'LANE_ACTION_EMPTY': cls.__constants['LANE_ACTION_EMPTY'],
            'LANE_ACTION_VARIABLE': cls.__constants['LANE_ACTION_VARIABLE'],
            'LANE_ACTION_DEDICATED': cls.__constants['LANE_ACTION_DEDICATED'],
            'LANE_ACTION_TIDAL': cls.__constants['LANE_ACTION_TIDAL'],
        }

    @property
    def LANE_ACTION_NULL(self):
        """Message constant 'LANE_ACTION_NULL'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_NULL']

    @property
    def LANE_ACTION_AHEAD(self):
        """Message constant 'LANE_ACTION_AHEAD'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD']

    @property
    def LANE_ACTION_LEFT(self):
        """Message constant 'LANE_ACTION_LEFT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LEFT']

    @property
    def LANE_ACTION_AHEAD_LEFT(self):
        """Message constant 'LANE_ACTION_AHEAD_LEFT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_LEFT']

    @property
    def LANE_ACTION_RIGHT(self):
        """Message constant 'LANE_ACTION_RIGHT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_RIGHT']

    @property
    def LANE_ACTION_AHEAD_RIGHT(self):
        """Message constant 'LANE_ACTION_AHEAD_RIGHT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_RIGHT']

    @property
    def LANE_ACTION_LU_TURN(self):
        """Message constant 'LANE_ACTION_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LU_TURN']

    @property
    def LANE_ACTION_LEFT_RIGHT(self):
        """Message constant 'LANE_ACTION_LEFT_RIGHT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LEFT_RIGHT']

    @property
    def LANE_ACTION_AHEAD_LEFT_RIGHT(self):
        """Message constant 'LANE_ACTION_AHEAD_LEFT_RIGHT'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_LEFT_RIGHT']

    @property
    def LANE_ACTION_RU_TURN(self):
        """Message constant 'LANE_ACTION_RU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_RU_TURN']

    @property
    def LANE_ACTION_AHEAD_LU_TURN(self):
        """Message constant 'LANE_ACTION_AHEAD_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_LU_TURN']

    @property
    def LANE_ACTION_AHEAD_RU_TURN(self):
        """Message constant 'LANE_ACTION_AHEAD_RU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_RU_TURN']

    @property
    def LANE_ACTION_LEFT_LU_TURN(self):
        """Message constant 'LANE_ACTION_LEFT_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LEFT_LU_TURN']

    @property
    def LANE_ACTION_RIGHT_RU_TURN(self):
        """Message constant 'LANE_ACTION_RIGHT_RU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_RIGHT_RU_TURN']

    @property
    def LANE_ACTION_AHEAD_LEFT_LU_TURN(self):
        """Message constant 'LANE_ACTION_AHEAD_LEFT_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_LEFT_LU_TURN']

    @property
    def LANE_ACTION_RIGHT_LU_TURN(self):
        """Message constant 'LANE_ACTION_RIGHT_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_RIGHT_LU_TURN']

    @property
    def LANE_ACTION_LEFT_RIGHT_LU_TURN(self):
        """Message constant 'LANE_ACTION_LEFT_RIGHT_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LEFT_RIGHT_LU_TURN']

    @property
    def LANE_ACTION_AHEAD_RIGHT_LU_TURN(self):
        """Message constant 'LANE_ACTION_AHEAD_RIGHT_LU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_AHEAD_RIGHT_LU_TURN']

    @property
    def LANE_ACTION_LEFT_RU_TURN(self):
        """Message constant 'LANE_ACTION_LEFT_RU_TURN'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_LEFT_RU_TURN']

    @property
    def LANE_ACTION_BUS(self):
        """Message constant 'LANE_ACTION_BUS'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_BUS']

    @property
    def LANE_ACTION_EMPTY(self):
        """Message constant 'LANE_ACTION_EMPTY'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_EMPTY']

    @property
    def LANE_ACTION_VARIABLE(self):
        """Message constant 'LANE_ACTION_VARIABLE'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_VARIABLE']

    @property
    def LANE_ACTION_DEDICATED(self):
        """Message constant 'LANE_ACTION_DEDICATED'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_DEDICATED']

    @property
    def LANE_ACTION_TIDAL(self):
        """Message constant 'LANE_ACTION_TIDAL'."""
        return Metaclass_LaneAction.__constants['LANE_ACTION_TIDAL']


class LaneAction(metaclass=Metaclass_LaneAction):
    """
    Message class 'LaneAction'.

    Constants:
      LANE_ACTION_NULL
      LANE_ACTION_AHEAD
      LANE_ACTION_LEFT
      LANE_ACTION_AHEAD_LEFT
      LANE_ACTION_RIGHT
      LANE_ACTION_AHEAD_RIGHT
      LANE_ACTION_LU_TURN
      LANE_ACTION_LEFT_RIGHT
      LANE_ACTION_AHEAD_LEFT_RIGHT
      LANE_ACTION_RU_TURN
      LANE_ACTION_AHEAD_LU_TURN
      LANE_ACTION_AHEAD_RU_TURN
      LANE_ACTION_LEFT_LU_TURN
      LANE_ACTION_RIGHT_RU_TURN
      LANE_ACTION_AHEAD_LEFT_LU_TURN
      LANE_ACTION_RIGHT_LU_TURN
      LANE_ACTION_LEFT_RIGHT_LU_TURN
      LANE_ACTION_AHEAD_RIGHT_LU_TURN
      LANE_ACTION_LEFT_RU_TURN
      LANE_ACTION_BUS
      LANE_ACTION_EMPTY
      LANE_ACTION_VARIABLE
      LANE_ACTION_DEDICATED
      LANE_ACTION_TIDAL
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
