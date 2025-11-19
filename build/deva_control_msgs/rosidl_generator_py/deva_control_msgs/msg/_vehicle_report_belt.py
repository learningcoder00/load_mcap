# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/VehicleReportBelt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleReportBelt(type):
    """Metaclass of message 'VehicleReportBelt'."""

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
                'deva_control_msgs.msg.VehicleReportBelt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_report_belt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_report_belt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_report_belt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_report_belt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_report_belt

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleReportBelt(metaclass=Metaclass_VehicleReportBelt):
    """Message class 'VehicleReportBelt'."""

    __slots__ = [
        '_drv_belt',
        '_pass_belt',
        '_rl_belt',
        '_rm_belt',
        '_rr_belt',
    ]

    _fields_and_field_types = {
        'drv_belt': 'boolean',
        'pass_belt': 'boolean',
        'rl_belt': 'boolean',
        'rm_belt': 'boolean',
        'rr_belt': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drv_belt = kwargs.get('drv_belt', bool())
        self.pass_belt = kwargs.get('pass_belt', bool())
        self.rl_belt = kwargs.get('rl_belt', bool())
        self.rm_belt = kwargs.get('rm_belt', bool())
        self.rr_belt = kwargs.get('rr_belt', bool())

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
        if self.drv_belt != other.drv_belt:
            return False
        if self.pass_belt != other.pass_belt:
            return False
        if self.rl_belt != other.rl_belt:
            return False
        if self.rm_belt != other.rm_belt:
            return False
        if self.rr_belt != other.rr_belt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drv_belt(self):
        """Message field 'drv_belt'."""
        return self._drv_belt

    @drv_belt.setter
    def drv_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drv_belt' field must be of type 'bool'"
        self._drv_belt = value

    @builtins.property
    def pass_belt(self):
        """Message field 'pass_belt'."""
        return self._pass_belt

    @pass_belt.setter
    def pass_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pass_belt' field must be of type 'bool'"
        self._pass_belt = value

    @builtins.property
    def rl_belt(self):
        """Message field 'rl_belt'."""
        return self._rl_belt

    @rl_belt.setter
    def rl_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rl_belt' field must be of type 'bool'"
        self._rl_belt = value

    @builtins.property
    def rm_belt(self):
        """Message field 'rm_belt'."""
        return self._rm_belt

    @rm_belt.setter
    def rm_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rm_belt' field must be of type 'bool'"
        self._rm_belt = value

    @builtins.property
    def rr_belt(self):
        """Message field 'rr_belt'."""
        return self._rr_belt

    @rr_belt.setter
    def rr_belt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rr_belt' field must be of type 'bool'"
        self._rr_belt = value
