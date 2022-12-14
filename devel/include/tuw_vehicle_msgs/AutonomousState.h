// Generated by gencpp from file tuw_vehicle_msgs/AutonomousState.msg
// DO NOT EDIT!


#ifndef TUW_VEHICLE_MSGS_MESSAGE_AUTONOMOUSSTATE_H
#define TUW_VEHICLE_MSGS_MESSAGE_AUTONOMOUSSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tuw_vehicle_msgs
{
template <class ContainerAllocator>
struct AutonomousState_
{
  typedef AutonomousState_<ContainerAllocator> Type;

  AutonomousState_()
    : header()
    , state(0)
    , mission(0)
    , failed_systems()  {
    }
  AutonomousState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , mission(0)
    , failed_systems(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint8_t _mission_type;
  _mission_type mission;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _failed_systems_type;
  _failed_systems_type failed_systems;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MISSION_NONE)
  #undef MISSION_NONE
#endif
#if defined(_WIN32) && defined(MISSION_BRAKE_TEST)
  #undef MISSION_BRAKE_TEST
#endif
#if defined(_WIN32) && defined(MISSION_ACCELERATION)
  #undef MISSION_ACCELERATION
#endif
#if defined(_WIN32) && defined(MISSION_SKIDPAD)
  #undef MISSION_SKIDPAD
#endif
#if defined(_WIN32) && defined(MISSION_TRACKDRIVE)
  #undef MISSION_TRACKDRIVE
#endif
#if defined(_WIN32) && defined(MISSION_TEST)
  #undef MISSION_TEST
#endif
#if defined(_WIN32) && defined(MISSION_JACKED_UP_STEERING)
  #undef MISSION_JACKED_UP_STEERING
#endif
#if defined(_WIN32) && defined(STATE_OFF)
  #undef STATE_OFF
#endif
#if defined(_WIN32) && defined(STATE_READY)
  #undef STATE_READY
#endif
#if defined(_WIN32) && defined(STATE_ACTIVE)
  #undef STATE_ACTIVE
#endif
#if defined(_WIN32) && defined(STATE_EBS)
  #undef STATE_EBS
#endif
#if defined(_WIN32) && defined(STATE_FINISHED)
  #undef STATE_FINISHED
#endif

  enum {
    MISSION_NONE = 1u,
    MISSION_BRAKE_TEST = 2u,
    MISSION_ACCELERATION = 3u,
    MISSION_SKIDPAD = 4u,
    MISSION_TRACKDRIVE = 5u,
    MISSION_TEST = 6u,
    MISSION_JACKED_UP_STEERING = 100u,
    STATE_OFF = 1u,
    STATE_READY = 2u,
    STATE_ACTIVE = 3u,
    STATE_EBS = 4u,
    STATE_FINISHED = 5u,
  };


  typedef boost::shared_ptr< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> const> ConstPtr;

}; // struct AutonomousState_

typedef ::tuw_vehicle_msgs::AutonomousState_<std::allocator<void> > AutonomousState;

typedef boost::shared_ptr< ::tuw_vehicle_msgs::AutonomousState > AutonomousStatePtr;
typedef boost::shared_ptr< ::tuw_vehicle_msgs::AutonomousState const> AutonomousStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator1> & lhs, const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state == rhs.state &&
    lhs.mission == rhs.mission &&
    lhs.failed_systems == rhs.failed_systems;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator1> & lhs, const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_vehicle_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d70f585dba7442399f4beebf01ac24b7";
  }

  static const char* value(const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd70f585dba744239ULL;
  static const uint64_t static_value2 = 0x9f4beebf01ac24b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_vehicle_msgs/AutonomousState";
  }

  static const char* value(const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint8 MISSION_NONE=1\n"
"uint8 MISSION_BRAKE_TEST=2\n"
"uint8 MISSION_ACCELERATION=3\n"
"uint8 MISSION_SKIDPAD=4\n"
"uint8 MISSION_TRACKDRIVE=5\n"
"uint8 MISSION_TEST=6\n"
"\n"
"# mission to test correct heading of the vehicle while jacked up\n"
"# the front wheels should align between the next cones seen by the vehicle\n"
"uint8 MISSION_JACKED_UP_STEERING=100\n"
"\n"
"uint8 STATE_OFF=1\n"
"uint8 STATE_READY=2\n"
"uint8 STATE_ACTIVE=3\n"
"uint8 STATE_EBS=4\n"
"uint8 STATE_FINISHED=5\n"
"\n"
"uint8 state\n"
"uint8 mission\n"
"uint8[] failed_systems\n"
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

  static const char* value(const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.mission);
      stream.next(m.failed_systems);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AutonomousState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_vehicle_msgs::AutonomousState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "mission: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mission);
    s << indent << "failed_systems[]" << std::endl;
    for (size_t i = 0; i < v.failed_systems.size(); ++i)
    {
      s << indent << "  failed_systems[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.failed_systems[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_VEHICLE_MSGS_MESSAGE_AUTONOMOUSSTATE_H
