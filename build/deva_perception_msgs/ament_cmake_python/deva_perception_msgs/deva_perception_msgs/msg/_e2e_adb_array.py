# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/E2eAdbArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_E2eAdbArray(type):
    """Metaclass of message 'E2eAdbArray'."""

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
                'deva_perception_msgs.msg.E2eAdbArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__e2e_adb_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__e2e_adb_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__e2e_adb_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__e2e_adb_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__e2e_adb_array

            from deva_perception_msgs.msg import E2eAdb
            if E2eAdb.__class__._TYPE_SUPPORT is None:
                E2eAdb.__class__.__import_type_support__()

            from deva_perception_msgs.msg import E2eAdbTrafficSign
            if E2eAdbTrafficSign.__class__._TYPE_SUPPORT is None:
                E2eAdbTrafficSign.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class E2eAdbArray(metaclass=Metaclass_E2eAdbArray):
    """Message class 'E2eAdbArray'."""

    __slots__ = [
        '_header',
        '_pre_crash_front_data_closing_velocity',
        '_pre_crash_front_data_object_class',
        '_pre_crash_front_data_overlap',
        '_pre_crash_front_data_time_to_impact',
        '_lit_area',
        '_camera_sts_for_ahbc',
        '_too_many_cars',
        '_e2e_adb_veh_obj',
        '_e2e_adb_traffic_sign',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pre_crash_front_data_closing_velocity': 'double',
        'pre_crash_front_data_object_class': 'uint8',
        'pre_crash_front_data_overlap': 'double',
        'pre_crash_front_data_time_to_impact': 'float',
        'lit_area': 'boolean',
        'camera_sts_for_ahbc': 'uint8',
        'too_many_cars': 'boolean',
        'e2e_adb_veh_obj': 'sequence<deva_perception_msgs/E2eAdb>',
        'e2e_adb_traffic_sign': 'sequence<deva_perception_msgs/E2eAdbTrafficSign>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eAdb')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eAdbTrafficSign')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pre_crash_front_data_closing_velocity = kwargs.get('pre_crash_front_data_closing_velocity', float())
        self.pre_crash_front_data_object_class = kwargs.get('pre_crash_front_data_object_class', int())
        self.pre_crash_front_data_overlap = kwargs.get('pre_crash_front_data_overlap', float())
        self.pre_crash_front_data_time_to_impact = kwargs.get('pre_crash_front_data_time_to_impact', float())
        self.lit_area = kwargs.get('lit_area', bool())
        self.camera_sts_for_ahbc = kwargs.get('camera_sts_for_ahbc', int())
        self.too_many_cars = kwargs.get('too_many_cars', bool())
        self.e2e_adb_veh_obj = kwargs.get('e2e_adb_veh_obj', [])
        self.e2e_adb_traffic_sign = kwargs.get('e2e_adb_traffic_sign', [])

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
        if self.header != other.header:
            return False
        if self.pre_crash_front_data_closing_velocity != other.pre_crash_front_data_closing_velocity:
            return False
        if self.pre_crash_front_data_object_class != other.pre_crash_front_data_object_class:
            return False
        if self.pre_crash_front_data_overlap != other.pre_crash_front_data_overlap:
            return False
        if self.pre_crash_front_data_time_to_impact != other.pre_crash_front_data_time_to_impact:
            return False
        if self.lit_area != other.lit_area:
            return False
        if self.camera_sts_for_ahbc != other.camera_sts_for_ahbc:
            return False
        if self.too_many_cars != other.too_many_cars:
            return False
        if self.e2e_adb_veh_obj != other.e2e_adb_veh_obj:
            return False
        if self.e2e_adb_traffic_sign != other.e2e_adb_traffic_sign:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pre_crash_front_data_closing_velocity(self):
        """Message field 'pre_crash_front_data_closing_velocity'."""
        return self._pre_crash_front_data_closing_velocity

    @pre_crash_front_data_closing_velocity.setter
    def pre_crash_front_data_closing_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pre_crash_front_data_closing_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pre_crash_front_data_closing_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pre_crash_front_data_closing_velocity = value

    @builtins.property
    def pre_crash_front_data_object_class(self):
        """Message field 'pre_crash_front_data_object_class'."""
        return self._pre_crash_front_data_object_class

    @pre_crash_front_data_object_class.setter
    def pre_crash_front_data_object_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pre_crash_front_data_object_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pre_crash_front_data_object_class' field must be an unsigned integer in [0, 255]"
        self._pre_crash_front_data_object_class = value

    @builtins.property
    def pre_crash_front_data_overlap(self):
        """Message field 'pre_crash_front_data_overlap'."""
        return self._pre_crash_front_data_overlap

    @pre_crash_front_data_overlap.setter
    def pre_crash_front_data_overlap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pre_crash_front_data_overlap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pre_crash_front_data_overlap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pre_crash_front_data_overlap = value

    @builtins.property
    def pre_crash_front_data_time_to_impact(self):
        """Message field 'pre_crash_front_data_time_to_impact'."""
        return self._pre_crash_front_data_time_to_impact

    @pre_crash_front_data_time_to_impact.setter
    def pre_crash_front_data_time_to_impact(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pre_crash_front_data_time_to_impact' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pre_crash_front_data_time_to_impact' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pre_crash_front_data_time_to_impact = value

    @builtins.property
    def lit_area(self):
        """Message field 'lit_area'."""
        return self._lit_area

    @lit_area.setter
    def lit_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lit_area' field must be of type 'bool'"
        self._lit_area = value

    @builtins.property
    def camera_sts_for_ahbc(self):
        """Message field 'camera_sts_for_ahbc'."""
        return self._camera_sts_for_ahbc

    @camera_sts_for_ahbc.setter
    def camera_sts_for_ahbc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_sts_for_ahbc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'camera_sts_for_ahbc' field must be an unsigned integer in [0, 255]"
        self._camera_sts_for_ahbc = value

    @builtins.property
    def too_many_cars(self):
        """Message field 'too_many_cars'."""
        return self._too_many_cars

    @too_many_cars.setter
    def too_many_cars(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'too_many_cars' field must be of type 'bool'"
        self._too_many_cars = value

    @builtins.property
    def e2e_adb_veh_obj(self):
        """Message field 'e2e_adb_veh_obj'."""
        return self._e2e_adb_veh_obj

    @e2e_adb_veh_obj.setter
    def e2e_adb_veh_obj(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eAdb
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
                 all(isinstance(v, E2eAdb) for v in value) and
                 True), \
                "The 'e2e_adb_veh_obj' field must be a set or sequence and each value of type 'E2eAdb'"
        self._e2e_adb_veh_obj = value

    @builtins.property
    def e2e_adb_traffic_sign(self):
        """Message field 'e2e_adb_traffic_sign'."""
        return self._e2e_adb_traffic_sign

    @e2e_adb_traffic_sign.setter
    def e2e_adb_traffic_sign(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eAdbTrafficSign
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
                 all(isinstance(v, E2eAdbTrafficSign) for v in value) and
                 True), \
                "The 'e2e_adb_traffic_sign' field must be a set or sequence and each value of type 'E2eAdbTrafficSign'"
        self._e2e_adb_traffic_sign = value
