# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:msg/Pwm.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pwm(type):
    """Metaclass of message 'Pwm'."""

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
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.msg.Pwm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pwm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pwm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pwm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pwm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pwm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pwm(metaclass=Metaclass_Pwm):
    """Message class 'Pwm'."""

    __slots__ = [
        '_motor1',
        '_motor2',
        '_motor3',
        '_motor4',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'motor1': 'int32',
        'motor2': 'int32',
        'motor3': 'int32',
        'motor4': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor1 = kwargs.get('motor1', int())
        self.motor2 = kwargs.get('motor2', int())
        self.motor3 = kwargs.get('motor3', int())
        self.motor4 = kwargs.get('motor4', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor1 != other.motor1:
            return False
        if self.motor2 != other.motor2:
            return False
        if self.motor3 != other.motor3:
            return False
        if self.motor4 != other.motor4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor1(self):
        """Message field 'motor1'."""
        return self._motor1

    @motor1.setter
    def motor1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor1' field must be an integer in [-2147483648, 2147483647]"
        self._motor1 = value

    @builtins.property
    def motor2(self):
        """Message field 'motor2'."""
        return self._motor2

    @motor2.setter
    def motor2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor2' field must be an integer in [-2147483648, 2147483647]"
        self._motor2 = value

    @builtins.property
    def motor3(self):
        """Message field 'motor3'."""
        return self._motor3

    @motor3.setter
    def motor3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor3' field must be an integer in [-2147483648, 2147483647]"
        self._motor3 = value

    @builtins.property
    def motor4(self):
        """Message field 'motor4'."""
        return self._motor4

    @motor4.setter
    def motor4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor4' field must be an integer in [-2147483648, 2147483647]"
        self._motor4 = value
