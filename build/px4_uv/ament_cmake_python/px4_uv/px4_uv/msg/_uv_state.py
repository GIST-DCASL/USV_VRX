# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_uv:msg/UvState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UvState(type):
    """Metaclass of message 'UvState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_STATUS_NORMAL': 0,
        'VEHICLE_STATUS_STOP': 1,
        'VEHICLE_STATUS_TAKEOFF': 2,
        'VEHICLE_STATUS_LANDED': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_uv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_uv.msg.UvState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uv_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uv_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uv_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uv_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uv_state

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_STATUS_NORMAL': cls.__constants['VEHICLE_STATUS_NORMAL'],
            'VEHICLE_STATUS_STOP': cls.__constants['VEHICLE_STATUS_STOP'],
            'VEHICLE_STATUS_TAKEOFF': cls.__constants['VEHICLE_STATUS_TAKEOFF'],
            'VEHICLE_STATUS_LANDED': cls.__constants['VEHICLE_STATUS_LANDED'],
        }

    @property
    def VEHICLE_STATUS_NORMAL(self):
        """Message constant 'VEHICLE_STATUS_NORMAL'."""
        return Metaclass_UvState.__constants['VEHICLE_STATUS_NORMAL']

    @property
    def VEHICLE_STATUS_STOP(self):
        """Message constant 'VEHICLE_STATUS_STOP'."""
        return Metaclass_UvState.__constants['VEHICLE_STATUS_STOP']

    @property
    def VEHICLE_STATUS_TAKEOFF(self):
        """Message constant 'VEHICLE_STATUS_TAKEOFF'."""
        return Metaclass_UvState.__constants['VEHICLE_STATUS_TAKEOFF']

    @property
    def VEHICLE_STATUS_LANDED(self):
        """Message constant 'VEHICLE_STATUS_LANDED'."""
        return Metaclass_UvState.__constants['VEHICLE_STATUS_LANDED']


class UvState(metaclass=Metaclass_UvState):
    """
    Message class 'UvState'.

    Constants:
      VEHICLE_STATUS_NORMAL
      VEHICLE_STATUS_STOP
      VEHICLE_STATUS_TAKEOFF
      VEHICLE_STATUS_LANDED
    """

    __slots__ = [
        '_pos',
        '_vel',
        '_current_yaw',
        '_ref_lat',
        '_ref_lon',
        '_ref_alt',
        '_battery',
        '_status',
    ]

    _fields_and_field_types = {
        'pos': 'geometry_msgs/Vector3',
        'vel': 'geometry_msgs/Vector3',
        'current_yaw': 'float',
        'ref_lat': 'float',
        'ref_lon': 'float',
        'ref_alt': 'float',
        'battery': 'uint16',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.pos = kwargs.get('pos', Vector3())
        from geometry_msgs.msg import Vector3
        self.vel = kwargs.get('vel', Vector3())
        self.current_yaw = kwargs.get('current_yaw', float())
        self.ref_lat = kwargs.get('ref_lat', float())
        self.ref_lon = kwargs.get('ref_lon', float())
        self.ref_alt = kwargs.get('ref_alt', float())
        self.battery = kwargs.get('battery', int())
        self.status = kwargs.get('status', int())

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
        if self.pos != other.pos:
            return False
        if self.vel != other.vel:
            return False
        if self.current_yaw != other.current_yaw:
            return False
        if self.ref_lat != other.ref_lat:
            return False
        if self.ref_lon != other.ref_lon:
            return False
        if self.ref_alt != other.ref_alt:
            return False
        if self.battery != other.battery:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'pos' field must be a sub message of type 'Vector3'"
        self._pos = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'vel' field must be a sub message of type 'Vector3'"
        self._vel = value

    @builtins.property
    def current_yaw(self):
        """Message field 'current_yaw'."""
        return self._current_yaw

    @current_yaw.setter
    def current_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_yaw = value

    @builtins.property
    def ref_lat(self):
        """Message field 'ref_lat'."""
        return self._ref_lat

    @ref_lat.setter
    def ref_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_lat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_lat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_lat = value

    @builtins.property
    def ref_lon(self):
        """Message field 'ref_lon'."""
        return self._ref_lon

    @ref_lon.setter
    def ref_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_lon' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_lon' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_lon = value

    @builtins.property
    def ref_alt(self):
        """Message field 'ref_alt'."""
        return self._ref_alt

    @ref_alt.setter
    def ref_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_alt = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'battery' field must be an unsigned integer in [0, 65535]"
        self._battery = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
