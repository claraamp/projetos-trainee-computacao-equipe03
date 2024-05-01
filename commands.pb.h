// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commands.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_commands_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_commands_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_commands_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_commands_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_commands_2eproto;
namespace soccer {
class Command;
class CommandDefaultTypeInternal;
extern CommandDefaultTypeInternal _Command_default_instance_;
}  // namespace soccer
PROTOBUF_NAMESPACE_OPEN
template<> ::soccer::Command* Arena::CreateMaybeMessage<::soccer::Command>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace soccer {

enum Command_CommandType : int {
  Command_CommandType_MOVE = 0,
  Command_CommandType_Command_CommandType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Command_CommandType_Command_CommandType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Command_CommandType_IsValid(int value);
constexpr Command_CommandType Command_CommandType_CommandType_MIN = Command_CommandType_MOVE;
constexpr Command_CommandType Command_CommandType_CommandType_MAX = Command_CommandType_MOVE;
constexpr int Command_CommandType_CommandType_ARRAYSIZE = Command_CommandType_CommandType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Command_CommandType_descriptor();
template<typename T>
inline const std::string& Command_CommandType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Command_CommandType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Command_CommandType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Command_CommandType_descriptor(), enum_t_value);
}
inline bool Command_CommandType_Parse(
    const std::string& name, Command_CommandType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Command_CommandType>(
    Command_CommandType_descriptor(), name, value);
}
// ===================================================================

class Command PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:soccer.Command) */ {
 public:
  inline Command() : Command(nullptr) {};
  virtual ~Command();

  Command(const Command& from);
  Command(Command&& from) noexcept
    : Command() {
    *this = ::std::move(from);
  }

  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }
  inline Command& operator=(Command&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Command& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Command* internal_default_instance() {
    return reinterpret_cast<const Command*>(
               &_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Command& a, Command& b) {
    a.Swap(&b);
  }
  inline void Swap(Command* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Command* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Command* New() const final {
    return CreateMaybeMessage<Command>(nullptr);
  }

  Command* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Command>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Command& from);
  void MergeFrom(const Command& from);
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
  void InternalSwap(Command* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "soccer.Command";
  }
  protected:
  explicit Command(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_commands_2eproto);
    return ::descriptor_table_commands_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Command_CommandType CommandType;
  static constexpr CommandType MOVE =
    Command_CommandType_MOVE;
  static inline bool CommandType_IsValid(int value) {
    return Command_CommandType_IsValid(value);
  }
  static constexpr CommandType CommandType_MIN =
    Command_CommandType_CommandType_MIN;
  static constexpr CommandType CommandType_MAX =
    Command_CommandType_CommandType_MAX;
  static constexpr int CommandType_ARRAYSIZE =
    Command_CommandType_CommandType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CommandType_descriptor() {
    return Command_CommandType_descriptor();
  }
  template<typename T>
  static inline const std::string& CommandType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CommandType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CommandType_Name.");
    return Command_CommandType_Name(enum_t_value);
  }
  static inline bool CommandType_Parse(const std::string& name,
      CommandType* value) {
    return Command_CommandType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
    kAngleFieldNumber = 2,
    kForceFieldNumber = 3,
  };
  // .soccer.Command.CommandType type = 1;
  void clear_type();
  ::soccer::Command_CommandType type() const;
  void set_type(::soccer::Command_CommandType value);
  private:
  ::soccer::Command_CommandType _internal_type() const;
  void _internal_set_type(::soccer::Command_CommandType value);
  public:

  // float angle = 2;
  void clear_angle();
  float angle() const;
  void set_angle(float value);
  private:
  float _internal_angle() const;
  void _internal_set_angle(float value);
  public:

  // float force = 3;
  void clear_force();
  float force() const;
  void set_force(float value);
  private:
  float _internal_force() const;
  void _internal_set_force(float value);
  public:

  // @@protoc_insertion_point(class_scope:soccer.Command)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int type_;
  float angle_;
  float force_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_commands_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Command

// .soccer.Command.CommandType type = 1;
inline void Command::clear_type() {
  type_ = 0;
}
inline ::soccer::Command_CommandType Command::_internal_type() const {
  return static_cast< ::soccer::Command_CommandType >(type_);
}
inline ::soccer::Command_CommandType Command::type() const {
  // @@protoc_insertion_point(field_get:soccer.Command.type)
  return _internal_type();
}
inline void Command::_internal_set_type(::soccer::Command_CommandType value) {
  
  type_ = value;
}
inline void Command::set_type(::soccer::Command_CommandType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:soccer.Command.type)
}

// float angle = 2;
inline void Command::clear_angle() {
  angle_ = 0;
}
inline float Command::_internal_angle() const {
  return angle_;
}
inline float Command::angle() const {
  // @@protoc_insertion_point(field_get:soccer.Command.angle)
  return _internal_angle();
}
inline void Command::_internal_set_angle(float value) {
  
  angle_ = value;
}
inline void Command::set_angle(float value) {
  _internal_set_angle(value);
  // @@protoc_insertion_point(field_set:soccer.Command.angle)
}

// float force = 3;
inline void Command::clear_force() {
  force_ = 0;
}
inline float Command::_internal_force() const {
  return force_;
}
inline float Command::force() const {
  // @@protoc_insertion_point(field_get:soccer.Command.force)
  return _internal_force();
}
inline void Command::_internal_set_force(float value) {
  
  force_ = value;
}
inline void Command::set_force(float value) {
  _internal_set_force(value);
  // @@protoc_insertion_point(field_set:soccer.Command.force)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace soccer

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::soccer::Command_CommandType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::soccer::Command_CommandType>() {
  return ::soccer::Command_CommandType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_commands_2eproto