# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from raptor_dbw_msgs/GearCmd.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import raptor_dbw_msgs.msg

class GearCmd(genpy.Message):
  _md5sum = "027cd3ac0dc88e7a6b14c572a1f9c377"
  _type = "raptor_dbw_msgs/GearCmd"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Gear command enumeration
Gear cmd

bool enable

# Watchdog counter
uint8 rolling_counter

================================================================================
MSG: raptor_dbw_msgs/Gear
uint8 gear

uint8 NONE=0
uint8 PARK=1
uint8 REVERSE=2
uint8 NEUTRAL=3
uint8 DRIVE=4
uint8 LOW=5
"""
  __slots__ = ['cmd','enable','rolling_counter']
  _slot_types = ['raptor_dbw_msgs/Gear','bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmd,enable,rolling_counter

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GearCmd, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.cmd is None:
        self.cmd = raptor_dbw_msgs.msg.Gear()
      if self.enable is None:
        self.enable = False
      if self.rolling_counter is None:
        self.rolling_counter = 0
    else:
      self.cmd = raptor_dbw_msgs.msg.Gear()
      self.enable = False
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
      buff.write(_get_struct_3B().pack(_x.cmd.gear, _x.enable, _x.rolling_counter))
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
      if self.cmd is None:
        self.cmd = raptor_dbw_msgs.msg.Gear()
      end = 0
      _x = self
      start = end
      end += 3
      (_x.cmd.gear, _x.enable, _x.rolling_counter,) = _get_struct_3B().unpack(str[start:end])
      self.enable = bool(self.enable)
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
      buff.write(_get_struct_3B().pack(_x.cmd.gear, _x.enable, _x.rolling_counter))
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
      if self.cmd is None:
        self.cmd = raptor_dbw_msgs.msg.Gear()
      end = 0
      _x = self
      start = end
      end += 3
      (_x.cmd.gear, _x.enable, _x.rolling_counter,) = _get_struct_3B().unpack(str[start:end])
      self.enable = bool(self.enable)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
