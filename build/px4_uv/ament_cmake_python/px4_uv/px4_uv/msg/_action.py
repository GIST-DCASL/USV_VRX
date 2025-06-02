# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_uv:msg/Action.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Action(type):
    """Metaclass of message 'Action'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_MOVE': 0,
        'ACTION_TAKEOFF': 1,
        'ACTION_LANDING': 2,
        'ACTION_RETURN_HOME': 3,
        'ACTION_PATROL': 4,
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
                'px4_uv.msg.Action')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_MOVE': cls.__constants['ACTION_MOVE'],
            'ACTION_TAKEOFF': cls.__constants['ACTION_TAKEOFF'],
            'ACTION_LANDING': cls.__constants['ACTION_LANDING'],
            'ACTION_RETURN_HOME': cls.__constants['ACTION_RETURN_HOME'],
            'ACTION_PATROL': cls.__constants['ACTION_PATROL'],
        }

    @property
    def ACTION_MOVE(self):
        """Message constant 'ACTION_MOVE'."""
        return Metaclass_Action.__constants['ACTION_MOVE']

    @property
    def ACTION_TAKEOFF(self):
        """Message constant 'ACTION_TAKEOFF'."""
        return Metaclass_Action.__constants['ACTION_TAKEOFF']

    @property
    def ACTION_LANDING(self):
        """Message constant 'ACTION_LANDING'."""
        return Metaclass_Action.__constants['ACTION_LANDING']

    @property
    def ACTION_RETURN_HOME(self):
        """Message constant 'ACTION_RETURN_HOME'."""
        return Metaclass_Action.__constants['ACTION_RETURN_HOME']

    @property
    def ACTION_PATROL(self):
        """Message constant 'ACTION_PATROL'."""
        return Metaclass_Action.__constants['ACTION_PATROL']


class Action(metaclass=Metaclass_Action):
    """
    Message class 'Action'.

    Constants:
      ACTION_MOVE
      ACTION_TAKEOFF
      ACTION_LANDING
      ACTION_RETURN_HOME
      ACTION_PATROL
    """

    __slots__ = [
        '_action',
        '_setpoint',
        '_param1',
        '_param2',
        '_param3',
        '_param4',
        '_param5',
    ]

    _fields_and_field_types = {
        'action': 'uint8',
        'setpoint': 'geometry_msgs/Vector3',
        'param1': 'float',
        'param2': 'float',
        'param3': 'float',
        'param4': 'float',
        'param5': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
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
        self.action = kwargs.get('action', int())
        from geometry_msgs.msg import Vector3
        self.setpoint = kwargs.get('setpoint', Vector3())
        self.param1 = kwargs.get('param1', float())
        self.param2 = kwargs.get('param2', float())
        self.param3 = kwargs.get('param3', float())
        self.param4 = kwargs.get('param4', float())
        self.param5 = kwargs.get('param5', float())

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
        if self.action != other.action:
            return False
        if self.setpoint != other.setpoint:
            return False
        if self.param1 != other.param1:
            return False
        if self.param2 != other.param2:
            return False
        if self.param3 != other.param3:
            return False
        if self.param4 != other.param4:
            return False
        if self.param5 != other.param5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @builtins.property
    def setpoint(self):
        """Message field 'setpoint'."""
        return self._setpoint

    @setpoint.setter
    def setpoint(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'setpoint' field must be a sub message of type 'Vector3'"
        self._setpoint = value

    @builtins.property
    def param1(self):
        """Message field 'param1'."""
        return self._param1

    @param1.setter
    def param1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param1 = value

    @builtins.property
    def param2(self):
        """Message field 'param2'."""
        return self._param2

    @param2.setter
    def param2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param2 = value

    @builtins.property
    def param3(self):
        """Message field 'param3'."""
        return self._param3

    @param3.setter
    def param3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param3 = value

    @builtins.property
    def param4(self):
        """Message field 'param4'."""
        return self._param4

    @param4.setter
    def param4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param4 = value

    @builtins.property
    def param5(self):
        """Message field 'param5'."""
        return self._param5

    @param5.setter
    def param5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param5 = value
