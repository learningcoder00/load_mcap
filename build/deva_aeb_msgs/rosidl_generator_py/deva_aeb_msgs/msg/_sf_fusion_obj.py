# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/SFFusionObj.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SFFusionObj(type):
    """Metaclass of message 'SFFusionObj'."""

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
                'deva_aeb_msgs.msg.SFFusionObj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sf_fusion_obj
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sf_fusion_obj
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sf_fusion_obj
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sf_fusion_obj
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sf_fusion_obj

            from deva_aeb_msgs.msg import SFObjEstimn
            if SFObjEstimn.__class__._TYPE_SUPPORT is None:
                SFObjEstimn.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFObjInfo
            if SFObjInfo.__class__._TYPE_SUPPORT is None:
                SFObjInfo.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFObjPpty
            if SFObjPpty.__class__._TYPE_SUPPORT is None:
                SFObjPpty.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFVisionInfo
            if SFVisionInfo.__class__._TYPE_SUPPORT is None:
                SFVisionInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SFFusionObj(metaclass=Metaclass_SFFusionObj):
    """Message class 'SFFusionObj'."""

    __slots__ = [
        '_estimn',
        '_info',
        '_ppty',
        '_visinfo',
    ]

    _fields_and_field_types = {
        'estimn': 'deva_aeb_msgs/SFObjEstimn',
        'info': 'deva_aeb_msgs/SFObjInfo',
        'ppty': 'deva_aeb_msgs/SFObjPpty',
        'visinfo': 'deva_aeb_msgs/SFVisionInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFObjEstimn'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFObjInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFObjPpty'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFVisionInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_aeb_msgs.msg import SFObjEstimn
        self.estimn = kwargs.get('estimn', SFObjEstimn())
        from deva_aeb_msgs.msg import SFObjInfo
        self.info = kwargs.get('info', SFObjInfo())
        from deva_aeb_msgs.msg import SFObjPpty
        self.ppty = kwargs.get('ppty', SFObjPpty())
        from deva_aeb_msgs.msg import SFVisionInfo
        self.visinfo = kwargs.get('visinfo', SFVisionInfo())

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
        if self.estimn != other.estimn:
            return False
        if self.info != other.info:
            return False
        if self.ppty != other.ppty:
            return False
        if self.visinfo != other.visinfo:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def estimn(self):
        """Message field 'estimn'."""
        return self._estimn

    @estimn.setter
    def estimn(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFObjEstimn
            assert \
                isinstance(value, SFObjEstimn), \
                "The 'estimn' field must be a sub message of type 'SFObjEstimn'"
        self._estimn = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFObjInfo
            assert \
                isinstance(value, SFObjInfo), \
                "The 'info' field must be a sub message of type 'SFObjInfo'"
        self._info = value

    @builtins.property
    def ppty(self):
        """Message field 'ppty'."""
        return self._ppty

    @ppty.setter
    def ppty(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFObjPpty
            assert \
                isinstance(value, SFObjPpty), \
                "The 'ppty' field must be a sub message of type 'SFObjPpty'"
        self._ppty = value

    @builtins.property
    def visinfo(self):
        """Message field 'visinfo'."""
        return self._visinfo

    @visinfo.setter
    def visinfo(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFVisionInfo
            assert \
                isinstance(value, SFVisionInfo), \
                "The 'visinfo' field must be a sub message of type 'SFVisionInfo'"
        self._visinfo = value
