// Generated by gencpp from file raptor_dbw_msgs/DoorRequest.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_DOORREQUEST_H
#define RAPTOR_DBW_MSGS_MESSAGE_DOORREQUEST_H


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
struct DoorRequest_
{
  typedef DoorRequest_<ContainerAllocator> Type;

  DoorRequest_()
    : value(0)  {
    }
  DoorRequest_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NO_REQUEST)
  #undef NO_REQUEST
#endif
#if defined(_WIN32) && defined(LIFTGATE_TOGGLE)
  #undef LIFTGATE_TOGGLE
#endif
#if defined(_WIN32) && defined(LR_DOOR_TOGGLE)
  #undef LR_DOOR_TOGGLE
#endif
#if defined(_WIN32) && defined(RR_DOOR_TOGGLE)
  #undef RR_DOOR_TOGGLE
#endif

  enum {
    NO_REQUEST = 0u,
    LIFTGATE_TOGGLE = 1u,
    LR_DOOR_TOGGLE = 2u,
    RR_DOOR_TOGGLE = 3u,
  };


  typedef boost::shared_ptr< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DoorRequest_

typedef ::raptor_dbw_msgs::DoorRequest_<std::allocator<void> > DoorRequest;

typedef boost::shared_ptr< ::raptor_dbw_msgs::DoorRequest > DoorRequestPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::DoorRequest const> DoorRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "348349c0ab8ef301126c09608a2bcad3";
  }

  static const char* value(const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x348349c0ab8ef301ULL;
  static const uint64_t static_value2 = 0x126c09608a2bcad3ULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/DoorRequest";
  }

  static const char* value(const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 value\n"
"\n"
"uint8 NO_REQUEST=0\n"
"uint8 LIFTGATE_TOGGLE=1\n"
"uint8 LR_DOOR_TOGGLE=2\n"
"uint8 RR_DOOR_TOGGLE=3\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::DoorRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_DOORREQUEST_H
