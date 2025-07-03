# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_uv:msg/TaskInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskInfo(type):
    """Metaclass of message 'TaskInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_TYPE_NONE': 0,
        'VEHICLE_TYPE_UAV': 1,
        'VEHICLE_TYPE_UGV': 2,
        'VEHICLE_TYPE_USV': 3,
        'TASK_STATUS_REQUESTED': 0,
        'TASK_STATUS_INPROCESS': 1,
        'TASK_STATUS_COMPLETED': 2,
        'PAYLOAD_TYPE_NULL': 0,
        'PAYLOAD_TYPE_CAM': 1,
        'TASK_TYPE_WAYPOINT': 0,
        'TASK_TYPE_CHARGING': 1,
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
                'px4_uv.msg.TaskInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_info

            from px4_uv.msg import Action
            if Action.__class__._TYPE_SUPPORT is None:
                Action.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_TYPE_NONE': cls.__constants['VEHICLE_TYPE_NONE'],
            'VEHICLE_TYPE_UAV': cls.__constants['VEHICLE_TYPE_UAV'],
            'VEHICLE_TYPE_UGV': cls.__constants['VEHICLE_TYPE_UGV'],
            'VEHICLE_TYPE_USV': cls.__constants['VEHICLE_TYPE_USV'],
            'TASK_STATUS_REQUESTED': cls.__constants['TASK_STATUS_REQUESTED'],
            'TASK_STATUS_INPROCESS': cls.__constants['TASK_STATUS_INPROCESS'],
            'TASK_STATUS_COMPLETED': cls.__constants['TASK_STATUS_COMPLETED'],
            'PAYLOAD_TYPE_NULL': cls.__constants['PAYLOAD_TYPE_NULL'],
            'PAYLOAD_TYPE_CAM': cls.__constants['PAYLOAD_TYPE_CAM'],
            'TASK_TYPE_WAYPOINT': cls.__constants['TASK_TYPE_WAYPOINT'],
            'TASK_TYPE_CHARGING': cls.__constants['TASK_TYPE_CHARGING'],
        }

    @property
    def VEHICLE_TYPE_NONE(self):
        """Message constant 'VEHICLE_TYPE_NONE'."""
        return Metaclass_TaskInfo.__constants['VEHICLE_TYPE_NONE']

    @property
    def VEHICLE_TYPE_UAV(self):
        """Message constant 'VEHICLE_TYPE_UAV'."""
        return Metaclass_TaskInfo.__constants['VEHICLE_TYPE_UAV']

    @property
    def VEHICLE_TYPE_UGV(self):
        """Message constant 'VEHICLE_TYPE_UGV'."""
        return Metaclass_TaskInfo.__constants['VEHICLE_TYPE_UGV']

    @property
    def VEHICLE_TYPE_USV(self):
        """Message constant 'VEHICLE_TYPE_USV'."""
        return Metaclass_TaskInfo.__constants['VEHICLE_TYPE_USV']

    @property
    def TASK_STATUS_REQUESTED(self):
        """Message constant 'TASK_STATUS_REQUESTED'."""
        return Metaclass_TaskInfo.__constants['TASK_STATUS_REQUESTED']

    @property
    def TASK_STATUS_INPROCESS(self):
        """Message constant 'TASK_STATUS_INPROCESS'."""
        return Metaclass_TaskInfo.__constants['TASK_STATUS_INPROCESS']

    @property
    def TASK_STATUS_COMPLETED(self):
        """Message constant 'TASK_STATUS_COMPLETED'."""
        return Metaclass_TaskInfo.__constants['TASK_STATUS_COMPLETED']

    @property
    def PAYLOAD_TYPE_NULL(self):
        """Message constant 'PAYLOAD_TYPE_NULL'."""
        return Metaclass_TaskInfo.__constants['PAYLOAD_TYPE_NULL']

    @property
    def PAYLOAD_TYPE_CAM(self):
        """Message constant 'PAYLOAD_TYPE_CAM'."""
        return Metaclass_TaskInfo.__constants['PAYLOAD_TYPE_CAM']

    @property
    def TASK_TYPE_WAYPOINT(self):
        """Message constant 'TASK_TYPE_WAYPOINT'."""
        return Metaclass_TaskInfo.__constants['TASK_TYPE_WAYPOINT']

    @property
    def TASK_TYPE_CHARGING(self):
        """Message constant 'TASK_TYPE_CHARGING'."""
        return Metaclass_TaskInfo.__constants['TASK_TYPE_CHARGING']


class TaskInfo(metaclass=Metaclass_TaskInfo):
    """
    Message class 'TaskInfo'.

    Constants:
      VEHICLE_TYPE_NONE
      VEHICLE_TYPE_UAV
      VEHICLE_TYPE_UGV
      VEHICLE_TYPE_USV
      TASK_STATUS_REQUESTED
      TASK_STATUS_INPROCESS
      TASK_STATUS_COMPLETED
      PAYLOAD_TYPE_NULL
      PAYLOAD_TYPE_CAM
      TASK_TYPE_WAYPOINT
      TASK_TYPE_CHARGING
    """

    __slots__ = [
        '_task_id',
        '_task_description',
        '_target_type',
        '_mission_id',
        '_required_payload_type',
        '_task_status',
        '_task_type',
        '_actions',
        '_reward',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'task_description': 'string',
        'target_type': 'uint8',
        'mission_id': 'string',
        'required_payload_type': 'uint8',
        'task_status': 'uint8',
        'task_type': 'uint8',
        'actions': 'sequence<px4_uv/Action>',
        'reward': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['px4_uv', 'msg'], 'Action')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.task_description = kwargs.get('task_description', str())
        self.target_type = kwargs.get('target_type', int())
        self.mission_id = kwargs.get('mission_id', str())
        self.required_payload_type = kwargs.get('required_payload_type', int())
        self.task_status = kwargs.get('task_status', int())
        self.task_type = kwargs.get('task_type', int())
        self.actions = kwargs.get('actions', [])
        self.reward = kwargs.get('reward', float())

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
        if self.task_id != other.task_id:
            return False
        if self.task_description != other.task_description:
            return False
        if self.target_type != other.target_type:
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.required_payload_type != other.required_payload_type:
            return False
        if self.task_status != other.task_status:
            return False
        if self.task_type != other.task_type:
            return False
        if self.actions != other.actions:
            return False
        if self.reward != other.reward:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def task_description(self):
        """Message field 'task_description'."""
        return self._task_description

    @task_description.setter
    def task_description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_description' field must be of type 'str'"
        self._task_description = value

    @builtins.property
    def target_type(self):
        """Message field 'target_type'."""
        return self._target_type

    @target_type.setter
    def target_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_type' field must be an unsigned integer in [0, 255]"
        self._target_type = value

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value

    @builtins.property
    def required_payload_type(self):
        """Message field 'required_payload_type'."""
        return self._required_payload_type

    @required_payload_type.setter
    def required_payload_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'required_payload_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'required_payload_type' field must be an unsigned integer in [0, 255]"
        self._required_payload_type = value

    @builtins.property
    def task_status(self):
        """Message field 'task_status'."""
        return self._task_status

    @task_status.setter
    def task_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_status' field must be an unsigned integer in [0, 255]"
        self._task_status = value

    @builtins.property
    def task_type(self):
        """Message field 'task_type'."""
        return self._task_type

    @task_type.setter
    def task_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_type' field must be an unsigned integer in [0, 255]"
        self._task_type = value

    @builtins.property
    def actions(self):
        """Message field 'actions'."""
        return self._actions

    @actions.setter
    def actions(self, value):
        if __debug__:
            from px4_uv.msg import Action
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
                 all(isinstance(v, Action) for v in value) and
                 True), \
                "The 'actions' field must be a set or sequence and each value of type 'Action'"
        self._actions = value

    @builtins.property
    def reward(self):
        """Message field 'reward'."""
        return self._reward

    @reward.setter
    def reward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reward' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reward' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reward = value
