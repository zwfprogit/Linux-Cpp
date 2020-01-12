// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pbtest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pbtest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pbtest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pbtest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pbtest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pbtest_2eproto;
class MsgResult;
class MsgResultDefaultTypeInternal;
extern MsgResultDefaultTypeInternal _MsgResult_default_instance_;
class TopMessage;
class TopMessageDefaultTypeInternal;
extern TopMessageDefaultTypeInternal _TopMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::MsgResult* Arena::CreateMaybeMessage<::MsgResult>(Arena*);
template<> ::TopMessage* Arena::CreateMaybeMessage<::TopMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Messagetype : int {
  REQUEST_RESPONSE_NONE = 0,
  REQUEST_HEARTBEAT_SIGNAL = 1,
  RESPONSE_HEARTBEAT_RESULT = 2,
  Messagetype_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Messagetype_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Messagetype_IsValid(int value);
constexpr Messagetype Messagetype_MIN = REQUEST_RESPONSE_NONE;
constexpr Messagetype Messagetype_MAX = RESPONSE_HEARTBEAT_RESULT;
constexpr int Messagetype_ARRAYSIZE = Messagetype_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Messagetype_descriptor();
template<typename T>
inline const std::string& Messagetype_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Messagetype>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Messagetype_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Messagetype_descriptor(), enum_t_value);
}
inline bool Messagetype_Parse(
    const std::string& name, Messagetype* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Messagetype>(
    Messagetype_descriptor(), name, value);
}
// ===================================================================

class MsgResult :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:MsgResult) */ {
 public:
  MsgResult();
  virtual ~MsgResult();

  MsgResult(const MsgResult& from);
  MsgResult(MsgResult&& from) noexcept
    : MsgResult() {
    *this = ::std::move(from);
  }

  inline MsgResult& operator=(const MsgResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgResult& operator=(MsgResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MsgResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgResult* internal_default_instance() {
    return reinterpret_cast<const MsgResult*>(
               &_MsgResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgResult& a, MsgResult& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgResult* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MsgResult* New() const final {
    return CreateMaybeMessage<MsgResult>(nullptr);
  }

  MsgResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MsgResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MsgResult& from);
  void MergeFrom(const MsgResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MsgResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "MsgResult";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pbtest_2eproto);
    return ::descriptor_table_pbtest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorCodeFieldNumber = 2,
    kResultFieldNumber = 1,
  };
  // bytes error_code = 2;
  void clear_error_code();
  const std::string& error_code() const;
  void set_error_code(const std::string& value);
  void set_error_code(std::string&& value);
  void set_error_code(const char* value);
  void set_error_code(const void* value, size_t size);
  std::string* mutable_error_code();
  std::string* release_error_code();
  void set_allocated_error_code(std::string* error_code);
  private:
  const std::string& _internal_error_code() const;
  void _internal_set_error_code(const std::string& value);
  std::string* _internal_mutable_error_code();
  public:

  // bool result = 1;
  void clear_result();
  bool result() const;
  void set_result(bool value);
  private:
  bool _internal_result() const;
  void _internal_set_result(bool value);
  public:

  // @@protoc_insertion_point(class_scope:MsgResult)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_code_;
  bool result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pbtest_2eproto;
};
// -------------------------------------------------------------------

class TopMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TopMessage) */ {
 public:
  TopMessage();
  virtual ~TopMessage();

  TopMessage(const TopMessage& from);
  TopMessage(TopMessage&& from) noexcept
    : TopMessage() {
    *this = ::std::move(from);
  }

