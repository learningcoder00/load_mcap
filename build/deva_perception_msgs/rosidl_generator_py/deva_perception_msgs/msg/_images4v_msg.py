# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/Images4vMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Images4vMsg(type):
    """Metaclass of message 'Images4vMsg'."""

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
                'deva_perception_msgs.msg.Images4vMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__images4v_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__images4v_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__images4v_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__images4v_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__images4v_msg

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

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


class Images4vMsg(metaclass=Metaclass_Images4vMsg):
    """Message class 'Images4vMsg'."""

    __slots__ = [
        '_header',
        '_right_cam_image',
        '_front_cam_image',
        '_back_cam_image',
        '_left_cam_image',
        '_pubtime',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'right_cam_image': 'sensor_msgs/Image',
        'front_cam_image': 'sensor_msgs/Image',
        'back_cam_image': 'sensor_msgs/Image',
        'left_cam_image': 'sensor_msgs/Image',
        'pubtime': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import Image
        self.right_cam_image = kwargs.get('right_cam_image', Image())
        from sensor_msgs.msg import Image
        self.front_cam_image = kwargs.get('front_cam_image', Image())
        from sensor_msgs.msg import Image
        self.back_cam_image = kwargs.get('back_cam_image', Image())
        from sensor_msgs.msg import Image
        self.left_cam_image = kwargs.get('left_cam_image', Image())
        self.pubtime = kwargs.get('pubtime', int())

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
        if self.right_cam_image != other.right_cam_image:
            return False
        if self.front_cam_image != other.front_cam_image:
            return False
        if self.back_cam_image != other.back_cam_image:
            return False
        if self.left_cam_image != other.left_cam_image:
            return False
        if self.pubtime != other.pubtime:
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
    def right_cam_image(self):
        """Message field 'right_cam_image'."""
        return self._right_cam_image

    @right_cam_image.setter
    def right_cam_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'right_cam_image' field must be a sub message of type 'Image'"
        self._right_cam_image = value

    @builtins.property
    def front_cam_image(self):
        """Message field 'front_cam_image'."""
        return self._front_cam_image

    @front_cam_image.setter
    def front_cam_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'front_cam_image' field must be a sub message of type 'Image'"
        self._front_cam_image = value

    @builtins.property
    def back_cam_image(self):
        """Message field 'back_cam_image'."""
        return self._back_cam_image

    @back_cam_image.setter
    def back_cam_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'back_cam_image' field must be a sub message of type 'Image'"
        self._back_cam_image = value

    @builtins.property
    def left_cam_image(self):
        """Message field 'left_cam_image'."""
        return self._left_cam_image

    @left_cam_image.setter
    def left_cam_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'left_cam_image' field must be a sub message of type 'Image'"
        self._left_cam_image = value

    @builtins.property
    def pubtime(self):
        """Message field 'pubtime'."""
        return self._pubtime

    @pubtime.setter
    def pubtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pubtime' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pubtime' field must be an integer in [-2147483648, 2147483647]"
        self._pubtime = value
