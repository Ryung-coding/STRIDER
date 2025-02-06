# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_interfaces:msg/ControllerDebugVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'des_pos'
# Member 'pid_mx'
# Member 'pid_my'
# Member 'pid_mz'
# Member 'pid_f'
# Member 'imu_roll'
# Member 'imu_pitch'
# Member 'imu_yaw'
# Member 'opti_x'
# Member 'opti_y'
# Member 'opti_z'
# Member 'a1_mea'
# Member 'a2_mea'
# Member 'a3_mea'
# Member 'a4_mea'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerDebugVal(type):
    """Metaclass of message 'ControllerDebugVal'."""

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
            module = import_type_support('controller_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_interfaces.msg.ControllerDebugVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_debug_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_debug_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_debug_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_debug_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_debug_val

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerDebugVal(metaclass=Metaclass_ControllerDebugVal):
    """Message class 'ControllerDebugVal'."""

    __slots__ = [
        '_des_pos',
        '_pid_mx',
        '_pid_my',
        '_pid_mz',
        '_pid_f',
        '_imu_roll',
        '_imu_pitch',
        '_imu_yaw',
        '_opti_x',
        '_opti_y',
        '_opti_z',
        '_a1_mea',
        '_a2_mea',
        '_a3_mea',
        '_a4_mea',
    ]

    _fields_and_field_types = {
        'des_pos': 'double[4]',
        'pid_mx': 'double[3]',
        'pid_my': 'double[3]',
        'pid_mz': 'double[3]',
        'pid_f': 'double[3]',
        'imu_roll': 'double[3]',
        'imu_pitch': 'double[3]',
        'imu_yaw': 'double[3]',
        'opti_x': 'double[3]',
        'opti_y': 'double[3]',
        'opti_z': 'double[3]',
        'a1_mea': 'double[5]',
        'a2_mea': 'double[5]',
        'a3_mea': 'double[5]',
        'a4_mea': 'double[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'des_pos' not in kwargs:
            self.des_pos = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.des_pos = numpy.array(kwargs.get('des_pos'), dtype=numpy.float64)
            assert self.des_pos.shape == (4, )
        if 'pid_mx' not in kwargs:
            self.pid_mx = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.pid_mx = numpy.array(kwargs.get('pid_mx'), dtype=numpy.float64)
            assert self.pid_mx.shape == (3, )
        if 'pid_my' not in kwargs:
            self.pid_my = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.pid_my = numpy.array(kwargs.get('pid_my'), dtype=numpy.float64)
            assert self.pid_my.shape == (3, )
        if 'pid_mz' not in kwargs:
            self.pid_mz = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.pid_mz = numpy.array(kwargs.get('pid_mz'), dtype=numpy.float64)
            assert self.pid_mz.shape == (3, )
        if 'pid_f' not in kwargs:
            self.pid_f = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.pid_f = numpy.array(kwargs.get('pid_f'), dtype=numpy.float64)
            assert self.pid_f.shape == (3, )
        if 'imu_roll' not in kwargs:
            self.imu_roll = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.imu_roll = numpy.array(kwargs.get('imu_roll'), dtype=numpy.float64)
            assert self.imu_roll.shape == (3, )
        if 'imu_pitch' not in kwargs:
            self.imu_pitch = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.imu_pitch = numpy.array(kwargs.get('imu_pitch'), dtype=numpy.float64)
            assert self.imu_pitch.shape == (3, )
        if 'imu_yaw' not in kwargs:
            self.imu_yaw = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.imu_yaw = numpy.array(kwargs.get('imu_yaw'), dtype=numpy.float64)
            assert self.imu_yaw.shape == (3, )
        if 'opti_x' not in kwargs:
            self.opti_x = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.opti_x = numpy.array(kwargs.get('opti_x'), dtype=numpy.float64)
            assert self.opti_x.shape == (3, )
        if 'opti_y' not in kwargs:
            self.opti_y = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.opti_y = numpy.array(kwargs.get('opti_y'), dtype=numpy.float64)
            assert self.opti_y.shape == (3, )
        if 'opti_z' not in kwargs:
            self.opti_z = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.opti_z = numpy.array(kwargs.get('opti_z'), dtype=numpy.float64)
            assert self.opti_z.shape == (3, )
        if 'a1_mea' not in kwargs:
            self.a1_mea = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a1_mea = numpy.array(kwargs.get('a1_mea'), dtype=numpy.float64)
            assert self.a1_mea.shape == (5, )
        if 'a2_mea' not in kwargs:
            self.a2_mea = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a2_mea = numpy.array(kwargs.get('a2_mea'), dtype=numpy.float64)
            assert self.a2_mea.shape == (5, )
        if 'a3_mea' not in kwargs:
            self.a3_mea = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a3_mea = numpy.array(kwargs.get('a3_mea'), dtype=numpy.float64)
            assert self.a3_mea.shape == (5, )
        if 'a4_mea' not in kwargs:
            self.a4_mea = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.a4_mea = numpy.array(kwargs.get('a4_mea'), dtype=numpy.float64)
            assert self.a4_mea.shape == (5, )

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
        if all(self.des_pos != other.des_pos):
            return False
        if all(self.pid_mx != other.pid_mx):
            return False
        if all(self.pid_my != other.pid_my):
            return False
        if all(self.pid_mz != other.pid_mz):
            return False
        if all(self.pid_f != other.pid_f):
            return False
        if all(self.imu_roll != other.imu_roll):
            return False
        if all(self.imu_pitch != other.imu_pitch):
            return False
        if all(self.imu_yaw != other.imu_yaw):
            return False
        if all(self.opti_x != other.opti_x):
            return False
        if all(self.opti_y != other.opti_y):
            return False
        if all(self.opti_z != other.opti_z):
            return False
        if all(self.a1_mea != other.a1_mea):
            return False
        if all(self.a2_mea != other.a2_mea):
            return False
        if all(self.a3_mea != other.a3_mea):
            return False
        if all(self.a4_mea != other.a4_mea):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def des_pos(self):
        """Message field 'des_pos'."""
        return self._des_pos

    @des_pos.setter
    def des_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'des_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'des_pos' numpy.ndarray() must have a size of 4"
            self._des_pos = value
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
                "The 'des_pos' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._des_pos = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def pid_mx(self):
        """Message field 'pid_mx'."""
        return self._pid_mx

    @pid_mx.setter
    def pid_mx(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pid_mx' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'pid_mx' numpy.ndarray() must have a size of 3"
            self._pid_mx = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pid_mx' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pid_mx = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def pid_my(self):
        """Message field 'pid_my'."""
        return self._pid_my

    @pid_my.setter
    def pid_my(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pid_my' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'pid_my' numpy.ndarray() must have a size of 3"
            self._pid_my = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pid_my' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pid_my = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def pid_mz(self):
        """Message field 'pid_mz'."""
        return self._pid_mz

    @pid_mz.setter
    def pid_mz(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pid_mz' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'pid_mz' numpy.ndarray() must have a size of 3"
            self._pid_mz = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pid_mz' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pid_mz = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def pid_f(self):
        """Message field 'pid_f'."""
        return self._pid_f

    @pid_f.setter
    def pid_f(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'pid_f' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'pid_f' numpy.ndarray() must have a size of 3"
            self._pid_f = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'pid_f' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._pid_f = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def imu_roll(self):
        """Message field 'imu_roll'."""
        return self._imu_roll

    @imu_roll.setter
    def imu_roll(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'imu_roll' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'imu_roll' numpy.ndarray() must have a size of 3"
            self._imu_roll = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'imu_roll' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._imu_roll = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def imu_pitch(self):
        """Message field 'imu_pitch'."""
        return self._imu_pitch

    @imu_pitch.setter
    def imu_pitch(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'imu_pitch' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'imu_pitch' numpy.ndarray() must have a size of 3"
            self._imu_pitch = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'imu_pitch' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._imu_pitch = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def imu_yaw(self):
        """Message field 'imu_yaw'."""
        return self._imu_yaw

    @imu_yaw.setter
    def imu_yaw(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'imu_yaw' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'imu_yaw' numpy.ndarray() must have a size of 3"
            self._imu_yaw = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'imu_yaw' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._imu_yaw = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def opti_x(self):
        """Message field 'opti_x'."""
        return self._opti_x

    @opti_x.setter
    def opti_x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'opti_x' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'opti_x' numpy.ndarray() must have a size of 3"
            self._opti_x = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'opti_x' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._opti_x = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def opti_y(self):
        """Message field 'opti_y'."""
        return self._opti_y

    @opti_y.setter
    def opti_y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'opti_y' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'opti_y' numpy.ndarray() must have a size of 3"
            self._opti_y = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'opti_y' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._opti_y = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def opti_z(self):
        """Message field 'opti_z'."""
        return self._opti_z

    @opti_z.setter
    def opti_z(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'opti_z' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'opti_z' numpy.ndarray() must have a size of 3"
            self._opti_z = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'opti_z' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._opti_z = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a1_mea(self):
        """Message field 'a1_mea'."""
        return self._a1_mea

    @a1_mea.setter
    def a1_mea(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a1_mea' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a1_mea' numpy.ndarray() must have a size of 5"
            self._a1_mea = value
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
                "The 'a1_mea' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a1_mea = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a2_mea(self):
        """Message field 'a2_mea'."""
        return self._a2_mea

    @a2_mea.setter
    def a2_mea(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a2_mea' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a2_mea' numpy.ndarray() must have a size of 5"
            self._a2_mea = value
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
                "The 'a2_mea' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a2_mea = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a3_mea(self):
        """Message field 'a3_mea'."""
        return self._a3_mea

    @a3_mea.setter
    def a3_mea(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a3_mea' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a3_mea' numpy.ndarray() must have a size of 5"
            self._a3_mea = value
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
                "The 'a3_mea' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a3_mea = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def a4_mea(self):
        """Message field 'a4_mea'."""
        return self._a4_mea

    @a4_mea.setter
    def a4_mea(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'a4_mea' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'a4_mea' numpy.ndarray() must have a size of 5"
            self._a4_mea = value
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
                "The 'a4_mea' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._a4_mea = numpy.array(value, dtype=numpy.float64)
