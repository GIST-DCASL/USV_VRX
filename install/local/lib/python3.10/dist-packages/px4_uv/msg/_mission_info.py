# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_uv:msg/MissionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionInfo(type):
    """Metaclass of message 'MissionInfo'."""

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
                'px4_uv.msg.MissionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_info

            from px4_uv.msg import TaskInfo
            if TaskInfo.__class__._TYPE_SUPPORT is None:
                TaskInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionInfo(metaclass=Metaclass_MissionInfo):
    """Message class 'MissionInfo'."""

    __slots__ = [
        '_mission_id',
        '_description',
        '_leftup_lat',
        '_leftup_lon',
        '_rightdown_lat',
        '_rightdown_lon',
        '_max_height',
        '_tasks',
    ]

    _fields_and_field_types = {
        'mission_id': 'string',
        'description': 'string',
        'leftup_lat': 'double',
        'leftup_lon': 'double',
        'rightdown_lat': 'double',
        'rightdown_lon': 'double',
        'max_height': 'double',
        'tasks': 'sequence<px4_uv/TaskInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['px4_uv', 'msg'], 'TaskInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_id = kwargs.get('mission_id', str())
        self.description = kwargs.get('description', str())
        self.leftup_lat = kwargs.get('leftup_lat', float())
        self.leftup_lon = kwargs.get('leftup_lon', float())
        self.rightdown_lat = kwargs.get('rightdown_lat', float())
        self.rightdown_lon = kwargs.get('rightdown_lon', float())
        self.max_height = kwargs.get('max_height', float())
        self.tasks = kwargs.get('tasks', [])

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
        if self.mission_id != other.mission_id:
            return False
        if self.description != other.description:
            return False
        if self.leftup_lat != other.leftup_lat:
            return False
        if self.leftup_lon != other.leftup_lon:
            return False
        if self.rightdown_lat != other.rightdown_lat:
            return False
        if self.rightdown_lon != other.rightdown_lon:
            return False
        if self.max_height != other.max_height:
            return False
        if self.tasks != other.tasks:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def leftup_lat(self):
        """Message field 'leftup_lat'."""
        return self._leftup_lat

    @leftup_lat.setter
    def leftup_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftup_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'leftup_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._leftup_lat = value

    @builtins.property
    def leftup_lon(self):
        """Message field 'leftup_lon'."""
        return self._leftup_lon

    @leftup_lon.setter
    def leftup_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leftup_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'leftup_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._leftup_lon = value

    @builtins.property
    def rightdown_lat(self):
        """Message field 'rightdown_lat'."""
        return self._rightdown_lat

    @rightdown_lat.setter
    def rightdown_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightdown_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rightdown_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rightdown_lat = value

    @builtins.property
    def rightdown_lon(self):
        """Message field 'rightdown_lon'."""
        return self._rightdown_lon

    @rightdown_lon.setter
    def rightdown_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightdown_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rightdown_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rightdown_lon = value

    @builtins.property
    def max_height(self):
        """Message field 'max_height'."""
        return self._max_height

    @max_height.setter
    def max_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_height = value

    @builtins.property
    def tasks(self):
        """Message field 'tasks'."""
        return self._tasks

    @tasks.setter
    def tasks(self, value):
        if __debug__:
            from px4_uv.msg import TaskInfo
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
                 all(isinstance(v, TaskInfo) for v in value) and
                 True), \
                "The 'tasks' field must be a set or sequence and each value of type 'TaskInfo'"
        self._tasks = value
