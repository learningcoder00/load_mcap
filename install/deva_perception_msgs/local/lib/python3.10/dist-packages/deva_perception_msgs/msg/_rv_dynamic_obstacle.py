# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RVDynamicObstacle(type):
    """Metaclass of message 'RVDynamicObstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NA_LEVEL': -1,
        'OTHER_LEVEL': 0,
        'UNKNOW_LEVEL': 4,
        'INIT_LEVEL': 5,
        'THIRD_LEVEL': 6,
        'SECOND_LEVEL': 7,
        'CIPV_LEVEL': 8,
        'UNKNOWN': 0,
        'CAR': 1,
        'TRUCK': 2,
        'CONSTRUCTION_VEHICLE': 3,
        'BUS': 4,
        'MOTORCYCLE': 5,
        'BICYCLE': 6,
        'TRICYCLE': 7,
        'CYCLIST': 8,
        'PEDESTRIAN': 9,
        'ANIMAL': 10,
        'SUB_TYPE_CAR': 100,
        'SUB_TYPE_SUV': 101,
        'SUB_TYPE_VAN': 102,
        'SUB_TYPE_PICKUP': 103,
        'SUB_TYPE_POLICE_CAR': 104,
        'SUB_TYPE_AMBULANCE': 105,
        'SUB_TYPE_WRECKING_CAR': 106,
        'SUB_TYPE_FORKLIFT': 107,
        'SUB_TYPE_TRAILER': 108,
        'SUB_TYPE_BOX_TRUCK': 109,
        'SUB_TYPE_FLATBED_TRUCK': 110,
        'SUB_TYPE_BUS': 111,
        'SUB_TYPE_OTHER_TRUCK': 112,
        'SUB_TYPE_TANK_TRUCK': 113,
        'SUB_TYPE_FIRE_ENGINE': 114,
        'SUB_TYPE_CLEAN_TRUCK': 115,
        'SUB_TYPE_PEDESTRIAN': 116,
        'SUB_TYPE_CHILD': 117,
        'SUB_TYPE_BICYCLE_WITH_HUMAN': 118,
        'SUB_TYPE_MOTORBIKE_WITH_HUMAN': 119,
        'SUB_TYPE_ANIMAL_SMALL': 120,
        'SUB_TYPE_OTHER_ANIMAL': 121,
        'SUB_TYPE_BICYCLE': 122,
        'SUB_TYPE_MOTORBIKE': 123,
        'SUB_TYPE_TRICYCLE': 124,
        'OBJ_3D': 0,
        'OBJ_25D': 1,
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
                'deva_perception_msgs.msg.RVDynamicObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rv_dynamic_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rv_dynamic_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rv_dynamic_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rv_dynamic_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rv_dynamic_obstacle

            from deva_common_msgs.msg import BoundingBox2d
            if BoundingBox2d.__class__._TYPE_SUPPORT is None:
                BoundingBox2d.__class__.__import_type_support__()

            from deva_perception_msgs.msg import DynamicObstWorldSpaceInfo
            if DynamicObstWorldSpaceInfo.__class__._TYPE_SUPPORT is None:
                DynamicObstWorldSpaceInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NA_LEVEL': cls.__constants['NA_LEVEL'],
            'OTHER_LEVEL': cls.__constants['OTHER_LEVEL'],
            'UNKNOW_LEVEL': cls.__constants['UNKNOW_LEVEL'],
            'INIT_LEVEL': cls.__constants['INIT_LEVEL'],
            'THIRD_LEVEL': cls.__constants['THIRD_LEVEL'],
            'SECOND_LEVEL': cls.__constants['SECOND_LEVEL'],
            'CIPV_LEVEL': cls.__constants['CIPV_LEVEL'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CAR': cls.__constants['CAR'],
            'TRUCK': cls.__constants['TRUCK'],
            'CONSTRUCTION_VEHICLE': cls.__constants['CONSTRUCTION_VEHICLE'],
            'BUS': cls.__constants['BUS'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'TRICYCLE': cls.__constants['TRICYCLE'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'ANIMAL': cls.__constants['ANIMAL'],
            'SUB_TYPE_CAR': cls.__constants['SUB_TYPE_CAR'],
            'SUB_TYPE_SUV': cls.__constants['SUB_TYPE_SUV'],
            'SUB_TYPE_VAN': cls.__constants['SUB_TYPE_VAN'],
            'SUB_TYPE_PICKUP': cls.__constants['SUB_TYPE_PICKUP'],
            'SUB_TYPE_POLICE_CAR': cls.__constants['SUB_TYPE_POLICE_CAR'],
            'SUB_TYPE_AMBULANCE': cls.__constants['SUB_TYPE_AMBULANCE'],
            'SUB_TYPE_WRECKING_CAR': cls.__constants['SUB_TYPE_WRECKING_CAR'],
            'SUB_TYPE_FORKLIFT': cls.__constants['SUB_TYPE_FORKLIFT'],
            'SUB_TYPE_TRAILER': cls.__constants['SUB_TYPE_TRAILER'],
            'SUB_TYPE_BOX_TRUCK': cls.__constants['SUB_TYPE_BOX_TRUCK'],
            'SUB_TYPE_FLATBED_TRUCK': cls.__constants['SUB_TYPE_FLATBED_TRUCK'],
            'SUB_TYPE_BUS': cls.__constants['SUB_TYPE_BUS'],
            'SUB_TYPE_OTHER_TRUCK': cls.__constants['SUB_TYPE_OTHER_TRUCK'],
            'SUB_TYPE_TANK_TRUCK': cls.__constants['SUB_TYPE_TANK_TRUCK'],
            'SUB_TYPE_FIRE_ENGINE': cls.__constants['SUB_TYPE_FIRE_ENGINE'],
            'SUB_TYPE_CLEAN_TRUCK': cls.__constants['SUB_TYPE_CLEAN_TRUCK'],
            'SUB_TYPE_PEDESTRIAN': cls.__constants['SUB_TYPE_PEDESTRIAN'],
            'SUB_TYPE_CHILD': cls.__constants['SUB_TYPE_CHILD'],
            'SUB_TYPE_BICYCLE_WITH_HUMAN': cls.__constants['SUB_TYPE_BICYCLE_WITH_HUMAN'],
            'SUB_TYPE_MOTORBIKE_WITH_HUMAN': cls.__constants['SUB_TYPE_MOTORBIKE_WITH_HUMAN'],
            'SUB_TYPE_ANIMAL_SMALL': cls.__constants['SUB_TYPE_ANIMAL_SMALL'],
            'SUB_TYPE_OTHER_ANIMAL': cls.__constants['SUB_TYPE_OTHER_ANIMAL'],
            'SUB_TYPE_BICYCLE': cls.__constants['SUB_TYPE_BICYCLE'],
            'SUB_TYPE_MOTORBIKE': cls.__constants['SUB_TYPE_MOTORBIKE'],
            'SUB_TYPE_TRICYCLE': cls.__constants['SUB_TYPE_TRICYCLE'],
            'OBJ_3D': cls.__constants['OBJ_3D'],
            'OBJ_25D': cls.__constants['OBJ_25D'],
        }

    @property
    def NA_LEVEL(self):
        """Message constant 'NA_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['NA_LEVEL']

    @property
    def OTHER_LEVEL(self):
        """Message constant 'OTHER_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['OTHER_LEVEL']

    @property
    def UNKNOW_LEVEL(self):
        """Message constant 'UNKNOW_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['UNKNOW_LEVEL']

    @property
    def INIT_LEVEL(self):
        """Message constant 'INIT_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['INIT_LEVEL']

    @property
    def THIRD_LEVEL(self):
        """Message constant 'THIRD_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['THIRD_LEVEL']

    @property
    def SECOND_LEVEL(self):
        """Message constant 'SECOND_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['SECOND_LEVEL']

    @property
    def CIPV_LEVEL(self):
        """Message constant 'CIPV_LEVEL'."""
        return Metaclass_RVDynamicObstacle.__constants['CIPV_LEVEL']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_RVDynamicObstacle.__constants['UNKNOWN']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_RVDynamicObstacle.__constants['CAR']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['TRUCK']

    @property
    def CONSTRUCTION_VEHICLE(self):
        """Message constant 'CONSTRUCTION_VEHICLE'."""
        return Metaclass_RVDynamicObstacle.__constants['CONSTRUCTION_VEHICLE']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_RVDynamicObstacle.__constants['BUS']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_RVDynamicObstacle.__constants['MOTORCYCLE']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_RVDynamicObstacle.__constants['BICYCLE']

    @property
    def TRICYCLE(self):
        """Message constant 'TRICYCLE'."""
        return Metaclass_RVDynamicObstacle.__constants['TRICYCLE']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_RVDynamicObstacle.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_RVDynamicObstacle.__constants['PEDESTRIAN']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_RVDynamicObstacle.__constants['ANIMAL']

    @property
    def SUB_TYPE_CAR(self):
        """Message constant 'SUB_TYPE_CAR'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_CAR']

    @property
    def SUB_TYPE_SUV(self):
        """Message constant 'SUB_TYPE_SUV'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_SUV']

    @property
    def SUB_TYPE_VAN(self):
        """Message constant 'SUB_TYPE_VAN'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_VAN']

    @property
    def SUB_TYPE_PICKUP(self):
        """Message constant 'SUB_TYPE_PICKUP'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_PICKUP']

    @property
    def SUB_TYPE_POLICE_CAR(self):
        """Message constant 'SUB_TYPE_POLICE_CAR'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_POLICE_CAR']

    @property
    def SUB_TYPE_AMBULANCE(self):
        """Message constant 'SUB_TYPE_AMBULANCE'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_AMBULANCE']

    @property
    def SUB_TYPE_WRECKING_CAR(self):
        """Message constant 'SUB_TYPE_WRECKING_CAR'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_WRECKING_CAR']

    @property
    def SUB_TYPE_FORKLIFT(self):
        """Message constant 'SUB_TYPE_FORKLIFT'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_FORKLIFT']

    @property
    def SUB_TYPE_TRAILER(self):
        """Message constant 'SUB_TYPE_TRAILER'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_TRAILER']

    @property
    def SUB_TYPE_BOX_TRUCK(self):
        """Message constant 'SUB_TYPE_BOX_TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_BOX_TRUCK']

    @property
    def SUB_TYPE_FLATBED_TRUCK(self):
        """Message constant 'SUB_TYPE_FLATBED_TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_FLATBED_TRUCK']

    @property
    def SUB_TYPE_BUS(self):
        """Message constant 'SUB_TYPE_BUS'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_BUS']

    @property
    def SUB_TYPE_OTHER_TRUCK(self):
        """Message constant 'SUB_TYPE_OTHER_TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_OTHER_TRUCK']

    @property
    def SUB_TYPE_TANK_TRUCK(self):
        """Message constant 'SUB_TYPE_TANK_TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_TANK_TRUCK']

    @property
    def SUB_TYPE_FIRE_ENGINE(self):
        """Message constant 'SUB_TYPE_FIRE_ENGINE'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_FIRE_ENGINE']

    @property
    def SUB_TYPE_CLEAN_TRUCK(self):
        """Message constant 'SUB_TYPE_CLEAN_TRUCK'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_CLEAN_TRUCK']

    @property
    def SUB_TYPE_PEDESTRIAN(self):
        """Message constant 'SUB_TYPE_PEDESTRIAN'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_PEDESTRIAN']

    @property
    def SUB_TYPE_CHILD(self):
        """Message constant 'SUB_TYPE_CHILD'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_CHILD']

    @property
    def SUB_TYPE_BICYCLE_WITH_HUMAN(self):
        """Message constant 'SUB_TYPE_BICYCLE_WITH_HUMAN'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_BICYCLE_WITH_HUMAN']

    @property
    def SUB_TYPE_MOTORBIKE_WITH_HUMAN(self):
        """Message constant 'SUB_TYPE_MOTORBIKE_WITH_HUMAN'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_MOTORBIKE_WITH_HUMAN']

    @property
    def SUB_TYPE_ANIMAL_SMALL(self):
        """Message constant 'SUB_TYPE_ANIMAL_SMALL'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_ANIMAL_SMALL']

    @property
    def SUB_TYPE_OTHER_ANIMAL(self):
        """Message constant 'SUB_TYPE_OTHER_ANIMAL'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_OTHER_ANIMAL']

    @property
    def SUB_TYPE_BICYCLE(self):
        """Message constant 'SUB_TYPE_BICYCLE'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_BICYCLE']

    @property
    def SUB_TYPE_MOTORBIKE(self):
        """Message constant 'SUB_TYPE_MOTORBIKE'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_MOTORBIKE']

    @property
    def SUB_TYPE_TRICYCLE(self):
        """Message constant 'SUB_TYPE_TRICYCLE'."""
        return Metaclass_RVDynamicObstacle.__constants['SUB_TYPE_TRICYCLE']

    @property
    def OBJ_3D(self):
        """Message constant 'OBJ_3D'."""
        return Metaclass_RVDynamicObstacle.__constants['OBJ_3D']

    @property
    def OBJ_25D(self):
        """Message constant 'OBJ_25D'."""
        return Metaclass_RVDynamicObstacle.__constants['OBJ_25D']


class RVDynamicObstacle(metaclass=Metaclass_RVDynamicObstacle):
    """
    Message class 'RVDynamicObstacle'.

    Constants:
      NA_LEVEL
      OTHER_LEVEL
      UNKNOW_LEVEL
      INIT_LEVEL
      THIRD_LEVEL
      SECOND_LEVEL
      CIPV_LEVEL
      UNKNOWN
      CAR
      TRUCK
      CONSTRUCTION_VEHICLE
      BUS
      MOTORCYCLE
      BICYCLE
      TRICYCLE
      CYCLIST
      PEDESTRIAN
      ANIMAL
      SUB_TYPE_CAR
      SUB_TYPE_SUV
      SUB_TYPE_VAN
      SUB_TYPE_PICKUP
      SUB_TYPE_POLICE_CAR
      SUB_TYPE_AMBULANCE
      SUB_TYPE_WRECKING_CAR
      SUB_TYPE_FORKLIFT
      SUB_TYPE_TRAILER
      SUB_TYPE_BOX_TRUCK
      SUB_TYPE_FLATBED_TRUCK
      SUB_TYPE_BUS
      SUB_TYPE_OTHER_TRUCK
      SUB_TYPE_TANK_TRUCK
      SUB_TYPE_FIRE_ENGINE
      SUB_TYPE_CLEAN_TRUCK
      SUB_TYPE_PEDESTRIAN
      SUB_TYPE_CHILD
      SUB_TYPE_BICYCLE_WITH_HUMAN
      SUB_TYPE_MOTORBIKE_WITH_HUMAN
      SUB_TYPE_ANIMAL_SMALL
      SUB_TYPE_OTHER_ANIMAL
      SUB_TYPE_BICYCLE
      SUB_TYPE_MOTORBIKE
      SUB_TYPE_TRICYCLE
      OBJ_3D
      OBJ_25D
    """

    __slots__ = [
        '_life_time',
        '_time_stamp',
        '_conf',
        '_age',
        '_select_level',
        '_id',
        '_mapped_type',
        '_world_info',
        '_full_bbox',
        '_tail_bbox',
        '_full_occ_score',
        '_full_trunc_score',
        '_obj_source',
    ]

    _fields_and_field_types = {
        'life_time': 'int32',
        'time_stamp': 'int64',
        'conf': 'float',
        'age': 'uint32',
        'select_level': 'int8',
        'id': 'uint32',
        'mapped_type': 'uint8',
        'world_info': 'deva_perception_msgs/DynamicObstWorldSpaceInfo',
        'full_bbox': 'deva_common_msgs/BoundingBox2d',
        'tail_bbox': 'deva_common_msgs/BoundingBox2d',
        'full_occ_score': 'float',
        'full_trunc_score': 'float',
        'obj_source': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'DynamicObstWorldSpaceInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'BoundingBox2d'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.life_time = kwargs.get('life_time', int())
        self.time_stamp = kwargs.get('time_stamp', int())
        self.conf = kwargs.get('conf', float())
        self.age = kwargs.get('age', int())
        self.select_level = kwargs.get('select_level', int())
        self.id = kwargs.get('id', int())
        self.mapped_type = kwargs.get('mapped_type', int())
        from deva_perception_msgs.msg import DynamicObstWorldSpaceInfo
        self.world_info = kwargs.get('world_info', DynamicObstWorldSpaceInfo())
        from deva_common_msgs.msg import BoundingBox2d
        self.full_bbox = kwargs.get('full_bbox', BoundingBox2d())
        from deva_common_msgs.msg import BoundingBox2d
        self.tail_bbox = kwargs.get('tail_bbox', BoundingBox2d())
        self.full_occ_score = kwargs.get('full_occ_score', float())
        self.full_trunc_score = kwargs.get('full_trunc_score', float())
        self.obj_source = kwargs.get('obj_source', int())

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
        if self.life_time != other.life_time:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.conf != other.conf:
            return False
        if self.age != other.age:
            return False
        if self.select_level != other.select_level:
            return False
        if self.id != other.id:
            return False
        if self.mapped_type != other.mapped_type:
            return False
        if self.world_info != other.world_info:
            return False
        if self.full_bbox != other.full_bbox:
            return False
        if self.tail_bbox != other.tail_bbox:
            return False
        if self.full_occ_score != other.full_occ_score:
            return False
        if self.full_trunc_score != other.full_trunc_score:
            return False
        if self.obj_source != other.obj_source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def life_time(self):
        """Message field 'life_time'."""
        return self._life_time

    @life_time.setter
    def life_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'life_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'life_time' field must be an integer in [-2147483648, 2147483647]"
        self._life_time = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_stamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_stamp = value

    @builtins.property
    def conf(self):
        """Message field 'conf'."""
        return self._conf

    @conf.setter
    def conf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'age' field must be an unsigned integer in [0, 4294967295]"
        self._age = value

    @builtins.property
    def select_level(self):
        """Message field 'select_level'."""
        return self._select_level

    @select_level.setter
    def select_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'select_level' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'select_level' field must be an integer in [-128, 127]"
        self._select_level = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def mapped_type(self):
        """Message field 'mapped_type'."""
        return self._mapped_type

    @mapped_type.setter
    def mapped_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mapped_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mapped_type' field must be an unsigned integer in [0, 255]"
        self._mapped_type = value

    @builtins.property
    def world_info(self):
        """Message field 'world_info'."""
        return self._world_info

    @world_info.setter
    def world_info(self, value):
        if __debug__:
            from deva_perception_msgs.msg import DynamicObstWorldSpaceInfo
            assert \
                isinstance(value, DynamicObstWorldSpaceInfo), \
                "The 'world_info' field must be a sub message of type 'DynamicObstWorldSpaceInfo'"
        self._world_info = value

    @builtins.property
    def full_bbox(self):
        """Message field 'full_bbox'."""
        return self._full_bbox

    @full_bbox.setter
    def full_bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'full_bbox' field must be a sub message of type 'BoundingBox2d'"
        self._full_bbox = value

    @builtins.property
    def tail_bbox(self):
        """Message field 'tail_bbox'."""
        return self._tail_bbox

    @tail_bbox.setter
    def tail_bbox(self, value):
        if __debug__:
            from deva_common_msgs.msg import BoundingBox2d
            assert \
                isinstance(value, BoundingBox2d), \
                "The 'tail_bbox' field must be a sub message of type 'BoundingBox2d'"
        self._tail_bbox = value

    @builtins.property
    def full_occ_score(self):
        """Message field 'full_occ_score'."""
        return self._full_occ_score

    @full_occ_score.setter
    def full_occ_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_occ_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_occ_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_occ_score = value

    @builtins.property
    def full_trunc_score(self):
        """Message field 'full_trunc_score'."""
        return self._full_trunc_score

    @full_trunc_score.setter
    def full_trunc_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_trunc_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_trunc_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_trunc_score = value

    @builtins.property
    def obj_source(self):
        """Message field 'obj_source'."""
        return self._obj_source

    @obj_source.setter
    def obj_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obj_source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'obj_source' field must be an unsigned integer in [0, 255]"
        self._obj_source = value
