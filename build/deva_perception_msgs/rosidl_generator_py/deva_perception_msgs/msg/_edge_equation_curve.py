# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/EdgeEquationCurve.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EdgeEquationCurve(type):
    """Metaclass of message 'EdgeEquationCurve'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.EdgeEquationCurve')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__edge_equation_curve
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__edge_equation_curve
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__edge_equation_curve
            cls._TYPE_SUPPORT = module.type_support_msg__msg__edge_equation_curve
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__edge_equation_curve

            from deva_common_msgs.msg import EquationCurve
            if EquationCurve.__class__._TYPE_SUPPORT is None:
                EquationCurve.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EdgeEquationCurve(metaclass=Metaclass_EdgeEquationCurve):
    """Message class 'EdgeEquationCurve'."""

    __slots__ = [
        '_segment',
        '_is_blocked',
        '_confidence',
        '_blocked_confidence',
    ]

    _fields_and_field_types = {
        'segment': 'deva_common_msgs/EquationCurve',
        'is_blocked': 'boolean',
        'confidence': 'float',
        'blocked_confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'EquationCurve'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import EquationCurve
        self.segment = kwargs.get('segment', EquationCurve())
        self.is_blocked = kwargs.get('is_blocked', bool())
        self.confidence = kwargs.get('confidence', float())
        self.blocked_confidence = kwargs.get('blocked_confidence', float())

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
        if self.segment != other.segment:
            return False
        if self.is_blocked != other.is_blocked:
            return False
        if self.confidence != other.confidence:
            return False
        if self.blocked_confidence != other.blocked_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def segment(self):
        """Message field 'segment'."""
        return self._segment

    @segment.setter
    def segment(self, value):
        if __debug__:
            from deva_common_msgs.msg import EquationCurve
            assert \
                isinstance(value, EquationCurve), \
                "The 'segment' field must be a sub message of type 'EquationCurve'"
        self._segment = value

    @builtins.property
    def is_blocked(self):
        """Message field 'is_blocked'."""
        return self._is_blocked

    @is_blocked.setter
    def is_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_blocked' field must be of type 'bool'"
        self._is_blocked = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def blocked_confidence(self):
        """Message field 'blocked_confidence'."""
        return self._blocked_confidence

    @blocked_confidence.setter
    def blocked_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blocked_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blocked_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blocked_confidence = value
