// Generated by gencpp from file raptor_dbw_msgs/SteeringReport.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_STEERINGREPORT_H
#define RAPTOR_DBW_MSGS_MESSAGE_STEERINGREPORT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <raptor_dbw_msgs/ActuatorControlMode.h>

namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct SteeringReport_
{
  typedef SteeringReport_<ContainerAllocator> Type;

  SteeringReport_()
    : header()
    , steering_wheel_angle(0.0)
    , steering_wheel_angle_cmd(0.0)
    , steering_wheel_torque(0.0)
    , enabled(false)
    , driver_activity(false)
    , fault_steering_system(false)
    , overheat_prevention_mode(false)
    , rolling_counter(0)
    , control_type()
    , steering_overheat_warning(false)  {
    }
  SteeringReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , steering_wheel_angle(0.0)
    , steering_wheel_angle_cmd(0.0)
    , steering_wheel_torque(0.0)
    , enabled(false)
    , driver_activity(false)
    , fault_steering_system(false)
    , overheat_prevention_mode(false)
    , rolling_counter(0)
    , control_type(_alloc)
    , steering_overheat_warning(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _steering_wheel_angle_type;
  _steering_wheel_angle_type steering_wheel_angle;

   typedef float _steering_wheel_angle_cmd_type;
  _steering_wheel_angle_cmd_type steering_wheel_angle_cmd;

   typedef float _steering_wheel_torque_type;
  _steering_wheel_torque_type steering_wheel_torque;

   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef uint8_t _driver_activity_type;
  _driver_activity_type driver_activity;

   typedef uint8_t _fault_steering_system_type;
  _fault_steering_system_type fault_steering_system;

   typedef uint8_t _overheat_prevention_mode_type;
  _overheat_prevention_mode_type overheat_prevention_mode;

   typedef uint8_t _rolling_counter_type;
  _rolling_counter_type rolling_counter;

   typedef  ::raptor_dbw_msgs::ActuatorControlMode_<ContainerAllocator>  _control_type_type;
  _control_type_type control_type;

   typedef uint8_t _steering_overheat_warning_type;
  _steering_overheat_warning_type steering_overheat_warning;





  typedef boost::shared_ptr< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> const> ConstPtr;

}; // struct SteeringReport_

typedef ::raptor_dbw_msgs::SteeringReport_<std::allocator<void> > SteeringReport;

typedef boost::shared_ptr< ::raptor_dbw_msgs::SteeringReport > SteeringReportPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::SteeringReport const> SteeringReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.steering_wheel_angle == rhs.steering_wheel_angle &&
    lhs.steering_wheel_angle_cmd == rhs.steering_wheel_angle_cmd &&
    lhs.steering_wheel_torque == rhs.steering_wheel_torque &&
    lhs.enabled == rhs.enabled &&
    lhs.driver_activity == rhs.driver_activity &&
    lhs.fault_steering_system == rhs.fault_steering_system &&
    lhs.overheat_prevention_mode == rhs.overheat_prevention_mode &&
    lhs.rolling_counter == rhs.rolling_counter &&
    lhs.control_type == rhs.control_type &&
    lhs.steering_overheat_warning == rhs.steering_overheat_warning;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "591f9fcdf310bb0c5cda95f4d6f03ec2";
  }

  static const char* value(const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x591f9fcdf310bb0cULL;
  static const uint64_t static_value2 = 0x5cda95f4d6f03ec2ULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/SteeringReport";
  }

  static const char* value(const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"# Steering Wheel\n"
"float32 steering_wheel_angle      # degrees\n"
"float32 steering_wheel_angle_cmd  # degrees\n"
"float32 steering_wheel_torque     # 0 to 100%\n"
"\n"
"# Status\n"
"bool enabled  \n"
"bool driver_activity\n"
"\n"
"bool fault_steering_system\n"
"\n"
"bool overheat_prevention_mode\n"
"\n"
"uint8 rolling_counter\n"
"\n"
"ActuatorControlMode control_type\n"
"\n"
"bool steering_overheat_warning\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: raptor_dbw_msgs/ActuatorControlMode\n"
"uint8 value\n"
"\n"
"uint8 open_loop = 0\n"
"uint8 closed_loop_actuator = 1\n"
"uint8 closed_loop_vehicle = 2\n"
"uint8 none = 255\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.steering_wheel_angle);
      stream.next(m.steering_wheel_angle_cmd);
      stream.next(m.steering_wheel_torque);
      stream.next(m.enabled);
      stream.next(m.driver_activity);
      stream.next(m.fault_steering_system);
      stream.next(m.overheat_prevention_mode);
      stream.next(m.rolling_counter);
      stream.next(m.control_type);
      stream.next(m.steering_overheat_warning);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SteeringReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::SteeringReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "steering_wheel_angle: ";
    Printer<float>::stream(s, indent + "  ", v.steering_wheel_angle);
    s << indent << "steering_wheel_angle_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.steering_wheel_angle_cmd);
    s << indent << "steering_wheel_torque: ";
    Printer<float>::stream(s, indent + "  ", v.steering_wheel_torque);
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "driver_activity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driver_activity);
    s << indent << "fault_steering_system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_steering_system);
    s << indent << "overheat_prevention_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.overheat_prevention_mode);
    s << indent << "rolling_counter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rolling_counter);
    s << indent << "control_type: ";
    s << std::endl;
    Printer< ::raptor_dbw_msgs::ActuatorControlMode_<ContainerAllocator> >::stream(s, indent + "  ", v.control_type);
    s << indent << "steering_overheat_warning: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.steering_overheat_warning);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_STEERINGREPORT_H
