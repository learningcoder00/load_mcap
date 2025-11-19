# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ref2SLBoundary(type):
    """Metaclass of message 'Ref2SLBoundary'."""

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
                'deva_planning_msgs2.msg.Ref2SLBoundary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ref2_sl_boundary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ref2_sl_boundary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ref2_sl_boundary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ref2_sl_boundary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ref2_sl_boundary

            from deva_planning_msgs2.msg import SLBoundary
            if SLBoundary.__class__._TYPE_SUPPORT is None:
                SLBoundary.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ref2SLBoundary(metaclass=Metaclass_Ref2SLBoundary):
    """Message class 'Ref2SLBoundary'."""

    __slots__ = [
        '_ref_id',
        '_sl_boundary',
    ]

    _fields_and_field_types = {
        'ref_id': 'int32',
        'sl_boundary': 'deva_planning_msgs2/SLBoundary',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'SLBoundary'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ref_id = kwargs.get('ref_id', int())
        from deva_planning_msgs2.msg import SLBoundary
        self.sl_boundary = kwargs.get('sl_boundary', SLBoundary())

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
        if self.ref_id != other.ref_id:
            return False
        if self.sl_boundary != other.sl_boundary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ref_id(self):
        """Message field 'ref_id'."""
        return self._ref_id

    @ref_id.setter
    def ref_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ref_id' field must be an integer in [-2147483648, 2147483647]"
        self._ref_id = value

    @builtins.property
    def sl_boundary(self):
        """Message field 'sl_boundary'."""
        return self._sl_boundary

    @sl_boundary.setter
    def sl_boundary(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import SLBoundary
            assert \
                isinstance(value, SLBoundary), \
                "The 'sl_boundary' field must be a sub message of type 'SLBoundary'"
        self._sl_boundary = value
