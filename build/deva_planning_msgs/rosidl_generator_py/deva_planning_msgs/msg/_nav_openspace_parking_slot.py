# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/NavOpenspaceParkingSlot.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'xyz_vec'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavOpenspaceParkingSlot(type):
    """Metaclass of message 'NavOpenspaceParkingSlot'."""

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
                'deva_planning_msgs.msg.NavOpenspaceParkingSlot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_openspace_parking_slot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_openspace_parking_slot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_openspace_parking_slot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_openspace_parking_slot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_openspace_parking_slot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavOpenspaceParkingSlot(metaclass=Metaclass_NavOpenspaceParkingSlot):
    """Message class 'NavOpenspaceParkingSlot'."""

    __slots__ = [
        '_id',
        '_type',
        '_xyz_vec',
        '_is_occupied',
        '_is_stable_tracked',
        '_occupied_confidence',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'type': 'uint32',
        'xyz_vec': 'sequence<double>',
        'is_occupied': 'boolean',
        'is_stable_tracked': 'boolean',
        'occupied_confidence': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.xyz_vec = array.array('d', kwargs.get('xyz_vec', []))
        self.is_occupied = kwargs.get('is_occupied', bool())
        self.is_stable_tracked = kwargs.get('is_stable_tracked', bool())
        self.occupied_confidence = kwargs.get('occupied_confidence', float())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.xyz_vec != other.xyz_vec:
            return False
        if self.is_occupied != other.is_occupied:
            return False
        if self.is_stable_tracked != other.is_stable_tracked:
            return False
        if self.occupied_confidence != other.occupied_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def xyz_vec(self):
        """Message field 'xyz_vec'."""
        return self._xyz_vec

    @xyz_vec.setter
    def xyz_vec(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'xyz_vec' array.array() must have the type code of 'd'"
            self._xyz_vec = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'xyz_vec' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._xyz_vec = array.array('d', value)

    @builtins.property
    def is_occupied(self):
        """Message field 'is_occupied'."""
        return self._is_occupied

    @is_occupied.setter
    def is_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_occupied' field must be of type 'bool'"
        self._is_occupied = value

    @builtins.property
    def is_stable_tracked(self):
        """Message field 'is_stable_tracked'."""
        return self._is_stable_tracked

    @is_stable_tracked.setter
    def is_stable_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stable_tracked' field must be of type 'bool'"
        self._is_stable_tracked = value

    @builtins.property
    def occupied_confidence(self):
        """Message field 'occupied_confidence'."""
        return self._occupied_confidence

    @occupied_confidence.setter
    def occupied_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'occupied_confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'occupied_confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._occupied_confidence = value
