# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ADASFunctionStatusIntra(type):
    """Metaclass of message 'ADASFunctionStatusIntra'."""

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
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.ADASFunctionStatusIntra')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adas_function_status_intra
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adas_function_status_intra
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adas_function_status_intra
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adas_function_status_intra
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adas_function_status_intra

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


class ADASFunctionStatusIntra(metaclass=Metaclass_ADASFunctionStatusIntra):
    """Message class 'ADASFunctionStatusIntra'."""

    __slots__ = [
        '_header',
        '_acttnasylatctrlmodreq',
        '_acttnasysftyenadecelbydbs',
        '_acttnasysftyhwlreq',
        '_acttnasysftystandstillreq',
        '_acttnasysteerwhlhptcwarnreq',
        '_acttnbrkhptcwarnreqforautdrv',
        '_acttnbrkprecactv',
        '_acttncllsnthreat',
        '_hmiasyemgylanekeepaid',
        '_hmiasyemgylanekeepaidsts',
        '_hmiasylanechgwarnmod',
        '_hmiasylanekeepaidsts',
        '_hmiasyobjtype',
        '_hmiasysteerapplyrqrd',
        '_hmiasywarnforsteercncl',
        '_hmicllsnaidpost',
        '_hmicllsnfwdwarn',
        '_hmicllsnmtgtnfaultsts',
        '_hmicllsnmtgtnfctsts',
        '_hmicllsnmtgtnwarnsts',
        '_hmictryforroadsgninfo',
        '_hmiintvandwarnmodinfosts',
        '_hmilanechgwarnsts',
        '_hmilanekeepaidinfosts',
        '_hminontrvrsbleroadedgeonleft',
        '_hminontrvrsbleroadedgeonright',
        '_hmioffsforspdwarnsetgsts',
        '_hmiroadmiscsgninfosts',
        '_hmiroadsgninfosts',
        '_hmispdalrmactvsts',
        '_hmitrfcinfomiscfirst',
        '_hmiwarnforasyemgylanekeepaid',
        '_hmicllsnmtgtnonoffsts',
        '_hmidooropenwarnon1',
        '_hmidooropenwarnleindcn',
        '_hmidooropenwarnriindcn',
        '_hmilettclv',
        '_hmirittclv',
        '_hmifctaindcnle',
        '_hmifctaindcnri',
        '_hmilcmaindcnle',
        '_hmilcmaindcnri',
        '_hmilcmaon',
        '_hmilcmaaudwarn',
        '_hmirsdssyssts',
        '_hmirctaindcnle',
        '_hmirctaindcnri',
        '_hmictraon1',
        '_hmicllsnwarnreindcn',
        '_hmicllsnwarnreon1',
        '_hmircwmlireq',
        '_acttnrctabrkreq',
        '_acttnrctabrkreqqm',
        '_acttnrcwmbrkreq',
        '_acttnrcwmbrkreqqm',
        '_hmiasyemgymanoeuvreaidsts',
        '_hmicllsnaidpostema',
        '_hmitrfcliinfo',
        '_hmitrfclists',
        '_hmitrfcliwarntypsts',
        '_hmiuturnlight',
        '_hmitrfcliinfoleft',
        '_hmitrfcliinforight',
        '_hmiaebtriggerobjectid',
        '_hmielkatriggerobjectid',
        '_hmifctarighttriggerobjectid',
        '_hmifctalefttriggerobjectid',
        '_hmiematriggerobjectid',
        '_hmirctarighttriggerobjectid',
        '_hmirctalefttriggerobjectid',
        '_hmitrfclichg',
        '_hmifcwtriggerobjectid',
        '_lanekeepaidlaneinfo',
        '_asyemgylanekeepaidlaneinfo',
        '_hmireserve1',
        '_hmireserve2',
        '_hmireserve3',
        '_hmireserve4',
        '_hmireserve5',
        '_hmireserve6',
        '_hmireserve7',
        '_hmireserve8',
        '_asypinionagreq',
        '_latctrlagctrltqlowrlim',
        '_latctrlagctrltqupprlim',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'acttnasylatctrlmodreq': 'uint8',
        'acttnasysftyenadecelbydbs': 'uint8',
        'acttnasysftyhwlreq': 'uint8',
        'acttnasysftystandstillreq': 'uint8',
        'acttnasysteerwhlhptcwarnreq': 'uint8',
        'acttnbrkhptcwarnreqforautdrv': 'uint8',
        'acttnbrkprecactv': 'uint8',
        'acttncllsnthreat': 'uint8',
        'hmiasyemgylanekeepaid': 'uint8',
        'hmiasyemgylanekeepaidsts': 'uint8',
        'hmiasylanechgwarnmod': 'uint8',
        'hmiasylanekeepaidsts': 'uint8',
        'hmiasyobjtype': 'uint8',
        'hmiasysteerapplyrqrd': 'uint8',
        'hmiasywarnforsteercncl': 'uint8',
        'hmicllsnaidpost': 'uint8',
        'hmicllsnfwdwarn': 'uint8',
        'hmicllsnmtgtnfaultsts': 'uint8',
        'hmicllsnmtgtnfctsts': 'uint8',
        'hmicllsnmtgtnwarnsts': 'uint8',
        'hmictryforroadsgninfo': 'uint8',
        'hmiintvandwarnmodinfosts': 'uint8',
        'hmilanechgwarnsts': 'uint8',
        'hmilanekeepaidinfosts': 'uint8',
        'hminontrvrsbleroadedgeonleft': 'uint8',
        'hminontrvrsbleroadedgeonright': 'uint8',
        'hmioffsforspdwarnsetgsts': 'uint8',
        'hmiroadmiscsgninfosts': 'uint8',
        'hmiroadsgninfosts': 'uint8',
        'hmispdalrmactvsts': 'uint8',
        'hmitrfcinfomiscfirst': 'uint8',
        'hmiwarnforasyemgylanekeepaid': 'uint8',
        'hmicllsnmtgtnonoffsts': 'uint8',
        'hmidooropenwarnon1': 'uint8',
        'hmidooropenwarnleindcn': 'uint8',
        'hmidooropenwarnriindcn': 'uint8',
        'hmilettclv': 'uint8',
        'hmirittclv': 'uint8',
        'hmifctaindcnle': 'uint8',
        'hmifctaindcnri': 'uint8',
        'hmilcmaindcnle': 'uint8',
        'hmilcmaindcnri': 'uint8',
        'hmilcmaon': 'uint8',
        'hmilcmaaudwarn': 'uint8',
        'hmirsdssyssts': 'uint8',
        'hmirctaindcnle': 'uint8',
        'hmirctaindcnri': 'uint8',
        'hmictraon1': 'uint8',
        'hmicllsnwarnreindcn': 'uint8',
        'hmicllsnwarnreon1': 'uint8',
        'hmircwmlireq': 'uint8',
        'acttnrctabrkreq': 'uint8',
        'acttnrctabrkreqqm': 'uint8',
        'acttnrcwmbrkreq': 'uint8',
        'acttnrcwmbrkreqqm': 'uint8',
        'hmiasyemgymanoeuvreaidsts': 'uint8',
        'hmicllsnaidpostema': 'uint8',
        'hmitrfcliinfo': 'uint8',
        'hmitrfclists': 'uint8',
        'hmitrfcliwarntypsts': 'uint8',
        'hmiuturnlight': 'uint8',
        'hmitrfcliinfoleft': 'uint8',
        'hmitrfcliinforight': 'uint8',
        'hmiaebtriggerobjectid': 'uint8',
        'hmielkatriggerobjectid': 'uint8',
        'hmifctarighttriggerobjectid': 'uint8',
        'hmifctalefttriggerobjectid': 'uint8',
        'hmiematriggerobjectid': 'uint8',
        'hmirctarighttriggerobjectid': 'uint8',
        'hmirctalefttriggerobjectid': 'uint8',
        'hmitrfclichg': 'uint8',
        'hmifcwtriggerobjectid': 'uint8',
        'lanekeepaidlaneinfo': 'uint8',
        'asyemgylanekeepaidlaneinfo': 'uint8',
        'hmireserve1': 'uint16',
        'hmireserve2': 'uint16',
        'hmireserve3': 'uint16',
        'hmireserve4': 'uint16',
        'hmireserve5': 'float',
        'hmireserve6': 'float',
        'hmireserve7': 'float',
        'hmireserve8': 'float',
        'asypinionagreq': 'float',
        'latctrlagctrltqlowrlim': 'float',
        'latctrlagctrltqupprlim': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.acttnasylatctrlmodreq = kwargs.get('acttnasylatctrlmodreq', int())
        self.acttnasysftyenadecelbydbs = kwargs.get('acttnasysftyenadecelbydbs', int())
        self.acttnasysftyhwlreq = kwargs.get('acttnasysftyhwlreq', int())
        self.acttnasysftystandstillreq = kwargs.get('acttnasysftystandstillreq', int())
        self.acttnasysteerwhlhptcwarnreq = kwargs.get('acttnasysteerwhlhptcwarnreq', int())
        self.acttnbrkhptcwarnreqforautdrv = kwargs.get('acttnbrkhptcwarnreqforautdrv', int())
        self.acttnbrkprecactv = kwargs.get('acttnbrkprecactv', int())
        self.acttncllsnthreat = kwargs.get('acttncllsnthreat', int())
        self.hmiasyemgylanekeepaid = kwargs.get('hmiasyemgylanekeepaid', int())
        self.hmiasyemgylanekeepaidsts = kwargs.get('hmiasyemgylanekeepaidsts', int())
        self.hmiasylanechgwarnmod = kwargs.get('hmiasylanechgwarnmod', int())
        self.hmiasylanekeepaidsts = kwargs.get('hmiasylanekeepaidsts', int())
        self.hmiasyobjtype = kwargs.get('hmiasyobjtype', int())
        self.hmiasysteerapplyrqrd = kwargs.get('hmiasysteerapplyrqrd', int())
        self.hmiasywarnforsteercncl = kwargs.get('hmiasywarnforsteercncl', int())
        self.hmicllsnaidpost = kwargs.get('hmicllsnaidpost', int())
        self.hmicllsnfwdwarn = kwargs.get('hmicllsnfwdwarn', int())
        self.hmicllsnmtgtnfaultsts = kwargs.get('hmicllsnmtgtnfaultsts', int())
        self.hmicllsnmtgtnfctsts = kwargs.get('hmicllsnmtgtnfctsts', int())
        self.hmicllsnmtgtnwarnsts = kwargs.get('hmicllsnmtgtnwarnsts', int())
        self.hmictryforroadsgninfo = kwargs.get('hmictryforroadsgninfo', int())
        self.hmiintvandwarnmodinfosts = kwargs.get('hmiintvandwarnmodinfosts', int())
        self.hmilanechgwarnsts = kwargs.get('hmilanechgwarnsts', int())
        self.hmilanekeepaidinfosts = kwargs.get('hmilanekeepaidinfosts', int())
        self.hminontrvrsbleroadedgeonleft = kwargs.get('hminontrvrsbleroadedgeonleft', int())
        self.hminontrvrsbleroadedgeonright = kwargs.get('hminontrvrsbleroadedgeonright', int())
        self.hmioffsforspdwarnsetgsts = kwargs.get('hmioffsforspdwarnsetgsts', int())
        self.hmiroadmiscsgninfosts = kwargs.get('hmiroadmiscsgninfosts', int())
        self.hmiroadsgninfosts = kwargs.get('hmiroadsgninfosts', int())
        self.hmispdalrmactvsts = kwargs.get('hmispdalrmactvsts', int())
        self.hmitrfcinfomiscfirst = kwargs.get('hmitrfcinfomiscfirst', int())
        self.hmiwarnforasyemgylanekeepaid = kwargs.get('hmiwarnforasyemgylanekeepaid', int())
        self.hmicllsnmtgtnonoffsts = kwargs.get('hmicllsnmtgtnonoffsts', int())
        self.hmidooropenwarnon1 = kwargs.get('hmidooropenwarnon1', int())
        self.hmidooropenwarnleindcn = kwargs.get('hmidooropenwarnleindcn', int())
        self.hmidooropenwarnriindcn = kwargs.get('hmidooropenwarnriindcn', int())
        self.hmilettclv = kwargs.get('hmilettclv', int())
        self.hmirittclv = kwargs.get('hmirittclv', int())
        self.hmifctaindcnle = kwargs.get('hmifctaindcnle', int())
        self.hmifctaindcnri = kwargs.get('hmifctaindcnri', int())
        self.hmilcmaindcnle = kwargs.get('hmilcmaindcnle', int())
        self.hmilcmaindcnri = kwargs.get('hmilcmaindcnri', int())
        self.hmilcmaon = kwargs.get('hmilcmaon', int())
        self.hmilcmaaudwarn = kwargs.get('hmilcmaaudwarn', int())
        self.hmirsdssyssts = kwargs.get('hmirsdssyssts', int())
        self.hmirctaindcnle = kwargs.get('hmirctaindcnle', int())
        self.hmirctaindcnri = kwargs.get('hmirctaindcnri', int())
        self.hmictraon1 = kwargs.get('hmictraon1', int())
        self.hmicllsnwarnreindcn = kwargs.get('hmicllsnwarnreindcn', int())
        self.hmicllsnwarnreon1 = kwargs.get('hmicllsnwarnreon1', int())
        self.hmircwmlireq = kwargs.get('hmircwmlireq', int())
        self.acttnrctabrkreq = kwargs.get('acttnrctabrkreq', int())
        self.acttnrctabrkreqqm = kwargs.get('acttnrctabrkreqqm', int())
        self.acttnrcwmbrkreq = kwargs.get('acttnrcwmbrkreq', int())
        self.acttnrcwmbrkreqqm = kwargs.get('acttnrcwmbrkreqqm', int())
        self.hmiasyemgymanoeuvreaidsts = kwargs.get('hmiasyemgymanoeuvreaidsts', int())
        self.hmicllsnaidpostema = kwargs.get('hmicllsnaidpostema', int())
        self.hmitrfcliinfo = kwargs.get('hmitrfcliinfo', int())
        self.hmitrfclists = kwargs.get('hmitrfclists', int())
        self.hmitrfcliwarntypsts = kwargs.get('hmitrfcliwarntypsts', int())
        self.hmiuturnlight = kwargs.get('hmiuturnlight', int())
        self.hmitrfcliinfoleft = kwargs.get('hmitrfcliinfoleft', int())
        self.hmitrfcliinforight = kwargs.get('hmitrfcliinforight', int())
        self.hmiaebtriggerobjectid = kwargs.get('hmiaebtriggerobjectid', int())
        self.hmielkatriggerobjectid = kwargs.get('hmielkatriggerobjectid', int())
        self.hmifctarighttriggerobjectid = kwargs.get('hmifctarighttriggerobjectid', int())
        self.hmifctalefttriggerobjectid = kwargs.get('hmifctalefttriggerobjectid', int())
        self.hmiematriggerobjectid = kwargs.get('hmiematriggerobjectid', int())
        self.hmirctarighttriggerobjectid = kwargs.get('hmirctarighttriggerobjectid', int())
        self.hmirctalefttriggerobjectid = kwargs.get('hmirctalefttriggerobjectid', int())
        self.hmitrfclichg = kwargs.get('hmitrfclichg', int())
        self.hmifcwtriggerobjectid = kwargs.get('hmifcwtriggerobjectid', int())
        self.lanekeepaidlaneinfo = kwargs.get('lanekeepaidlaneinfo', int())
        self.asyemgylanekeepaidlaneinfo = kwargs.get('asyemgylanekeepaidlaneinfo', int())
        self.hmireserve1 = kwargs.get('hmireserve1', int())
        self.hmireserve2 = kwargs.get('hmireserve2', int())
        self.hmireserve3 = kwargs.get('hmireserve3', int())
        self.hmireserve4 = kwargs.get('hmireserve4', int())
        self.hmireserve5 = kwargs.get('hmireserve5', float())
        self.hmireserve6 = kwargs.get('hmireserve6', float())
        self.hmireserve7 = kwargs.get('hmireserve7', float())
        self.hmireserve8 = kwargs.get('hmireserve8', float())
        self.asypinionagreq = kwargs.get('asypinionagreq', float())
        self.latctrlagctrltqlowrlim = kwargs.get('latctrlagctrltqlowrlim', float())
        self.latctrlagctrltqupprlim = kwargs.get('latctrlagctrltqupprlim', float())

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
        if self.acttnasylatctrlmodreq != other.acttnasylatctrlmodreq:
            return False
        if self.acttnasysftyenadecelbydbs != other.acttnasysftyenadecelbydbs:
            return False
        if self.acttnasysftyhwlreq != other.acttnasysftyhwlreq:
            return False
        if self.acttnasysftystandstillreq != other.acttnasysftystandstillreq:
            return False
        if self.acttnasysteerwhlhptcwarnreq != other.acttnasysteerwhlhptcwarnreq:
            return False
        if self.acttnbrkhptcwarnreqforautdrv != other.acttnbrkhptcwarnreqforautdrv:
            return False
        if self.acttnbrkprecactv != other.acttnbrkprecactv:
            return False
        if self.acttncllsnthreat != other.acttncllsnthreat:
            return False
        if self.hmiasyemgylanekeepaid != other.hmiasyemgylanekeepaid:
            return False
        if self.hmiasyemgylanekeepaidsts != other.hmiasyemgylanekeepaidsts:
            return False
        if self.hmiasylanechgwarnmod != other.hmiasylanechgwarnmod:
            return False
        if self.hmiasylanekeepaidsts != other.hmiasylanekeepaidsts:
            return False
        if self.hmiasyobjtype != other.hmiasyobjtype:
            return False
        if self.hmiasysteerapplyrqrd != other.hmiasysteerapplyrqrd:
            return False
        if self.hmiasywarnforsteercncl != other.hmiasywarnforsteercncl:
            return False
        if self.hmicllsnaidpost != other.hmicllsnaidpost:
            return False
        if self.hmicllsnfwdwarn != other.hmicllsnfwdwarn:
            return False
        if self.hmicllsnmtgtnfaultsts != other.hmicllsnmtgtnfaultsts:
            return False
        if self.hmicllsnmtgtnfctsts != other.hmicllsnmtgtnfctsts:
            return False
        if self.hmicllsnmtgtnwarnsts != other.hmicllsnmtgtnwarnsts:
            return False
        if self.hmictryforroadsgninfo != other.hmictryforroadsgninfo:
            return False
        if self.hmiintvandwarnmodinfosts != other.hmiintvandwarnmodinfosts:
            return False
        if self.hmilanechgwarnsts != other.hmilanechgwarnsts:
            return False
        if self.hmilanekeepaidinfosts != other.hmilanekeepaidinfosts:
            return False
        if self.hminontrvrsbleroadedgeonleft != other.hminontrvrsbleroadedgeonleft:
            return False
        if self.hminontrvrsbleroadedgeonright != other.hminontrvrsbleroadedgeonright:
            return False
        if self.hmioffsforspdwarnsetgsts != other.hmioffsforspdwarnsetgsts:
            return False
        if self.hmiroadmiscsgninfosts != other.hmiroadmiscsgninfosts:
            return False
        if self.hmiroadsgninfosts != other.hmiroadsgninfosts:
            return False
        if self.hmispdalrmactvsts != other.hmispdalrmactvsts:
            return False
        if self.hmitrfcinfomiscfirst != other.hmitrfcinfomiscfirst:
            return False
        if self.hmiwarnforasyemgylanekeepaid != other.hmiwarnforasyemgylanekeepaid:
            return False
        if self.hmicllsnmtgtnonoffsts != other.hmicllsnmtgtnonoffsts:
            return False
        if self.hmidooropenwarnon1 != other.hmidooropenwarnon1:
            return False
        if self.hmidooropenwarnleindcn != other.hmidooropenwarnleindcn:
            return False
        if self.hmidooropenwarnriindcn != other.hmidooropenwarnriindcn:
            return False
        if self.hmilettclv != other.hmilettclv:
            return False
        if self.hmirittclv != other.hmirittclv:
            return False
        if self.hmifctaindcnle != other.hmifctaindcnle:
            return False
        if self.hmifctaindcnri != other.hmifctaindcnri:
            return False
        if self.hmilcmaindcnle != other.hmilcmaindcnle:
            return False
        if self.hmilcmaindcnri != other.hmilcmaindcnri:
            return False
        if self.hmilcmaon != other.hmilcmaon:
            return False
        if self.hmilcmaaudwarn != other.hmilcmaaudwarn:
            return False
        if self.hmirsdssyssts != other.hmirsdssyssts:
            return False
        if self.hmirctaindcnle != other.hmirctaindcnle:
            return False
        if self.hmirctaindcnri != other.hmirctaindcnri:
            return False
        if self.hmictraon1 != other.hmictraon1:
            return False
        if self.hmicllsnwarnreindcn != other.hmicllsnwarnreindcn:
            return False
        if self.hmicllsnwarnreon1 != other.hmicllsnwarnreon1:
            return False
        if self.hmircwmlireq != other.hmircwmlireq:
            return False
        if self.acttnrctabrkreq != other.acttnrctabrkreq:
            return False
        if self.acttnrctabrkreqqm != other.acttnrctabrkreqqm:
            return False
        if self.acttnrcwmbrkreq != other.acttnrcwmbrkreq:
            return False
        if self.acttnrcwmbrkreqqm != other.acttnrcwmbrkreqqm:
            return False
        if self.hmiasyemgymanoeuvreaidsts != other.hmiasyemgymanoeuvreaidsts:
            return False
        if self.hmicllsnaidpostema != other.hmicllsnaidpostema:
            return False
        if self.hmitrfcliinfo != other.hmitrfcliinfo:
            return False
        if self.hmitrfclists != other.hmitrfclists:
            return False
        if self.hmitrfcliwarntypsts != other.hmitrfcliwarntypsts:
            return False
        if self.hmiuturnlight != other.hmiuturnlight:
            return False
        if self.hmitrfcliinfoleft != other.hmitrfcliinfoleft:
            return False
        if self.hmitrfcliinforight != other.hmitrfcliinforight:
            return False
        if self.hmiaebtriggerobjectid != other.hmiaebtriggerobjectid:
            return False
        if self.hmielkatriggerobjectid != other.hmielkatriggerobjectid:
            return False
        if self.hmifctarighttriggerobjectid != other.hmifctarighttriggerobjectid:
            return False
        if self.hmifctalefttriggerobjectid != other.hmifctalefttriggerobjectid:
            return False
        if self.hmiematriggerobjectid != other.hmiematriggerobjectid:
            return False
        if self.hmirctarighttriggerobjectid != other.hmirctarighttriggerobjectid:
            return False
        if self.hmirctalefttriggerobjectid != other.hmirctalefttriggerobjectid:
            return False
        if self.hmitrfclichg != other.hmitrfclichg:
            return False
        if self.hmifcwtriggerobjectid != other.hmifcwtriggerobjectid:
            return False
        if self.lanekeepaidlaneinfo != other.lanekeepaidlaneinfo:
            return False
        if self.asyemgylanekeepaidlaneinfo != other.asyemgylanekeepaidlaneinfo:
            return False
        if self.hmireserve1 != other.hmireserve1:
            return False
        if self.hmireserve2 != other.hmireserve2:
            return False
        if self.hmireserve3 != other.hmireserve3:
            return False
        if self.hmireserve4 != other.hmireserve4:
            return False
        if self.hmireserve5 != other.hmireserve5:
            return False
        if self.hmireserve6 != other.hmireserve6:
            return False
        if self.hmireserve7 != other.hmireserve7:
            return False
        if self.hmireserve8 != other.hmireserve8:
            return False
        if self.asypinionagreq != other.asypinionagreq:
            return False
        if self.latctrlagctrltqlowrlim != other.latctrlagctrltqlowrlim:
            return False
        if self.latctrlagctrltqupprlim != other.latctrlagctrltqupprlim:
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
    def acttnasylatctrlmodreq(self):
        """Message field 'acttnasylatctrlmodreq'."""
        return self._acttnasylatctrlmodreq

    @acttnasylatctrlmodreq.setter
    def acttnasylatctrlmodreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnasylatctrlmodreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnasylatctrlmodreq' field must be an unsigned integer in [0, 255]"
        self._acttnasylatctrlmodreq = value

    @builtins.property
    def acttnasysftyenadecelbydbs(self):
        """Message field 'acttnasysftyenadecelbydbs'."""
        return self._acttnasysftyenadecelbydbs

    @acttnasysftyenadecelbydbs.setter
    def acttnasysftyenadecelbydbs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnasysftyenadecelbydbs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnasysftyenadecelbydbs' field must be an unsigned integer in [0, 255]"
        self._acttnasysftyenadecelbydbs = value

    @builtins.property
    def acttnasysftyhwlreq(self):
        """Message field 'acttnasysftyhwlreq'."""
        return self._acttnasysftyhwlreq

    @acttnasysftyhwlreq.setter
    def acttnasysftyhwlreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnasysftyhwlreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnasysftyhwlreq' field must be an unsigned integer in [0, 255]"
        self._acttnasysftyhwlreq = value

    @builtins.property
    def acttnasysftystandstillreq(self):
        """Message field 'acttnasysftystandstillreq'."""
        return self._acttnasysftystandstillreq

    @acttnasysftystandstillreq.setter
    def acttnasysftystandstillreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnasysftystandstillreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnasysftystandstillreq' field must be an unsigned integer in [0, 255]"
        self._acttnasysftystandstillreq = value

    @builtins.property
    def acttnasysteerwhlhptcwarnreq(self):
        """Message field 'acttnasysteerwhlhptcwarnreq'."""
        return self._acttnasysteerwhlhptcwarnreq

    @acttnasysteerwhlhptcwarnreq.setter
    def acttnasysteerwhlhptcwarnreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnasysteerwhlhptcwarnreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnasysteerwhlhptcwarnreq' field must be an unsigned integer in [0, 255]"
        self._acttnasysteerwhlhptcwarnreq = value

    @builtins.property
    def acttnbrkhptcwarnreqforautdrv(self):
        """Message field 'acttnbrkhptcwarnreqforautdrv'."""
        return self._acttnbrkhptcwarnreqforautdrv

    @acttnbrkhptcwarnreqforautdrv.setter
    def acttnbrkhptcwarnreqforautdrv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnbrkhptcwarnreqforautdrv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnbrkhptcwarnreqforautdrv' field must be an unsigned integer in [0, 255]"
        self._acttnbrkhptcwarnreqforautdrv = value

    @builtins.property
    def acttnbrkprecactv(self):
        """Message field 'acttnbrkprecactv'."""
        return self._acttnbrkprecactv

    @acttnbrkprecactv.setter
    def acttnbrkprecactv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnbrkprecactv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnbrkprecactv' field must be an unsigned integer in [0, 255]"
        self._acttnbrkprecactv = value

    @builtins.property
    def acttncllsnthreat(self):
        """Message field 'acttncllsnthreat'."""
        return self._acttncllsnthreat

    @acttncllsnthreat.setter
    def acttncllsnthreat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttncllsnthreat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttncllsnthreat' field must be an unsigned integer in [0, 255]"
        self._acttncllsnthreat = value

    @builtins.property
    def hmiasyemgylanekeepaid(self):
        """Message field 'hmiasyemgylanekeepaid'."""
        return self._hmiasyemgylanekeepaid

    @hmiasyemgylanekeepaid.setter
    def hmiasyemgylanekeepaid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasyemgylanekeepaid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasyemgylanekeepaid' field must be an unsigned integer in [0, 255]"
        self._hmiasyemgylanekeepaid = value

    @builtins.property
    def hmiasyemgylanekeepaidsts(self):
        """Message field 'hmiasyemgylanekeepaidsts'."""
        return self._hmiasyemgylanekeepaidsts

    @hmiasyemgylanekeepaidsts.setter
    def hmiasyemgylanekeepaidsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasyemgylanekeepaidsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasyemgylanekeepaidsts' field must be an unsigned integer in [0, 255]"
        self._hmiasyemgylanekeepaidsts = value

    @builtins.property
    def hmiasylanechgwarnmod(self):
        """Message field 'hmiasylanechgwarnmod'."""
        return self._hmiasylanechgwarnmod

    @hmiasylanechgwarnmod.setter
    def hmiasylanechgwarnmod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasylanechgwarnmod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasylanechgwarnmod' field must be an unsigned integer in [0, 255]"
        self._hmiasylanechgwarnmod = value

    @builtins.property
    def hmiasylanekeepaidsts(self):
        """Message field 'hmiasylanekeepaidsts'."""
        return self._hmiasylanekeepaidsts

    @hmiasylanekeepaidsts.setter
    def hmiasylanekeepaidsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasylanekeepaidsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasylanekeepaidsts' field must be an unsigned integer in [0, 255]"
        self._hmiasylanekeepaidsts = value

    @builtins.property
    def hmiasyobjtype(self):
        """Message field 'hmiasyobjtype'."""
        return self._hmiasyobjtype

    @hmiasyobjtype.setter
    def hmiasyobjtype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasyobjtype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasyobjtype' field must be an unsigned integer in [0, 255]"
        self._hmiasyobjtype = value

    @builtins.property
    def hmiasysteerapplyrqrd(self):
        """Message field 'hmiasysteerapplyrqrd'."""
        return self._hmiasysteerapplyrqrd

    @hmiasysteerapplyrqrd.setter
    def hmiasysteerapplyrqrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasysteerapplyrqrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasysteerapplyrqrd' field must be an unsigned integer in [0, 255]"
        self._hmiasysteerapplyrqrd = value

    @builtins.property
    def hmiasywarnforsteercncl(self):
        """Message field 'hmiasywarnforsteercncl'."""
        return self._hmiasywarnforsteercncl

    @hmiasywarnforsteercncl.setter
    def hmiasywarnforsteercncl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasywarnforsteercncl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasywarnforsteercncl' field must be an unsigned integer in [0, 255]"
        self._hmiasywarnforsteercncl = value

    @builtins.property
    def hmicllsnaidpost(self):
        """Message field 'hmicllsnaidpost'."""
        return self._hmicllsnaidpost

    @hmicllsnaidpost.setter
    def hmicllsnaidpost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnaidpost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnaidpost' field must be an unsigned integer in [0, 255]"
        self._hmicllsnaidpost = value

    @builtins.property
    def hmicllsnfwdwarn(self):
        """Message field 'hmicllsnfwdwarn'."""
        return self._hmicllsnfwdwarn

    @hmicllsnfwdwarn.setter
    def hmicllsnfwdwarn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnfwdwarn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnfwdwarn' field must be an unsigned integer in [0, 255]"
        self._hmicllsnfwdwarn = value

    @builtins.property
    def hmicllsnmtgtnfaultsts(self):
        """Message field 'hmicllsnmtgtnfaultsts'."""
        return self._hmicllsnmtgtnfaultsts

    @hmicllsnmtgtnfaultsts.setter
    def hmicllsnmtgtnfaultsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnmtgtnfaultsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnmtgtnfaultsts' field must be an unsigned integer in [0, 255]"
        self._hmicllsnmtgtnfaultsts = value

    @builtins.property
    def hmicllsnmtgtnfctsts(self):
        """Message field 'hmicllsnmtgtnfctsts'."""
        return self._hmicllsnmtgtnfctsts

    @hmicllsnmtgtnfctsts.setter
    def hmicllsnmtgtnfctsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnmtgtnfctsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnmtgtnfctsts' field must be an unsigned integer in [0, 255]"
        self._hmicllsnmtgtnfctsts = value

    @builtins.property
    def hmicllsnmtgtnwarnsts(self):
        """Message field 'hmicllsnmtgtnwarnsts'."""
        return self._hmicllsnmtgtnwarnsts

    @hmicllsnmtgtnwarnsts.setter
    def hmicllsnmtgtnwarnsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnmtgtnwarnsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnmtgtnwarnsts' field must be an unsigned integer in [0, 255]"
        self._hmicllsnmtgtnwarnsts = value

    @builtins.property
    def hmictryforroadsgninfo(self):
        """Message field 'hmictryforroadsgninfo'."""
        return self._hmictryforroadsgninfo

    @hmictryforroadsgninfo.setter
    def hmictryforroadsgninfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmictryforroadsgninfo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmictryforroadsgninfo' field must be an unsigned integer in [0, 255]"
        self._hmictryforroadsgninfo = value

    @builtins.property
    def hmiintvandwarnmodinfosts(self):
        """Message field 'hmiintvandwarnmodinfosts'."""
        return self._hmiintvandwarnmodinfosts

    @hmiintvandwarnmodinfosts.setter
    def hmiintvandwarnmodinfosts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiintvandwarnmodinfosts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiintvandwarnmodinfosts' field must be an unsigned integer in [0, 255]"
        self._hmiintvandwarnmodinfosts = value

    @builtins.property
    def hmilanechgwarnsts(self):
        """Message field 'hmilanechgwarnsts'."""
        return self._hmilanechgwarnsts

    @hmilanechgwarnsts.setter
    def hmilanechgwarnsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilanechgwarnsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilanechgwarnsts' field must be an unsigned integer in [0, 255]"
        self._hmilanechgwarnsts = value

    @builtins.property
    def hmilanekeepaidinfosts(self):
        """Message field 'hmilanekeepaidinfosts'."""
        return self._hmilanekeepaidinfosts

    @hmilanekeepaidinfosts.setter
    def hmilanekeepaidinfosts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilanekeepaidinfosts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilanekeepaidinfosts' field must be an unsigned integer in [0, 255]"
        self._hmilanekeepaidinfosts = value

    @builtins.property
    def hminontrvrsbleroadedgeonleft(self):
        """Message field 'hminontrvrsbleroadedgeonleft'."""
        return self._hminontrvrsbleroadedgeonleft

    @hminontrvrsbleroadedgeonleft.setter
    def hminontrvrsbleroadedgeonleft(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hminontrvrsbleroadedgeonleft' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hminontrvrsbleroadedgeonleft' field must be an unsigned integer in [0, 255]"
        self._hminontrvrsbleroadedgeonleft = value

    @builtins.property
    def hminontrvrsbleroadedgeonright(self):
        """Message field 'hminontrvrsbleroadedgeonright'."""
        return self._hminontrvrsbleroadedgeonright

    @hminontrvrsbleroadedgeonright.setter
    def hminontrvrsbleroadedgeonright(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hminontrvrsbleroadedgeonright' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hminontrvrsbleroadedgeonright' field must be an unsigned integer in [0, 255]"
        self._hminontrvrsbleroadedgeonright = value

    @builtins.property
    def hmioffsforspdwarnsetgsts(self):
        """Message field 'hmioffsforspdwarnsetgsts'."""
        return self._hmioffsforspdwarnsetgsts

    @hmioffsforspdwarnsetgsts.setter
    def hmioffsforspdwarnsetgsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmioffsforspdwarnsetgsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmioffsforspdwarnsetgsts' field must be an unsigned integer in [0, 255]"
        self._hmioffsforspdwarnsetgsts = value

    @builtins.property
    def hmiroadmiscsgninfosts(self):
        """Message field 'hmiroadmiscsgninfosts'."""
        return self._hmiroadmiscsgninfosts

    @hmiroadmiscsgninfosts.setter
    def hmiroadmiscsgninfosts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiroadmiscsgninfosts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiroadmiscsgninfosts' field must be an unsigned integer in [0, 255]"
        self._hmiroadmiscsgninfosts = value

    @builtins.property
    def hmiroadsgninfosts(self):
        """Message field 'hmiroadsgninfosts'."""
        return self._hmiroadsgninfosts

    @hmiroadsgninfosts.setter
    def hmiroadsgninfosts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiroadsgninfosts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiroadsgninfosts' field must be an unsigned integer in [0, 255]"
        self._hmiroadsgninfosts = value

    @builtins.property
    def hmispdalrmactvsts(self):
        """Message field 'hmispdalrmactvsts'."""
        return self._hmispdalrmactvsts

    @hmispdalrmactvsts.setter
    def hmispdalrmactvsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmispdalrmactvsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmispdalrmactvsts' field must be an unsigned integer in [0, 255]"
        self._hmispdalrmactvsts = value

    @builtins.property
    def hmitrfcinfomiscfirst(self):
        """Message field 'hmitrfcinfomiscfirst'."""
        return self._hmitrfcinfomiscfirst

    @hmitrfcinfomiscfirst.setter
    def hmitrfcinfomiscfirst(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfcinfomiscfirst' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfcinfomiscfirst' field must be an unsigned integer in [0, 255]"
        self._hmitrfcinfomiscfirst = value

    @builtins.property
    def hmiwarnforasyemgylanekeepaid(self):
        """Message field 'hmiwarnforasyemgylanekeepaid'."""
        return self._hmiwarnforasyemgylanekeepaid

    @hmiwarnforasyemgylanekeepaid.setter
    def hmiwarnforasyemgylanekeepaid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiwarnforasyemgylanekeepaid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiwarnforasyemgylanekeepaid' field must be an unsigned integer in [0, 255]"
        self._hmiwarnforasyemgylanekeepaid = value

    @builtins.property
    def hmicllsnmtgtnonoffsts(self):
        """Message field 'hmicllsnmtgtnonoffsts'."""
        return self._hmicllsnmtgtnonoffsts

    @hmicllsnmtgtnonoffsts.setter
    def hmicllsnmtgtnonoffsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnmtgtnonoffsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnmtgtnonoffsts' field must be an unsigned integer in [0, 255]"
        self._hmicllsnmtgtnonoffsts = value

    @builtins.property
    def hmidooropenwarnon1(self):
        """Message field 'hmidooropenwarnon1'."""
        return self._hmidooropenwarnon1

    @hmidooropenwarnon1.setter
    def hmidooropenwarnon1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmidooropenwarnon1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmidooropenwarnon1' field must be an unsigned integer in [0, 255]"
        self._hmidooropenwarnon1 = value

    @builtins.property
    def hmidooropenwarnleindcn(self):
        """Message field 'hmidooropenwarnleindcn'."""
        return self._hmidooropenwarnleindcn

    @hmidooropenwarnleindcn.setter
    def hmidooropenwarnleindcn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmidooropenwarnleindcn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmidooropenwarnleindcn' field must be an unsigned integer in [0, 255]"
        self._hmidooropenwarnleindcn = value

    @builtins.property
    def hmidooropenwarnriindcn(self):
        """Message field 'hmidooropenwarnriindcn'."""
        return self._hmidooropenwarnriindcn

    @hmidooropenwarnriindcn.setter
    def hmidooropenwarnriindcn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmidooropenwarnriindcn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmidooropenwarnriindcn' field must be an unsigned integer in [0, 255]"
        self._hmidooropenwarnriindcn = value

    @builtins.property
    def hmilettclv(self):
        """Message field 'hmilettclv'."""
        return self._hmilettclv

    @hmilettclv.setter
    def hmilettclv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilettclv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilettclv' field must be an unsigned integer in [0, 255]"
        self._hmilettclv = value

    @builtins.property
    def hmirittclv(self):
        """Message field 'hmirittclv'."""
        return self._hmirittclv

    @hmirittclv.setter
    def hmirittclv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirittclv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirittclv' field must be an unsigned integer in [0, 255]"
        self._hmirittclv = value

    @builtins.property
    def hmifctaindcnle(self):
        """Message field 'hmifctaindcnle'."""
        return self._hmifctaindcnle

    @hmifctaindcnle.setter
    def hmifctaindcnle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmifctaindcnle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmifctaindcnle' field must be an unsigned integer in [0, 255]"
        self._hmifctaindcnle = value

    @builtins.property
    def hmifctaindcnri(self):
        """Message field 'hmifctaindcnri'."""
        return self._hmifctaindcnri

    @hmifctaindcnri.setter
    def hmifctaindcnri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmifctaindcnri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmifctaindcnri' field must be an unsigned integer in [0, 255]"
        self._hmifctaindcnri = value

    @builtins.property
    def hmilcmaindcnle(self):
        """Message field 'hmilcmaindcnle'."""
        return self._hmilcmaindcnle

    @hmilcmaindcnle.setter
    def hmilcmaindcnle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilcmaindcnle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilcmaindcnle' field must be an unsigned integer in [0, 255]"
        self._hmilcmaindcnle = value

    @builtins.property
    def hmilcmaindcnri(self):
        """Message field 'hmilcmaindcnri'."""
        return self._hmilcmaindcnri

    @hmilcmaindcnri.setter
    def hmilcmaindcnri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilcmaindcnri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilcmaindcnri' field must be an unsigned integer in [0, 255]"
        self._hmilcmaindcnri = value

    @builtins.property
    def hmilcmaon(self):
        """Message field 'hmilcmaon'."""
        return self._hmilcmaon

    @hmilcmaon.setter
    def hmilcmaon(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilcmaon' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilcmaon' field must be an unsigned integer in [0, 255]"
        self._hmilcmaon = value

    @builtins.property
    def hmilcmaaudwarn(self):
        """Message field 'hmilcmaaudwarn'."""
        return self._hmilcmaaudwarn

    @hmilcmaaudwarn.setter
    def hmilcmaaudwarn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmilcmaaudwarn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmilcmaaudwarn' field must be an unsigned integer in [0, 255]"
        self._hmilcmaaudwarn = value

    @builtins.property
    def hmirsdssyssts(self):
        """Message field 'hmirsdssyssts'."""
        return self._hmirsdssyssts

    @hmirsdssyssts.setter
    def hmirsdssyssts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirsdssyssts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirsdssyssts' field must be an unsigned integer in [0, 255]"
        self._hmirsdssyssts = value

    @builtins.property
    def hmirctaindcnle(self):
        """Message field 'hmirctaindcnle'."""
        return self._hmirctaindcnle

    @hmirctaindcnle.setter
    def hmirctaindcnle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirctaindcnle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirctaindcnle' field must be an unsigned integer in [0, 255]"
        self._hmirctaindcnle = value

    @builtins.property
    def hmirctaindcnri(self):
        """Message field 'hmirctaindcnri'."""
        return self._hmirctaindcnri

    @hmirctaindcnri.setter
    def hmirctaindcnri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirctaindcnri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirctaindcnri' field must be an unsigned integer in [0, 255]"
        self._hmirctaindcnri = value

    @builtins.property
    def hmictraon1(self):
        """Message field 'hmictraon1'."""
        return self._hmictraon1

    @hmictraon1.setter
    def hmictraon1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmictraon1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmictraon1' field must be an unsigned integer in [0, 255]"
        self._hmictraon1 = value

    @builtins.property
    def hmicllsnwarnreindcn(self):
        """Message field 'hmicllsnwarnreindcn'."""
        return self._hmicllsnwarnreindcn

    @hmicllsnwarnreindcn.setter
    def hmicllsnwarnreindcn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnwarnreindcn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnwarnreindcn' field must be an unsigned integer in [0, 255]"
        self._hmicllsnwarnreindcn = value

    @builtins.property
    def hmicllsnwarnreon1(self):
        """Message field 'hmicllsnwarnreon1'."""
        return self._hmicllsnwarnreon1

    @hmicllsnwarnreon1.setter
    def hmicllsnwarnreon1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnwarnreon1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnwarnreon1' field must be an unsigned integer in [0, 255]"
        self._hmicllsnwarnreon1 = value

    @builtins.property
    def hmircwmlireq(self):
        """Message field 'hmircwmlireq'."""
        return self._hmircwmlireq

    @hmircwmlireq.setter
    def hmircwmlireq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmircwmlireq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmircwmlireq' field must be an unsigned integer in [0, 255]"
        self._hmircwmlireq = value

    @builtins.property
    def acttnrctabrkreq(self):
        """Message field 'acttnrctabrkreq'."""
        return self._acttnrctabrkreq

    @acttnrctabrkreq.setter
    def acttnrctabrkreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnrctabrkreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnrctabrkreq' field must be an unsigned integer in [0, 255]"
        self._acttnrctabrkreq = value

    @builtins.property
    def acttnrctabrkreqqm(self):
        """Message field 'acttnrctabrkreqqm'."""
        return self._acttnrctabrkreqqm

    @acttnrctabrkreqqm.setter
    def acttnrctabrkreqqm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnrctabrkreqqm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnrctabrkreqqm' field must be an unsigned integer in [0, 255]"
        self._acttnrctabrkreqqm = value

    @builtins.property
    def acttnrcwmbrkreq(self):
        """Message field 'acttnrcwmbrkreq'."""
        return self._acttnrcwmbrkreq

    @acttnrcwmbrkreq.setter
    def acttnrcwmbrkreq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnrcwmbrkreq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnrcwmbrkreq' field must be an unsigned integer in [0, 255]"
        self._acttnrcwmbrkreq = value

    @builtins.property
    def acttnrcwmbrkreqqm(self):
        """Message field 'acttnrcwmbrkreqqm'."""
        return self._acttnrcwmbrkreqqm

    @acttnrcwmbrkreqqm.setter
    def acttnrcwmbrkreqqm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acttnrcwmbrkreqqm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acttnrcwmbrkreqqm' field must be an unsigned integer in [0, 255]"
        self._acttnrcwmbrkreqqm = value

    @builtins.property
    def hmiasyemgymanoeuvreaidsts(self):
        """Message field 'hmiasyemgymanoeuvreaidsts'."""
        return self._hmiasyemgymanoeuvreaidsts

    @hmiasyemgymanoeuvreaidsts.setter
    def hmiasyemgymanoeuvreaidsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiasyemgymanoeuvreaidsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiasyemgymanoeuvreaidsts' field must be an unsigned integer in [0, 255]"
        self._hmiasyemgymanoeuvreaidsts = value

    @builtins.property
    def hmicllsnaidpostema(self):
        """Message field 'hmicllsnaidpostema'."""
        return self._hmicllsnaidpostema

    @hmicllsnaidpostema.setter
    def hmicllsnaidpostema(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmicllsnaidpostema' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmicllsnaidpostema' field must be an unsigned integer in [0, 255]"
        self._hmicllsnaidpostema = value

    @builtins.property
    def hmitrfcliinfo(self):
        """Message field 'hmitrfcliinfo'."""
        return self._hmitrfcliinfo

    @hmitrfcliinfo.setter
    def hmitrfcliinfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfcliinfo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfcliinfo' field must be an unsigned integer in [0, 255]"
        self._hmitrfcliinfo = value

    @builtins.property
    def hmitrfclists(self):
        """Message field 'hmitrfclists'."""
        return self._hmitrfclists

    @hmitrfclists.setter
    def hmitrfclists(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfclists' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfclists' field must be an unsigned integer in [0, 255]"
        self._hmitrfclists = value

    @builtins.property
    def hmitrfcliwarntypsts(self):
        """Message field 'hmitrfcliwarntypsts'."""
        return self._hmitrfcliwarntypsts

    @hmitrfcliwarntypsts.setter
    def hmitrfcliwarntypsts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfcliwarntypsts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfcliwarntypsts' field must be an unsigned integer in [0, 255]"
        self._hmitrfcliwarntypsts = value

    @builtins.property
    def hmiuturnlight(self):
        """Message field 'hmiuturnlight'."""
        return self._hmiuturnlight

    @hmiuturnlight.setter
    def hmiuturnlight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiuturnlight' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiuturnlight' field must be an unsigned integer in [0, 255]"
        self._hmiuturnlight = value

    @builtins.property
    def hmitrfcliinfoleft(self):
        """Message field 'hmitrfcliinfoleft'."""
        return self._hmitrfcliinfoleft

    @hmitrfcliinfoleft.setter
    def hmitrfcliinfoleft(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfcliinfoleft' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfcliinfoleft' field must be an unsigned integer in [0, 255]"
        self._hmitrfcliinfoleft = value

    @builtins.property
    def hmitrfcliinforight(self):
        """Message field 'hmitrfcliinforight'."""
        return self._hmitrfcliinforight

    @hmitrfcliinforight.setter
    def hmitrfcliinforight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfcliinforight' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfcliinforight' field must be an unsigned integer in [0, 255]"
        self._hmitrfcliinforight = value

    @builtins.property
    def hmiaebtriggerobjectid(self):
        """Message field 'hmiaebtriggerobjectid'."""
        return self._hmiaebtriggerobjectid

    @hmiaebtriggerobjectid.setter
    def hmiaebtriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiaebtriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiaebtriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmiaebtriggerobjectid = value

    @builtins.property
    def hmielkatriggerobjectid(self):
        """Message field 'hmielkatriggerobjectid'."""
        return self._hmielkatriggerobjectid

    @hmielkatriggerobjectid.setter
    def hmielkatriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmielkatriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmielkatriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmielkatriggerobjectid = value

    @builtins.property
    def hmifctarighttriggerobjectid(self):
        """Message field 'hmifctarighttriggerobjectid'."""
        return self._hmifctarighttriggerobjectid

    @hmifctarighttriggerobjectid.setter
    def hmifctarighttriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmifctarighttriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmifctarighttriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmifctarighttriggerobjectid = value

    @builtins.property
    def hmifctalefttriggerobjectid(self):
        """Message field 'hmifctalefttriggerobjectid'."""
        return self._hmifctalefttriggerobjectid

    @hmifctalefttriggerobjectid.setter
    def hmifctalefttriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmifctalefttriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmifctalefttriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmifctalefttriggerobjectid = value

    @builtins.property
    def hmiematriggerobjectid(self):
        """Message field 'hmiematriggerobjectid'."""
        return self._hmiematriggerobjectid

    @hmiematriggerobjectid.setter
    def hmiematriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmiematriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmiematriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmiematriggerobjectid = value

    @builtins.property
    def hmirctarighttriggerobjectid(self):
        """Message field 'hmirctarighttriggerobjectid'."""
        return self._hmirctarighttriggerobjectid

    @hmirctarighttriggerobjectid.setter
    def hmirctarighttriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirctarighttriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirctarighttriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmirctarighttriggerobjectid = value

    @builtins.property
    def hmirctalefttriggerobjectid(self):
        """Message field 'hmirctalefttriggerobjectid'."""
        return self._hmirctalefttriggerobjectid

    @hmirctalefttriggerobjectid.setter
    def hmirctalefttriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmirctalefttriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmirctalefttriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmirctalefttriggerobjectid = value

    @builtins.property
    def hmitrfclichg(self):
        """Message field 'hmitrfclichg'."""
        return self._hmitrfclichg

    @hmitrfclichg.setter
    def hmitrfclichg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmitrfclichg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmitrfclichg' field must be an unsigned integer in [0, 255]"
        self._hmitrfclichg = value

    @builtins.property
    def hmifcwtriggerobjectid(self):
        """Message field 'hmifcwtriggerobjectid'."""
        return self._hmifcwtriggerobjectid

    @hmifcwtriggerobjectid.setter
    def hmifcwtriggerobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmifcwtriggerobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmifcwtriggerobjectid' field must be an unsigned integer in [0, 255]"
        self._hmifcwtriggerobjectid = value

    @builtins.property
    def lanekeepaidlaneinfo(self):
        """Message field 'lanekeepaidlaneinfo'."""
        return self._lanekeepaidlaneinfo

    @lanekeepaidlaneinfo.setter
    def lanekeepaidlaneinfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanekeepaidlaneinfo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanekeepaidlaneinfo' field must be an unsigned integer in [0, 255]"
        self._lanekeepaidlaneinfo = value

    @builtins.property
    def asyemgylanekeepaidlaneinfo(self):
        """Message field 'asyemgylanekeepaidlaneinfo'."""
        return self._asyemgylanekeepaidlaneinfo

    @asyemgylanekeepaidlaneinfo.setter
    def asyemgylanekeepaidlaneinfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asyemgylanekeepaidlaneinfo' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asyemgylanekeepaidlaneinfo' field must be an unsigned integer in [0, 255]"
        self._asyemgylanekeepaidlaneinfo = value

    @builtins.property
    def hmireserve1(self):
        """Message field 'hmireserve1'."""
        return self._hmireserve1

    @hmireserve1.setter
    def hmireserve1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmireserve1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hmireserve1' field must be an unsigned integer in [0, 65535]"
        self._hmireserve1 = value

    @builtins.property
    def hmireserve2(self):
        """Message field 'hmireserve2'."""
        return self._hmireserve2

    @hmireserve2.setter
    def hmireserve2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmireserve2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hmireserve2' field must be an unsigned integer in [0, 65535]"
        self._hmireserve2 = value

    @builtins.property
    def hmireserve3(self):
        """Message field 'hmireserve3'."""
        return self._hmireserve3

    @hmireserve3.setter
    def hmireserve3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmireserve3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hmireserve3' field must be an unsigned integer in [0, 65535]"
        self._hmireserve3 = value

    @builtins.property
    def hmireserve4(self):
        """Message field 'hmireserve4'."""
        return self._hmireserve4

    @hmireserve4.setter
    def hmireserve4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmireserve4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hmireserve4' field must be an unsigned integer in [0, 65535]"
        self._hmireserve4 = value

    @builtins.property
    def hmireserve5(self):
        """Message field 'hmireserve5'."""
        return self._hmireserve5

    @hmireserve5.setter
    def hmireserve5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hmireserve5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hmireserve5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hmireserve5 = value

    @builtins.property
    def hmireserve6(self):
        """Message field 'hmireserve6'."""
        return self._hmireserve6

    @hmireserve6.setter
    def hmireserve6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hmireserve6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hmireserve6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hmireserve6 = value

    @builtins.property
    def hmireserve7(self):
        """Message field 'hmireserve7'."""
        return self._hmireserve7

    @hmireserve7.setter
    def hmireserve7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hmireserve7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hmireserve7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hmireserve7 = value

    @builtins.property
    def hmireserve8(self):
        """Message field 'hmireserve8'."""
        return self._hmireserve8

    @hmireserve8.setter
    def hmireserve8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hmireserve8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hmireserve8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hmireserve8 = value

    @builtins.property
    def asypinionagreq(self):
        """Message field 'asypinionagreq'."""
        return self._asypinionagreq

    @asypinionagreq.setter
    def asypinionagreq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'asypinionagreq' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'asypinionagreq' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._asypinionagreq = value

    @builtins.property
    def latctrlagctrltqlowrlim(self):
        """Message field 'latctrlagctrltqlowrlim'."""
        return self._latctrlagctrltqlowrlim

    @latctrlagctrltqlowrlim.setter
    def latctrlagctrltqlowrlim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latctrlagctrltqlowrlim' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latctrlagctrltqlowrlim' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latctrlagctrltqlowrlim = value

    @builtins.property
    def latctrlagctrltqupprlim(self):
        """Message field 'latctrlagctrltqupprlim'."""
        return self._latctrlagctrltqupprlim

    @latctrlagctrltqupprlim.setter
    def latctrlagctrltqupprlim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latctrlagctrltqupprlim' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latctrlagctrltqupprlim' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latctrlagctrltqupprlim = value
