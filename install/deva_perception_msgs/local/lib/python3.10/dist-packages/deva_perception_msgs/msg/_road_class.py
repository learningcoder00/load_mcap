# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RoadClass.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadClass(type):
    """Metaclass of message 'RoadClass'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROAD_CLASS_EXPRESSWAY': 0,
        'ROAD_CLASS_NATIONAL': 1,
        'ROAD_CLASS_PROVINCIAL': 2,
        'ROAD_CLASS_COUNTY': 3,
        'ROAD_CLASS_TOWNSHIP': 4,
        'ROAD_CLASS_VILLAGE_INTERNAL': 5,
        'ROAD_CLASS_MAIN_STREET_EXPRESS': 6,
        'ROAD_CLASS_MAIN': 7,
        'ROAD_CLASS_SECONDARY': 8,
        'ROAD_CLASS_NORMAL': 9,
        'ROAD_CLASS_NON_NAVIGATION': 10,
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
                'deva_perception_msgs.msg.RoadClass')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_class
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_class
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_class
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_class
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_class

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROAD_CLASS_EXPRESSWAY': cls.__constants['ROAD_CLASS_EXPRESSWAY'],
            'ROAD_CLASS_NATIONAL': cls.__constants['ROAD_CLASS_NATIONAL'],
            'ROAD_CLASS_PROVINCIAL': cls.__constants['ROAD_CLASS_PROVINCIAL'],
            'ROAD_CLASS_COUNTY': cls.__constants['ROAD_CLASS_COUNTY'],
            'ROAD_CLASS_TOWNSHIP': cls.__constants['ROAD_CLASS_TOWNSHIP'],
            'ROAD_CLASS_VILLAGE_INTERNAL': cls.__constants['ROAD_CLASS_VILLAGE_INTERNAL'],
            'ROAD_CLASS_MAIN_STREET_EXPRESS': cls.__constants['ROAD_CLASS_MAIN_STREET_EXPRESS'],
            'ROAD_CLASS_MAIN': cls.__constants['ROAD_CLASS_MAIN'],
            'ROAD_CLASS_SECONDARY': cls.__constants['ROAD_CLASS_SECONDARY'],
            'ROAD_CLASS_NORMAL': cls.__constants['ROAD_CLASS_NORMAL'],
            'ROAD_CLASS_NON_NAVIGATION': cls.__constants['ROAD_CLASS_NON_NAVIGATION'],
        }

    @property
    def ROAD_CLASS_EXPRESSWAY(self):
        """Message constant 'ROAD_CLASS_EXPRESSWAY'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_EXPRESSWAY']

    @property
    def ROAD_CLASS_NATIONAL(self):
        """Message constant 'ROAD_CLASS_NATIONAL'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_NATIONAL']

    @property
    def ROAD_CLASS_PROVINCIAL(self):
        """Message constant 'ROAD_CLASS_PROVINCIAL'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_PROVINCIAL']

    @property
    def ROAD_CLASS_COUNTY(self):
        """Message constant 'ROAD_CLASS_COUNTY'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_COUNTY']

    @property
    def ROAD_CLASS_TOWNSHIP(self):
        """Message constant 'ROAD_CLASS_TOWNSHIP'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_TOWNSHIP']

    @property
    def ROAD_CLASS_VILLAGE_INTERNAL(self):
        """Message constant 'ROAD_CLASS_VILLAGE_INTERNAL'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_VILLAGE_INTERNAL']

    @property
    def ROAD_CLASS_MAIN_STREET_EXPRESS(self):
        """Message constant 'ROAD_CLASS_MAIN_STREET_EXPRESS'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_MAIN_STREET_EXPRESS']

    @property
    def ROAD_CLASS_MAIN(self):
        """Message constant 'ROAD_CLASS_MAIN'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_MAIN']

    @property
    def ROAD_CLASS_SECONDARY(self):
        """Message constant 'ROAD_CLASS_SECONDARY'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_SECONDARY']

    @property
    def ROAD_CLASS_NORMAL(self):
        """Message constant 'ROAD_CLASS_NORMAL'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_NORMAL']

    @property
    def ROAD_CLASS_NON_NAVIGATION(self):
        """Message constant 'ROAD_CLASS_NON_NAVIGATION'."""
        return Metaclass_RoadClass.__constants['ROAD_CLASS_NON_NAVIGATION']


class RoadClass(metaclass=Metaclass_RoadClass):
    """
    Message class 'RoadClass'.

    Constants:
      ROAD_CLASS_EXPRESSWAY
      ROAD_CLASS_NATIONAL
      ROAD_CLASS_PROVINCIAL
      ROAD_CLASS_COUNTY
      ROAD_CLASS_TOWNSHIP
      ROAD_CLASS_VILLAGE_INTERNAL
      ROAD_CLASS_MAIN_STREET_EXPRESS
      ROAD_CLASS_MAIN
      ROAD_CLASS_SECONDARY
      ROAD_CLASS_NORMAL
      ROAD_CLASS_NON_NAVIGATION
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
