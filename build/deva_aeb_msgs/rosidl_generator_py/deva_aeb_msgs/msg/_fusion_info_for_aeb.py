# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_aeb_msgs:msg/FusionInfoForAEB.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FusionInfoForAEB(type):
    """Metaclass of message 'FusionInfoForAEB'."""

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
                'deva_aeb_msgs.msg.FusionInfoForAEB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fusion_info_for_aeb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fusion_info_for_aeb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fusion_info_for_aeb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fusion_info_for_aeb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fusion_info_for_aeb

            from deva_aeb_msgs.msg import SFDiagList
            if SFDiagList.__class__._TYPE_SUPPORT is None:
                SFDiagList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionLaneMkrList
            if SFFusionLaneMkrList.__class__._TYPE_SUPPORT is None:
                SFFusionLaneMkrList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionObjList
            if SFFusionObjList.__class__._TYPE_SUPPORT is None:
                SFFusionObjList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionObstacleList
            if SFFusionObstacleList.__class__._TYPE_SUPPORT is None:
                SFFusionObstacleList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionRoadEdge
            if SFFusionRoadEdge.__class__._TYPE_SUPPORT is None:
                SFFusionRoadEdge.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionRoadSignList
            if SFFusionRoadSignList.__class__._TYPE_SUPPORT is None:
                SFFusionRoadSignList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionTFLList
            if SFFusionTFLList.__class__._TYPE_SUPPORT is None:
                SFFusionTFLList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFFusionTSList
            if SFFusionTSList.__class__._TYPE_SUPPORT is None:
                SFFusionTSList.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFRoadPpty
            if SFRoadPpty.__class__._TYPE_SUPPORT is None:
                SFRoadPpty.__class__.__import_type_support__()

            from deva_aeb_msgs.msg import SFVehSelf
            if SFVehSelf.__class__._TYPE_SUPPORT is None:
                SFVehSelf.__class__.__import_type_support__()

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


