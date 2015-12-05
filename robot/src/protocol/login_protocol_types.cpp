/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "login_protocol_types.h"

#include <algorithm>

namespace login { namespace protocol {

int _kMessageTypeValues[] = {
  MessageType::MESSAGE_MIN,
  MessageType::MESSAGE_CREATE_ACTOR_REQUEST,
  MessageType::MESSAGE_CREATE_ACTOR_RESPONSE,
  MessageType::MESSAGE_ACTOR_LOGIN_REQUEST,
  MessageType::MESSAGE_ACTOR_LOGIN_RESPONSE,
  MessageType::MESSAGE_CHECK_ACTOR_EXIST_REQUEST,
  MessageType::MESSAGE_CHECK_ACTOR_EXIST_RESPONSE,
  MessageType::MESSAGE_MAX
};
const char* _kMessageTypeNames[] = {
  "MESSAGE_MIN",
  "MESSAGE_CREATE_ACTOR_REQUEST",
  "MESSAGE_CREATE_ACTOR_RESPONSE",
  "MESSAGE_ACTOR_LOGIN_REQUEST",
  "MESSAGE_ACTOR_LOGIN_RESPONSE",
  "MESSAGE_CHECK_ACTOR_EXIST_REQUEST",
  "MESSAGE_CHECK_ACTOR_EXIST_RESPONSE",
  "MESSAGE_MAX"
};
const std::map<int, const char*> _MessageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kMessageTypeValues, _kMessageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kCreateActorTypeValues[] = {
  CreateActorType::SUCCESS,
  CreateActorType::FAILED_ACTOR_EXIST,
  CreateActorType::FAILED_NAME_EXIST,
  CreateActorType::FAILED_NAME_LENGTH,
  CreateActorType::FAILED_NAME_INVALID,
  CreateActorType::FAILED_UNKNOWN,
  CreateActorType::MAX
};
const char* _kCreateActorTypeNames[] = {
  "SUCCESS",
  "FAILED_ACTOR_EXIST",
  "FAILED_NAME_EXIST",
  "FAILED_NAME_LENGTH",
  "FAILED_NAME_INVALID",
  "FAILED_UNKNOWN",
  "MAX"
};
const std::map<int, const char*> _CreateActorType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kCreateActorTypeValues, _kCreateActorTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* Message::ascii_fingerprint = "19B5240589E680301A7E32DF3971EFBE";
const uint8_t Message::binary_fingerprint[16] = {0x19,0xB5,0x24,0x05,0x89,0xE6,0x80,0x30,0x1A,0x7E,0x32,0xDF,0x39,0x71,0xEF,0xBE};

uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;
  bool isset_message_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type_ = (MessageType::type)ecast0;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->message_);
          isset_message_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_message_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->message_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
  swap(a.message_, b.message_);
}

const char* MessageCreateActorRequest::ascii_fingerprint = "20E299AB11A76404BA21D48395046B03";
const uint8_t MessageCreateActorRequest::binary_fingerprint[16] = {0x20,0xE2,0x99,0xAB,0x11,0xA7,0x64,0x04,0xBA,0x21,0xD4,0x83,0x95,0x04,0x6B,0x03};

