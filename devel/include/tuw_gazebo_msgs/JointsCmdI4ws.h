// Generated by gencpp from file tuw_gazebo_msgs/JointsCmdI4ws.msg
// DO NOT EDIT!


#ifndef TUW_GAZEBO_MSGS_MESSAGE_JOINTSCMDI4WS_H
#define TUW_GAZEBO_MSGS_MESSAGE_JOINTSCMDI4WS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <tuw_gazebo_msgs/JointCmd.h>

namespace tuw_gazebo_msgs
{
template <class ContainerAllocator>
struct JointsCmdI4ws_
{
  typedef JointsCmdI4ws_<ContainerAllocator> Type;

  JointsCmdI4ws_()
    : header()
    , cmd()  {
    }
  JointsCmdI4ws_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cmd()  {
  (void)_alloc;
      cmd.assign( ::tuw_gazebo_msgs::JointCmd_<ContainerAllocator> (_alloc));
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array< ::tuw_gazebo_msgs::JointCmd_<ContainerAllocator> , 8>  _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> const> ConstPtr;

}; // struct JointsCmdI4ws_

typedef ::tuw_gazebo_msgs::JointsCmdI4ws_<std::allocator<void> > JointsCmdI4ws;

typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointsCmdI4ws > JointsCmdI4wsPtr;
typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointsCmdI4ws const> JointsCmdI4wsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator1> & lhs, const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cmd == rhs.cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator1> & lhs, const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f73647fd5aebcac5be306d55704f0b9a";
  }

  static const char* value(const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf73647fd5aebcac5ULL;
  static const uint64_t static_value2 = 0xbe306d55704f0b9aULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_gazebo_msgs/JointsCmdI4ws";
  }

  static const char* value(const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"JointCmd[8] cmd\n"
"\n"
"#Those are the 8 joints in order\n"
"\n"
"#JointCmd steer_tr\n"
"#JointCmd steer_tl\n"
"#JointCmd steer_br\n"
"#JointCmd steer_bl\n"
"\n"
"#JointCmd wheel_tr\n"
"#JointCmd wheel_tl\n"
"#JointCmd wheel_br\n"
"#JointCmd wheel_bl\n"
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
"MSG: tuw_gazebo_msgs/JointCmd\n"
"float64 u\n"
;
  }

  static const char* value(const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointsCmdI4ws_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_gazebo_msgs::JointsCmdI4ws_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cmd[]" << std::endl;
    for (size_t i = 0; i < v.cmd.size(); ++i)
    {
      s << indent << "  cmd[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_gazebo_msgs::JointCmd_<ContainerAllocator> >::stream(s, indent + "    ", v.cmd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_GAZEBO_MSGS_MESSAGE_JOINTSCMDI4WS_H