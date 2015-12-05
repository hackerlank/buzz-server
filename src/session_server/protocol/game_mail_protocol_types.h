/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_mail_protocol_TYPES_H
#define game_mail_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "mail_types.h"
#include "mail_system_types.h"


namespace session { namespace protocol {


class MessageMailSendRequest {
 public:

  static const char* ascii_fingerprint; // = "405F55AC7B80216413D6BA072E6859AC";
  static const uint8_t binary_fingerprint[16]; // = {0x40,0x5F,0x55,0xAC,0x7B,0x80,0x21,0x64,0x13,0xD6,0xBA,0x07,0x2E,0x68,0x59,0xAC};

  MessageMailSendRequest() : addressee_id_(0), addresser_id_(0), addressee_(), addresser_(), type_(( ::entity::MailType::type)0), affix_type_(( ::entity::MailAffixType::type)0), child_type_(( ::entity::SystemMailChildType::type)0), title_(), context_() {
  }

  virtual ~MessageMailSendRequest() throw() {}

  int64_t addressee_id_;
  int64_t addresser_id_;
  std::string addressee_;
  std::string addresser_;
   ::entity::MailType::type type_;
   ::entity::MailAffixType::type affix_type_;
   ::entity::MailAffix affix_;
   ::entity::SystemMailChildType::type child_type_;
  std::vector<std::string>  params_;
  std::string title_;
  std::string context_;

  void __set_addressee_id_(const int64_t val) {
    addressee_id_ = val;
  }

  void __set_addresser_id_(const int64_t val) {
    addresser_id_ = val;
  }

  void __set_addressee_(const std::string& val) {
    addressee_ = val;
  }

  void __set_addresser_(const std::string& val) {
    addresser_ = val;
  }

  void __set_type_(const  ::entity::MailType::type val) {
    type_ = val;
  }

  void __set_affix_type_(const  ::entity::MailAffixType::type val) {
    affix_type_ = val;
  }

  void __set_affix_(const  ::entity::MailAffix& val) {
    affix_ = val;
  }

  void __set_child_type_(const  ::entity::SystemMailChildType::type val) {
    child_type_ = val;
  }

  void __set_params_(const std::vector<std::string> & val) {
    params_ = val;
  }

  void __set_title_(const std::string& val) {
    title_ = val;
  }

  void __set_context_(const std::string& val) {
    context_ = val;
  }

  bool operator == (const MessageMailSendRequest & rhs) const
  {
    if (!(addressee_id_ == rhs.addressee_id_))
      return false;
    if (!(addresser_id_ == rhs.addresser_id_))
      return false;
    if (!(addressee_ == rhs.addressee_))
      return false;
    if (!(addresser_ == rhs.addresser_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    if (!(affix_type_ == rhs.affix_type_))
      return false;
    if (!(affix_ == rhs.affix_))
      return false;
    if (!(child_type_ == rhs.child_type_))
      return false;
    if (!(params_ == rhs.params_))
      return false;
    if (!(title_ == rhs.title_))
      return false;
    if (!(context_ == rhs.context_))
      return false;
    return true;
  }
  bool operator != (const MessageMailSendRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageMailSendRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageMailSendRequest &a, MessageMailSendRequest &b);


class MessageMailSendResponse {
 public:

  static const char* ascii_fingerprint; // = "92DB7C08FAF226B322B117D193F35B5F";
  static const uint8_t binary_fingerprint[16]; // = {0x92,0xDB,0x7C,0x08,0xFA,0xF2,0x26,0xB3,0x22,0xB1,0x17,0xD1,0x93,0xF3,0x5B,0x5F};

  MessageMailSendResponse() : result_(0), addresser_id_(0) {
  }

  virtual ~MessageMailSendResponse() throw() {}

  bool result_;
  int64_t addresser_id_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  void __set_addresser_id_(const int64_t val) {
    addresser_id_ = val;
  }

  bool operator == (const MessageMailSendResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (!(addresser_id_ == rhs.addresser_id_))
      return false;
    return true;
  }
  bool operator != (const MessageMailSendResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageMailSendResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageMailSendResponse &a, MessageMailSendResponse &b);


class MessageMailNotice {
 public:

  static const char* ascii_fingerprint; // = "0AA0E66E63EBF7E15CCF37A9878CFF2D";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0xA0,0xE6,0x6E,0x63,0xEB,0xF7,0xE1,0x5C,0xCF,0x37,0xA9,0x87,0x8C,0xFF,0x2D};

  MessageMailNotice() : title_(), addresser_(), state_(( ::entity::MailReadState::type)0), affix_type_(( ::entity::MailAffixType::type)0), type_(( ::entity::MailType::type)0), time_(0), id_(0), addressee_id_(0) {
  }

  virtual ~MessageMailNotice() throw() {}

  std::string title_;
  std::string addresser_;
   ::entity::MailReadState::type state_;
   ::entity::MailAffixType::type affix_type_;
   ::entity::MailType::type type_;
  int64_t time_;
  int32_t id_;
  int64_t addressee_id_;

  void __set_title_(const std::string& val) {
    title_ = val;
  }

  void __set_addresser_(const std::string& val) {
    addresser_ = val;
  }

  void __set_state_(const  ::entity::MailReadState::type val) {
    state_ = val;
  }

  void __set_affix_type_(const  ::entity::MailAffixType::type val) {
    affix_type_ = val;
  }

  void __set_type_(const  ::entity::MailType::type val) {
    type_ = val;
  }

  void __set_time_(const int64_t val) {
    time_ = val;
  }

  void __set_id_(const int32_t val) {
    id_ = val;
  }

  void __set_addressee_id_(const int64_t val) {
    addressee_id_ = val;
  }

  bool operator == (const MessageMailNotice & rhs) const
  {
    if (!(title_ == rhs.title_))
      return false;
    if (!(addresser_ == rhs.addresser_))
      return false;
    if (!(state_ == rhs.state_))
      return false;
    if (!(affix_type_ == rhs.affix_type_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    if (!(time_ == rhs.time_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(addressee_id_ == rhs.addressee_id_))
      return false;
    return true;
  }
  bool operator != (const MessageMailNotice &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageMailNotice & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageMailNotice &a, MessageMailNotice &b);

}} // namespace

#endif