# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_mdriver_msgs:msg/CenterLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pre_ids'
# Member 'suc_ids'
# Member 'traffic_elem_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CenterLine(type):
    """Metaclass of message 'CenterLine'."""

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
            module = import_type_support('deva_mdriver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_mdriver_msgs.msg.CenterLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__center_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__center_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__center_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__center_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__center_line

            from deva_mdriver_msgs.msg import CenterLinePoint
            if CenterLinePoint.__class__._TYPE_SUPPORT is None:
                CenterLinePoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CenterLine(metaclass=Metaclass_CenterLine):
    """Message class 'CenterLine'."""

    __slots__ = [
        '_id',
        '_pts',
        '_pre_ids',
        '_suc_ids',
        '_left_line_attr',
        '_right_line_attr',
        '_left_line_dist',
        '_right_line_dist',
        '_traffic_elem_ids',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'pts': 'sequence<deva_mdriver_msgs/CenterLinePoint>',
        'pre_ids': 'sequence<int32>',
        'suc_ids': 'sequence<int32>',
        'left_line_attr': 'int32',
        'right_line_attr': 'int32',
        'left_line_dist': 'float',
        'right_line_dist': 'float',
        'traffic_elem_ids': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_mdriver_msgs', 'msg'], 'CenterLinePoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.pts = kwargs.get('pts', [])
        self.pre_ids = array.array('i', kwargs.get('pre_ids', []))
        self.suc_ids = array.array('i', kwargs.get('suc_ids', []))
        self.left_line_attr = kwargs.get('left_line_attr', int())
        self.right_line_attr = kwargs.get('right_line_attr', int())
        self.left_line_dist = kwargs.get('left_line_dist', float())
        self.right_line_dist = kwargs.get('right_line_dist', float())
        self.traffic_elem_ids = array.array('i', kwargs.get('traffic_elem_ids', []))

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
        if self.id != other.id:
            return False
        if self.pts != other.pts:
            return False
        if self.pre_ids != other.pre_ids:
            return False
        if self.suc_ids != other.suc_ids:
            return False
        if self.left_line_attr != other.left_line_attr:
            return False
        if self.right_line_attr != other.right_line_attr:
            return False
        if self.left_line_dist != other.left_line_dist:
            return False
        if self.right_line_dist != other.right_line_dist:
            return False
        if self.traffic_elem_ids != other.traffic_elem_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def pts(self):
        """Message field 'pts'."""
        return self._pts

    @pts.setter
    def pts(self, value):
        if __debug__:
            from deva_mdriver_msgs.msg import CenterLinePoint
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
                 all(isinstance(v, CenterLinePoint) for v in value) and
                 True), \
                "The 'pts' field must be a set or sequence and each value of type 'CenterLinePoint'"
        self._pts = value

    @builtins.property
    def pre_ids(self):
        """Message field 'pre_ids'."""
        return self._pre_ids

    @pre_ids.setter
    def pre_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'pre_ids' array.array() must have the type code of 'i'"
            self._pre_ids = value
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
                "The 'pre_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pre_ids = array.array('i', value)

    @builtins.property
    def suc_ids(self):
        """Message field 'suc_ids'."""
        return self._suc_ids

    @suc_ids.setter
    def suc_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'suc_ids' array.array() must have the type code of 'i'"
            self._suc_ids = value
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
                "The 'suc_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._suc_ids = array.array('i', value)

    @builtins.property
    def left_line_attr(self):
        """Message field 'left_line_attr'."""
        return self._left_line_attr

    @left_line_attr.setter
    def left_line_attr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_line_attr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'left_line_attr' field must be an integer in [-2147483648, 2147483647]"
        self._left_line_attr = value

    @builtins.property
    def right_line_attr(self):
        """Message field 'right_line_attr'."""
        return self._right_line_attr

    @right_line_attr.setter
    def right_line_attr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_line_attr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'right_line_attr' field must be an integer in [-2147483648, 2147483647]"
        self._right_line_attr = value

    @builtins.property
    def left_line_dist(self):
        """Message field 'left_line_dist'."""
        return self._left_line_dist

    @left_line_dist.setter
    def left_line_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_line_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_line_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_line_dist = value

    @builtins.property
    def right_line_dist(self):
        """Message field 'right_line_dist'."""
        return self._right_line_dist

    @right_line_dist.setter
    def right_line_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_line_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_line_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_line_dist = value

    @builtins.property
    def traffic_elem_ids(self):
        """Message field 'traffic_elem_ids'."""
        return self._traffic_elem_ids

    @traffic_elem_ids.setter
    def traffic_elem_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'traffic_elem_ids' array.array() must have the type code of 'i'"
            self._traffic_elem_ids = value
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
                "The 'traffic_elem_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._traffic_elem_ids = array.array('i', value)
