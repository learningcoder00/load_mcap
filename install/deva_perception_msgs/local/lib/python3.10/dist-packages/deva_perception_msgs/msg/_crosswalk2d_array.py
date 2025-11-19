# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Crosswalk2dArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Crosswalk2dArray(type):
    """Metaclass of message 'Crosswalk2dArray'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FOV120': 0,
        'FOV30': 1,
        'BACK': 2,
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
                'deva_perception_msgs.msg.Crosswalk2dArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__crosswalk2d_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__crosswalk2d_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__crosswalk2d_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__crosswalk2d_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__crosswalk2d_array

            from deva_perception_msgs.msg import Crosswalk2d
            if Crosswalk2d.__class__._TYPE_SUPPORT is None:
                Crosswalk2d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FOV120': cls.__constants['FOV120'],
            'FOV30': cls.__constants['FOV30'],
            'BACK': cls.__constants['BACK'],
        }

    @property
    def FOV120(self):
        """Message constant 'FOV120'."""
        return Metaclass_Crosswalk2dArray.__constants['FOV120']

    @property
    def FOV30(self):
        """Message constant 'FOV30'."""
        return Metaclass_Crosswalk2dArray.__constants['FOV30']

    @property
    def BACK(self):
        """Message constant 'BACK'."""
        return Metaclass_Crosswalk2dArray.__constants['BACK']


class Crosswalk2dArray(metaclass=Metaclass_Crosswalk2dArray):
    """
    Message class 'Crosswalk2dArray'.

    Constants:
      FOV120
      FOV30
      BACK
    """

    __slots__ = [
        '_crosswalk_2ds',
        '_source',
    ]

    _fields_and_field_types = {
        'crosswalk_2ds': 'sequence<deva_perception_msgs/Crosswalk2d>',
        'source': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'Crosswalk2d')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.crosswalk_2ds = kwargs.get('crosswalk_2ds', [])
        self.source = kwargs.get('source', int())

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
        if self.crosswalk_2ds != other.crosswalk_2ds:
            return False
        if self.source != other.source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def crosswalk_2ds(self):
        """Message field 'crosswalk_2ds'."""
        return self._crosswalk_2ds

    @crosswalk_2ds.setter
    def crosswalk_2ds(self, value):
        if __debug__:
            from deva_perception_msgs.msg import Crosswalk2d
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
                 all(isinstance(v, Crosswalk2d) for v in value) and
                 True), \
                "The 'crosswalk_2ds' field must be a set or sequence and each value of type 'Crosswalk2d'"
        self._crosswalk_2ds = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value
