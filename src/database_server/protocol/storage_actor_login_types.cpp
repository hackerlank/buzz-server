/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "storage_actor_login_types.h"

#include <algorithm>

namespace database { namespace protocol {

int _kActorFieldValues[] = {
  ActorField::NAME,
  ActorField::LEVEL,
  ActorField::VOCATION,
  ActorField::GENDER,
  ActorField::HEAD,
  ActorField::HAIR,
  ActorField::CURRENT_HP,
  ActorField::CURRENT_MP,
  ActorField::CURRENT_EXP,
  ActorField::NIMBUS,
  ActorField::GOLD,
  ActorField::FREEDOM_DOLLARS,
  ActorField::RESTRICT_DOLLARS,
  ActorField::HONOUR,
  ActorField::WAR_SOUL,
  ActorField::GEM_SHARD,
  ActorField::JUSTICE,
  ActorField::MIRACLE_INTEGRAL,
  ActorField::LEGEND_INTEGRAL,
  ActorField::ARENA_INTEGRAL,
  ActorField::MAP,
  ActorField::X,
  ActorField::Y,
  ActorField::PRE_MAP,
  ActorField::PRE_X,
  ActorField::PRE_Y,
  ActorField::BROWN_NAME,
  ActorField::PK_MODE,
  ActorField::FUNCTIONALITY_STATE,
  ActorField::PACKET_CAPACITY,
  ActorField::STORAGE_CAPACITY,
  ActorField::AXE_FIGHT_SCORE,
  ActorField::SHOOT_FIGHT_SCORE,
  ActorField::MAGIC_FIGHT_SCORE,
  ActorField::LAST_LOGOUT_TIME,
  ActorField::VIP_REMAINDER_TIME,
  ActorField::VIP_TYPE,
  ActorField::WORLD_JUMP_VIP_NUM,
  ActorField::FCM_TYPE,
  ActorField::FCM_ONLINE_TIME,
  ActorField::CREATE_TIME,
  ActorField::HP_TASLIMAN,
  ActorField::MP_TASLIMAN,
  ActorField::MAX
};
const char* _kActorFieldNames[] = {
  "NAME",
  "LEVEL",
  "VOCATION",
  "GENDER",
  "HEAD",
  "HAIR",
  "CURRENT_HP",
  "CURRENT_MP",
  "CURRENT_EXP",
  "NIMBUS",
  "GOLD",
  "FREEDOM_DOLLARS",
  "RESTRICT_DOLLARS",
  "HONOUR",
  "WAR_SOUL",
  "GEM_SHARD",
  "JUSTICE",
  "MIRACLE_INTEGRAL",
  "LEGEND_INTEGRAL",
  "ARENA_INTEGRAL",
  "MAP",
  "X",
  "Y",
  "PRE_MAP",
  "PRE_X",
  "PRE_Y",
  "BROWN_NAME",
  "PK_MODE",
  "FUNCTIONALITY_STATE",
  "PACKET_CAPACITY",
  "STORAGE_CAPACITY",
  "AXE_FIGHT_SCORE",
  "SHOOT_FIGHT_SCORE",
  "MAGIC_FIGHT_SCORE",
  "LAST_LOGOUT_TIME",
  "VIP_REMAINDER_TIME",
  "VIP_TYPE",
  "WORLD_JUMP_VIP_NUM",
  "FCM_TYPE",
  "FCM_ONLINE_TIME",
  "CREATE_TIME",
  "HP_TASLIMAN",
  "MP_TASLIMAN",
  "MAX"
};
const std::map<int, const char*> _ActorField_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(44, _kActorFieldValues, _kActorFieldNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kActorLoginResultValues[] = {
  ActorLoginResult::SUCCESS,
  ActorLoginResult::ERROR_INEXIST,
  ActorLoginResult::ERROR_UNKNOWN,
  ActorLoginResult::MAX
};
const char* _kActorLoginResultNames[] = {
  "SUCCESS",
  "ERROR_INEXIST",
  "ERROR_UNKNOWN",
  "MAX"
};
const std::map<int, const char*> _ActorLoginResult_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kActorLoginResultValues, _kActorLoginResultNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* StorageActorField::ascii_fingerprint = "37A76DB2E1A9C961542701DF699423D4";
const uint8_t StorageActorField::binary_fingerprint[16] = {0x37,0xA7,0x6D,0xB2,0xE1,0xA9,0xC9,0x61,0x54,0x27,0x01,0xDF,0x69,0x94,0x23,0xD4};

uint32_t StorageActorField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name_ = false;
  bool isset_level_ = false;
  bool isset_vocation_ = false;
  bool isset_gender_ = false;
  bool isset_head_ = false;
  bool isset_hair_ = false;
  bool isset_current_hp_ = false;
  bool isset_current_mp_ = false;
  bool isset_current_exp_ = false;
  bool isset_nimbus_ = false;
  bool isset_gold_ = false;
  bool isset_freedom_dollars_ = false;
  bool isset_restrict_dollars_ = false;
  bool isset_honour_ = false;
  bool isset_war_soul_ = false;
  bool isset_gem_shard_ = false;
  bool isset_justice_ = false;
  bool isset_miracle_integral_ = false;
  bool isset_legend_integral_ = false;
  bool isset_arena_integral_ = false;
  bool isset_map_ = false;
  bool isset_x_ = false;
  bool isset_y_ = false;
  bool isset_pre_map_ = false;
  bool isset_pre_x_ = false;
  bool isset_pre_y_ = false;
  bool isset_brown_name_ = false;
  bool isset_pk_mode_ = false;
  bool isset_functionality_state_ = false;
  bool isset_packet_capacity_ = false;
  bool isset_storage_capacity_ = false;
  bool isset_axe_fight_score_ = false;
  bool isset_shoot_fight_score_ = false;
  bool isset_magic_fight_score_ = false;
  bool isset_last_logout_time_ = false;
  bool isset_vip_remainder_time_ = false;
  bool isset_vip_type_ = false;
  bool isset_world_jump_vip_num_ = false;
  bool isset_fcm_type_ = false;
  bool isset_fcm_online_time_ = false;
  bool isset_create_time_ = false;
  bool isset_hp_tasliman_ = false;
  bool isset_mp_tasliman_ = false;

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
          xfer += iprot->readString(this->name_);
          isset_name_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          isset_level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->vocation_);
          isset_vocation_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->gender_);
          isset_gender_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->head_);
          isset_head_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->hair_);
          isset_hair_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->current_hp_);
          isset_current_hp_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->current_mp_);
          isset_current_mp_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->current_exp_);
          isset_current_exp_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->nimbus_);
          isset_nimbus_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->gold_);
          isset_gold_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->freedom_dollars_);
          isset_freedom_dollars_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->restrict_dollars_);
          isset_restrict_dollars_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->honour_);
          isset_honour_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->war_soul_);
          isset_war_soul_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 16:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->gem_shard_);
          isset_gem_shard_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 17:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->justice_);
          isset_justice_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 18:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->miracle_integral_);
          isset_miracle_integral_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 19:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->legend_integral_);
          isset_legend_integral_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->arena_integral_);
          isset_arena_integral_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->map_);
          isset_map_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->x_);
          isset_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 23:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->y_);
          isset_y_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 24:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->pre_map_);
          isset_pre_map_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 25:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->pre_x_);
          isset_pre_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 26:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->pre_y_);
          isset_pre_y_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 27:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->brown_name_);
          isset_brown_name_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 28:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->pk_mode_);
          isset_pk_mode_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 29:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->functionality_state_);
          isset_functionality_state_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 30:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->packet_capacity_);
          isset_packet_capacity_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 31:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->storage_capacity_);
          isset_storage_capacity_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 32:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->axe_fight_score_);
          isset_axe_fight_score_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 33:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->shoot_fight_score_);
          isset_shoot_fight_score_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 34:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->magic_fight_score_);
          isset_magic_fight_score_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 35:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->last_logout_time_);
          isset_last_logout_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 36:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->vip_remainder_time_);
          isset_vip_remainder_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 37:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->vip_type_);
          isset_vip_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 38:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->world_jump_vip_num_);
          isset_world_jump_vip_num_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 39:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fcm_type_);
          isset_fcm_type_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 40:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fcm_online_time_);
          isset_fcm_online_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 41:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->create_time_);
          isset_create_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 42:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->hp_tasliman_);
          isset_hp_tasliman_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 43:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->mp_tasliman_);
          isset_mp_tasliman_ = true;
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

  if (!isset_name_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_level_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_vocation_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gender_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_head_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hair_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_current_hp_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_current_mp_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_current_exp_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_nimbus_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gold_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_freedom_dollars_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_restrict_dollars_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_honour_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_war_soul_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gem_shard_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_justice_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_miracle_integral_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_legend_integral_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_arena_integral_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_map_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_x_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_y_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_pre_map_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_pre_x_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_pre_y_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_brown_name_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_pk_mode_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_functionality_state_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_packet_capacity_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_storage_capacity_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_axe_fight_score_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_shoot_fight_score_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_magic_fight_score_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_last_logout_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_vip_remainder_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_vip_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_world_jump_vip_num_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fcm_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fcm_online_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_create_time_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_hp_tasliman_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_mp_tasliman_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageActorField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageActorField");

  xfer += oprot->writeFieldBegin("name_", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->level_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vocation_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->vocation_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gender_", ::apache::thrift::protocol::T_BYTE, 4);
  xfer += oprot->writeByte(this->gender_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("head_", ::apache::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->head_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hair_", ::apache::thrift::protocol::T_BYTE, 6);
  xfer += oprot->writeByte(this->hair_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("current_hp_", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->current_hp_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("current_mp_", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->current_mp_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("current_exp_", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->current_exp_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nimbus_", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32(this->nimbus_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gold_", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32(this->gold_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("freedom_dollars_", ::apache::thrift::protocol::T_I32, 12);
  xfer += oprot->writeI32(this->freedom_dollars_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("restrict_dollars_", ::apache::thrift::protocol::T_I32, 13);
  xfer += oprot->writeI32(this->restrict_dollars_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("honour_", ::apache::thrift::protocol::T_I32, 14);
  xfer += oprot->writeI32(this->honour_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("war_soul_", ::apache::thrift::protocol::T_I32, 15);
  xfer += oprot->writeI32(this->war_soul_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gem_shard_", ::apache::thrift::protocol::T_I32, 16);
  xfer += oprot->writeI32(this->gem_shard_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("justice_", ::apache::thrift::protocol::T_I32, 17);
  xfer += oprot->writeI32(this->justice_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("miracle_integral_", ::apache::thrift::protocol::T_I32, 18);
  xfer += oprot->writeI32(this->miracle_integral_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("legend_integral_", ::apache::thrift::protocol::T_I32, 19);
  xfer += oprot->writeI32(this->legend_integral_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("arena_integral_", ::apache::thrift::protocol::T_I32, 20);
  xfer += oprot->writeI32(this->arena_integral_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("map_", ::apache::thrift::protocol::T_I16, 21);
  xfer += oprot->writeI16(this->map_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("x_", ::apache::thrift::protocol::T_I32, 22);
  xfer += oprot->writeI32(this->x_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("y_", ::apache::thrift::protocol::T_I32, 23);
  xfer += oprot->writeI32(this->y_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pre_map_", ::apache::thrift::protocol::T_I16, 24);
  xfer += oprot->writeI16(this->pre_map_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pre_x_", ::apache::thrift::protocol::T_I32, 25);
  xfer += oprot->writeI32(this->pre_x_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pre_y_", ::apache::thrift::protocol::T_I32, 26);
  xfer += oprot->writeI32(this->pre_y_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("brown_name_", ::apache::thrift::protocol::T_I32, 27);
  xfer += oprot->writeI32(this->brown_name_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pk_mode_", ::apache::thrift::protocol::T_I32, 28);
  xfer += oprot->writeI32(this->pk_mode_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("functionality_state_", ::apache::thrift::protocol::T_STRING, 29);
  xfer += oprot->writeString(this->functionality_state_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("packet_capacity_", ::apache::thrift::protocol::T_I32, 30);
  xfer += oprot->writeI32(this->packet_capacity_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("storage_capacity_", ::apache::thrift::protocol::T_I32, 31);
  xfer += oprot->writeI32(this->storage_capacity_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("axe_fight_score_", ::apache::thrift::protocol::T_I32, 32);
  xfer += oprot->writeI32(this->axe_fight_score_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("shoot_fight_score_", ::apache::thrift::protocol::T_I32, 33);
  xfer += oprot->writeI32(this->shoot_fight_score_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("magic_fight_score_", ::apache::thrift::protocol::T_I32, 34);
  xfer += oprot->writeI32(this->magic_fight_score_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("last_logout_time_", ::apache::thrift::protocol::T_I64, 35);
  xfer += oprot->writeI64(this->last_logout_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vip_remainder_time_", ::apache::thrift::protocol::T_I32, 36);
  xfer += oprot->writeI32(this->vip_remainder_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vip_type_", ::apache::thrift::protocol::T_BYTE, 37);
  xfer += oprot->writeByte(this->vip_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("world_jump_vip_num_", ::apache::thrift::protocol::T_I32, 38);
  xfer += oprot->writeI32(this->world_jump_vip_num_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fcm_type_", ::apache::thrift::protocol::T_I32, 39);
  xfer += oprot->writeI32(this->fcm_type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fcm_online_time_", ::apache::thrift::protocol::T_I32, 40);
  xfer += oprot->writeI32(this->fcm_online_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("create_time_", ::apache::thrift::protocol::T_I64, 41);
  xfer += oprot->writeI64(this->create_time_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hp_tasliman_", ::apache::thrift::protocol::T_I32, 42);
  xfer += oprot->writeI32(this->hp_tasliman_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("mp_tasliman_", ::apache::thrift::protocol::T_I32, 43);
  xfer += oprot->writeI32(this->mp_tasliman_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageActorField &a, StorageActorField &b) {
  using ::std::swap;
  swap(a.name_, b.name_);
  swap(a.level_, b.level_);
  swap(a.vocation_, b.vocation_);
  swap(a.gender_, b.gender_);
  swap(a.head_, b.head_);
  swap(a.hair_, b.hair_);
  swap(a.current_hp_, b.current_hp_);
  swap(a.current_mp_, b.current_mp_);
  swap(a.current_exp_, b.current_exp_);
  swap(a.nimbus_, b.nimbus_);
  swap(a.gold_, b.gold_);
  swap(a.freedom_dollars_, b.freedom_dollars_);
  swap(a.restrict_dollars_, b.restrict_dollars_);
  swap(a.honour_, b.honour_);
  swap(a.war_soul_, b.war_soul_);
  swap(a.gem_shard_, b.gem_shard_);
  swap(a.justice_, b.justice_);
  swap(a.miracle_integral_, b.miracle_integral_);
  swap(a.legend_integral_, b.legend_integral_);
  swap(a.arena_integral_, b.arena_integral_);
  swap(a.map_, b.map_);
  swap(a.x_, b.x_);
  swap(a.y_, b.y_);
  swap(a.pre_map_, b.pre_map_);
  swap(a.pre_x_, b.pre_x_);
  swap(a.pre_y_, b.pre_y_);
  swap(a.brown_name_, b.brown_name_);
  swap(a.pk_mode_, b.pk_mode_);
  swap(a.functionality_state_, b.functionality_state_);
  swap(a.packet_capacity_, b.packet_capacity_);
  swap(a.storage_capacity_, b.storage_capacity_);
  swap(a.axe_fight_score_, b.axe_fight_score_);
  swap(a.shoot_fight_score_, b.shoot_fight_score_);
  swap(a.magic_fight_score_, b.magic_fight_score_);
  swap(a.last_logout_time_, b.last_logout_time_);
  swap(a.vip_remainder_time_, b.vip_remainder_time_);
  swap(a.vip_type_, b.vip_type_);
  swap(a.world_jump_vip_num_, b.world_jump_vip_num_);
  swap(a.fcm_type_, b.fcm_type_);
  swap(a.fcm_online_time_, b.fcm_online_time_);
  swap(a.create_time_, b.create_time_);
  swap(a.hp_tasliman_, b.hp_tasliman_);
  swap(a.mp_tasliman_, b.mp_tasliman_);
}

const char* StorageActorLoginRequest::ascii_fingerprint = "68D0AF07A6229A0625DC8B8182879318";
const uint8_t StorageActorLoginRequest::binary_fingerprint[16] = {0x68,0xD0,0xAF,0x07,0xA6,0x22,0x9A,0x06,0x25,0xDC,0x8B,0x81,0x82,0x87,0x93,0x18};

uint32_t StorageActorLoginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id_ = false;
  bool isset_gateway_ = false;

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
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->gateway_);
          isset_gateway_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->jump_scene_);
          this->__isset.jump_scene_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->jump_x_);
          this->__isset.jump_x_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->jump_y_);
          this->__isset.jump_y_ = true;
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
  if (!isset_gateway_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StorageActorLoginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageActorLoginRequest");

  xfer += oprot->writeFieldBegin("id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gateway_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->gateway_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.jump_scene_) {
    xfer += oprot->writeFieldBegin("jump_scene_", ::apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->jump_scene_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.jump_x_) {
    xfer += oprot->writeFieldBegin("jump_x_", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32(this->jump_x_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.jump_y_) {
    xfer += oprot->writeFieldBegin("jump_y_", ::apache::thrift::protocol::T_I32, 5);
    xfer += oprot->writeI32(this->jump_y_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageActorLoginRequest &a, StorageActorLoginRequest &b) {
  using ::std::swap;
  swap(a.id_, b.id_);
  swap(a.gateway_, b.gateway_);
  swap(a.jump_scene_, b.jump_scene_);
  swap(a.jump_x_, b.jump_x_);
  swap(a.jump_y_, b.jump_y_);
  swap(a.__isset, b.__isset);
}

const char* StorageActorLoginResponse::ascii_fingerprint = "5EC544D8660A98BBDDF68ECBA4A04C3A";
const uint8_t StorageActorLoginResponse::binary_fingerprint[16] = {0x5E,0xC5,0x44,0xD8,0x66,0x0A,0x98,0xBB,0xDD,0xF6,0x8E,0xCB,0xA4,0xA0,0x4C,0x3A};

uint32_t StorageActorLoginResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->result_ = (ActorLoginResult::type)ecast0;
          isset_result_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->field_.read(iprot);
          this->__isset.field_ = true;
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

uint32_t StorageActorLoginResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StorageActorLoginResponse");

  xfer += oprot->writeFieldBegin("result_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->result_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.field_) {
    xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->field_.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StorageActorLoginResponse &a, StorageActorLoginResponse &b) {
  using ::std::swap;
  swap(a.result_, b.result_);
  swap(a.field_, b.field_);
  swap(a.__isset, b.__isset);
}

}} // namespace