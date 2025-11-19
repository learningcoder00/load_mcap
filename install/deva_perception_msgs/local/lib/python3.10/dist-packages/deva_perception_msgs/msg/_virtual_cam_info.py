# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/VirtualCamInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'resolution'
# Member 'ori_intrinsic'
# Member 'vir_intrinsic'
# Member 'ori_extrinsic'
# Member 'vir_extrinsic'
# Member 'mapx'
# Member 'mapy'
# Member 'pinhole_intrinsic'
# Member 'crops'
# Member 'input_size'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VirtualCamInfo(type):
    """Metaclass of message 'VirtualCamInfo'."""

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
                'deva_perception_msgs.msg.VirtualCamInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__virtual_cam_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__virtual_cam_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__virtual_cam_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__virtual_cam_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__virtual_cam_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VirtualCamInfo(metaclass=Metaclass_VirtualCamInfo):
    """Message class 'VirtualCamInfo'."""

    __slots__ = [
        '_cam_name',
        '_resolution',
        '_distort_model',
        '_ori_intrinsic',
        '_vir_intrinsic',
        '_ori_extrinsic',
        '_vir_extrinsic',
        '_mapx',
        '_mapy',
        '_pinhole_intrinsic',
        '_crops',
        '_input_size',
    ]

    _fields_and_field_types = {
        'cam_name': 'string',
        'resolution': 'sequence<int32>',
        'distort_model': 'string',
        'ori_intrinsic': 'sequence<float>',
        'vir_intrinsic': 'sequence<float>',
        'ori_extrinsic': 'sequence<float>',
        'vir_extrinsic': 'sequence<float>',
        'mapx': 'sequence<float>',
        'mapy': 'sequence<float>',
        'pinhole_intrinsic': 'sequence<float>',
        'crops': 'sequence<int32>',
        'input_size': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cam_name = kwargs.get('cam_name', str())
        self.resolution = array.array('i', kwargs.get('resolution', []))
        self.distort_model = kwargs.get('distort_model', str())
        self.ori_intrinsic = array.array('f', kwargs.get('ori_intrinsic', []))
        self.vir_intrinsic = array.array('f', kwargs.get('vir_intrinsic', []))
        self.ori_extrinsic = array.array('f', kwargs.get('ori_extrinsic', []))
        self.vir_extrinsic = array.array('f', kwargs.get('vir_extrinsic', []))
        self.mapx = array.array('f', kwargs.get('mapx', []))
        self.mapy = array.array('f', kwargs.get('mapy', []))
        self.pinhole_intrinsic = array.array('f', kwargs.get('pinhole_intrinsic', []))
        self.crops = array.array('i', kwargs.get('crops', []))
        self.input_size = array.array('i', kwargs.get('input_size', []))

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
        if self.cam_name != other.cam_name:
            return False
        if self.resolution != other.resolution:
            return False
        if self.distort_model != other.distort_model:
            return False
        if self.ori_intrinsic != other.ori_intrinsic:
            return False
        if self.vir_intrinsic != other.vir_intrinsic:
            return False
        if self.ori_extrinsic != other.ori_extrinsic:
            return False
        if self.vir_extrinsic != other.vir_extrinsic:
            return False
        if self.mapx != other.mapx:
            return False
        if self.mapy != other.mapy:
            return False
        if self.pinhole_intrinsic != other.pinhole_intrinsic:
            return False
        if self.crops != other.crops:
            return False
        if self.input_size != other.input_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cam_name(self):
        """Message field 'cam_name'."""
        return self._cam_name

    @cam_name.setter
    def cam_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cam_name' field must be of type 'str'"
        self._cam_name = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'resolution' array.array() must have the type code of 'i'"
            self._resolution = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'resolution' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._resolution = array.array('i', value)

    @builtins.property
    def distort_model(self):
        """Message field 'distort_model'."""
        return self._distort_model

    @distort_model.setter
    def distort_model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'distort_model' field must be of type 'str'"
        self._distort_model = value

    @builtins.property
    def ori_intrinsic(self):
        """Message field 'ori_intrinsic'."""
        return self._ori_intrinsic

    @ori_intrinsic.setter
    def ori_intrinsic(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ori_intrinsic' array.array() must have the type code of 'f'"
            self._ori_intrinsic = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ori_intrinsic' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ori_intrinsic = array.array('f', value)

    @builtins.property
    def vir_intrinsic(self):
        """Message field 'vir_intrinsic'."""
        return self._vir_intrinsic

    @vir_intrinsic.setter
    def vir_intrinsic(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vir_intrinsic' array.array() must have the type code of 'f'"
            self._vir_intrinsic = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vir_intrinsic' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vir_intrinsic = array.array('f', value)

    @builtins.property
    def ori_extrinsic(self):
        """Message field 'ori_extrinsic'."""
        return self._ori_extrinsic

    @ori_extrinsic.setter
    def ori_extrinsic(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ori_extrinsic' array.array() must have the type code of 'f'"
            self._ori_extrinsic = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ori_extrinsic' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ori_extrinsic = array.array('f', value)

    @builtins.property
    def vir_extrinsic(self):
        """Message field 'vir_extrinsic'."""
        return self._vir_extrinsic

    @vir_extrinsic.setter
    def vir_extrinsic(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vir_extrinsic' array.array() must have the type code of 'f'"
            self._vir_extrinsic = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vir_extrinsic' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vir_extrinsic = array.array('f', value)

    @builtins.property
    def mapx(self):
        """Message field 'mapx'."""
        return self._mapx

    @mapx.setter
    def mapx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mapx' array.array() must have the type code of 'f'"
            self._mapx = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'mapx' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mapx = array.array('f', value)

    @builtins.property
    def mapy(self):
        """Message field 'mapy'."""
        return self._mapy

    @mapy.setter
    def mapy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'mapy' array.array() must have the type code of 'f'"
            self._mapy = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'mapy' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mapy = array.array('f', value)

    @builtins.property
    def pinhole_intrinsic(self):
        """Message field 'pinhole_intrinsic'."""
        return self._pinhole_intrinsic

    @pinhole_intrinsic.setter
    def pinhole_intrinsic(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'pinhole_intrinsic' array.array() must have the type code of 'f'"
            self._pinhole_intrinsic = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'pinhole_intrinsic' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pinhole_intrinsic = array.array('f', value)

    @builtins.property
    def crops(self):
        """Message field 'crops'."""
        return self._crops

    @crops.setter
    def crops(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'crops' array.array() must have the type code of 'i'"
            self._crops = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'crops' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._crops = array.array('i', value)

    @builtins.property
    def input_size(self):
        """Message field 'input_size'."""
        return self._input_size

    @input_size.setter
    def input_size(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'input_size' array.array() must have the type code of 'i'"
            self._input_size = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'input_size' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._input_size = array.array('i', value)
