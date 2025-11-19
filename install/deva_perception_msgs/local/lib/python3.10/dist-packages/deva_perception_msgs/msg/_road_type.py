# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RoadType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadType(type):
    """Metaclass of message 'RoadType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROAD_TYPE_MAIN_ROAD': 1,
        'ROAD_TYPE_INTERSECTION_INTERNAL': 2,
        'ROAD_TYPE_JCT_ROAD': 3,
        'ROAD_TYPE_ROUNDABOUT': 4,
        'ROAD_TYPE_SERVICE_AREA': 5,
        'ROAD_TYPE_RAMP': 6,
        'ROAD_TYPE_SECONDARY_ROAD': 7,
        'ROAD_TYPE_RAMP_AND_JCT': 8,
        'ROAD_TYPE_EXIT': 9,
        'ROAD_TYPE_ENTRY': 10,
        'ROAD_TYPE_TYPE_A_RIGHT_TURN': 11,
        'ROAD_TYPE_TYPE_B_RIGHT_TURN': 12,
        'ROAD_TYPE_TYPE_A_LEFT_TURN': 13,
        'ROAD_TYPE_TYPE_B_LEFT_TURN': 14,
        'ROAD_TYPE_NORMAL_ROAD': 15,
        'ROAD_TYPE_LEFT_RIGHT_TURN': 16,
        'ROAD_TYPE_SERVICE_AREA_AND_RAMP': 56,
        'ROAD_TYPE_SERVICE_AREA_AND_JCT': 53,
        'ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT': 58,
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
                'deva_perception_msgs.msg.RoadType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROAD_TYPE_MAIN_ROAD': cls.__constants['ROAD_TYPE_MAIN_ROAD'],
            'ROAD_TYPE_INTERSECTION_INTERNAL': cls.__constants['ROAD_TYPE_INTERSECTION_INTERNAL'],
            'ROAD_TYPE_JCT_ROAD': cls.__constants['ROAD_TYPE_JCT_ROAD'],
            'ROAD_TYPE_ROUNDABOUT': cls.__constants['ROAD_TYPE_ROUNDABOUT'],
            'ROAD_TYPE_SERVICE_AREA': cls.__constants['ROAD_TYPE_SERVICE_AREA'],
            'ROAD_TYPE_RAMP': cls.__constants['ROAD_TYPE_RAMP'],
            'ROAD_TYPE_SECONDARY_ROAD': cls.__constants['ROAD_TYPE_SECONDARY_ROAD'],
            'ROAD_TYPE_RAMP_AND_JCT': cls.__constants['ROAD_TYPE_RAMP_AND_JCT'],
            'ROAD_TYPE_EXIT': cls.__constants['ROAD_TYPE_EXIT'],
            'ROAD_TYPE_ENTRY': cls.__constants['ROAD_TYPE_ENTRY'],
            'ROAD_TYPE_TYPE_A_RIGHT_TURN': cls.__constants['ROAD_TYPE_TYPE_A_RIGHT_TURN'],
            'ROAD_TYPE_TYPE_B_RIGHT_TURN': cls.__constants['ROAD_TYPE_TYPE_B_RIGHT_TURN'],
            'ROAD_TYPE_TYPE_A_LEFT_TURN': cls.__constants['ROAD_TYPE_TYPE_A_LEFT_TURN'],
            'ROAD_TYPE_TYPE_B_LEFT_TURN': cls.__constants['ROAD_TYPE_TYPE_B_LEFT_TURN'],
            'ROAD_TYPE_NORMAL_ROAD': cls.__constants['ROAD_TYPE_NORMAL_ROAD'],
            'ROAD_TYPE_LEFT_RIGHT_TURN': cls.__constants['ROAD_TYPE_LEFT_RIGHT_TURN'],
            'ROAD_TYPE_SERVICE_AREA_AND_RAMP': cls.__constants['ROAD_TYPE_SERVICE_AREA_AND_RAMP'],
            'ROAD_TYPE_SERVICE_AREA_AND_JCT': cls.__constants['ROAD_TYPE_SERVICE_AREA_AND_JCT'],
            'ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT': cls.__constants['ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT'],
        }

    @property
    def ROAD_TYPE_MAIN_ROAD(self):
        """Message constant 'ROAD_TYPE_MAIN_ROAD'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_MAIN_ROAD']

    @property
    def ROAD_TYPE_INTERSECTION_INTERNAL(self):
        """Message constant 'ROAD_TYPE_INTERSECTION_INTERNAL'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_INTERSECTION_INTERNAL']

    @property
    def ROAD_TYPE_JCT_ROAD(self):
        """Message constant 'ROAD_TYPE_JCT_ROAD'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_JCT_ROAD']

    @property
    def ROAD_TYPE_ROUNDABOUT(self):
        """Message constant 'ROAD_TYPE_ROUNDABOUT'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_ROUNDABOUT']

    @property
    def ROAD_TYPE_SERVICE_AREA(self):
        """Message constant 'ROAD_TYPE_SERVICE_AREA'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_SERVICE_AREA']

    @property
    def ROAD_TYPE_RAMP(self):
        """Message constant 'ROAD_TYPE_RAMP'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_RAMP']

    @property
    def ROAD_TYPE_SECONDARY_ROAD(self):
        """Message constant 'ROAD_TYPE_SECONDARY_ROAD'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_SECONDARY_ROAD']

    @property
    def ROAD_TYPE_RAMP_AND_JCT(self):
        """Message constant 'ROAD_TYPE_RAMP_AND_JCT'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_RAMP_AND_JCT']

    @property
    def ROAD_TYPE_EXIT(self):
        """Message constant 'ROAD_TYPE_EXIT'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_EXIT']

    @property
    def ROAD_TYPE_ENTRY(self):
        """Message constant 'ROAD_TYPE_ENTRY'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_ENTRY']

    @property
    def ROAD_TYPE_TYPE_A_RIGHT_TURN(self):
        """Message constant 'ROAD_TYPE_TYPE_A_RIGHT_TURN'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_TYPE_A_RIGHT_TURN']

    @property
    def ROAD_TYPE_TYPE_B_RIGHT_TURN(self):
        """Message constant 'ROAD_TYPE_TYPE_B_RIGHT_TURN'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_TYPE_B_RIGHT_TURN']

    @property
    def ROAD_TYPE_TYPE_A_LEFT_TURN(self):
        """Message constant 'ROAD_TYPE_TYPE_A_LEFT_TURN'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_TYPE_A_LEFT_TURN']

    @property
    def ROAD_TYPE_TYPE_B_LEFT_TURN(self):
        """Message constant 'ROAD_TYPE_TYPE_B_LEFT_TURN'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_TYPE_B_LEFT_TURN']

    @property
    def ROAD_TYPE_NORMAL_ROAD(self):
        """Message constant 'ROAD_TYPE_NORMAL_ROAD'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_NORMAL_ROAD']

    @property
    def ROAD_TYPE_LEFT_RIGHT_TURN(self):
        """Message constant 'ROAD_TYPE_LEFT_RIGHT_TURN'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_LEFT_RIGHT_TURN']

    @property
    def ROAD_TYPE_SERVICE_AREA_AND_RAMP(self):
        """Message constant 'ROAD_TYPE_SERVICE_AREA_AND_RAMP'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_SERVICE_AREA_AND_RAMP']

    @property
    def ROAD_TYPE_SERVICE_AREA_AND_JCT(self):
        """Message constant 'ROAD_TYPE_SERVICE_AREA_AND_JCT'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_SERVICE_AREA_AND_JCT']

    @property
    def ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT(self):
        """Message constant 'ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT'."""
        return Metaclass_RoadType.__constants['ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT']


class RoadType(metaclass=Metaclass_RoadType):
    """
    Message class 'RoadType'.

    Constants:
      ROAD_TYPE_MAIN_ROAD
      ROAD_TYPE_INTERSECTION_INTERNAL
      ROAD_TYPE_JCT_ROAD
      ROAD_TYPE_ROUNDABOUT
      ROAD_TYPE_SERVICE_AREA
      ROAD_TYPE_RAMP
      ROAD_TYPE_SECONDARY_ROAD
      ROAD_TYPE_RAMP_AND_JCT
      ROAD_TYPE_EXIT
      ROAD_TYPE_ENTRY
      ROAD_TYPE_TYPE_A_RIGHT_TURN
      ROAD_TYPE_TYPE_B_RIGHT_TURN
      ROAD_TYPE_TYPE_A_LEFT_TURN
      ROAD_TYPE_TYPE_B_LEFT_TURN
      ROAD_TYPE_NORMAL_ROAD
      ROAD_TYPE_LEFT_RIGHT_TURN
      ROAD_TYPE_SERVICE_AREA_AND_RAMP
      ROAD_TYPE_SERVICE_AREA_AND_JCT
      ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT
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
