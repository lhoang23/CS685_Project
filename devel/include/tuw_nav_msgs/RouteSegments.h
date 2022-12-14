// Generated by gencpp from file tuw_nav_msgs/RouteSegments.msg
// DO NOT EDIT!


#ifndef TUW_NAV_MSGS_MESSAGE_ROUTESEGMENTS_H
#define TUW_NAV_MSGS_MESSAGE_ROUTESEGMENTS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <tuw_nav_msgs/RouteSegment.h>

namespace tuw_nav_msgs
{
template <class ContainerAllocator>
struct RouteSegments_
{
  typedef RouteSegments_<ContainerAllocator> Type;

  RouteSegments_()
    : header()
    , segments()  {
    }
  RouteSegments_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , segments(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >> _segments_type;
  _segments_type segments;





  typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> const> ConstPtr;

}; // struct RouteSegments_

typedef ::tuw_nav_msgs::RouteSegments_<std::allocator<void> > RouteSegments;

typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegments > RouteSegmentsPtr;
typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegments const> RouteSegmentsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.segments == rhs.segments;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "475980bd7b5855e6d03b68f0282e448a";
  }

  static const char* value(const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x475980bd7b5855e6ULL;
  static const uint64_t static_value2 = 0xd03b68f0282e448aULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_nav_msgs/RouteSegments";
  }

  static const char* value(const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This expresses a marker/fiducial detection\n"
"Header header                      # timestamp in the header is the acquisition time and frame\n"
"\n"
"RouteSegment[] segments            # detected markers\n"
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
"MSG: tuw_nav_msgs/RouteSegment\n"
"\n"
"uint32 id                     # Segment id\n"
"uint8 type                    # Segment type\n"
"                              # NA      = 0\n"
"                              # LINE    = 1\n"
"                              # ARC     = 2\n"
"                              # SPIROS  = 3\n"
"                              # SPLINE  = 4\n"
"uint8 orientation             # Segment orientation\n"
"                              # CLOCKWISE  = 0\n"
"                              # COUNTER_CLOCKWISE  = 1\n"
"uint8 motion_type             # Motion type\n"
"                              # NA = 0\n"
"                              # FLAT = 1\n"
"                              # DWA_SLOW = 2\n"
"                              # DWA_FAST = 3\n"
"                              # MPC_SLOW = 4\n"
"                              # MPC_FAST = 5\n"
"                              # PI_SLOW = 6\n"
"                              # PI_FAST = 7\n"
"geometry_msgs/Pose start\n"
"geometry_msgs/Pose end\n"
"geometry_msgs/Pose center    \n"
"int8 level\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.segments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RouteSegments_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_nav_msgs::RouteSegments_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_nav_msgs::RouteSegments_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "segments[]" << std::endl;
    for (size_t i = 0; i < v.segments.size(); ++i)
    {
      s << indent << "  segments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >::stream(s, indent + "    ", v.segments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_NAV_MSGS_MESSAGE_ROUTESEGMENTS_H
