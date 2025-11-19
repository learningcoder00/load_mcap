# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/SubclassificationType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SubclassificationType(type):
    """Metaclass of message 'SubclassificationType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAR': 0,
        'SUV': 1,
        'VAN': 2,
        'PICKUP': 3,
        'POLICE_CAR': 4,
        'AMBULANCE': 5,
        'WRECKING_CAR': 6,
        'FORKLIFT': 7,
        'TRAILER': 8,
        'BOX_TRUCK': 9,
        'FLATBED_TRUCK': 10,
        'BUS': 11,
        'OTHER_TRUCK': 12,
        'TANK_TRUCK': 13,
        'FIRE_ENGINE': 14,
        'CLEAN_TRUCK': 15,
        'PEDESTRIAN': 16,
        'CHILD': 17,
        'BICYCLE_WITH_HUMAN': 18,
        'MOTORBIKE_WITH_HUMAN': 19,
        'ANIMAL_SMALL': 20,
        'OTHER_ANIMAL': 21,
        'BICYCLE': 22,
        'MOTORBIKE': 23,
        'TRICYCLE': 24,
        'FAKE_PED': 25,
        'FAKE_CYCLIST': 26,
        'FAKE_CAR': 27,
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
                'deva_perception_msgs.msg.SubclassificationType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__subclassification_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__subclassification_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__subclassification_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__subclassification_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__subclassification_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAR': cls.__constants['CAR'],
            'SUV': cls.__constants['SUV'],
            'VAN': cls.__constants['VAN'],
            'PICKUP': cls.__constants['PICKUP'],
            'POLICE_CAR': cls.__constants['POLICE_CAR'],
            'AMBULANCE': cls.__constants['AMBULANCE'],
            'WRECKING_CAR': cls.__constants['WRECKING_CAR'],
            'FORKLIFT': cls.__constants['FORKLIFT'],
            'TRAILER': cls.__constants['TRAILER'],
            'BOX_TRUCK': cls.__constants['BOX_TRUCK'],
            'FLATBED_TRUCK': cls.__constants['FLATBED_TRUCK'],
            'BUS': cls.__constants['BUS'],
            'OTHER_TRUCK': cls.__constants['OTHER_TRUCK'],
            'TANK_TRUCK': cls.__constants['TANK_TRUCK'],
            'FIRE_ENGINE': cls.__constants['FIRE_ENGINE'],
            'CLEAN_TRUCK': cls.__constants['CLEAN_TRUCK'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'CHILD': cls.__constants['CHILD'],
            'BICYCLE_WITH_HUMAN': cls.__constants['BICYCLE_WITH_HUMAN'],
            'MOTORBIKE_WITH_HUMAN': cls.__constants['MOTORBIKE_WITH_HUMAN'],
            'ANIMAL_SMALL': cls.__constants['ANIMAL_SMALL'],
            'OTHER_ANIMAL': cls.__constants['OTHER_ANIMAL'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'MOTORBIKE': cls.__constants['MOTORBIKE'],
            'TRICYCLE': cls.__constants['TRICYCLE'],
            'FAKE_PED': cls.__constants['FAKE_PED'],
            'FAKE_CYCLIST': cls.__constants['FAKE_CYCLIST'],
            'FAKE_CAR': cls.__constants['FAKE_CAR'],
        }

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_SubclassificationType.__constants['CAR']

    @property
    def SUV(self):
        """Message constant 'SUV'."""
        return Metaclass_SubclassificationType.__constants['SUV']

    @property
    def VAN(self):
        """Message constant 'VAN'."""
        return Metaclass_SubclassificationType.__constants['VAN']

    @property
    def PICKUP(self):
        """Message constant 'PICKUP'."""
        return Metaclass_SubclassificationType.__constants['PICKUP']

    @property
    def POLICE_CAR(self):
        """Message constant 'POLICE_CAR'."""
        return Metaclass_SubclassificationType.__constants['POLICE_CAR']

    @property
    def AMBULANCE(self):
        """Message constant 'AMBULANCE'."""
        return Metaclass_SubclassificationType.__constants['AMBULANCE']

    @property
    def WRECKING_CAR(self):
        """Message constant 'WRECKING_CAR'."""
        return Metaclass_SubclassificationType.__constants['WRECKING_CAR']

    @property
    def FORKLIFT(self):
        """Message constant 'FORKLIFT'."""
        return Metaclass_SubclassificationType.__constants['FORKLIFT']

    @property
    def TRAILER(self):
        """Message constant 'TRAILER'."""
        return Metaclass_SubclassificationType.__constants['TRAILER']

    @property
    def BOX_TRUCK(self):
        """Message constant 'BOX_TRUCK'."""
        return Metaclass_SubclassificationType.__constants['BOX_TRUCK']

    @property
    def FLATBED_TRUCK(self):
        """Message constant 'FLATBED_TRUCK'."""
        return Metaclass_SubclassificationType.__constants['FLATBED_TRUCK']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_SubclassificationType.__constants['BUS']

    @property
    def OTHER_TRUCK(self):
        """Message constant 'OTHER_TRUCK'."""
        return Metaclass_SubclassificationType.__constants['OTHER_TRUCK']

    @property
    def TANK_TRUCK(self):
        """Message constant 'TANK_TRUCK'."""
        return Metaclass_SubclassificationType.__constants['TANK_TRUCK']

    @property
    def FIRE_ENGINE(self):
        """Message constant 'FIRE_ENGINE'."""
        return Metaclass_SubclassificationType.__constants['FIRE_ENGINE']

    @property
    def CLEAN_TRUCK(self):
        """Message constant 'CLEAN_TRUCK'."""
        return Metaclass_SubclassificationType.__constants['CLEAN_TRUCK']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_SubclassificationType.__constants['PEDESTRIAN']

    @property
    def CHILD(self):
        """Message constant 'CHILD'."""
        return Metaclass_SubclassificationType.__constants['CHILD']

    @property
    def BICYCLE_WITH_HUMAN(self):
        """Message constant 'BICYCLE_WITH_HUMAN'."""
        return Metaclass_SubclassificationType.__constants['BICYCLE_WITH_HUMAN']

    @property
    def MOTORBIKE_WITH_HUMAN(self):
        """Message constant 'MOTORBIKE_WITH_HUMAN'."""
        return Metaclass_SubclassificationType.__constants['MOTORBIKE_WITH_HUMAN']

    @property
    def ANIMAL_SMALL(self):
        """Message constant 'ANIMAL_SMALL'."""
        return Metaclass_SubclassificationType.__constants['ANIMAL_SMALL']

    @property
    def OTHER_ANIMAL(self):
        """Message constant 'OTHER_ANIMAL'."""
        return Metaclass_SubclassificationType.__constants['OTHER_ANIMAL']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_SubclassificationType.__constants['BICYCLE']

    @property
    def MOTORBIKE(self):
        """Message constant 'MOTORBIKE'."""
        return Metaclass_SubclassificationType.__constants['MOTORBIKE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_SubclassificationType.__constants['TRICYCLE']

    @property
    def FAKE_PED(self):
        """Message constant 'FAKE_PED'."""
        return Metaclass_SubclassificationType.__constants['FAKE_PED']

    @property
    def FAKE_CYCLIST(self):
        """Message constant 'FAKE_CYCLIST'."""
        return Metaclass_SubclassificationType.__constants['FAKE_CYCLIST']

    @property
    def FAKE_CAR(self):
        """Message constant 'FAKE_CAR'."""
        return Metaclass_SubclassificationType.__constants['FAKE_CAR']


class SubclassificationType(metaclass=Metaclass_SubclassificationType):
    """
    Message class 'SubclassificationType'.

    Constants:
      CAR
      SUV
      VAN
      PICKUP
      POLICE_CAR
      AMBULANCE
      WRECKING_CAR
      FORKLIFT
      TRAILER
      BOX_TRUCK
      FLATBED_TRUCK
      BUS
      OTHER_TRUCK
      TANK_TRUCK
      FIRE_ENGINE
      CLEAN_TRUCK
      PEDESTRIAN
      CHILD
      BICYCLE_WITH_HUMAN
      MOTORBIKE_WITH_HUMAN
      ANIMAL_SMALL
      OTHER_ANIMAL
      BICYCLE
      MOTORBIKE
      TRICYCLE
      FAKE_PED
      FAKE_CYCLIST
      FAKE_CAR
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
