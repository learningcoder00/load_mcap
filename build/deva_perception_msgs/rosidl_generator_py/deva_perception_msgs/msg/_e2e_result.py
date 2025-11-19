# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/E2eResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_E2eResult(type):
    """Metaclass of message 'E2eResult'."""

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
                'deva_perception_msgs.msg.E2eResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__e2e_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__e2e_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__e2e_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__e2e_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__e2e_result

            from deva_perception_msgs.msg import E2eDecodeBroadResult
            if E2eDecodeBroadResult.__class__._TYPE_SUPPORT is None:
                E2eDecodeBroadResult.__class__.__import_type_support__()

            from deva_perception_msgs.msg import E2eDecodeResult
            if E2eDecodeResult.__class__._TYPE_SUPPORT is None:
                E2eDecodeResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class E2eResult(metaclass=Metaclass_E2eResult):
    """Message class 'E2eResult'."""

    __slots__ = [
        '_broadcategory',
        '_turn_around',
        '_left',
        '_straight',
        '_right',
    ]

    _fields_and_field_types = {
        'broadcategory': 'deva_perception_msgs/E2eDecodeBroadResult',
        'turn_around': 'deva_perception_msgs/E2eDecodeResult',
        'left': 'deva_perception_msgs/E2eDecodeResult',
        'straight': 'deva_perception_msgs/E2eDecodeResult',
        'right': 'deva_perception_msgs/E2eDecodeResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eDecodeBroadResult'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eDecodeResult'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eDecodeResult'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eDecodeResult'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eDecodeResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_perception_msgs.msg import E2eDecodeBroadResult
        self.broadcategory = kwargs.get('broadcategory', E2eDecodeBroadResult())
        from deva_perception_msgs.msg import E2eDecodeResult
        self.turn_around = kwargs.get('turn_around', E2eDecodeResult())
        from deva_perception_msgs.msg import E2eDecodeResult
        self.left = kwargs.get('left', E2eDecodeResult())
        from deva_perception_msgs.msg import E2eDecodeResult
        self.straight = kwargs.get('straight', E2eDecodeResult())
        from deva_perception_msgs.msg import E2eDecodeResult
        self.right = kwargs.get('right', E2eDecodeResult())

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
        if self.broadcategory != other.broadcategory:
            return False
        if self.turn_around != other.turn_around:
            return False
        if self.left != other.left:
            return False
        if self.straight != other.straight:
            return False
        if self.right != other.right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def broadcategory(self):
        """Message field 'broadcategory'."""
        return self._broadcategory

    @broadcategory.setter
    def broadcategory(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eDecodeBroadResult
            assert \
                isinstance(value, E2eDecodeBroadResult), \
                "The 'broadcategory' field must be a sub message of type 'E2eDecodeBroadResult'"
        self._broadcategory = value

    @builtins.property
    def turn_around(self):
        """Message field 'turn_around'."""
        return self._turn_around

    @turn_around.setter
    def turn_around(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eDecodeResult
            assert \
                isinstance(value, E2eDecodeResult), \
                "The 'turn_around' field must be a sub message of type 'E2eDecodeResult'"
        self._turn_around = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eDecodeResult
            assert \
                isinstance(value, E2eDecodeResult), \
                "The 'left' field must be a sub message of type 'E2eDecodeResult'"
        self._left = value

    @builtins.property
    def straight(self):
        """Message field 'straight'."""
        return self._straight

    @straight.setter
    def straight(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eDecodeResult
            assert \
                isinstance(value, E2eDecodeResult), \
                "The 'straight' field must be a sub message of type 'E2eDecodeResult'"
        self._straight = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eDecodeResult
            assert \
                isinstance(value, E2eDecodeResult), \
                "The 'right' field must be a sub message of type 'E2eDecodeResult'"
        self._right = value
