# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_uv:msg/Task.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Task(type):
    """Metaclass of message 'Task'."""

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
            module = import_type_support('px4_uv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_uv.msg.Task')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task

            from px4_uv.msg import Action
            if Action.__class__._TYPE_SUPPORT is None:
                Action.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Task(metaclass=Metaclass_Task):
    """Message class 'Task'."""

    __slots__ = [
        '_task_id',
        '_target_type',
        '_actions',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'target_type': 'uint8',
        'actions': 'sequence<px4_uv/Action>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['px4_uv', 'msg'], 'Action')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.target_type = kwargs.get('target_type', int())
        self.actions = kwargs.get('actions', [])

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
        if self.target_type != other.target_type:
            return False
        if self.actions != other.actions:
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
