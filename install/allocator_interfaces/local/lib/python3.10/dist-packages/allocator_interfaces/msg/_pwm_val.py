# generated from rosidl_generator_py/resource/_idl.py.em
# with input from allocator_interfaces:msg/PwmVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PwmVal(type):
    """Metaclass of message 'PwmVal'."""

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
            module = import_type_support('allocator_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'allocator_interfaces.msg.PwmVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pwm_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pwm_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pwm_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pwm_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pwm_val

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PwmVal(metaclass=Metaclass_PwmVal):
    """Message class 'PwmVal'."""

    __slots__ = [
        '_f1',
        '_f2',
        '_f3',
        '_f4',
    ]

    _fields_and_field_types = {
        'f1': 'double',
        'f2': 'double',
        'f3': 'double',
        'f4': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.f1 = kwargs.get('f1', float())
        self.f2 = kwargs.get('f2', float())
        self.f3 = kwargs.get('f3', float())
        self.f4 = kwargs.get('f4', float())

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
        if self.f1 != other.f1:
            return False
        if self.f2 != other.f2:
            return False
        if self.f3 != other.f3:
            return False
        if self.f4 != other.f4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def f1(self):
        """Message field 'f1'."""
        return self._f1

    @f1.setter
    def f1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f1 = value

    @builtins.property
    def f2(self):
        """Message field 'f2'."""
        return self._f2

    @f2.setter
    def f2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f2 = value

    @builtins.property
    def f3(self):
        """Message field 'f3'."""
        return self._f3

    @f3.setter
    def f3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f3 = value

    @builtins.property
    def f4(self):
        """Message field 'f4'."""
        return self._f4

    @f4.setter
    def f4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f4 = value
