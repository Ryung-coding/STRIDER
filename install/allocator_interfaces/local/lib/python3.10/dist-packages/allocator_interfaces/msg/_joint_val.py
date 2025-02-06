# generated from rosidl_generator_py/resource/_idl.py.em
# with input from allocator_interfaces:msg/JointVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'a1_q'
# Member 'a2_q'
# Member 'a3_q'
# Member 'a4_q'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointVal(type):
    """Metaclass of message 'JointVal'."""

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
                'allocator_interfaces.msg.JointVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_val

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointVal(metaclass=Metaclass_JointVal):
    """Message class 'JointVal'."""

    __slots__ = [
        '_a1_q',
        '_a2_q',
        '_a3_q',
        '_a4_q',
    ]

    _fields_and_field_types = {
        'a1_q': 'double[5]',
        'a2_q': 'double[5]',
        'a3_q': 'double[5]',
        'a4_q': 'double[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'a1_q' not in kwargs:
            self.a1_q = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a1_q = numpy.array(kwargs.get('a1_q'), dtype=numpy.float64)
            assert self.a1_q.shape == (5, )
        if 'a2_q' not in kwargs:
            self.a2_q = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a2_q = numpy.array(kwargs.get('a2_q'), dtype=numpy.float64)
            assert self.a2_q.shape == (5, )
        if 'a3_q' not in kwargs:
            self.a3_q = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a3_q = numpy.array(kwargs.get('a3_q'), dtype=numpy.float64)
            assert self.a3_q.shape == (5, )
        if 'a4_q' not in kwargs:
            self.a4_q = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a4_q = numpy.array(kwargs.get('a4_q'), dtype=numpy.float64)
            assert self.a4_q.shape == (5, )

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
        if all(self.a1_q != other.a1_q):
            return False
        if all(self.a2_q != other.a2_q):
            return False
        if all(self.a3_q != other.a3_q):
            return False
        if all(self.a4_q != other.a4_q):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a1_q(self):
        """Message field 'a1_q'."""
        return self._a1_q

    @a1_q.setter
    def a1_q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a1_q' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a1_q' numpy.ndarray() must have a size of 5"
            self._a1_q = value
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
                "The 'a1_q' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a1_q = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a2_q(self):
        """Message field 'a2_q'."""
        return self._a2_q

    @a2_q.setter
    def a2_q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a2_q' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a2_q' numpy.ndarray() must have a size of 5"
            self._a2_q = value
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
                "The 'a2_q' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a2_q = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a3_q(self):
        """Message field 'a3_q'."""
        return self._a3_q

    @a3_q.setter
    def a3_q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a3_q' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a3_q' numpy.ndarray() must have a size of 5"
            self._a3_q = value
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
                "The 'a3_q' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a3_q = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a4_q(self):
        """Message field 'a4_q'."""
        return self._a4_q

    @a4_q.setter
    def a4_q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a4_q' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a4_q' numpy.ndarray() must have a size of 5"
            self._a4_q = value
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
                "The 'a4_q' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a4_q = numpy.array(value, dtype=numpy.float64)
