# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/AvpDebugInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvpDebugInfo(type):
    """Metaclass of message 'AvpDebugInfo'."""

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
                'deva_planning_msgs.msg.AvpDebugInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__avp_debug_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__avp_debug_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__avp_debug_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__avp_debug_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__avp_debug_info

            from deva_planning_msgs.msg import AvpRefLine
            if AvpRefLine.__class__._TYPE_SUPPORT is None:
                AvpRefLine.__class__.__import_type_support__()

            from deva_planning_msgs.msg import AvpRefLineTreePointVec
            if AvpRefLineTreePointVec.__class__._TYPE_SUPPORT is None:
                AvpRefLineTreePointVec.__class__.__import_type_support__()

            from deva_planning_msgs.msg import MpcPathData
            if MpcPathData.__class__._TYPE_SUPPORT is None:
                MpcPathData.__class__.__import_type_support__()

            from deva_planning_msgs.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

            from deva_planning_msgs.msg import StitchData
            if StitchData.__class__._TYPE_SUPPORT is None:
                StitchData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvpDebugInfo(metaclass=Metaclass_AvpDebugInfo):
    """Message class 'AvpDebugInfo'."""

    __slots__ = [
        '_solve_num',
        '_acados_status',
        '_origin_ref_line',
        '_smooth_line',
        '_used_ref_line_tree',
        '_driver_path',
        '_now_mpc_data',
        '_now_path_data',
        '_past_path_data',
        '_boundary_poses',
        '_obstacle_poses',
        '_stitch_data',
    ]

    _fields_and_field_types = {
        'solve_num': 'int32',
        'acados_status': 'int32',
        'origin_ref_line': 'sequence<deva_planning_msgs/AvpRefLine>',
        'smooth_line': 'deva_planning_msgs/AvpRefLineTreePointVec',
        'used_ref_line_tree': 'sequence<deva_planning_msgs/AvpRefLineTreePointVec>',
        'driver_path': 'sequence<deva_planning_msgs/AvpRefLineTreePointVec>',
        'now_mpc_data': 'sequence<deva_planning_msgs/MpcPathData>',
        'now_path_data': 'sequence<deva_planning_msgs/MpcPathData>',
        'past_path_data': 'sequence<deva_planning_msgs/MpcPathData>',
        'boundary_poses': 'sequence<deva_planning_msgs/PathPoint>',
        'obstacle_poses': 'sequence<deva_planning_msgs/PathPoint>',
        'stitch_data': 'deva_planning_msgs/StitchData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'AvpRefLine')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'AvpRefLineTreePointVec'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'AvpRefLineTreePointVec')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'AvpRefLineTreePointVec')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'MpcPathData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'MpcPathData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'MpcPathData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'StitchData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.solve_num = kwargs.get('solve_num', int())
        self.acados_status = kwargs.get('acados_status', int())
        self.origin_ref_line = kwargs.get('origin_ref_line', [])
        from deva_planning_msgs.msg import AvpRefLineTreePointVec
        self.smooth_line = kwargs.get('smooth_line', AvpRefLineTreePointVec())
        self.used_ref_line_tree = kwargs.get('used_ref_line_tree', [])
        self.driver_path = kwargs.get('driver_path', [])
        self.now_mpc_data = kwargs.get('now_mpc_data', [])
        self.now_path_data = kwargs.get('now_path_data', [])
        self.past_path_data = kwargs.get('past_path_data', [])
        self.boundary_poses = kwargs.get('boundary_poses', [])
        self.obstacle_poses = kwargs.get('obstacle_poses', [])
        from deva_planning_msgs.msg import StitchData
        self.stitch_data = kwargs.get('stitch_data', StitchData())

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
        if self.solve_num != other.solve_num:
            return False
        if self.acados_status != other.acados_status:
            return False
        if self.origin_ref_line != other.origin_ref_line:
            return False
        if self.smooth_line != other.smooth_line:
            return False
        if self.used_ref_line_tree != other.used_ref_line_tree:
            return False
        if self.driver_path != other.driver_path:
            return False
        if self.now_mpc_data != other.now_mpc_data:
            return False
        if self.now_path_data != other.now_path_data:
            return False
        if self.past_path_data != other.past_path_data:
            return False
        if self.boundary_poses != other.boundary_poses:
            return False
        if self.obstacle_poses != other.obstacle_poses:
            return False
        if self.stitch_data != other.stitch_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def solve_num(self):
        """Message field 'solve_num'."""
        return self._solve_num

    @solve_num.setter
    def solve_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solve_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'solve_num' field must be an integer in [-2147483648, 2147483647]"
        self._solve_num = value

    @builtins.property
    def acados_status(self):
        """Message field 'acados_status'."""
        return self._acados_status

    @acados_status.setter
    def acados_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acados_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acados_status' field must be an integer in [-2147483648, 2147483647]"
        self._acados_status = value

    @builtins.property
    def origin_ref_line(self):
        """Message field 'origin_ref_line'."""
        return self._origin_ref_line

    @origin_ref_line.setter
    def origin_ref_line(self, value):
        if __debug__:
            from deva_planning_msgs.msg import AvpRefLine
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
                 all(isinstance(v, AvpRefLine) for v in value) and
                 True), \
                "The 'origin_ref_line' field must be a set or sequence and each value of type 'AvpRefLine'"
        self._origin_ref_line = value

    @builtins.property
    def smooth_line(self):
        """Message field 'smooth_line'."""
        return self._smooth_line

    @smooth_line.setter
    def smooth_line(self, value):
        if __debug__:
            from deva_planning_msgs.msg import AvpRefLineTreePointVec
            assert \
                isinstance(value, AvpRefLineTreePointVec), \
                "The 'smooth_line' field must be a sub message of type 'AvpRefLineTreePointVec'"
        self._smooth_line = value

    @builtins.property
    def used_ref_line_tree(self):
        """Message field 'used_ref_line_tree'."""
        return self._used_ref_line_tree

    @used_ref_line_tree.setter
    def used_ref_line_tree(self, value):
        if __debug__:
            from deva_planning_msgs.msg import AvpRefLineTreePointVec
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
                 all(isinstance(v, AvpRefLineTreePointVec) for v in value) and
                 True), \
                "The 'used_ref_line_tree' field must be a set or sequence and each value of type 'AvpRefLineTreePointVec'"
        self._used_ref_line_tree = value

    @builtins.property
    def driver_path(self):
        """Message field 'driver_path'."""
        return self._driver_path

    @driver_path.setter
    def driver_path(self, value):
        if __debug__:
            from deva_planning_msgs.msg import AvpRefLineTreePointVec
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
                 all(isinstance(v, AvpRefLineTreePointVec) for v in value) and
                 True), \
                "The 'driver_path' field must be a set or sequence and each value of type 'AvpRefLineTreePointVec'"
        self._driver_path = value

    @builtins.property
    def now_mpc_data(self):
        """Message field 'now_mpc_data'."""
        return self._now_mpc_data

    @now_mpc_data.setter
    def now_mpc_data(self, value):
        if __debug__:
            from deva_planning_msgs.msg import MpcPathData
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
                 all(isinstance(v, MpcPathData) for v in value) and
                 True), \
                "The 'now_mpc_data' field must be a set or sequence and each value of type 'MpcPathData'"
        self._now_mpc_data = value

    @builtins.property
    def now_path_data(self):
        """Message field 'now_path_data'."""
        return self._now_path_data

    @now_path_data.setter
    def now_path_data(self, value):
        if __debug__:
            from deva_planning_msgs.msg import MpcPathData
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
                 all(isinstance(v, MpcPathData) for v in value) and
                 True), \
                "The 'now_path_data' field must be a set or sequence and each value of type 'MpcPathData'"
        self._now_path_data = value

    @builtins.property
    def past_path_data(self):
        """Message field 'past_path_data'."""
        return self._past_path_data

    @past_path_data.setter
    def past_path_data(self, value):
        if __debug__:
            from deva_planning_msgs.msg import MpcPathData
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
                 all(isinstance(v, MpcPathData) for v in value) and
                 True), \
                "The 'past_path_data' field must be a set or sequence and each value of type 'MpcPathData'"
        self._past_path_data = value

    @builtins.property
    def boundary_poses(self):
        """Message field 'boundary_poses'."""
        return self._boundary_poses

    @boundary_poses.setter
    def boundary_poses(self, value):
        if __debug__:
            from deva_planning_msgs.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'boundary_poses' field must be a set or sequence and each value of type 'PathPoint'"
        self._boundary_poses = value

    @builtins.property
    def obstacle_poses(self):
        """Message field 'obstacle_poses'."""
        return self._obstacle_poses

    @obstacle_poses.setter
    def obstacle_poses(self, value):
        if __debug__:
            from deva_planning_msgs.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'obstacle_poses' field must be a set or sequence and each value of type 'PathPoint'"
        self._obstacle_poses = value

    @builtins.property
    def stitch_data(self):
        """Message field 'stitch_data'."""
        return self._stitch_data

    @stitch_data.setter
    def stitch_data(self, value):
        if __debug__:
            from deva_planning_msgs.msg import StitchData
            assert \
                isinstance(value, StitchData), \
                "The 'stitch_data' field must be a sub message of type 'StitchData'"
        self._stitch_data = value
