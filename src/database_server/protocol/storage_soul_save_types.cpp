/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_soul_save_types.h"

#include <algorithm>

namespace database { namespace protocol {

const char* StorageSoulSaveRequest::ascii_fingerprint = "2C9C1B1EED5B713A886A7A1CAF56B04B";
const uint8_t StorageSoulSaveRequest::binary_fingerprint[16] = {0x2C,0x9C,0x1B,0x1E,0xED,0x5B,0x71,0x3A,0x88,0x6A,0x7A,0x1C,0xAF,0x56,0xB0,0x4B};

uint32_t StorageSoulSaveRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id_ = false;
  bool isset_fields_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id_);
          isset_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fields_.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->fields_.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->fields_[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_fields_ = true;
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

  if (!isset_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fields_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSoulSaveRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSoulSaveRequest");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fields_", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->fields_.size()));
    std::vector< ::database::protocol::StorageSoulField> ::const_iterator _iter5;
    for (_iter5 = this->fields_.begin(); _iter5 != this->fields_.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSoulSaveRequest &a, StorageSoulSaveRequest &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
  swap(a.fields_, b.fields_);
}

const char* StorageSoulSaveResponse::ascii_fingerprint = "5892306F7B861249AE8E27C8ED619593";
const uint8_t StorageSoulSaveResponse::binary_fingerprint[16] = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

uint32_t StorageSoulSaveResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_result_ = false;

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
          xfer += iprot->readBool(this->result_);
          isset_result_ = true;
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

  if (!isset_result_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageSoulSaveResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageSoulSaveResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->result_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageSoulSaveResponse &a, StorageSoulSaveResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
}

}} // namespace