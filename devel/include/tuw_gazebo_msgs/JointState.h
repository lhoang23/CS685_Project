// Generated by gencpp from file tuw_gazebo_msgs/JointState.msg
// DO NOT EDIT!


#ifndef TUW_GAZEBO_MSGS_MESSAGE_JOINTSTATE_H
#define TUW_GAZEBO_MSGS_MESSAGE_JOINTSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tuw_gazebo_msgs
{
template <class ContainerAllocator>
struct JointState_
{
  typedef JointState_<ContainerAllocator> Type;

  JointState_()
    : x(0.0)
    , xdot(0.0)
    , xddot(0.0)  {
    }
  JointState_(const ContainerAllocator& _alloc)
    : x(0.0)
    , xdot(0.0)
    , xddot(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _xdot_type;
  _xdot_type xdot;

   typedef double _xddot_type;
  _xddot_type xddot;





  typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> const> ConstPtr;

}; // struct JointState_

typedef ::tuw_gazebo_msgs::JointState_<std::allocator<void> > JointState;

typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointState > JointStatePtr;
typedef boost::shared_ptr< ::tuw_gazebo_msgs::JointState const> JointStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_gazebo_msgs::JointState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_gazebo_msgs::JointState_<ContainerAllocator1> & lhs, const ::tuw_gazebo_msgs::JointState_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.xdot == rhs.xdot &&
    lhs.xddot == rhs.xddot;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_gazebo_msgs::JointState_<ContainerAllocator1> & lhs, const ::tuw_gazebo_msgs::JointState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "640c08b997ef5ea0a1e6b2142dbc0465";
  }

  static const char* value(const ::tuw_gazebo_msgs::JointState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x640c08b997ef5ea0ULL;
  static const uint64_t static_value2 = 0xa1e6b2142dbc0465ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_gazebo_msgs/JointState";
  }

  static const char* value(const ::tuw_gazebo_msgs::JointState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 xdot\n"
"float64 xddot\n"
;
  }

  static const char* value(const ::tuw_gazebo_msgs::JointState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.xdot);
      stream.next(m.xddot);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_gazebo_msgs::JointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_gazebo_msgs::JointState_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "xdot: ";
    Printer<double>::stream(s, indent + "  ", v.xdot);
    s << indent << "xddot: ";
    Printer<double>::stream(s, indent + "  ", v.xddot);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_GAZEBO_MSGS_MESSAGE_JOINTSTATE_H