class FusionInfoForAEB(metaclass=Metaclass_FusionInfoForAEB):
    """Message class 'FusionInfoForAEB'."""

    __slots__ = [
        '_header',
        '_fusionobjlist',
        '_fusionlanemkrlist',
        '_fusionroadedge',
        '_roadppty',
        '_vehself',
        '_fusiontslist',
        '_fusiontfllist',
        '_fusionobstraclelist',
        '_fusionroadsignlist',
        '_fusiondiaglist',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'fusionobjlist': 'deva_aeb_msgs/SFFusionObjList',
        'fusionlanemkrlist': 'deva_aeb_msgs/SFFusionLaneMkrList',
        'fusionroadedge': 'deva_aeb_msgs/SFFusionRoadEdge',
        'roadppty': 'deva_aeb_msgs/SFRoadPpty',
        'vehself': 'deva_aeb_msgs/SFVehSelf',
        'fusiontslist': 'deva_aeb_msgs/SFFusionTSList',
        'fusiontfllist': 'deva_aeb_msgs/SFFusionTFLList',
        'fusionobstraclelist': 'deva_aeb_msgs/SFFusionObstacleList',
        'fusionroadsignlist': 'deva_aeb_msgs/SFFusionRoadSignList',
        'fusiondiaglist': 'deva_aeb_msgs/SFDiagList',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionObjList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionLaneMkrList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionRoadEdge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFRoadPpty'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFVehSelf'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionTSList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionTFLList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionObstacleList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFFusionRoadSignList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_aeb_msgs', 'msg'], 'SFDiagList'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_aeb_msgs.msg import SFFusionObjList
        self.fusionobjlist = kwargs.get('fusionobjlist', SFFusionObjList())
        from deva_aeb_msgs.msg import SFFusionLaneMkrList
        self.fusionlanemkrlist = kwargs.get('fusionlanemkrlist', SFFusionLaneMkrList())
        from deva_aeb_msgs.msg import SFFusionRoadEdge
        self.fusionroadedge = kwargs.get('fusionroadedge', SFFusionRoadEdge())
        from deva_aeb_msgs.msg import SFRoadPpty
        self.roadppty = kwargs.get('roadppty', SFRoadPpty())
        from deva_aeb_msgs.msg import SFVehSelf
        self.vehself = kwargs.get('vehself', SFVehSelf())
        from deva_aeb_msgs.msg import SFFusionTSList
        self.fusiontslist = kwargs.get('fusiontslist', SFFusionTSList())
        from deva_aeb_msgs.msg import SFFusionTFLList
        self.fusiontfllist = kwargs.get('fusiontfllist', SFFusionTFLList())
        from deva_aeb_msgs.msg import SFFusionObstacleList
        self.fusionobstraclelist = kwargs.get('fusionobstraclelist', SFFusionObstacleList())
        from deva_aeb_msgs.msg import SFFusionRoadSignList
        self.fusionroadsignlist = kwargs.get('fusionroadsignlist', SFFusionRoadSignList())
        from deva_aeb_msgs.msg import SFDiagList
        self.fusiondiaglist = kwargs.get('fusiondiaglist', SFDiagList())

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
        if self.fusionobjlist != other.fusionobjlist:
            return False
        if self.fusionlanemkrlist != other.fusionlanemkrlist:
            return False
        if self.fusionroadedge != other.fusionroadedge:
            return False
        if self.roadppty != other.roadppty:
            return False
        if self.vehself != other.vehself:
            return False
        if self.fusiontslist != other.fusiontslist:
            return False
        if self.fusiontfllist != other.fusiontfllist:
            return False
        if self.fusionobstraclelist != other.fusionobstraclelist:
            return False
        if self.fusionroadsignlist != other.fusionroadsignlist:
            return False
        if self.fusiondiaglist != other.fusiondiaglist:
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
    def fusionobjlist(self):
        """Message field 'fusionobjlist'."""
        return self._fusionobjlist

    @fusionobjlist.setter
    def fusionobjlist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionObjList
            assert \
                isinstance(value, SFFusionObjList), \
                "The 'fusionobjlist' field must be a sub message of type 'SFFusionObjList'"
        self._fusionobjlist = value

    @builtins.property
    def fusionlanemkrlist(self):
        """Message field 'fusionlanemkrlist'."""
        return self._fusionlanemkrlist

    @fusionlanemkrlist.setter
    def fusionlanemkrlist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionLaneMkrList
            assert \
                isinstance(value, SFFusionLaneMkrList), \
                "The 'fusionlanemkrlist' field must be a sub message of type 'SFFusionLaneMkrList'"
        self._fusionlanemkrlist = value

    @builtins.property
    def fusionroadedge(self):
        """Message field 'fusionroadedge'."""
        return self._fusionroadedge

    @fusionroadedge.setter
    def fusionroadedge(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionRoadEdge
            assert \
                isinstance(value, SFFusionRoadEdge), \
                "The 'fusionroadedge' field must be a sub message of type 'SFFusionRoadEdge'"
        self._fusionroadedge = value

    @builtins.property
    def roadppty(self):
        """Message field 'roadppty'."""
        return self._roadppty

    @roadppty.setter
    def roadppty(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFRoadPpty
            assert \
                isinstance(value, SFRoadPpty), \
                "The 'roadppty' field must be a sub message of type 'SFRoadPpty'"
        self._roadppty = value

    @builtins.property
    def vehself(self):
        """Message field 'vehself'."""
        return self._vehself

    @vehself.setter
    def vehself(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFVehSelf
            assert \
                isinstance(value, SFVehSelf), \
                "The 'vehself' field must be a sub message of type 'SFVehSelf'"
        self._vehself = value

    @builtins.property
    def fusiontslist(self):
        """Message field 'fusiontslist'."""
        return self._fusiontslist

    @fusiontslist.setter
    def fusiontslist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionTSList
            assert \
                isinstance(value, SFFusionTSList), \
                "The 'fusiontslist' field must be a sub message of type 'SFFusionTSList'"
        self._fusiontslist = value

    @builtins.property
    def fusiontfllist(self):
        """Message field 'fusiontfllist'."""
        return self._fusiontfllist

    @fusiontfllist.setter
    def fusiontfllist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionTFLList
            assert \
                isinstance(value, SFFusionTFLList), \
                "The 'fusiontfllist' field must be a sub message of type 'SFFusionTFLList'"
        self._fusiontfllist = value

    @builtins.property
    def fusionobstraclelist(self):
        """Message field 'fusionobstraclelist'."""
        return self._fusionobstraclelist

    @fusionobstraclelist.setter
    def fusionobstraclelist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionObstacleList
            assert \
                isinstance(value, SFFusionObstacleList), \
                "The 'fusionobstraclelist' field must be a sub message of type 'SFFusionObstacleList'"
        self._fusionobstraclelist = value

    @builtins.property
    def fusionroadsignlist(self):
        """Message field 'fusionroadsignlist'."""
        return self._fusionroadsignlist

    @fusionroadsignlist.setter
    def fusionroadsignlist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFFusionRoadSignList
            assert \
                isinstance(value, SFFusionRoadSignList), \
                "The 'fusionroadsignlist' field must be a sub message of type 'SFFusionRoadSignList'"
        self._fusionroadsignlist = value

    @builtins.property
    def fusiondiaglist(self):
        """Message field 'fusiondiaglist'."""
        return self._fusiondiaglist

    @fusiondiaglist.setter
    def fusiondiaglist(self, value):
        if __debug__:
            from deva_aeb_msgs.msg import SFDiagList
            assert \
                isinstance(value, SFDiagList), \
                "The 'fusiondiaglist' field must be a sub message of type 'SFDiagList'"
        self._fusiondiaglist = value
