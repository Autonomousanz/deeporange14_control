// Generated by gencpp from file raptor_dbw_msgs/DriverInputReport.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_DRIVERINPUTREPORT_H
#define RAPTOR_DBW_MSGS_MESSAGE_DRIVERINPUTREPORT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <raptor_dbw_msgs/TurnSignal.h>
#include <raptor_dbw_msgs/HighBeam.h>
#include <raptor_dbw_msgs/WiperFront.h>

namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct DriverInputReport_
{
  typedef DriverInputReport_<ContainerAllocator> Type;

  DriverInputReport_()
    : header()
    , turn_signal()
    , high_beam_headlights()
    , wiper()
    , cruise_resume_button(false)
    , cruise_cancel_button(false)
    , cruise_accel_button(false)
    , cruise_decel_button(false)
    , cruise_on_off_button(false)
    , adaptive_cruise_on_off_button(false)
    , adaptive_cruise_increase_distance_button(false)
    , adaptive_cruise_decrease_distance_button(false)
    , driver_door_ajar(false)
    , passenger_door_ajar(false)
    , rear_left_door_ajar(false)
    , rear_right_door_ajar(false)
    , liftgate_ajar(false)
    , any_seatbelt_unbuckled(false)
    , airbag_deployed(false)
    , door_or_hood_ajar(false)  {
    }
  DriverInputReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , turn_signal(_alloc)
    , high_beam_headlights(_alloc)
    , wiper(_alloc)
    , cruise_resume_button(false)
    , cruise_cancel_button(false)
    , cruise_accel_button(false)
    , cruise_decel_button(false)
    , cruise_on_off_button(false)
    , adaptive_cruise_on_off_button(false)
    , adaptive_cruise_increase_distance_button(false)
    , adaptive_cruise_decrease_distance_button(false)
    , driver_door_ajar(false)
    , passenger_door_ajar(false)
    , rear_left_door_ajar(false)
    , rear_right_door_ajar(false)
    , liftgate_ajar(false)
    , any_seatbelt_unbuckled(false)
    , airbag_deployed(false)
    , door_or_hood_ajar(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::raptor_dbw_msgs::TurnSignal_<ContainerAllocator>  _turn_signal_type;
  _turn_signal_type turn_signal;

   typedef  ::raptor_dbw_msgs::HighBeam_<ContainerAllocator>  _high_beam_headlights_type;
  _high_beam_headlights_type high_beam_headlights;

   typedef  ::raptor_dbw_msgs::WiperFront_<ContainerAllocator>  _wiper_type;
  _wiper_type wiper;

   typedef uint8_t _cruise_resume_button_type;
  _cruise_resume_button_type cruise_resume_button;

   typedef uint8_t _cruise_cancel_button_type;
  _cruise_cancel_button_type cruise_cancel_button;

   typedef uint8_t _cruise_accel_button_type;
  _cruise_accel_button_type cruise_accel_button;

   typedef uint8_t _cruise_decel_button_type;
  _cruise_decel_button_type cruise_decel_button;

   typedef uint8_t _cruise_on_off_button_type;
  _cruise_on_off_button_type cruise_on_off_button;

   typedef uint8_t _adaptive_cruise_on_off_button_type;
  _adaptive_cruise_on_off_button_type adaptive_cruise_on_off_button;

   typedef uint8_t _adaptive_cruise_increase_distance_button_type;
  _adaptive_cruise_increase_distance_button_type adaptive_cruise_increase_distance_button;

   typedef uint8_t _adaptive_cruise_decrease_distance_button_type;
  _adaptive_cruise_decrease_distance_button_type adaptive_cruise_decrease_distance_button;

   typedef uint8_t _driver_door_ajar_type;
  _driver_door_ajar_type driver_door_ajar;

   typedef uint8_t _passenger_door_ajar_type;
  _passenger_door_ajar_type passenger_door_ajar;

   typedef uint8_t _rear_left_door_ajar_type;
  _rear_left_door_ajar_type rear_left_door_ajar;

   typedef uint8_t _rear_right_door_ajar_type;
  _rear_right_door_ajar_type rear_right_door_ajar;

   typedef uint8_t _liftgate_ajar_type;
  _liftgate_ajar_type liftgate_ajar;

   typedef uint8_t _any_seatbelt_unbuckled_type;
  _any_seatbelt_unbuckled_type any_seatbelt_unbuckled;

   typedef uint8_t _airbag_deployed_type;
  _airbag_deployed_type airbag_deployed;

   typedef uint8_t _door_or_hood_ajar_type;
  _door_or_hood_ajar_type door_or_hood_ajar;





  typedef boost::shared_ptr< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> const> ConstPtr;

}; // struct DriverInputReport_

typedef ::raptor_dbw_msgs::DriverInputReport_<std::allocator<void> > DriverInputReport;

typedef boost::shared_ptr< ::raptor_dbw_msgs::DriverInputReport > DriverInputReportPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::DriverInputReport const> DriverInputReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.turn_signal == rhs.turn_signal &&
    lhs.high_beam_headlights == rhs.high_beam_headlights &&
    lhs.wiper == rhs.wiper &&
    lhs.cruise_resume_button == rhs.cruise_resume_button &&
    lhs.cruise_cancel_button == rhs.cruise_cancel_button &&
    lhs.cruise_accel_button == rhs.cruise_accel_button &&
    lhs.cruise_decel_button == rhs.cruise_decel_button &&
    lhs.cruise_on_off_button == rhs.cruise_on_off_button &&
    lhs.adaptive_cruise_on_off_button == rhs.adaptive_cruise_on_off_button &&
    lhs.adaptive_cruise_increase_distance_button == rhs.adaptive_cruise_increase_distance_button &&
    lhs.adaptive_cruise_decrease_distance_button == rhs.adaptive_cruise_decrease_distance_button &&
    lhs.driver_door_ajar == rhs.driver_door_ajar &&
    lhs.passenger_door_ajar == rhs.passenger_door_ajar &&
    lhs.rear_left_door_ajar == rhs.rear_left_door_ajar &&
    lhs.rear_right_door_ajar == rhs.rear_right_door_ajar &&
    lhs.liftgate_ajar == rhs.liftgate_ajar &&
    lhs.any_seatbelt_unbuckled == rhs.any_seatbelt_unbuckled &&
    lhs.airbag_deployed == rhs.airbag_deployed &&
    lhs.door_or_hood_ajar == rhs.door_or_hood_ajar;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39b09090e1c37c932f4f9021bb96dc32";
  }

  static const char* value(const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39b09090e1c37c93ULL;
  static const uint64_t static_value2 = 0x2f4f9021bb96dc32ULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/DriverInputReport";
  }

  static const char* value(const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"# Turn Signal enumeration\n"
"TurnSignal turn_signal\n"
"\n"
"# High beams\n"
"HighBeam high_beam_headlights\n"
"\n"
"# Front Windshield Wipers enumeration\n"
"WiperFront wiper\n"
"\n"
"# Buttons\n"
"bool cruise_resume_button\n"
"bool cruise_cancel_button\n"
"bool cruise_accel_button\n"
"bool cruise_decel_button\n"
"bool cruise_on_off_button\n"
"bool adaptive_cruise_on_off_button\n"
"bool adaptive_cruise_increase_distance_button\n"
"bool adaptive_cruise_decrease_distance_button\n"
"\n"
"# Door status\n"
"bool driver_door_ajar\n"
"bool passenger_door_ajar\n"
"bool rear_left_door_ajar\n"
"bool rear_right_door_ajar\n"
"bool liftgate_ajar\n"
"bool any_seatbelt_unbuckled\n"
"bool airbag_deployed\n"
"bool door_or_hood_ajar\n"
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
"MSG: raptor_dbw_msgs/TurnSignal\n"
"uint8 value\n"
"\n"
"uint8 NONE = 0\n"
"uint8 LEFT = 1\n"
"uint8 RIGHT = 2\n"
"uint8 HAZARDS = 3\n"
"uint8 SNA = 7\n"
"================================================================================\n"
"MSG: raptor_dbw_msgs/HighBeam\n"
"uint8 status\n"
"\n"
"uint8 OFF = 0\n"
"uint8 ON = 1\n"
"uint8 FORCE_ON = 2\n"
"uint8 RESERVED = 3\n"
"\n"
"================================================================================\n"
"MSG: raptor_dbw_msgs/WiperFront\n"
"uint8 status\n"
"\n"
"uint8 OFF = 0\n"
"uint8 INTERVAL_1 = 1\n"
"uint8 INTERVAL_2 = 2\n"
"uint8 INTERVAL_3 = 3\n"
"uint8 INTERVAL_4 = 4\n"
"uint8 INTERVAL_5 = 5\n"
"uint8 INTERVAL_6 = 6\n"
"uint8 CONSTANT_LOW = 11\n"
"uint8 CONSTANT_HIGH = 12\n"
"uint8 WASH_BRIEF = 13\n"
"uint8 WASH_CONTINUOUS = 14\n"
"uint8 SNA = 15\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.turn_signal);
      stream.next(m.high_beam_headlights);
      stream.next(m.wiper);
      stream.next(m.cruise_resume_button);
      stream.next(m.cruise_cancel_button);
      stream.next(m.cruise_accel_button);
      stream.next(m.cruise_decel_button);
      stream.next(m.cruise_on_off_button);
      stream.next(m.adaptive_cruise_on_off_button);
      stream.next(m.adaptive_cruise_increase_distance_button);
      stream.next(m.adaptive_cruise_decrease_distance_button);
      stream.next(m.driver_door_ajar);
      stream.next(m.passenger_door_ajar);
      stream.next(m.rear_left_door_ajar);
      stream.next(m.rear_right_door_ajar);
      stream.next(m.liftgate_ajar);
      stream.next(m.any_seatbelt_unbuckled);
      stream.next(m.airbag_deployed);
      stream.next(m.door_or_hood_ajar);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriverInputReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::DriverInputReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "turn_signal: ";
    s << std::endl;
    Printer< ::raptor_dbw_msgs::TurnSignal_<ContainerAllocator> >::stream(s, indent + "  ", v.turn_signal);
    s << indent << "high_beam_headlights: ";
    s << std::endl;
    Printer< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >::stream(s, indent + "  ", v.high_beam_headlights);
    s << indent << "wiper: ";
    s << std::endl;
    Printer< ::raptor_dbw_msgs::WiperFront_<ContainerAllocator> >::stream(s, indent + "  ", v.wiper);
    s << indent << "cruise_resume_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cruise_resume_button);
    s << indent << "cruise_cancel_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cruise_cancel_button);
    s << indent << "cruise_accel_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cruise_accel_button);
    s << indent << "cruise_decel_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cruise_decel_button);
    s << indent << "cruise_on_off_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cruise_on_off_button);
    s << indent << "adaptive_cruise_on_off_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adaptive_cruise_on_off_button);
    s << indent << "adaptive_cruise_increase_distance_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adaptive_cruise_increase_distance_button);
    s << indent << "adaptive_cruise_decrease_distance_button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adaptive_cruise_decrease_distance_button);
    s << indent << "driver_door_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driver_door_ajar);
    s << indent << "passenger_door_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.passenger_door_ajar);
    s << indent << "rear_left_door_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rear_left_door_ajar);
    s << indent << "rear_right_door_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rear_right_door_ajar);
    s << indent << "liftgate_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.liftgate_ajar);
    s << indent << "any_seatbelt_unbuckled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.any_seatbelt_unbuckled);
    s << indent << "airbag_deployed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.airbag_deployed);
    s << indent << "door_or_hood_ajar: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.door_or_hood_ajar);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_DRIVERINPUTREPORT_H
