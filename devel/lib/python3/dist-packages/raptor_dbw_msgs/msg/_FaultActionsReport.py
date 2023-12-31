# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from raptor_dbw_msgs/FaultActionsReport.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class FaultActionsReport(genpy.Message):
  _md5sum = "01de9bc391b21fe215ee7cfdd1f13e1f"
  _type = "raptor_dbw_msgs/FaultActionsReport"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header

bool autonomous_disabled_no_brakes 
bool autonomous_disabled_apply_brakes 
bool can_gateway_disabled 
bool inverter_contactor_disabled 
bool prevent_enter_autonomous_mode 
bool warn_driver_only 
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','autonomous_disabled_no_brakes','autonomous_disabled_apply_brakes','can_gateway_disabled','inverter_contactor_disabled','prevent_enter_autonomous_mode','warn_driver_only']
  _slot_types = ['std_msgs/Header','bool','bool','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,autonomous_disabled_no_brakes,autonomous_disabled_apply_brakes,can_gateway_disabled,inverter_contactor_disabled,prevent_enter_autonomous_mode,warn_driver_only

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FaultActionsReport, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.autonomous_disabled_no_brakes is None:
        self.autonomous_disabled_no_brakes = False
      if self.autonomous_disabled_apply_brakes is None:
        self.autonomous_disabled_apply_brakes = False
      if self.can_gateway_disabled is None:
        self.can_gateway_disabled = False
      if self.inverter_contactor_disabled is None:
        self.inverter_contactor_disabled = False
      if self.prevent_enter_autonomous_mode is None:
        self.prevent_enter_autonomous_mode = False
      if self.warn_driver_only is None:
        self.warn_driver_only = False
    else:
      self.header = std_msgs.msg.Header()
      self.autonomous_disabled_no_brakes = False
      self.autonomous_disabled_apply_brakes = False
      self.can_gateway_disabled = False
      self.inverter_contactor_disabled = False
      self.prevent_enter_autonomous_mode = False
      self.warn_driver_only = False

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_6B().pack(_x.autonomous_disabled_no_brakes, _x.autonomous_disabled_apply_brakes, _x.can_gateway_disabled, _x.inverter_contactor_disabled, _x.prevent_enter_autonomous_mode, _x.warn_driver_only))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.autonomous_disabled_no_brakes, _x.autonomous_disabled_apply_brakes, _x.can_gateway_disabled, _x.inverter_contactor_disabled, _x.prevent_enter_autonomous_mode, _x.warn_driver_only,) = _get_struct_6B().unpack(str[start:end])
      self.autonomous_disabled_no_brakes = bool(self.autonomous_disabled_no_brakes)
      self.autonomous_disabled_apply_brakes = bool(self.autonomous_disabled_apply_brakes)
      self.can_gateway_disabled = bool(self.can_gateway_disabled)
      self.inverter_contactor_disabled = bool(self.inverter_contactor_disabled)
      self.prevent_enter_autonomous_mode = bool(self.prevent_enter_autonomous_mode)
      self.warn_driver_only = bool(self.warn_driver_only)
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_6B().pack(_x.autonomous_disabled_no_brakes, _x.autonomous_disabled_apply_brakes, _x.can_gateway_disabled, _x.inverter_contactor_disabled, _x.prevent_enter_autonomous_mode, _x.warn_driver_only))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.autonomous_disabled_no_brakes, _x.autonomous_disabled_apply_brakes, _x.can_gateway_disabled, _x.inverter_contactor_disabled, _x.prevent_enter_autonomous_mode, _x.warn_driver_only,) = _get_struct_6B().unpack(str[start:end])
      self.autonomous_disabled_no_brakes = bool(self.autonomous_disabled_no_brakes)
      self.autonomous_disabled_apply_brakes = bool(self.autonomous_disabled_apply_brakes)
      self.can_gateway_disabled = bool(self.can_gateway_disabled)
      self.inverter_contactor_disabled = bool(self.inverter_contactor_disabled)
      self.prevent_enter_autonomous_mode = bool(self.prevent_enter_autonomous_mode)
      self.warn_driver_only = bool(self.warn_driver_only)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_6B = None
def _get_struct_6B():
    global _struct_6B
    if _struct_6B is None:
        _struct_6B = struct.Struct("<6B")
    return _struct_6B
