# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/OCCVisualization.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'points_type'
# Member 'image_points_contours'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'voxel_pc_params'
# Member 'rfu_pixel_matrix'
# Member 'rfu_utm_matrix'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OCCVisualization(type):
    """Metaclass of message 'OCCVisualization'."""

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
                'deva_perception_msgs.msg.OCCVisualization')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__occ_visualization
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__occ_visualization
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__occ_visualization
            cls._TYPE_SUPPORT = module.type_support_msg__msg__occ_visualization
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__occ_visualization

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OCCVisualization(metaclass=Metaclass_OCCVisualization):
    """Message class 'OCCVisualization'."""

    __slots__ = [
        '_header',
        '_lidar_header',
        '_points_type',
        '_voxel_pc_params',
        '_image_points_contours',
        '_rfu_pixel_matrix',
        '_rfu_utm_matrix',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'lidar_header': 'deva_common_msgs/Header',
        'points_type': 'sequence<uint8>',
        'voxel_pc_params': 'float[4]',
        'image_points_contours': 'sequence<double>',
        'rfu_pixel_matrix': 'double[16]',
        'rfu_utm_matrix': 'double[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_common_msgs.msg import Header
        self.lidar_header = kwargs.get('lidar_header', Header())
        self.points_type = array.array('B', kwargs.get('points_type', []))
        if 'voxel_pc_params' not in kwargs:
            self.voxel_pc_params = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.voxel_pc_params = kwargs.get('voxel_pc_params')
        self.image_points_contours = array.array('d', kwargs.get('image_points_contours', []))
        if 'rfu_pixel_matrix' not in kwargs:
            self.rfu_pixel_matrix = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.rfu_pixel_matrix = kwargs.get('rfu_pixel_matrix')
        if 'rfu_utm_matrix' not in kwargs:
            self.rfu_utm_matrix = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.rfu_utm_matrix = kwargs.get('rfu_utm_matrix')

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
        if self.lidar_header != other.lidar_header:
            return False
        if self.points_type != other.points_type:
            return False
        if any(self.voxel_pc_params != other.voxel_pc_params):
            return False
        if self.image_points_contours != other.image_points_contours:
            return False
        if any(self.rfu_pixel_matrix != other.rfu_pixel_matrix):
            return False
        if any(self.rfu_utm_matrix != other.rfu_utm_matrix):
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
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def lidar_header(self):
        """Message field 'lidar_header'."""
        return self._lidar_header

    @lidar_header.setter
    def lidar_header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'lidar_header' field must be a sub message of type 'Header'"
        self._lidar_header = value

    @builtins.property
    def points_type(self):
        """Message field 'points_type'."""
        return self._points_type

    @points_type.setter
    def points_type(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'points_type' array.array() must have the type code of 'B'"
            self._points_type = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'points_type' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._points_type = array.array('B', value)

    @builtins.property
    def voxel_pc_params(self):
        """Message field 'voxel_pc_params'."""
        return self._voxel_pc_params

    @voxel_pc_params.setter
    def voxel_pc_params(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'voxel_pc_params' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'voxel_pc_params' numpy.ndarray() must have a size of 4"
            self._voxel_pc_params = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'voxel_pc_params' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._voxel_pc_params = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def image_points_contours(self):
        """Message field 'image_points_contours'."""
        return self._image_points_contours

    @image_points_contours.setter
    def image_points_contours(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'image_points_contours' array.array() must have the type code of 'd'"
            self._image_points_contours = value
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
                "The 'image_points_contours' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._image_points_contours = array.array('d', value)

    @builtins.property
    def rfu_pixel_matrix(self):
        """Message field 'rfu_pixel_matrix'."""
        return self._rfu_pixel_matrix

    @rfu_pixel_matrix.setter
    def rfu_pixel_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu_pixel_matrix' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'rfu_pixel_matrix' numpy.ndarray() must have a size of 16"
            self._rfu_pixel_matrix = value
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
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu_pixel_matrix' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu_pixel_matrix = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu_utm_matrix(self):
        """Message field 'rfu_utm_matrix'."""
        return self._rfu_utm_matrix

    @rfu_utm_matrix.setter
    def rfu_utm_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu_utm_matrix' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'rfu_utm_matrix' numpy.ndarray() must have a size of 16"
            self._rfu_utm_matrix = value
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
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu_utm_matrix' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu_utm_matrix = numpy.array(value, dtype=numpy.float64)
