# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/PlanningLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'localization'
# Member 'chassis'
# Member 'pad_message'
# Member 'pull_over_msg'
# Member 'traffic_poles'
# Member 'apollo_decision'
# Member 'prediction'
# Member 'megmap_proto'
# Member 'state_context'
# Member 'target_trajectory'
# Member 'speed_solver_debug_sequence'
# Member 'trajectory_solver_debug_sequence'
# Member 'planning_log'
# Member 'navigator_routing'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningLog(type):
    """Metaclass of message 'PlanningLog'."""

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
                'deva_planning_msgs.msg.PlanningLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_log

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


class PlanningLog(metaclass=Metaclass_PlanningLog):
    """Message class 'PlanningLog'."""

    __slots__ = [
        '_header',
        '_localization',
        '_chassis',
        '_pad_message',
        '_pull_over_msg',
        '_traffic_poles',
        '_apollo_decision',
        '_prediction',
        '_megmap_proto',
        '_state_context',
        '_target_trajectory',
        '_speed_solver_debug_sequence',
        '_trajectory_solver_debug_sequence',
        '_planning_log',
        '_navigator_routing',
        '_drving_state',
        '_auto_function',
        '_drive_action',
        '_env_info_index',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'localization': 'sequence<uint8>',
        'chassis': 'sequence<uint8>',
        'pad_message': 'sequence<uint8>',
        'pull_over_msg': 'sequence<uint8>',
        'traffic_poles': 'sequence<uint8>',
        'apollo_decision': 'sequence<uint8>',
        'prediction': 'sequence<uint8>',
        'megmap_proto': 'sequence<uint8>',
        'state_context': 'sequence<uint8>',
        'target_trajectory': 'sequence<uint8>',
        'speed_solver_debug_sequence': 'sequence<uint8>',
        'trajectory_solver_debug_sequence': 'sequence<uint8>',
        'planning_log': 'sequence<uint8>',
        'navigator_routing': 'sequence<uint8>',
        'drving_state': 'uint32',
        'auto_function': 'uint32',
        'drive_action': 'uint32',
        'env_info_index': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.localization = array.array('B', kwargs.get('localization', []))
        self.chassis = array.array('B', kwargs.get('chassis', []))
        self.pad_message = array.array('B', kwargs.get('pad_message', []))
        self.pull_over_msg = array.array('B', kwargs.get('pull_over_msg', []))
        self.traffic_poles = array.array('B', kwargs.get('traffic_poles', []))
        self.apollo_decision = array.array('B', kwargs.get('apollo_decision', []))
        self.prediction = array.array('B', kwargs.get('prediction', []))
        self.megmap_proto = array.array('B', kwargs.get('megmap_proto', []))
        self.state_context = array.array('B', kwargs.get('state_context', []))
        self.target_trajectory = array.array('B', kwargs.get('target_trajectory', []))
        self.speed_solver_debug_sequence = array.array('B', kwargs.get('speed_solver_debug_sequence', []))
        self.trajectory_solver_debug_sequence = array.array('B', kwargs.get('trajectory_solver_debug_sequence', []))
        self.planning_log = array.array('B', kwargs.get('planning_log', []))
        self.navigator_routing = array.array('B', kwargs.get('navigator_routing', []))
        self.drving_state = kwargs.get('drving_state', int())
        self.auto_function = kwargs.get('auto_function', int())
        self.drive_action = kwargs.get('drive_action', int())
        self.env_info_index = kwargs.get('env_info_index', int())

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
        if self.localization != other.localization:
            return False
        if self.chassis != other.chassis:
            return False
        if self.pad_message != other.pad_message:
            return False
        if self.pull_over_msg != other.pull_over_msg:
            return False
        if self.traffic_poles != other.traffic_poles:
            return False
        if self.apollo_decision != other.apollo_decision:
            return False
        if self.prediction != other.prediction:
            return False
        if self.megmap_proto != other.megmap_proto:
            return False
        if self.state_context != other.state_context:
            return False
        if self.target_trajectory != other.target_trajectory:
            return False
        if self.speed_solver_debug_sequence != other.speed_solver_debug_sequence:
            return False
        if self.trajectory_solver_debug_sequence != other.trajectory_solver_debug_sequence:
            return False
        if self.planning_log != other.planning_log:
            return False
        if self.navigator_routing != other.navigator_routing:
            return False
        if self.drving_state != other.drving_state:
            return False
        if self.auto_function != other.auto_function:
            return False
        if self.drive_action != other.drive_action:
            return False
        if self.env_info_index != other.env_info_index:
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
    def localization(self):
        """Message field 'localization'."""
        return self._localization

    @localization.setter
    def localization(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'localization' array.array() must have the type code of 'B'"
            self._localization = value
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
                "The 'localization' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._localization = array.array('B', value)

    @builtins.property
    def chassis(self):
        """Message field 'chassis'."""
        return self._chassis

    @chassis.setter
    def chassis(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'chassis' array.array() must have the type code of 'B'"
            self._chassis = value
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
                "The 'chassis' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._chassis = array.array('B', value)

    @builtins.property
    def pad_message(self):
        """Message field 'pad_message'."""
        return self._pad_message

    @pad_message.setter
    def pad_message(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'pad_message' array.array() must have the type code of 'B'"
            self._pad_message = value
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
                "The 'pad_message' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._pad_message = array.array('B', value)

    @builtins.property
    def pull_over_msg(self):
        """Message field 'pull_over_msg'."""
        return self._pull_over_msg

    @pull_over_msg.setter
    def pull_over_msg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'pull_over_msg' array.array() must have the type code of 'B'"
            self._pull_over_msg = value
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
                "The 'pull_over_msg' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._pull_over_msg = array.array('B', value)

    @builtins.property
    def traffic_poles(self):
        """Message field 'traffic_poles'."""
        return self._traffic_poles

    @traffic_poles.setter
    def traffic_poles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'traffic_poles' array.array() must have the type code of 'B'"
            self._traffic_poles = value
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
                "The 'traffic_poles' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._traffic_poles = array.array('B', value)

    @builtins.property
    def apollo_decision(self):
        """Message field 'apollo_decision'."""
        return self._apollo_decision

    @apollo_decision.setter
    def apollo_decision(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'apollo_decision' array.array() must have the type code of 'B'"
            self._apollo_decision = value
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
                "The 'apollo_decision' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._apollo_decision = array.array('B', value)

    @builtins.property
    def prediction(self):
        """Message field 'prediction'."""
        return self._prediction

    @prediction.setter
    def prediction(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'prediction' array.array() must have the type code of 'B'"
            self._prediction = value
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
                "The 'prediction' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._prediction = array.array('B', value)

    @builtins.property
    def megmap_proto(self):
        """Message field 'megmap_proto'."""
        return self._megmap_proto

    @megmap_proto.setter
    def megmap_proto(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'megmap_proto' array.array() must have the type code of 'B'"
            self._megmap_proto = value
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
                "The 'megmap_proto' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._megmap_proto = array.array('B', value)

    @builtins.property
    def state_context(self):
        """Message field 'state_context'."""
        return self._state_context

    @state_context.setter
    def state_context(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'state_context' array.array() must have the type code of 'B'"
            self._state_context = value
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
                "The 'state_context' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._state_context = array.array('B', value)

    @builtins.property
    def target_trajectory(self):
        """Message field 'target_trajectory'."""
        return self._target_trajectory

    @target_trajectory.setter
    def target_trajectory(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'target_trajectory' array.array() must have the type code of 'B'"
            self._target_trajectory = value
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
                "The 'target_trajectory' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._target_trajectory = array.array('B', value)

    @builtins.property
    def speed_solver_debug_sequence(self):
        """Message field 'speed_solver_debug_sequence'."""
        return self._speed_solver_debug_sequence

    @speed_solver_debug_sequence.setter
    def speed_solver_debug_sequence(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'speed_solver_debug_sequence' array.array() must have the type code of 'B'"
            self._speed_solver_debug_sequence = value
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
                "The 'speed_solver_debug_sequence' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._speed_solver_debug_sequence = array.array('B', value)

    @builtins.property
    def trajectory_solver_debug_sequence(self):
        """Message field 'trajectory_solver_debug_sequence'."""
        return self._trajectory_solver_debug_sequence

    @trajectory_solver_debug_sequence.setter
    def trajectory_solver_debug_sequence(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'trajectory_solver_debug_sequence' array.array() must have the type code of 'B'"
            self._trajectory_solver_debug_sequence = value
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
                "The 'trajectory_solver_debug_sequence' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._trajectory_solver_debug_sequence = array.array('B', value)

    @builtins.property
    def planning_log(self):
        """Message field 'planning_log'."""
        return self._planning_log

    @planning_log.setter
    def planning_log(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'planning_log' array.array() must have the type code of 'B'"
            self._planning_log = value
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
                "The 'planning_log' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._planning_log = array.array('B', value)

    @builtins.property
    def navigator_routing(self):
        """Message field 'navigator_routing'."""
        return self._navigator_routing

    @navigator_routing.setter
    def navigator_routing(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'navigator_routing' array.array() must have the type code of 'B'"
            self._navigator_routing = value
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
                "The 'navigator_routing' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._navigator_routing = array.array('B', value)

    @builtins.property
    def drving_state(self):
        """Message field 'drving_state'."""
        return self._drving_state

    @drving_state.setter
    def drving_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drving_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'drving_state' field must be an unsigned integer in [0, 4294967295]"
        self._drving_state = value

    @builtins.property
    def auto_function(self):
        """Message field 'auto_function'."""
        return self._auto_function

    @auto_function.setter
    def auto_function(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_function' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'auto_function' field must be an unsigned integer in [0, 4294967295]"
        self._auto_function = value

    @builtins.property
    def drive_action(self):
        """Message field 'drive_action'."""
        return self._drive_action

    @drive_action.setter
    def drive_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drive_action' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'drive_action' field must be an unsigned integer in [0, 4294967295]"
        self._drive_action = value

    @builtins.property
    def env_info_index(self):
        """Message field 'env_info_index'."""
        return self._env_info_index

    @env_info_index.setter
    def env_info_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'env_info_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'env_info_index' field must be an unsigned integer in [0, 4294967295]"
        self._env_info_index = value
