/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef gateway_inform_protocol_TYPES_H
#define gateway_inform_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "gateway_protocol_types.h"


namespace gateway { namespace protocol {


class MessageInformNotify {
 public:

  static const char* ascii_fingerprint; // = "B8D94EBFFE99C6E7010418EB2DF36DC3";
  static const uint8_t binary_fingerprint[16]; // = {0xB8,0xD9,0x4E,0xBF,0xFE,0x99,0xC6,0xE7,0x01,0x04,0x18,0xEB,0x2D,0xF3,0x6D,0xC3};

  MessageInformNotify() : id_(0) {
  }

  virtual ~MessageInformNotify() throw() {}

  int32_t id_;
  std::vector<std::string>  params_;

  void __set_id_(const int32_t val) {
    id_ = val;
  }

  void __set_params_(const std::vector<std::string> & val) {
    params_ = val;
  }

  bool operator == (const MessageInformNotify & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(params_ == rhs.params_))
      return false;
    return true;
  }
  bool operator != (const MessageInformNotify &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageInformNotify & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageInformNotify &a, MessageInformNotify &b);

}} // namespace

#endif