/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_soul_actor_login_TYPES_H
#define storage_soul_actor_login_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {

struct SoulActorField {
  enum type {
    AXE_SETTING = 0,
    SHOOT_SETTING = 1,
    MAGIC_SETTING = 2,
    SETTINGS = 3,
    ALTAR_SUMMON_PAID = 4,
    ALTAR_FREE_SUMMON_TIMES = 5,
    ALTAR_CARDS = 6,
    ALTAR_CARD_BIND = 7,
    CURRENT_ENERGY = 8,
    MAX = 9
  };
};

extern const std::map<int, const char*> _SoulActorField_VALUES_TO_NAMES;

struct SoulActorLoginResult {
  enum type {
    SUCCESS = 0,
    ERROR_UNKNOWN = 1
  };
};

extern const std::map<int, const char*> _SoulActorLoginResult_VALUES_TO_NAMES;


class StorageSoulActorField {
 public:

  static const char* ascii_fingerprint; // = "54BE10CB6FC2FA41B9B73C8621779FFB";
  static const uint8_t binary_fingerprint[16]; // = {0x54,0xBE,0x10,0xCB,0x6F,0xC2,0xFA,0x41,0xB9,0xB7,0x3C,0x86,0x21,0x77,0x9F,0xFB};

  StorageSoulActorField() : axe_setting_(0), shoot_setting_(0), magic_setting_(0), settings_(), altar_summon_paid_(0), altar_free_summon_times_(0), altar_cards_(), altar_card_bind_(0), current_energy_(0) {
  }

  virtual ~StorageSoulActorField() throw() {}

  int32_t axe_setting_;
  int32_t shoot_setting_;
  int32_t magic_setting_;
  std::string settings_;
  bool altar_summon_paid_;
  int32_t altar_free_summon_times_;
  std::string altar_cards_;
  bool altar_card_bind_;
  int32_t current_energy_;

  void __set_axe_setting_(const int32_t val) {
    axe_setting_ = val;
  }

  void __set_shoot_setting_(const int32_t val) {
    shoot_setting_ = val;
  }

  void __set_magic_setting_(const int32_t val) {
    magic_setting_ = val;
  }

  void __set_settings_(const std::string& val) {
    settings_ = val;
  }

  void __set_altar_summon_paid_(const bool val) {
    altar_summon_paid_ = val;
  }

  void __set_altar_free_summon_times_(const int32_t val) {
    altar_free_summon_times_ = val;
  }

  void __set_altar_cards_(const std::string& val) {
    altar_cards_ = val;
  }

  void __set_altar_card_bind_(const bool val) {
    altar_card_bind_ = val;
  }

  void __set_current_energy_(const int32_t val) {
    current_energy_ = val;
  }

  bool operator == (const StorageSoulActorField & rhs) const
  {
    if (!(axe_setting_ == rhs.axe_setting_))
      return false;
    if (!(shoot_setting_ == rhs.shoot_setting_))
      return false;
    if (!(magic_setting_ == rhs.magic_setting_))
      return false;
    if (!(settings_ == rhs.settings_))
      return false;
    if (!(altar_summon_paid_ == rhs.altar_summon_paid_))
      return false;
    if (!(altar_free_summon_times_ == rhs.altar_free_summon_times_))
      return false;
    if (!(altar_cards_ == rhs.altar_cards_))
      return false;
    if (!(altar_card_bind_ == rhs.altar_card_bind_))
      return false;
    if (!(current_energy_ == rhs.current_energy_))
      return false;
    return true;
  }
  bool operator != (const StorageSoulActorField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSoulActorField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSoulActorField &a, StorageSoulActorField &b);


class StorageSoulActorLoginRequest {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  StorageSoulActorLoginRequest() : actor_id_(0) {
  }

  virtual ~StorageSoulActorLoginRequest() throw() {}

  int64_t actor_id_;

  void __set_actor_id_(const int64_t val) {
    actor_id_ = val;
  }

  bool operator == (const StorageSoulActorLoginRequest & rhs) const
  {
    if (!(actor_id_ == rhs.actor_id_))
      return false;
    return true;
  }
  bool operator != (const StorageSoulActorLoginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSoulActorLoginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSoulActorLoginRequest &a, StorageSoulActorLoginRequest &b);


class StorageSoulActorLoginResponse {
 public:

  static const char* ascii_fingerprint; // = "DD206C7EE30E363F4D8EDD6D53D63DF2";
  static const uint8_t binary_fingerprint[16]; // = {0xDD,0x20,0x6C,0x7E,0xE3,0x0E,0x36,0x3F,0x4D,0x8E,0xDD,0x6D,0x53,0xD6,0x3D,0xF2};

  StorageSoulActorLoginResponse() : result_((SoulActorLoginResult::type)0) {
  }

  virtual ~StorageSoulActorLoginResponse() throw() {}

  SoulActorLoginResult::type result_;
  StorageSoulActorField field_;

  void __set_result_(const SoulActorLoginResult::type val) {
    result_ = val;
  }

  void __set_field_(const StorageSoulActorField& val) {
    field_ = val;
  }

  bool operator == (const StorageSoulActorLoginResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (!(field_ == rhs.field_))
      return false;
    return true;
  }
  bool operator != (const StorageSoulActorLoginResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSoulActorLoginResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSoulActorLoginResponse &a, StorageSoulActorLoginResponse &b);

}} // namespace

#endif