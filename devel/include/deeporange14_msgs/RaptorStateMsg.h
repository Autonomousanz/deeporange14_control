// Generated by gencpp from file deeporange14_msgs/RaptorStateMsg.msg
// DO NOT EDIT!


#ifndef DEEPORANGE14_MSGS_MESSAGE_RAPTORSTATEMSG_H
#define DEEPORANGE14_MSGS_MESSAGE_RAPTORSTATEMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace deeporange14_msgs
{
template <class ContainerAllocator>
struct RaptorStateMsg_
{
  typedef RaptorStateMsg_<ContainerAllocator> Type;

  RaptorStateMsg_()
    : header()
    , system_state(0)
    , dbw_mode(0)
    , brake_enable_status(false)  {
    }
  RaptorStateMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , system_state(0)
    , dbw_mode(0)
    , brake_enable_status(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _system_state_type;
  _system_state_type system_state;

   typedef uint8_t _dbw_mode_type;
  _dbw_mode_type dbw_mode;

   typedef uint8_t _brake_enable_status_type;
  _brake_enable_status_type brake_enable_status;





  typedef boost::shared_ptr< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> const> ConstPtr;

}; // struct RaptorStateMsg_

typedef ::deeporange14_msgs::RaptorStateMsg_<std::allocator<void> > RaptorStateMsg;

typedef boost::shared_ptr< ::deeporange14_msgs::RaptorStateMsg > RaptorStateMsgPtr;
typedef boost::shared_ptr< ::deeporange14_msgs::RaptorStateMsg const> RaptorStateMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator1> & lhs, const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.system_state == rhs.system_state &&
    lhs.dbw_mode == rhs.dbw_mode &&
    lhs.brake_enable_status == rhs.brake_enable_status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator1> & lhs, const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deeporange14_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae18ce3d33a6f151cb9a6cb40431fc15";
  }

  static const char* value(const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae18ce3d33a6f151ULL;
  static const uint64_t static_value2 = 0xcb9a6cb40431fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deeporange14_msgs/RaptorStateMsg";
  }

  static const char* value(const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint8 system_state\n"
"uint8 dbw_mode\n"
"bool brake_enable_status\n"
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
;
  }

  static const char* value(const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.system_state);
      stream.next(m.dbw_mode);
      stream.next(m.brake_enable_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RaptorStateMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deeporange14_msgs::RaptorStateMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "system_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system_state);
    s << indent << "dbw_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dbw_mode);
    s << indent << "brake_enable_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_enable_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPORANGE14_MSGS_MESSAGE_RAPTORSTATEMSG_H
