// Generated by gencpp from file serialPort/GPS.msg
// DO NOT EDIT!


#ifndef SERIALPORT_MESSAGE_GPS_H
#define SERIALPORT_MESSAGE_GPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace serialPort
{
template <class ContainerAllocator>
struct GPS_
{
  typedef GPS_<ContainerAllocator> Type;

  GPS_()
    : lat(0.0)
    , lon(0.0)  {
    }
  GPS_(const ContainerAllocator& _alloc)
    : lat(0.0)
    , lon(0.0)  {
  (void)_alloc;
    }



   typedef float _lat_type;
  _lat_type lat;

   typedef float _lon_type;
  _lon_type lon;





  typedef boost::shared_ptr< ::serialPort::GPS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serialPort::GPS_<ContainerAllocator> const> ConstPtr;

}; // struct GPS_

typedef ::serialPort::GPS_<std::allocator<void> > GPS;

typedef boost::shared_ptr< ::serialPort::GPS > GPSPtr;
typedef boost::shared_ptr< ::serialPort::GPS const> GPSConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serialPort::GPS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serialPort::GPS_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace serialPort

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'serialPort': ['/home/zhaom/catkin_ws_rtk/src/serialPort/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::serialPort::GPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialPort::GPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serialPort::GPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serialPort::GPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialPort::GPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialPort::GPS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serialPort::GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c24029cbb90b28da08009a1a44081308";
  }

  static const char* value(const ::serialPort::GPS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc24029cbb90b28daULL;
  static const uint64_t static_value2 = 0x08009a1a44081308ULL;
};

template<class ContainerAllocator>
struct DataType< ::serialPort::GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serialPort/GPS";
  }

  static const char* value(const ::serialPort::GPS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serialPort::GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 lat\n\
float32 lon\n\
";
  }

  static const char* value(const ::serialPort::GPS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serialPort::GPS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lat);
      stream.next(m.lon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GPS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serialPort::GPS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serialPort::GPS_<ContainerAllocator>& v)
  {
    s << indent << "lat: ";
    Printer<float>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<float>::stream(s, indent + "  ", v.lon);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIALPORT_MESSAGE_GPS_H
