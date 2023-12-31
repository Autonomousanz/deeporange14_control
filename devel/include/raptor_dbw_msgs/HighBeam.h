// Generated by gencpp from file raptor_dbw_msgs/HighBeam.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_HIGHBEAM_H
#define RAPTOR_DBW_MSGS_MESSAGE_HIGHBEAM_H


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
struct HighBeam_
{
  typedef HighBeam_<ContainerAllocator> Type;

  HighBeam_()
    : status(0)  {
    }
  HighBeam_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(OFF)
  #undef OFF
#endif
#if defined(_WIN32) && defined(ON)
  #undef ON
#endif
#if defined(_WIN32) && defined(FORCE_ON)
  #undef FORCE_ON
#endif
#if defined(_WIN32) && defined(RESERVED)
  #undef RESERVED
#endif

  enum {
    OFF = 0u,
    ON = 1u,
    FORCE_ON = 2u,
    RESERVED = 3u,
  };


  typedef boost::shared_ptr< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> const> ConstPtr;

}; // struct HighBeam_

typedef ::raptor_dbw_msgs::HighBeam_<std::allocator<void> > HighBeam;

typedef boost::shared_ptr< ::raptor_dbw_msgs::HighBeam > HighBeamPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::HighBeam const> HighBeamConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adbf7a951d077ba41a11250e8c7184ce";
  }

  static const char* value(const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xadbf7a951d077ba4ULL;
  static const uint64_t static_value2 = 0x1a11250e8c7184ceULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/HighBeam";
  }

  static const char* value(const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"\n"
"uint8 OFF = 0\n"
"uint8 ON = 1\n"
"uint8 FORCE_ON = 2\n"
"uint8 RESERVED = 3\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HighBeam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::HighBeam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::HighBeam_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_HIGHBEAM_H
