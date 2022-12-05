// Generated by gencpp from file tuw_multi_robot_msgs/StationManagerStationProtocol.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_STATIONMANAGERSTATIONPROTOCOL_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_STATIONMANAGERSTATIONPROTOCOL_H

#include <ros/service_traits.h>


#include <tuw_multi_robot_msgs/StationManagerStationProtocolRequest.h>
#include <tuw_multi_robot_msgs/StationManagerStationProtocolResponse.h>


namespace tuw_multi_robot_msgs
{

struct StationManagerStationProtocol
{

typedef StationManagerStationProtocolRequest Request;
typedef StationManagerStationProtocolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StationManagerStationProtocol
} // namespace tuw_multi_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocol > {
  static const char* value()
  {
    return "1f5e895558b51eb5ebcc012fba03f68a";
  }

  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocol&) { return value(); }
};

template<>
struct DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocol > {
  static const char* value()
  {
    return "tuw_multi_robot_msgs/StationManagerStationProtocol";
  }

  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocol&) { return value(); }
};


// service_traits::MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest> should match
// service_traits::MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocol >
template<>
struct MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocol >::value();
  }
  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest> should match
// service_traits::DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocol >
template<>
struct DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest>
{
  static const char* value()
  {
    return DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocol >::value();
  }
  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse> should match
// service_traits::MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocol >
template<>
struct MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tuw_multi_robot_msgs::StationManagerStationProtocol >::value();
  }
  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse> should match
// service_traits::DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocol >
template<>
struct DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse>
{
  static const char* value()
  {
    return DataType< ::tuw_multi_robot_msgs::StationManagerStationProtocol >::value();
  }
  static const char* value(const ::tuw_multi_robot_msgs::StationManagerStationProtocolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_STATIONMANAGERSTATIONPROTOCOL_H