uint32_t MessageCreateActorRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_open_id_ = false;
  bool isset_open_session_ = false;
  bool isset_zone_id_ = false;
  bool isset_actor_name_ = false;
  bool isset_hair_ = false;
  bool isset_male_ = false;
  bool isset_vocation_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->open_id_);
          isset_open_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->open_session_);
          isset_open_session_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->zone_id_);
          isset_zone_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->actor_name_);
          isset_actor_name_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->hair_);
          isset_hair_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->male_);
          isset_male_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->vocation_);
          isset_vocation_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_open_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_open_session_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_zone_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_name_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hair_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_male_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_vocation_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageCreateActorRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageCreateActorRequest");

  xfer += oprot->writeFieldBegin("open_id_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->open_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("open_session_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->open_session_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("zone_id_", ::apache::thrift::protocol::T_I16, 3);
  xfer += oprot->writeI16(this->zone_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_name_", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->actor_name_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hair_", ::apache::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->hair_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("male_", ::apache::thrift::protocol::T_BOOL, 6);
  xfer += oprot->writeBool(this->male_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vocation_", ::apache::thrift::protocol::T_BYTE, 7);
  xfer += oprot->writeByte(this->vocation_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageCreateActorRequest &a, MessageCreateActorRequest &b) {
  using ::std::swap;
  swap(a.open_id_, b.open_id_);
  swap(a.open_session_, b.open_session_);
  swap(a.zone_id_, b.zone_id_);
  swap(a.actor_name_, b.actor_name_);
  swap(a.hair_, b.hair_);
  swap(a.male_, b.male_);
  swap(a.vocation_, b.vocation_);
}

const char* MessageCreateActorResponse::ascii_fingerprint = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
const uint8_t MessageCreateActorResponse::binary_fingerprint[16] = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

uint32_t MessageCreateActorResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->type_ = (CreateActorType::type)ecast1;
          isset_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageCreateActorResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageCreateActorResponse");

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageCreateActorResponse &a, MessageCreateActorResponse &b) {
  using ::std::swap;
  swap(a.type_, b.type_);
}

const char* MessageActorLoginRequest::ascii_fingerprint = "3628A1EB414F66736E1B2A082E79475F";
const uint8_t MessageActorLoginRequest::binary_fingerprint[16] = {0x36,0x28,0xA1,0xEB,0x41,0x4F,0x66,0x73,0x6E,0x1B,0x2A,0x08,0x2E,0x79,0x47,0x5F};

uint32_t MessageActorLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_open_id_ = false;
  bool isset_zone_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->open_id_);
          isset_open_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->zone_id_);
          isset_zone_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_open_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_zone_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageActorLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageActorLoginRequest");

  xfer += oprot->writeFieldBegin("open_id_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->open_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("zone_id_", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->zone_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageActorLoginRequest &a, MessageActorLoginRequest &b) {
  using ::std::swap;
  swap(a.open_id_, b.open_id_);
  swap(a.zone_id_, b.zone_id_);
}

const char* MessageActorLoginResponse::ascii_fingerprint = "DD55A5009BBE5DDF9C045AB7FDC14C87";
const uint8_t MessageActorLoginResponse::binary_fingerprint[16] = {0xDD,0x55,0xA5,0x00,0x9B,0xBE,0x5D,0xDF,0x9C,0x04,0x5A,0xB7,0xFD,0xC1,0x4C,0x87};

uint32_t MessageActorLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_success_ = false;
  bool isset_actor_id_ = false;
  bool isset_game_session_ = false;
  bool isset_actor_name_ = false;
  bool isset_gateway_host_ = false;
  bool isset_gateway_port_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->success_);
          isset_success_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->game_session_);
          isset_game_session_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->actor_name_);
          isset_actor_name_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->gateway_host_);
          isset_gateway_host_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->gateway_port_);
          isset_gateway_port_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_success_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_game_session_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_name_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gateway_host_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gateway_port_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageActorLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageActorLoginResponse");

  xfer += oprot->writeFieldBegin("success_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->success_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("game_session_", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->game_session_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_name_", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->actor_name_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gateway_host_", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->gateway_host_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gateway_port_", ::apache::thrift::protocol::T_I16, 6);
  xfer += oprot->writeI16(this->gateway_port_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageActorLoginResponse &a, MessageActorLoginResponse &b) {
  using ::std::swap;
  swap(a.success_, b.success_);
  swap(a.actor_id_, b.actor_id_);
  swap(a.game_session_, b.game_session_);
  swap(a.actor_name_, b.actor_name_);
  swap(a.gateway_host_, b.gateway_host_);
  swap(a.gateway_port_, b.gateway_port_);
}

const char* MessageCheckActorExistRequest::ascii_fingerprint = "3628A1EB414F66736E1B2A082E79475F";
const uint8_t MessageCheckActorExistRequest::binary_fingerprint[16] = {0x36,0x28,0xA1,0xEB,0x41,0x4F,0x66,0x73,0x6E,0x1B,0x2A,0x08,0x2E,0x79,0x47,0x5F};

uint32_t MessageCheckActorExistRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_open_id_ = false;
  bool isset_zone_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->open_id_);
          isset_open_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->zone_id_);
          isset_zone_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_open_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_zone_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageCheckActorExistRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageCheckActorExistRequest");

  xfer += oprot->writeFieldBegin("open_id_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->open_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("zone_id_", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->zone_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageCheckActorExistRequest &a, MessageCheckActorExistRequest &b) {
  using ::std::swap;
  swap(a.open_id_, b.open_id_);
  swap(a.zone_id_, b.zone_id_);
}

const char* MessageCheckActorExistResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t MessageCheckActorExistResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t MessageCheckActorExistResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_exist_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->exist_);
          isset_exist_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_exist_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MessageCheckActorExistResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageCheckActorExistResponse");

  xfer += oprot->writeFieldBegin("exist_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->exist_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageCheckActorExistResponse &a, MessageCheckActorExistResponse &b) {
  using ::std::swap;
  swap(a.exist_, b.exist_);
}

}} // namespace