  inline TopMessage& operator=(const TopMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TopMessage& operator=(TopMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TopMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TopMessage* internal_default_instance() {
    return reinterpret_cast<const TopMessage*>(
               &_TopMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TopMessage& a, TopMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TopMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TopMessage* New() const final {
    return CreateMaybeMessage<TopMessage>(nullptr);
  }

  TopMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TopMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TopMessage& from);
  void MergeFrom(const TopMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TopMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TopMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pbtest_2eproto);
    return ::descriptor_table_pbtest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgResultFieldNumber = 2,
    kMessageTypeFieldNumber = 1,
  };
  // .MsgResult msg_result = 2;
  bool has_msg_result() const;
  private:
  bool _internal_has_msg_result() const;
  public:
  void clear_msg_result();
  const ::MsgResult& msg_result() const;
  ::MsgResult* release_msg_result();
  ::MsgResult* mutable_msg_result();
  void set_allocated_msg_result(::MsgResult* msg_result);
  private:
  const ::MsgResult& _internal_msg_result() const;
  ::MsgResult* _internal_mutable_msg_result();
  public:

  // .Messagetype message_type = 1;
  void clear_message_type();
  ::Messagetype message_type() const;
  void set_message_type(::Messagetype value);
  private:
  ::Messagetype _internal_message_type() const;
  void _internal_set_message_type(::Messagetype value);
  public:

  // @@protoc_insertion_point(class_scope:TopMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::MsgResult* msg_result_;
  int message_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pbtest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgResult

// bool result = 1;
inline void MsgResult::clear_result() {
  result_ = false;
}
inline bool MsgResult::_internal_result() const {
  return result_;
}
inline bool MsgResult::result() const {
  // @@protoc_insertion_point(field_get:MsgResult.result)
  return _internal_result();
}
inline void MsgResult::_internal_set_result(bool value) {
  
  result_ = value;
}
inline void MsgResult::set_result(bool value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:MsgResult.result)
}

// bytes error_code = 2;
inline void MsgResult::clear_error_code() {
  error_code_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MsgResult::error_code() const {
  // @@protoc_insertion_point(field_get:MsgResult.error_code)
  return _internal_error_code();
}
inline void MsgResult::set_error_code(const std::string& value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:MsgResult.error_code)
}
inline std::string* MsgResult::mutable_error_code() {
  // @@protoc_insertion_point(field_mutable:MsgResult.error_code)
  return _internal_mutable_error_code();
}
inline const std::string& MsgResult::_internal_error_code() const {
  return error_code_.GetNoArena();
}
inline void MsgResult::_internal_set_error_code(const std::string& value) {
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void MsgResult::set_error_code(std::string&& value) {
  
  error_code_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MsgResult.error_code)
}
inline void MsgResult::set_error_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MsgResult.error_code)
}
inline void MsgResult::set_error_code(const void* value, size_t size) {
  
  error_code_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MsgResult.error_code)
}
inline std::string* MsgResult::_internal_mutable_error_code() {
  
  return error_code_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MsgResult::release_error_code() {
  // @@protoc_insertion_point(field_release:MsgResult.error_code)
  
  return error_code_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MsgResult::set_allocated_error_code(std::string* error_code) {
  if (error_code != nullptr) {
    
  } else {
    
  }
  error_code_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error_code);
  // @@protoc_insertion_point(field_set_allocated:MsgResult.error_code)
}

// -------------------------------------------------------------------

// TopMessage

// .Messagetype message_type = 1;
inline void TopMessage::clear_message_type() {
  message_type_ = 0;
}
inline ::Messagetype TopMessage::_internal_message_type() const {
  return static_cast< ::Messagetype >(message_type_);
}
inline ::Messagetype TopMessage::message_type() const {
  // @@protoc_insertion_point(field_get:TopMessage.message_type)
  return _internal_message_type();
}
inline void TopMessage::_internal_set_message_type(::Messagetype value) {
  
  message_type_ = value;
}
inline void TopMessage::set_message_type(::Messagetype value) {
  _internal_set_message_type(value);
  // @@protoc_insertion_point(field_set:TopMessage.message_type)
}

// .MsgResult msg_result = 2;
inline bool TopMessage::_internal_has_msg_result() const {
  return this != internal_default_instance() && msg_result_ != nullptr;
}
inline bool TopMessage::has_msg_result() const {
  return _internal_has_msg_result();
}
inline void TopMessage::clear_msg_result() {
  if (GetArenaNoVirtual() == nullptr && msg_result_ != nullptr) {
    delete msg_result_;
  }
  msg_result_ = nullptr;
}
inline const ::MsgResult& TopMessage::_internal_msg_result() const {
  const ::MsgResult* p = msg_result_;
  return p != nullptr ? *p : *reinterpret_cast<const ::MsgResult*>(
      &::_MsgResult_default_instance_);
}
inline const ::MsgResult& TopMessage::msg_result() const {
  // @@protoc_insertion_point(field_get:TopMessage.msg_result)
  return _internal_msg_result();
}
inline ::MsgResult* TopMessage::release_msg_result() {
  // @@protoc_insertion_point(field_release:TopMessage.msg_result)
  
  ::MsgResult* temp = msg_result_;
  msg_result_ = nullptr;
  return temp;
}
inline ::MsgResult* TopMessage::_internal_mutable_msg_result() {
  
  if (msg_result_ == nullptr) {
    auto* p = CreateMaybeMessage<::MsgResult>(GetArenaNoVirtual());
    msg_result_ = p;
  }
  return msg_result_;
}
inline ::MsgResult* TopMessage::mutable_msg_result() {
  // @@protoc_insertion_point(field_mutable:TopMessage.msg_result)
  return _internal_mutable_msg_result();
}
inline void TopMessage::set_allocated_msg_result(::MsgResult* msg_result) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete msg_result_;
  }
  if (msg_result) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      msg_result = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, msg_result, submessage_arena);
    }
    
  } else {
    
  }
  msg_result_ = msg_result;
  // @@protoc_insertion_point(field_set_allocated:TopMessage.msg_result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Messagetype> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Messagetype>() {
  return ::Messagetype_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pbtest_2eproto