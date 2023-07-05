// Generated by gencpp from file raptor_dbw_msgs/AcceleratorPedalCmd.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_ACCELERATORPEDALCMD_H
#define RAPTOR_DBW_MSGS_MESSAGE_ACCELERATORPEDALCMD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <raptor_dbw_msgs/ActuatorControlMode.h>

namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct AcceleratorPedalCmd_
{
  typedef AcceleratorPedalCmd_<ContainerAllocator> Type;

  AcceleratorPedalCmd_()
    : pedal_cmd(0.0)
    , torque_cmd(0.0)
    , speed_cmd(0.0)
    , enable(false)
    , ignore(false)
    , rolling_counter(0)
    , road_slope(0.0)
    , control_type()
    , accel_limit(0.0)
    , accel_positive_jerk_limit(0.0)  {
    }
  AcceleratorPedalCmd_(const ContainerAllocator& _alloc)
    : pedal_cmd(0.0)
    , torque_cmd(0.0)
    , speed_cmd(0.0)
    , enable(false)
    , ignore(false)
    , rolling_counter(0)
    , road_slope(0.0)
    , control_type(_alloc)
    , accel_limit(0.0)
    , accel_positive_jerk_limit(0.0)  {
  (void)_alloc;
    }



   typedef float _pedal_cmd_type;
  _pedal_cmd_type pedal_cmd;

   typedef float _torque_cmd_type;
  _torque_cmd_type torque_cmd;

   typedef float _speed_cmd_type;
  _speed_cmd_type speed_cmd;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef uint8_t _ignore_type;
  _ignore_type ignore;

   typedef uint8_t _rolling_counter_type;
  _rolling_counter_type rolling_counter;

   typedef float _road_slope_type;
  _road_slope_type road_slope;

   typedef  ::raptor_dbw_msgs::ActuatorControlMode_<ContainerAllocator>  _control_type_type;
  _control_type_type control_type;

   typedef float _accel_limit_type;
  _accel_limit_type accel_limit;

   typedef float _accel_positive_jerk_limit_type;
  _accel_positive_jerk_limit_type accel_positive_jerk_limit;





  typedef boost::shared_ptr< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> const> ConstPtr;

}; // struct AcceleratorPedalCmd_

typedef ::raptor_dbw_msgs::AcceleratorPedalCmd_<std::allocator<void> > AcceleratorPedalCmd;

typedef boost::shared_ptr< ::raptor_dbw_msgs::AcceleratorPedalCmd > AcceleratorPedalCmdPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::AcceleratorPedalCmd const> AcceleratorPedalCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator2> & rhs)
{
  return lhs.pedal_cmd == rhs.pedal_cmd &&
    lhs.torque_cmd == rhs.torque_cmd &&
    lhs.speed_cmd == rhs.speed_cmd &&
    lhs.enable == rhs.enable &&
    lhs.ignore == rhs.ignore &&
    lhs.rolling_counter == rhs.rolling_counter &&
    lhs.road_slope == rhs.road_slope &&
    lhs.control_type == rhs.control_type &&
    lhs.accel_limit == rhs.accel_limit &&
    lhs.accel_positive_jerk_limit == rhs.accel_positive_jerk_limit;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4fa43636bd38fecc84a7531ea6865c4";
  }

  static const char* value(const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4fa43636bd38fecULL;
  static const uint64_t static_value2 = 0xc84a7531ea6865c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/AcceleratorPedalCmd";
  }

  static const char* value(const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Accelerator pedal (%)\n"
"float32 pedal_cmd\n"
"\n"
"float32 torque_cmd # %-torque\n"
"\n"
"float32 speed_cmd # m/s\n"
"\n"
"# Enable\n"
"bool enable\n"
"\n"
"# Ignore driver overrides\n"
"bool ignore\n"
"\n"
"# Watchdog counter (optional)\n"
"uint8 rolling_counter\n"
"\n"
"float32 road_slope # degrees - used with speed mode\n"
"\n"
"ActuatorControlMode control_type\n"
"\n"
"float32 accel_limit # m/s^2\n"
"\n"
"float32 accel_positive_jerk_limit # m/s^3\n"
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

  static const char* value(const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pedal_cmd);
      stream.next(m.torque_cmd);
      stream.next(m.speed_cmd);
      stream.next(m.enable);
      stream.next(m.ignore);
      stream.next(m.rolling_counter);
      stream.next(m.road_slope);
      stream.next(m.control_type);
      stream.next(m.accel_limit);
      stream.next(m.accel_positive_jerk_limit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcceleratorPedalCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::AcceleratorPedalCmd_<ContainerAllocator>& v)
  {
    s << indent << "pedal_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.pedal_cmd);
    s << indent << "torque_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.torque_cmd);
    s << indent << "speed_cmd: ";
    Printer<float>::stream(s, indent + "  ", v.speed_cmd);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "ignore: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore);
    s << indent << "rolling_counter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rolling_counter);
    s << indent << "road_slope: ";
    Printer<float>::stream(s, indent + "  ", v.road_slope);
    s << indent << "control_type: ";
    s << std::endl;
    Printer< ::raptor_dbw_msgs::ActuatorControlMode_<ContainerAllocator> >::stream(s, indent + "  ", v.control_type);
    s << indent << "accel_limit: ";
    Printer<float>::stream(s, indent + "  ", v.accel_limit);
    s << indent << "accel_positive_jerk_limit: ";
    Printer<float>::stream(s, indent + "  ", v.accel_positive_jerk_limit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_ACCELERATORPEDALCMD_H
