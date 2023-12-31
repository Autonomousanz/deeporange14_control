// Generated by gencpp from file raptor_dbw_msgs/WatchdogStatus.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_WATCHDOGSTATUS_H
#define RAPTOR_DBW_MSGS_MESSAGE_WATCHDOGSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct WatchdogStatus_
{
  typedef WatchdogStatus_<ContainerAllocator> Type;

  WatchdogStatus_()
    : source(0)  {
    }
  WatchdogStatus_(const ContainerAllocator& _alloc)
    : source(0)  {
  (void)_alloc;
    }



   typedef uint8_t _source_type;
  _source_type source;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(OTHER_BRAKE)
  #undef OTHER_BRAKE
#endif
#if defined(_WIN32) && defined(OTHER_ACCELERATOR_PEDAL)
  #undef OTHER_ACCELERATOR_PEDAL
#endif
#if defined(_WIN32) && defined(OTHER_STEERING)
  #undef OTHER_STEERING
#endif
#if defined(_WIN32) && defined(BRAKE_COUNTER)
  #undef BRAKE_COUNTER
#endif
#if defined(_WIN32) && defined(BRAKE_DISABLED)
  #undef BRAKE_DISABLED
#endif
#if defined(_WIN32) && defined(BRAKE_COMMAND)
  #undef BRAKE_COMMAND
#endif
#if defined(_WIN32) && defined(BRAKE_REPORT)
  #undef BRAKE_REPORT
#endif
#if defined(_WIN32) && defined(ACCELERATOR_PEDAL_COUNTER)
  #undef ACCELERATOR_PEDAL_COUNTER
#endif
#if defined(_WIN32) && defined(ACCELERATOR_PEDAL_DISABLED)
  #undef ACCELERATOR_PEDAL_DISABLED
#endif
#if defined(_WIN32) && defined(ACCELERATOR_PEDAL_COMMAND)
  #undef ACCELERATOR_PEDAL_COMMAND
#endif
#if defined(_WIN32) && defined(ACCELERATOR_PEDAL_REPORT)
  #undef ACCELERATOR_PEDAL_REPORT
#endif
#if defined(_WIN32) && defined(STEERING_COUNTER)
  #undef STEERING_COUNTER
#endif
#if defined(_WIN32) && defined(STEERING_DISABLED)
  #undef STEERING_DISABLED
#endif
#if defined(_WIN32) && defined(STEERING_COMMAND)
  #undef STEERING_COMMAND
#endif
#if defined(_WIN32) && defined(STEERING_REPORT)
  #undef STEERING_REPORT
#endif

  enum {
    NONE = 0u,
    OTHER_BRAKE = 1u,
    OTHER_ACCELERATOR_PEDAL = 2u,
    OTHER_STEERING = 3u,
    BRAKE_COUNTER = 4u,
    BRAKE_DISABLED = 5u,
    BRAKE_COMMAND = 6u,
    BRAKE_REPORT = 7u,
    ACCELERATOR_PEDAL_COUNTER = 8u,
    ACCELERATOR_PEDAL_DISABLED = 9u,
    ACCELERATOR_PEDAL_COMMAND = 10u,
    ACCELERATOR_PEDAL_REPORT = 11u,
    STEERING_COUNTER = 12u,
    STEERING_DISABLED = 13u,
    STEERING_COMMAND = 14u,
    STEERING_REPORT = 15u,
  };


  typedef boost::shared_ptr< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> const> ConstPtr;

}; // struct WatchdogStatus_

typedef ::raptor_dbw_msgs::WatchdogStatus_<std::allocator<void> > WatchdogStatus;

typedef boost::shared_ptr< ::raptor_dbw_msgs::WatchdogStatus > WatchdogStatusPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::WatchdogStatus const> WatchdogStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator2> & rhs)
{
  return lhs.source == rhs.source;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e7ee28e0afc591098518c8b9bf36b8a";
  }

  static const char* value(const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e7ee28e0afc5910ULL;
  static const uint64_t static_value2 = 0x98518c8b9bf36b8aULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/WatchdogStatus";
  }

  static const char* value(const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 source\n"
"\n"
"uint8 NONE=0                        # No source for watchdog counter fault\n"
"uint8 OTHER_BRAKE=1                 # Fault determined by brake controller\n"
"uint8 OTHER_ACCELERATOR_PEDAL=2     # Fault determined by accelerator pedal controller\n"
"uint8 OTHER_STEERING=3              # Fault determined by steering controller\n"
"uint8 BRAKE_COUNTER=4               # Brake command counter failed to increment\n"
"uint8 BRAKE_DISABLED=5              # Brake transition to disabled while in gear or moving\n"
"uint8 BRAKE_COMMAND=6               # Brake command timeout after 100ms\n"
"uint8 BRAKE_REPORT=7                # Brake report timeout after 100ms\n"
"uint8 ACCELERATOR_PEDAL_COUNTER=8   # Accelerator pedal command counter failed to increment\n"
"uint8 ACCELERATOR_PEDAL_DISABLED=9  # Accelerator pedal transition to disabled while in gear or moving\n"
"uint8 ACCELERATOR_PEDAL_COMMAND=10  # Accelerator pedal command timeout after 100ms\n"
"uint8 ACCELERATOR_PEDAL_REPORT=11   # Accelerator pedal report timeout after 100ms\n"
"uint8 STEERING_COUNTER=12           # Steering command counter failed to increment\n"
"uint8 STEERING_DISABLED=13          # Steering transition to disabled while in gear or moving\n"
"uint8 STEERING_COMMAND=14           # Steering command timeout after 100ms\n"
"uint8 STEERING_REPORT=15            # Steering report timeout after 100ms\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WatchdogStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::WatchdogStatus_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_WATCHDOGSTATUS_H
