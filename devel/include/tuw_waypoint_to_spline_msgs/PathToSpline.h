// Generated by gencpp from file tuw_waypoint_to_spline_msgs/PathToSpline.msg
// DO NOT EDIT!


#ifndef TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINE_H
#define TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINE_H

#include <ros/service_traits.h>


#include <tuw_waypoint_to_spline_msgs/PathToSplineRequest.h>
#include <tuw_waypoint_to_spline_msgs/PathToSplineResponse.h>


namespace tuw_waypoint_to_spline_msgs
{

struct PathToSpline
{

typedef PathToSplineRequest Request;
typedef PathToSplineResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PathToSpline
} // namespace tuw_waypoint_to_spline_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSpline > {
  static const char* value()
  {
    return "d25abe2e286add702e8b898ea4515cc4";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSpline&) { return value(); }
};

template<>
struct DataType< ::tuw_waypoint_to_spline_msgs::PathToSpline > {
  static const char* value()
  {
    return "tuw_waypoint_to_spline_msgs/PathToSpline";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSpline&) { return value(); }
};


// service_traits::MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest> should match
// service_traits::MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSpline >
template<>
struct MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSpline >::value();
  }
  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest> should match
// service_traits::DataType< ::tuw_waypoint_to_spline_msgs::PathToSpline >
template<>
struct DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest>
{
  static const char* value()
  {
    return DataType< ::tuw_waypoint_to_spline_msgs::PathToSpline >::value();
  }
  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse> should match
// service_traits::MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSpline >
template<>
struct MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSpline >::value();
  }
  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse> should match
// service_traits::DataType< ::tuw_waypoint_to_spline_msgs::PathToSpline >
template<>
struct DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse>
{
  static const char* value()
  {
    return DataType< ::tuw_waypoint_to_spline_msgs::PathToSpline >::value();
  }
  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINE_H