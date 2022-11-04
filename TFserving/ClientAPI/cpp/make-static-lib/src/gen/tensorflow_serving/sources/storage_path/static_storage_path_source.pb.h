// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source:
// tensorflow_serving/sources/storage_path/static_storage_path_source.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto

#include <google/protobuf/port_def.inc>
#include <limits>
#include <string>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/message.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>

#include <google/protobuf/port_undef.inc>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct
    TableStruct_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField
      entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField
      aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable
      schema[1] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata
      field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable
      serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto;
namespace tensorflow {
namespace serving {
class StaticStoragePathSourceConfig;
class StaticStoragePathSourceConfigDefaultTypeInternal;
extern StaticStoragePathSourceConfigDefaultTypeInternal
    _StaticStoragePathSourceConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
::tensorflow::serving::StaticStoragePathSourceConfig*
Arena::CreateMaybeMessage<::tensorflow::serving::StaticStoragePathSourceConfig>(
    Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class StaticStoragePathSourceConfig PROTOBUF_FINAL
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.StaticStoragePathSourceConfig)
                   */
{
 public:
  inline StaticStoragePathSourceConfig()
      : StaticStoragePathSourceConfig(nullptr){};
  virtual ~StaticStoragePathSourceConfig();

  StaticStoragePathSourceConfig(const StaticStoragePathSourceConfig& from);
  StaticStoragePathSourceConfig(StaticStoragePathSourceConfig&& from) noexcept
      : StaticStoragePathSourceConfig() {
    *this = ::std::move(from);
  }

  inline StaticStoragePathSourceConfig& operator=(
      const StaticStoragePathSourceConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline StaticStoragePathSourceConfig& operator=(
      StaticStoragePathSourceConfig&& from) noexcept {
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
  static const StaticStoragePathSourceConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StaticStoragePathSourceConfig*
  internal_default_instance() {
    return reinterpret_cast<const StaticStoragePathSourceConfig*>(
        &_StaticStoragePathSourceConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;

  friend void swap(StaticStoragePathSourceConfig& a,
                   StaticStoragePathSourceConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(StaticStoragePathSourceConfig* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StaticStoragePathSourceConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StaticStoragePathSourceConfig* New() const final {
    return CreateMaybeMessage<StaticStoragePathSourceConfig>(nullptr);
  }

  StaticStoragePathSourceConfig* New(
      ::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StaticStoragePathSourceConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StaticStoragePathSourceConfig& from);
  void MergeFrom(const StaticStoragePathSourceConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(
      const char* ptr,
      ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target,
      ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

 private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StaticStoragePathSourceConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.StaticStoragePathSourceConfig";
  }

 protected:
  explicit StaticStoragePathSourceConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto);
    return ::
        descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
            .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServableNameFieldNumber = 1,
    kVersionPathFieldNumber = 3,
    kVersionNumFieldNumber = 2,
  };
  // string servable_name = 1;
  void clear_servable_name();
  const std::string& servable_name() const;
  void set_servable_name(const std::string& value);
  void set_servable_name(std::string&& value);
  void set_servable_name(const char* value);
  void set_servable_name(const char* value, size_t size);
  std::string* mutable_servable_name();
  std::string* release_servable_name();
  void set_allocated_servable_name(std::string* servable_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED(
      "The unsafe_arena_ accessors for"
      "    string fields are deprecated and will be removed in a"
      "    future release.")
  std::string* unsafe_arena_release_servable_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED(
      "The unsafe_arena_ accessors for"
      "    string fields are deprecated and will be removed in a"
      "    future release.")
  void unsafe_arena_set_allocated_servable_name(std::string* servable_name);

 private:
  const std::string& _internal_servable_name() const;
  void _internal_set_servable_name(const std::string& value);
  std::string* _internal_mutable_servable_name();

 public:
  // string version_path = 3;
  void clear_version_path();
  const std::string& version_path() const;
  void set_version_path(const std::string& value);
  void set_version_path(std::string&& value);
  void set_version_path(const char* value);
  void set_version_path(const char* value, size_t size);
  std::string* mutable_version_path();
  std::string* release_version_path();
  void set_allocated_version_path(std::string* version_path);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED(
      "The unsafe_arena_ accessors for"
      "    string fields are deprecated and will be removed in a"
      "    future release.")
  std::string* unsafe_arena_release_version_path();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED(
      "The unsafe_arena_ accessors for"
      "    string fields are deprecated and will be removed in a"
      "    future release.")
  void unsafe_arena_set_allocated_version_path(std::string* version_path);

 private:
  const std::string& _internal_version_path() const;
  void _internal_set_version_path(const std::string& value);
  std::string* _internal_mutable_version_path();

 public:
  // int64 version_num = 2;
  void clear_version_num();
  ::PROTOBUF_NAMESPACE_ID::int64 version_num() const;
  void set_version_num(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_version_num() const;
  void _internal_set_version_num(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // @@protoc_insertion_point(class_scope:tensorflow.serving.StaticStoragePathSourceConfig)
 private:
  class _Internal;

  template <typename T>
  friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr servable_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_path_;
  ::PROTOBUF_NAMESPACE_ID::int64 version_num_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::
      TableStruct_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto;
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StaticStoragePathSourceConfig

// string servable_name = 1;
inline void StaticStoragePathSourceConfig::clear_servable_name() {
  servable_name_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline const std::string& StaticStoragePathSourceConfig::servable_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
  return _internal_servable_name();
}
inline void StaticStoragePathSourceConfig::set_servable_name(
    const std::string& value) {
  _internal_set_servable_name(value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}
inline std::string* StaticStoragePathSourceConfig::mutable_servable_name() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
  return _internal_mutable_servable_name();
}
inline const std::string&
StaticStoragePathSourceConfig::_internal_servable_name() const {
  return servable_name_.Get();
}
inline void StaticStoragePathSourceConfig::_internal_set_servable_name(
    const std::string& value) {
  servable_name_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArena());
}
inline void StaticStoragePathSourceConfig::set_servable_name(
    std::string&& value) {
  servable_name_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}
inline void StaticStoragePathSourceConfig::set_servable_name(
    const char* value) {
  GOOGLE_DCHECK(value != nullptr);

  servable_name_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}
inline void StaticStoragePathSourceConfig::set_servable_name(const char* value,
                                                             size_t size) {
  servable_name_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}
inline std::string*
StaticStoragePathSourceConfig::_internal_mutable_servable_name() {
  return servable_name_.Mutable(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline std::string* StaticStoragePathSourceConfig::release_servable_name() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
  return servable_name_.Release(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void StaticStoragePathSourceConfig::set_allocated_servable_name(
    std::string* servable_name) {
  if (servable_name != nullptr) {
  } else {
  }
  servable_name_.SetAllocated(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      servable_name, GetArena());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}
inline std::string*
StaticStoragePathSourceConfig::unsafe_arena_release_servable_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
  GOOGLE_DCHECK(GetArena() != nullptr);

  return servable_name_.UnsafeArenaRelease(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void
StaticStoragePathSourceConfig::unsafe_arena_set_allocated_servable_name(
    std::string* servable_name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (servable_name != nullptr) {
  } else {
  }
  servable_name_.UnsafeArenaSetAllocated(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      servable_name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.StaticStoragePathSourceConfig.servable_name)
}

// int64 version_num = 2;
inline void StaticStoragePathSourceConfig::clear_version_num() {
  version_num_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64
StaticStoragePathSourceConfig::_internal_version_num() const {
  return version_num_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64
StaticStoragePathSourceConfig::version_num() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.StaticStoragePathSourceConfig.version_num)
  return _internal_version_num();
}
inline void StaticStoragePathSourceConfig::_internal_set_version_num(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  version_num_ = value;
}
inline void StaticStoragePathSourceConfig::set_version_num(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_version_num(value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.StaticStoragePathSourceConfig.version_num)
}

// string version_path = 3;
inline void StaticStoragePathSourceConfig::clear_version_path() {
  version_path_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline const std::string& StaticStoragePathSourceConfig::version_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
  return _internal_version_path();
}
inline void StaticStoragePathSourceConfig::set_version_path(
    const std::string& value) {
  _internal_set_version_path(value);
  // @@protoc_insertion_point(field_set:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}
inline std::string* StaticStoragePathSourceConfig::mutable_version_path() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
  return _internal_mutable_version_path();
}
inline const std::string&
StaticStoragePathSourceConfig::_internal_version_path() const {
  return version_path_.Get();
}
inline void StaticStoragePathSourceConfig::_internal_set_version_path(
    const std::string& value) {
  version_path_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArena());
}
inline void StaticStoragePathSourceConfig::set_version_path(
    std::string&& value) {
  version_path_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}
inline void StaticStoragePathSourceConfig::set_version_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);

  version_path_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}
inline void StaticStoragePathSourceConfig::set_version_path(const char* value,
                                                            size_t size) {
  version_path_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}
inline std::string*
StaticStoragePathSourceConfig::_internal_mutable_version_path() {
  return version_path_.Mutable(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline std::string* StaticStoragePathSourceConfig::release_version_path() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
  return version_path_.Release(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void StaticStoragePathSourceConfig::set_allocated_version_path(
    std::string* version_path) {
  if (version_path != nullptr) {
  } else {
  }
  version_path_.SetAllocated(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      version_path, GetArena());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}
inline std::string*
StaticStoragePathSourceConfig::unsafe_arena_release_version_path() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
  GOOGLE_DCHECK(GetArena() != nullptr);

  return version_path_.UnsafeArenaRelease(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void
StaticStoragePathSourceConfig::unsafe_arena_set_allocated_version_path(
    std::string* version_path) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (version_path != nullptr) {
  } else {
  }
  version_path_.UnsafeArenaSetAllocated(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      version_path, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.StaticStoragePathSourceConfig.version_path)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
