# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AppMapInfoToStmStruct(type):
    """Metaclass of message 'AppMapInfoToStmStruct'."""

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
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.AppMapInfoToStmStruct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__app_map_info_to_stm_struct
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__app_map_info_to_stm_struct
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__app_map_info_to_stm_struct
            cls._TYPE_SUPPORT = module.type_support_msg__msg__app_map_info_to_stm_struct
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__app_map_info_to_stm_struct

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AppMapInfoToStmStruct(metaclass=Metaclass_AppMapInfoToStmStruct):
    """Message class 'AppMapInfoToStmStruct'."""

    __slots__ = [
        '_route_id',
        '_aut_valt_prkg_map_upload_use_map_type2',
        '_aut_valt_prkg_map_upload_use_map_list1',
        '_aut_valt_prkg_map_upload_use_map_list2',
        '_aut_valt_prkg_map_upload_use_map_list3',
        '_aut_valt_prkg_map_upload_use_map_list4',
    ]

    _fields_and_field_types = {
        'route_id': 'uint8',
        'aut_valt_prkg_map_upload_use_map_type2': 'uint8',
        'aut_valt_prkg_map_upload_use_map_list1': 'uint32',
        'aut_valt_prkg_map_upload_use_map_list2': 'uint32',
        'aut_valt_prkg_map_upload_use_map_list3': 'uint32',
        'aut_valt_prkg_map_upload_use_map_list4': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.route_id = kwargs.get('route_id', int())
        self.aut_valt_prkg_map_upload_use_map_type2 = kwargs.get('aut_valt_prkg_map_upload_use_map_type2', int())
        self.aut_valt_prkg_map_upload_use_map_list1 = kwargs.get('aut_valt_prkg_map_upload_use_map_list1', int())
        self.aut_valt_prkg_map_upload_use_map_list2 = kwargs.get('aut_valt_prkg_map_upload_use_map_list2', int())
        self.aut_valt_prkg_map_upload_use_map_list3 = kwargs.get('aut_valt_prkg_map_upload_use_map_list3', int())
        self.aut_valt_prkg_map_upload_use_map_list4 = kwargs.get('aut_valt_prkg_map_upload_use_map_list4', int())

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
        if self.route_id != other.route_id:
            return False
        if self.aut_valt_prkg_map_upload_use_map_type2 != other.aut_valt_prkg_map_upload_use_map_type2:
            return False
        if self.aut_valt_prkg_map_upload_use_map_list1 != other.aut_valt_prkg_map_upload_use_map_list1:
            return False
        if self.aut_valt_prkg_map_upload_use_map_list2 != other.aut_valt_prkg_map_upload_use_map_list2:
            return False
        if self.aut_valt_prkg_map_upload_use_map_list3 != other.aut_valt_prkg_map_upload_use_map_list3:
            return False
        if self.aut_valt_prkg_map_upload_use_map_list4 != other.aut_valt_prkg_map_upload_use_map_list4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route_id(self):
        """Message field 'route_id'."""
        return self._route_id

    @route_id.setter
    def route_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'route_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'route_id' field must be an unsigned integer in [0, 255]"
        self._route_id = value

    @builtins.property
    def aut_valt_prkg_map_upload_use_map_type2(self):
        """Message field 'aut_valt_prkg_map_upload_use_map_type2'."""
        return self._aut_valt_prkg_map_upload_use_map_type2

    @aut_valt_prkg_map_upload_use_map_type2.setter
    def aut_valt_prkg_map_upload_use_map_type2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_upload_use_map_type2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_upload_use_map_type2' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_upload_use_map_type2 = value

    @builtins.property
    def aut_valt_prkg_map_upload_use_map_list1(self):
        """Message field 'aut_valt_prkg_map_upload_use_map_list1'."""
        return self._aut_valt_prkg_map_upload_use_map_list1

    @aut_valt_prkg_map_upload_use_map_list1.setter
    def aut_valt_prkg_map_upload_use_map_list1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_upload_use_map_list1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_upload_use_map_list1' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_upload_use_map_list1 = value

    @builtins.property
    def aut_valt_prkg_map_upload_use_map_list2(self):
        """Message field 'aut_valt_prkg_map_upload_use_map_list2'."""
        return self._aut_valt_prkg_map_upload_use_map_list2

    @aut_valt_prkg_map_upload_use_map_list2.setter
    def aut_valt_prkg_map_upload_use_map_list2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_upload_use_map_list2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_upload_use_map_list2' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_upload_use_map_list2 = value

    @builtins.property
    def aut_valt_prkg_map_upload_use_map_list3(self):
        """Message field 'aut_valt_prkg_map_upload_use_map_list3'."""
        return self._aut_valt_prkg_map_upload_use_map_list3

    @aut_valt_prkg_map_upload_use_map_list3.setter
    def aut_valt_prkg_map_upload_use_map_list3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_upload_use_map_list3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_upload_use_map_list3' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_upload_use_map_list3 = value

    @builtins.property
    def aut_valt_prkg_map_upload_use_map_list4(self):
        """Message field 'aut_valt_prkg_map_upload_use_map_list4'."""
        return self._aut_valt_prkg_map_upload_use_map_list4

    @aut_valt_prkg_map_upload_use_map_list4.setter
    def aut_valt_prkg_map_upload_use_map_list4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_upload_use_map_list4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_upload_use_map_list4' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_upload_use_map_list4 = value
