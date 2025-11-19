# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EhpMetaData(type):
    """Metaclass of message 'EhpMetaData'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.EhpMetaData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ehp_meta_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ehp_meta_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ehp_meta_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ehp_meta_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ehp_meta_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EhpMetaData(metaclass=Metaclass_EhpMetaData):
    """Message class 'EhpMetaData'."""

    __slots__ = [
        '_meta_country_code',
        '_meta_map_provider',
        '_meta_msg_type',
        '_meta_hw_ver',
        '_meta_prot_ver_minor_sub',
        '_meta_prot_ver_major',
        '_meta_cyc_cnt',
        '_meta_region_code',
        '_meta_drv_side',
        '_meta_map_ver_year',
        '_meta_map_ver_qtr',
        '_meta_prot_ver_minor',
        '_meta_spd_units',
    ]

    _fields_and_field_types = {
        'meta_country_code': 'uint16',
        'meta_map_provider': 'uint8',
        'meta_msg_type': 'uint8',
        'meta_hw_ver': 'uint16',
        'meta_prot_ver_minor_sub': 'uint8',
        'meta_prot_ver_major': 'uint8',
        'meta_cyc_cnt': 'uint8',
        'meta_region_code': 'uint16',
        'meta_drv_side': 'uint8',
        'meta_map_ver_year': 'uint8',
        'meta_map_ver_qtr': 'uint8',
        'meta_prot_ver_minor': 'uint8',
        'meta_spd_units': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.meta_country_code = kwargs.get('meta_country_code', int())
        self.meta_map_provider = kwargs.get('meta_map_provider', int())
        self.meta_msg_type = kwargs.get('meta_msg_type', int())
        self.meta_hw_ver = kwargs.get('meta_hw_ver', int())
        self.meta_prot_ver_minor_sub = kwargs.get('meta_prot_ver_minor_sub', int())
        self.meta_prot_ver_major = kwargs.get('meta_prot_ver_major', int())
        self.meta_cyc_cnt = kwargs.get('meta_cyc_cnt', int())
        self.meta_region_code = kwargs.get('meta_region_code', int())
        self.meta_drv_side = kwargs.get('meta_drv_side', int())
        self.meta_map_ver_year = kwargs.get('meta_map_ver_year', int())
        self.meta_map_ver_qtr = kwargs.get('meta_map_ver_qtr', int())
        self.meta_prot_ver_minor = kwargs.get('meta_prot_ver_minor', int())
        self.meta_spd_units = kwargs.get('meta_spd_units', int())

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
        if self.meta_country_code != other.meta_country_code:
            return False
        if self.meta_map_provider != other.meta_map_provider:
            return False
        if self.meta_msg_type != other.meta_msg_type:
            return False
        if self.meta_hw_ver != other.meta_hw_ver:
            return False
        if self.meta_prot_ver_minor_sub != other.meta_prot_ver_minor_sub:
            return False
        if self.meta_prot_ver_major != other.meta_prot_ver_major:
            return False
        if self.meta_cyc_cnt != other.meta_cyc_cnt:
            return False
        if self.meta_region_code != other.meta_region_code:
            return False
        if self.meta_drv_side != other.meta_drv_side:
            return False
        if self.meta_map_ver_year != other.meta_map_ver_year:
            return False
        if self.meta_map_ver_qtr != other.meta_map_ver_qtr:
            return False
        if self.meta_prot_ver_minor != other.meta_prot_ver_minor:
            return False
        if self.meta_spd_units != other.meta_spd_units:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def meta_country_code(self):
        """Message field 'meta_country_code'."""
        return self._meta_country_code

    @meta_country_code.setter
    def meta_country_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_country_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'meta_country_code' field must be an unsigned integer in [0, 65535]"
        self._meta_country_code = value

    @builtins.property
    def meta_map_provider(self):
        """Message field 'meta_map_provider'."""
        return self._meta_map_provider

    @meta_map_provider.setter
    def meta_map_provider(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_map_provider' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_map_provider' field must be an unsigned integer in [0, 255]"
        self._meta_map_provider = value

    @builtins.property
    def meta_msg_type(self):
        """Message field 'meta_msg_type'."""
        return self._meta_msg_type

    @meta_msg_type.setter
    def meta_msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_msg_type' field must be an unsigned integer in [0, 255]"
        self._meta_msg_type = value

    @builtins.property
    def meta_hw_ver(self):
        """Message field 'meta_hw_ver'."""
        return self._meta_hw_ver

    @meta_hw_ver.setter
    def meta_hw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_hw_ver' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'meta_hw_ver' field must be an unsigned integer in [0, 65535]"
        self._meta_hw_ver = value

    @builtins.property
    def meta_prot_ver_minor_sub(self):
        """Message field 'meta_prot_ver_minor_sub'."""
        return self._meta_prot_ver_minor_sub

    @meta_prot_ver_minor_sub.setter
    def meta_prot_ver_minor_sub(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_prot_ver_minor_sub' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_prot_ver_minor_sub' field must be an unsigned integer in [0, 255]"
        self._meta_prot_ver_minor_sub = value

    @builtins.property
    def meta_prot_ver_major(self):
        """Message field 'meta_prot_ver_major'."""
        return self._meta_prot_ver_major

    @meta_prot_ver_major.setter
    def meta_prot_ver_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_prot_ver_major' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_prot_ver_major' field must be an unsigned integer in [0, 255]"
        self._meta_prot_ver_major = value

    @builtins.property
    def meta_cyc_cnt(self):
        """Message field 'meta_cyc_cnt'."""
        return self._meta_cyc_cnt

    @meta_cyc_cnt.setter
    def meta_cyc_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_cyc_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_cyc_cnt' field must be an unsigned integer in [0, 255]"
        self._meta_cyc_cnt = value

    @builtins.property
    def meta_region_code(self):
        """Message field 'meta_region_code'."""
        return self._meta_region_code

    @meta_region_code.setter
    def meta_region_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_region_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'meta_region_code' field must be an unsigned integer in [0, 65535]"
        self._meta_region_code = value

    @builtins.property
    def meta_drv_side(self):
        """Message field 'meta_drv_side'."""
        return self._meta_drv_side

    @meta_drv_side.setter
    def meta_drv_side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_drv_side' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_drv_side' field must be an unsigned integer in [0, 255]"
        self._meta_drv_side = value

    @builtins.property
    def meta_map_ver_year(self):
        """Message field 'meta_map_ver_year'."""
        return self._meta_map_ver_year

    @meta_map_ver_year.setter
    def meta_map_ver_year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_map_ver_year' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_map_ver_year' field must be an unsigned integer in [0, 255]"
        self._meta_map_ver_year = value

    @builtins.property
    def meta_map_ver_qtr(self):
        """Message field 'meta_map_ver_qtr'."""
        return self._meta_map_ver_qtr

    @meta_map_ver_qtr.setter
    def meta_map_ver_qtr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_map_ver_qtr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_map_ver_qtr' field must be an unsigned integer in [0, 255]"
        self._meta_map_ver_qtr = value

    @builtins.property
    def meta_prot_ver_minor(self):
        """Message field 'meta_prot_ver_minor'."""
        return self._meta_prot_ver_minor

    @meta_prot_ver_minor.setter
    def meta_prot_ver_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_prot_ver_minor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_prot_ver_minor' field must be an unsigned integer in [0, 255]"
        self._meta_prot_ver_minor = value

    @builtins.property
    def meta_spd_units(self):
        """Message field 'meta_spd_units'."""
        return self._meta_spd_units

    @meta_spd_units.setter
    def meta_spd_units(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meta_spd_units' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'meta_spd_units' field must be an unsigned integer in [0, 255]"
        self._meta_spd_units = value
