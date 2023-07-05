# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from raptor_dbw_msgs/GlobalEnableCmd.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GlobalEnableCmd(genpy.Message):
  _md5sum = "9f0b5dc490f6a75ce1884359156e63d3"
  _type = "raptor_dbw_msgs/GlobalEnableCmd"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool global_enable

bool enable_joystick_limits

uint16 ecu_build_number

uint8 rolling_counter"""
  __slots__ = ['global_enable','enable_joystick_limits','ecu_build_number','rolling_counter']
  _slot_types = ['bool','bool','uint16','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       global_enable,enable_joystick_limits,ecu_build_number,rolling_counter

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GlobalEnableCmd, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.global_enable is None:
        self.global_enable = False
      if self.enable_joystick_limits is None:
        self.enable_joystick_limits = False
      if self.ecu_build_number is None:
        self.ecu_build_number = 0
      if self.rolling_counter is None:
        self.rolling_counter = 0
    else:
      self.global_enable = False
      self.enable_joystick_limits = False
      self.ecu_build_number = 0
      self.rolling_counter = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2BHB().pack(_x.global_enable, _x.enable_joystick_limits, _x.ecu_build_number, _x.rolling_counter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.global_enable, _x.enable_joystick_limits, _x.ecu_build_number, _x.rolling_counter,) = _get_struct_2BHB().unpack(str[start:end])
      self.global_enable = bool(self.global_enable)
      self.enable_joystick_limits = bool(self.enable_joystick_limits)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2BHB().pack(_x.global_enable, _x.enable_joystick_limits, _x.ecu_build_number, _x.rolling_counter))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.global_enable, _x.enable_joystick_limits, _x.ecu_build_number, _x.rolling_counter,) = _get_struct_2BHB().unpack(str[start:end])
      self.global_enable = bool(self.global_enable)
      self.enable_joystick_limits = bool(self.enable_joystick_limits)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2BHB = None
def _get_struct_2BHB():
    global _struct_2BHB
    if _struct_2BHB is None:
        _struct_2BHB = struct.Struct("<2BHB")
    return _struct_2BHB
