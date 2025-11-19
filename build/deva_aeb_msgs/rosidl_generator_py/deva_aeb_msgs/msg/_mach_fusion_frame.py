# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/MachFusionFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rfu2camera_pose'
# Member 'ego2camera_pose'
# Member 'rfu_ego_pose_matirx'
# Member 'rfu_imu_pose_matirx'
# Member 'ego_world_pose_matirx'
# Member 'camera_k_matrix'
# Member 'imu_world_translation'
# Member 'imu_world_rotation'
# Member 'rfu2camera_pose_front'
# Member 'rfu2camera_pose_front_left'
# Member 'rfu2camera_pose_front_right'
# Member 'rfu2camera_pose_back'
# Member 'rfu2camera_pose_back_left'
# Member 'rfu2camera_pose_back_right'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachFusionFrame(type):
    """Metaclass of message 'MachFusionFrame'."""

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
            module = import_type_support('deva_aeb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_aeb_msgs.msg.MachFusionFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mach_fusion_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mach_fusion_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mach_fusion_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mach_fusion_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mach_fusion_frame

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


class MachFusionFrame(metaclass=Metaclass_MachFusionFrame):
    """Message class 'MachFusionFrame'."""

    __slots__ = [
        '_header',
        '_frame_id',
        '_rv_timestamp',
        '_bev_timestamp',
        '_front_radar_timestamp',
        '_front_right_radar_timestamp',
        '_front_left_radar_timestamp',
        '_back_left_radar_timestamp',
        '_back_right_radar_timestamp',
        '_lidar_timestamp',
        '_ins_timestamp',
        '_rfu2camera_pose',
        '_ego2camera_pose',
        '_rfu_ego_pose_matirx',
        '_rfu_imu_pose_matirx',
        '_ego_world_pose_matirx',
        '_camera_k_matrix',
        '_imu_world_translation',
        '_imu_world_rotation',
        '_rfu2camera_pose_front',
        '_rfu2camera_pose_front_left',
        '_rfu2camera_pose_front_right',
        '_rfu2camera_pose_back',
        '_rfu2camera_pose_back_left',
        '_rfu2camera_pose_back_right',
        '_vehile_report_time',
        '_reserve1',
        '_reserve2',
        '_reserve3',
        '_reserve4',
        '_reserve5',
        '_reserve6',
        '_reserve7',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'frame_id': 'uint64',
        'rv_timestamp': 'uint64',
        'bev_timestamp': 'uint64',
        'front_radar_timestamp': 'uint64',
        'front_right_radar_timestamp': 'uint64',
        'front_left_radar_timestamp': 'uint64',
        'back_left_radar_timestamp': 'uint64',
        'back_right_radar_timestamp': 'uint64',
        'lidar_timestamp': 'uint64',
        'ins_timestamp': 'uint64',
        'rfu2camera_pose': 'double[7]',
        'ego2camera_pose': 'double[7]',
        'rfu_ego_pose_matirx': 'double[16]',
        'rfu_imu_pose_matirx': 'double[16]',
        'ego_world_pose_matirx': 'double[16]',
        'camera_k_matrix': 'double[9]',
        'imu_world_translation': 'double[3]',
        'imu_world_rotation': 'double[4]',
        'rfu2camera_pose_front': 'double[7]',
        'rfu2camera_pose_front_left': 'double[7]',
        'rfu2camera_pose_front_right': 'double[7]',
        'rfu2camera_pose_back': 'double[7]',
        'rfu2camera_pose_back_left': 'double[7]',
        'rfu2camera_pose_back_right': 'double[7]',
        'vehile_report_time': 'uint64',
        'reserve1': 'int64',
        'reserve2': 'int64',
        'reserve3': 'int64',
        'reserve4': 'int64',
        'reserve5': 'int64',
        'reserve6': 'int64',
        'reserve7': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_id = kwargs.get('frame_id', int())
        self.rv_timestamp = kwargs.get('rv_timestamp', int())
        self.bev_timestamp = kwargs.get('bev_timestamp', int())
        self.front_radar_timestamp = kwargs.get('front_radar_timestamp', int())
        self.front_right_radar_timestamp = kwargs.get('front_right_radar_timestamp', int())
        self.front_left_radar_timestamp = kwargs.get('front_left_radar_timestamp', int())
        self.back_left_radar_timestamp = kwargs.get('back_left_radar_timestamp', int())
        self.back_right_radar_timestamp = kwargs.get('back_right_radar_timestamp', int())
        self.lidar_timestamp = kwargs.get('lidar_timestamp', int())
        self.ins_timestamp = kwargs.get('ins_timestamp', int())
        if 'rfu2camera_pose' not in kwargs:
            self.rfu2camera_pose = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose = kwargs.get('rfu2camera_pose')
        if 'ego2camera_pose' not in kwargs:
            self.ego2camera_pose = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.ego2camera_pose = kwargs.get('ego2camera_pose')
        if 'rfu_ego_pose_matirx' not in kwargs:
            self.rfu_ego_pose_matirx = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.rfu_ego_pose_matirx = kwargs.get('rfu_ego_pose_matirx')
        if 'rfu_imu_pose_matirx' not in kwargs:
            self.rfu_imu_pose_matirx = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.rfu_imu_pose_matirx = kwargs.get('rfu_imu_pose_matirx')
        if 'ego_world_pose_matirx' not in kwargs:
            self.ego_world_pose_matirx = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.ego_world_pose_matirx = kwargs.get('ego_world_pose_matirx')
        if 'camera_k_matrix' not in kwargs:
            self.camera_k_matrix = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.camera_k_matrix = kwargs.get('camera_k_matrix')
        if 'imu_world_translation' not in kwargs:
            self.imu_world_translation = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.imu_world_translation = kwargs.get('imu_world_translation')
        if 'imu_world_rotation' not in kwargs:
            self.imu_world_rotation = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.imu_world_rotation = kwargs.get('imu_world_rotation')
        if 'rfu2camera_pose_front' not in kwargs:
            self.rfu2camera_pose_front = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_front = kwargs.get('rfu2camera_pose_front')
        if 'rfu2camera_pose_front_left' not in kwargs:
            self.rfu2camera_pose_front_left = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_front_left = kwargs.get('rfu2camera_pose_front_left')
        if 'rfu2camera_pose_front_right' not in kwargs:
            self.rfu2camera_pose_front_right = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_front_right = kwargs.get('rfu2camera_pose_front_right')
        if 'rfu2camera_pose_back' not in kwargs:
            self.rfu2camera_pose_back = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_back = kwargs.get('rfu2camera_pose_back')
        if 'rfu2camera_pose_back_left' not in kwargs:
            self.rfu2camera_pose_back_left = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_back_left = kwargs.get('rfu2camera_pose_back_left')
        if 'rfu2camera_pose_back_right' not in kwargs:
            self.rfu2camera_pose_back_right = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.rfu2camera_pose_back_right = kwargs.get('rfu2camera_pose_back_right')
        self.vehile_report_time = kwargs.get('vehile_report_time', int())
        self.reserve1 = kwargs.get('reserve1', int())
        self.reserve2 = kwargs.get('reserve2', int())
        self.reserve3 = kwargs.get('reserve3', int())
        self.reserve4 = kwargs.get('reserve4', int())
        self.reserve5 = kwargs.get('reserve5', int())
        self.reserve6 = kwargs.get('reserve6', int())
        self.reserve7 = kwargs.get('reserve7', int())

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
        if self.frame_id != other.frame_id:
            return False
        if self.rv_timestamp != other.rv_timestamp:
            return False
        if self.bev_timestamp != other.bev_timestamp:
            return False
        if self.front_radar_timestamp != other.front_radar_timestamp:
            return False
        if self.front_right_radar_timestamp != other.front_right_radar_timestamp:
            return False
        if self.front_left_radar_timestamp != other.front_left_radar_timestamp:
            return False
        if self.back_left_radar_timestamp != other.back_left_radar_timestamp:
            return False
        if self.back_right_radar_timestamp != other.back_right_radar_timestamp:
            return False
        if self.lidar_timestamp != other.lidar_timestamp:
            return False
        if self.ins_timestamp != other.ins_timestamp:
            return False
        if any(self.rfu2camera_pose != other.rfu2camera_pose):
            return False
        if any(self.ego2camera_pose != other.ego2camera_pose):
            return False
        if any(self.rfu_ego_pose_matirx != other.rfu_ego_pose_matirx):
            return False
        if any(self.rfu_imu_pose_matirx != other.rfu_imu_pose_matirx):
            return False
        if any(self.ego_world_pose_matirx != other.ego_world_pose_matirx):
            return False
        if any(self.camera_k_matrix != other.camera_k_matrix):
            return False
        if any(self.imu_world_translation != other.imu_world_translation):
            return False
        if any(self.imu_world_rotation != other.imu_world_rotation):
            return False
        if any(self.rfu2camera_pose_front != other.rfu2camera_pose_front):
            return False
        if any(self.rfu2camera_pose_front_left != other.rfu2camera_pose_front_left):
            return False
        if any(self.rfu2camera_pose_front_right != other.rfu2camera_pose_front_right):
            return False
        if any(self.rfu2camera_pose_back != other.rfu2camera_pose_back):
            return False
        if any(self.rfu2camera_pose_back_left != other.rfu2camera_pose_back_left):
            return False
        if any(self.rfu2camera_pose_back_right != other.rfu2camera_pose_back_right):
            return False
        if self.vehile_report_time != other.vehile_report_time:
            return False
        if self.reserve1 != other.reserve1:
            return False
        if self.reserve2 != other.reserve2:
            return False
        if self.reserve3 != other.reserve3:
            return False
        if self.reserve4 != other.reserve4:
            return False
        if self.reserve5 != other.reserve5:
            return False
        if self.reserve6 != other.reserve6:
            return False
        if self.reserve7 != other.reserve7:
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
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame_id = value

    @builtins.property
    def rv_timestamp(self):
        """Message field 'rv_timestamp'."""
        return self._rv_timestamp

    @rv_timestamp.setter
    def rv_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rv_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rv_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rv_timestamp = value

    @builtins.property
    def bev_timestamp(self):
        """Message field 'bev_timestamp'."""
        return self._bev_timestamp

    @bev_timestamp.setter
    def bev_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bev_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'bev_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._bev_timestamp = value

    @builtins.property
    def front_radar_timestamp(self):
        """Message field 'front_radar_timestamp'."""
        return self._front_radar_timestamp

    @front_radar_timestamp.setter
    def front_radar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_radar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'front_radar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._front_radar_timestamp = value

    @builtins.property
    def front_right_radar_timestamp(self):
        """Message field 'front_right_radar_timestamp'."""
        return self._front_right_radar_timestamp

    @front_right_radar_timestamp.setter
    def front_right_radar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_right_radar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'front_right_radar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._front_right_radar_timestamp = value

    @builtins.property
    def front_left_radar_timestamp(self):
        """Message field 'front_left_radar_timestamp'."""
        return self._front_left_radar_timestamp

    @front_left_radar_timestamp.setter
    def front_left_radar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_left_radar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'front_left_radar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._front_left_radar_timestamp = value

    @builtins.property
    def back_left_radar_timestamp(self):
        """Message field 'back_left_radar_timestamp'."""
        return self._back_left_radar_timestamp

    @back_left_radar_timestamp.setter
    def back_left_radar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_left_radar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'back_left_radar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._back_left_radar_timestamp = value

    @builtins.property
    def back_right_radar_timestamp(self):
        """Message field 'back_right_radar_timestamp'."""
        return self._back_right_radar_timestamp

    @back_right_radar_timestamp.setter
    def back_right_radar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_right_radar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'back_right_radar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._back_right_radar_timestamp = value

    @builtins.property
    def lidar_timestamp(self):
        """Message field 'lidar_timestamp'."""
        return self._lidar_timestamp

    @lidar_timestamp.setter
    def lidar_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lidar_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'lidar_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._lidar_timestamp = value

    @builtins.property
    def ins_timestamp(self):
        """Message field 'ins_timestamp'."""
        return self._ins_timestamp

    @ins_timestamp.setter
    def ins_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ins_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ins_timestamp = value

    @builtins.property
    def rfu2camera_pose(self):
        """Message field 'rfu2camera_pose'."""
        return self._rfu2camera_pose

    @rfu2camera_pose.setter
    def rfu2camera_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ego2camera_pose(self):
        """Message field 'ego2camera_pose'."""
        return self._ego2camera_pose

    @ego2camera_pose.setter
    def ego2camera_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ego2camera_pose' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'ego2camera_pose' numpy.ndarray() must have a size of 7"
            self._ego2camera_pose = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ego2camera_pose' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ego2camera_pose = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu_ego_pose_matirx(self):
        """Message field 'rfu_ego_pose_matirx'."""
        return self._rfu_ego_pose_matirx

    @rfu_ego_pose_matirx.setter
    def rfu_ego_pose_matirx(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu_ego_pose_matirx' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'rfu_ego_pose_matirx' numpy.ndarray() must have a size of 16"
            self._rfu_ego_pose_matirx = value
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
                "The 'rfu_ego_pose_matirx' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu_ego_pose_matirx = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu_imu_pose_matirx(self):
        """Message field 'rfu_imu_pose_matirx'."""
        return self._rfu_imu_pose_matirx

    @rfu_imu_pose_matirx.setter
    def rfu_imu_pose_matirx(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu_imu_pose_matirx' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'rfu_imu_pose_matirx' numpy.ndarray() must have a size of 16"
            self._rfu_imu_pose_matirx = value
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
                "The 'rfu_imu_pose_matirx' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu_imu_pose_matirx = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ego_world_pose_matirx(self):
        """Message field 'ego_world_pose_matirx'."""
        return self._ego_world_pose_matirx

    @ego_world_pose_matirx.setter
    def ego_world_pose_matirx(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ego_world_pose_matirx' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'ego_world_pose_matirx' numpy.ndarray() must have a size of 16"
            self._ego_world_pose_matirx = value
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
                "The 'ego_world_pose_matirx' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ego_world_pose_matirx = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def camera_k_matrix(self):
        """Message field 'camera_k_matrix'."""
        return self._camera_k_matrix

    @camera_k_matrix.setter
    def camera_k_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'camera_k_matrix' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'camera_k_matrix' numpy.ndarray() must have a size of 9"
            self._camera_k_matrix = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'camera_k_matrix' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._camera_k_matrix = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def imu_world_translation(self):
        """Message field 'imu_world_translation'."""
        return self._imu_world_translation

    @imu_world_translation.setter
    def imu_world_translation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'imu_world_translation' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'imu_world_translation' numpy.ndarray() must have a size of 3"
            self._imu_world_translation = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'imu_world_translation' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._imu_world_translation = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def imu_world_rotation(self):
        """Message field 'imu_world_rotation'."""
        return self._imu_world_rotation

    @imu_world_rotation.setter
    def imu_world_rotation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'imu_world_rotation' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'imu_world_rotation' numpy.ndarray() must have a size of 4"
            self._imu_world_rotation = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'imu_world_rotation' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._imu_world_rotation = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_front(self):
        """Message field 'rfu2camera_pose_front'."""
        return self._rfu2camera_pose_front

    @rfu2camera_pose_front.setter
    def rfu2camera_pose_front(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_front' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_front' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_front = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_front' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_front = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_front_left(self):
        """Message field 'rfu2camera_pose_front_left'."""
        return self._rfu2camera_pose_front_left

    @rfu2camera_pose_front_left.setter
    def rfu2camera_pose_front_left(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_front_left' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_front_left' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_front_left = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_front_left' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_front_left = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_front_right(self):
        """Message field 'rfu2camera_pose_front_right'."""
        return self._rfu2camera_pose_front_right

    @rfu2camera_pose_front_right.setter
    def rfu2camera_pose_front_right(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_front_right' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_front_right' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_front_right = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_front_right' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_front_right = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_back(self):
        """Message field 'rfu2camera_pose_back'."""
        return self._rfu2camera_pose_back

    @rfu2camera_pose_back.setter
    def rfu2camera_pose_back(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_back' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_back' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_back = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_back' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_back = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_back_left(self):
        """Message field 'rfu2camera_pose_back_left'."""
        return self._rfu2camera_pose_back_left

    @rfu2camera_pose_back_left.setter
    def rfu2camera_pose_back_left(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_back_left' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_back_left' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_back_left = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_back_left' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_back_left = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rfu2camera_pose_back_right(self):
        """Message field 'rfu2camera_pose_back_right'."""
        return self._rfu2camera_pose_back_right

    @rfu2camera_pose_back_right.setter
    def rfu2camera_pose_back_right(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'rfu2camera_pose_back_right' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'rfu2camera_pose_back_right' numpy.ndarray() must have a size of 7"
            self._rfu2camera_pose_back_right = value
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rfu2camera_pose_back_right' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rfu2camera_pose_back_right = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def vehile_report_time(self):
        """Message field 'vehile_report_time'."""
        return self._vehile_report_time

    @vehile_report_time.setter
    def vehile_report_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehile_report_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'vehile_report_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._vehile_report_time = value

    @builtins.property
    def reserve1(self):
        """Message field 'reserve1'."""
        return self._reserve1

    @reserve1.setter
    def reserve1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve1 = value

    @builtins.property
    def reserve2(self):
        """Message field 'reserve2'."""
        return self._reserve2

    @reserve2.setter
    def reserve2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve2 = value

    @builtins.property
    def reserve3(self):
        """Message field 'reserve3'."""
        return self._reserve3

    @reserve3.setter
    def reserve3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve3' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve3' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve3 = value

    @builtins.property
    def reserve4(self):
        """Message field 'reserve4'."""
        return self._reserve4

    @reserve4.setter
    def reserve4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve4' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve4' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve4 = value

    @builtins.property
    def reserve5(self):
        """Message field 'reserve5'."""
        return self._reserve5

    @reserve5.setter
    def reserve5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve5' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve5' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve5 = value

    @builtins.property
    def reserve6(self):
        """Message field 'reserve6'."""
        return self._reserve6

    @reserve6.setter
    def reserve6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve6' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve6' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve6 = value

    @builtins.property
    def reserve7(self):
        """Message field 'reserve7'."""
        return self._reserve7

    @reserve7.setter
    def reserve7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve7' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'reserve7' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._reserve7 = value
