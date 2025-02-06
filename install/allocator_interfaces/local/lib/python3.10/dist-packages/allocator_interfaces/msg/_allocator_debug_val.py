# generated from rosidl_generator_py/resource/_idl.py.em
# with input from allocator_interfaces:msg/AllocatorDebugVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pwm'
# Member 'a1_des'
# Member 'a2_des'
# Member 'a3_des'
# Member 'a4_des'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AllocatorDebugVal(type):
    """Metaclass of message 'AllocatorDebugVal'."""

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
                'allocator_interfaces.msg.AllocatorDebugVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__allocator_debug_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__allocator_debug_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__allocator_debug_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__allocator_debug_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__allocator_debug_val

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AllocatorDebugVal(metaclass=Metaclass_AllocatorDebugVal):
    """Message class 'AllocatorDebugVal'."""

    __slots__ = [
        '_pwm',
        '_a1_des',
        '_a2_des',
        '_a3_des',
        '_a4_des',
        '_loop_rate',
    ]

    _fields_and_field_types = {
        'pwm': 'double[4]',
        'a1_des': 'double[5]',
        'a2_des': 'double[5]',
        'a3_des': 'double[5]',
        'a4_des': 'double[5]',
        'loop_rate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'pwm' not in kwargs:
            self.pwm = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.pwm = numpy.array(kwargs.get('pwm'), dtype=numpy.float64)
            assert self.pwm.shape == (4, )
        if 'a1_des' not in kwargs:
            self.a1_des = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a1_des = numpy.array(kwargs.get('a1_des'), dtype=numpy.float64)
            assert self.a1_des.shape == (5, )
        if 'a2_des' not in kwargs:
            self.a2_des = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a2_des = numpy.array(kwargs.get('a2_des'), dtype=numpy.float64)
            assert self.a2_des.shape == (5, )
        if 'a3_des' not in kwargs:
            self.a3_des = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a3_des = numpy.array(kwargs.get('a3_des'), dtype=numpy.float64)
            assert self.a3_des.shape == (5, )
        if 'a4_des' not in kwargs:
            self.a4_des = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a4_des = numpy.array(kwargs.get('a4_des'), dtype=numpy.float64)
            assert self.a4_des.shape == (5, )
        self.loop_rate = kwargs.get('loop_rate', float())

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
        if all(self.pwm != other.pwm):
            return False
        if all(self.a1_des != other.a1_des):
            return False
        if all(self.a2_des != other.a2_des):
            return False
        if all(self.a3_des != other.a3_des):
            return False
        if all(self.a4_des != other.a4_des):
            return False
        if self.loop_rate != other.loop_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pwm(self):
        """Message field 'pwm'."""
        return self._pwm

    @pwm.setter
    def pwm(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pwm' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'pwm' numpy.ndarray() must have a size of 4"
            self._pwm = value
            return
        if __debug__:
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pwm' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pwm = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a1_des(self):
        """Message field 'a1_des'."""
        return self._a1_des

    @a1_des.setter
    def a1_des(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a1_des' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a1_des' numpy.ndarray() must have a size of 5"
            self._a1_des = value
            return
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'a1_des' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a1_des = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a2_des(self):
        """Message field 'a2_des'."""
        return self._a2_des

    @a2_des.setter
    def a2_des(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a2_des' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a2_des' numpy.ndarray() must have a size of 5"
            self._a2_des = value
            return
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'a2_des' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a2_des = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a3_des(self):
        """Message field 'a3_des'."""
        return self._a3_des

    @a3_des.setter
    def a3_des(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a3_des' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a3_des' numpy.ndarray() must have a size of 5"
            self._a3_des = value
            return
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'a3_des' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a3_des = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a4_des(self):
        """Message field 'a4_des'."""
        return self._a4_des

    @a4_des.setter
    def a4_des(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a4_des' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a4_des' numpy.ndarray() must have a size of 5"
            self._a4_des = value
            return
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'a4_des' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a4_des = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def loop_rate(self):
        """Message field 'loop_rate'."""
        return self._loop_rate

    @loop_rate.setter
    def loop_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loop_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loop_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loop_rate = value
