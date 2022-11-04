// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/config/platform_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto

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

#include <google/protobuf/any.pb.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/message.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>

#include <google/protobuf/port_undef.inc>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField
      entries[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField
      aux[] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable
      schema[3] PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata
      field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable
      serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto;
namespace tensorflow {
namespace serving {
class PlatformConfig;
class PlatformConfigDefaultTypeInternal;
extern PlatformConfigDefaultTypeInternal _PlatformConfig_default_instance_;
class PlatformConfigMap;
class PlatformConfigMapDefaultTypeInternal;
extern PlatformConfigMapDefaultTypeInternal
    _PlatformConfigMap_default_instance_;
class PlatformConfigMap_PlatformConfigsEntry_DoNotUse;
class PlatformConfigMap_PlatformConfigsEntry_DoNotUseDefaultTypeInternal;
extern PlatformConfigMap_PlatformConfigsEntry_DoNotUseDefaultTypeInternal
    _PlatformConfigMap_PlatformConfigsEntry_DoNotUse_default_instance_;
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
::tensorflow::serving::PlatformConfig*
Arena::CreateMaybeMessage<::tensorflow::serving::PlatformConfig>(Arena*);
template <>
::tensorflow::serving::PlatformConfigMap*
Arena::CreateMaybeMessage<::tensorflow::serving::PlatformConfigMap>(Arena*);
template <>
::tensorflow::serving::PlatformConfigMap_PlatformConfigsEntry_DoNotUse*
Arena::CreateMaybeMessage<
    ::tensorflow::serving::PlatformConfigMap_PlatformConfigsEntry_DoNotUse>(
    Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace serving {

// ===================================================================

class PlatformConfig PROTOBUF_FINAL
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.PlatformConfig)
                   */
{
 public:
  inline PlatformConfig() : PlatformConfig(nullptr){};
  virtual ~PlatformConfig();

  PlatformConfig(const PlatformConfig& from);
  PlatformConfig(PlatformConfig&& from) noexcept : PlatformConfig() {
    *this = ::std::move(from);
  }

  inline PlatformConfig& operator=(const PlatformConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlatformConfig& operator=(PlatformConfig&& from) noexcept {
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
  static const PlatformConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlatformConfig* internal_default_instance() {
    return reinterpret_cast<const PlatformConfig*>(
        &_PlatformConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;

  friend void swap(PlatformConfig& a, PlatformConfig& b) { a.Swap(&b); }
  inline void Swap(PlatformConfig* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PlatformConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlatformConfig* New() const final {
    return CreateMaybeMessage<PlatformConfig>(nullptr);
  }

  PlatformConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlatformConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlatformConfig& from);
  void MergeFrom(const PlatformConfig& from);
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
  void InternalSwap(PlatformConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.PlatformConfig";
  }

 protected:
  explicit PlatformConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto);
    return ::
        descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
            .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSourceAdapterConfigFieldNumber = 1,
  };
  // .google.protobuf.Any source_adapter_config = 1;
  bool has_source_adapter_config() const;

 private:
  bool _internal_has_source_adapter_config() const;

 public:
  void clear_source_adapter_config();
  const PROTOBUF_NAMESPACE_ID::Any& source_adapter_config() const;
  PROTOBUF_NAMESPACE_ID::Any* release_source_adapter_config();
  PROTOBUF_NAMESPACE_ID::Any* mutable_source_adapter_config();
  void set_allocated_source_adapter_config(
      PROTOBUF_NAMESPACE_ID::Any* source_adapter_config);

 private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_source_adapter_config() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_source_adapter_config();

 public:
  void unsafe_arena_set_allocated_source_adapter_config(
      PROTOBUF_NAMESPACE_ID::Any* source_adapter_config);
  PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_source_adapter_config();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.PlatformConfig)
 private:
  class _Internal;

  template <typename T>
  friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  PROTOBUF_NAMESPACE_ID::Any* source_adapter_config_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::
      TableStruct_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto;
};
// -------------------------------------------------------------------

class PlatformConfigMap_PlatformConfigsEntry_DoNotUse
    : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<
          PlatformConfigMap_PlatformConfigsEntry_DoNotUse, std::string,
          ::tensorflow::serving::PlatformConfig,
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE, 0> {
 public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<
      PlatformConfigMap_PlatformConfigsEntry_DoNotUse, std::string,
      ::tensorflow::serving::PlatformConfig,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE, 0>
      SuperType;
  PlatformConfigMap_PlatformConfigsEntry_DoNotUse();
  PlatformConfigMap_PlatformConfigsEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const PlatformConfigMap_PlatformConfigsEntry_DoNotUse& other);
  static const PlatformConfigMap_PlatformConfigsEntry_DoNotUse*
  internal_default_instance() {
    return reinterpret_cast<
        const PlatformConfigMap_PlatformConfigsEntry_DoNotUse*>(
        &_PlatformConfigMap_PlatformConfigsEntry_DoNotUse_default_instance_);
  }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        s->data(), static_cast<int>(s->size()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
        "tensorflow.serving.PlatformConfigMap.PlatformConfigsEntry.key");
  }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto);
    return ::
        descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
            .file_level_metadata[1];
  }

 public:
};

// -------------------------------------------------------------------

class PlatformConfigMap PROTOBUF_FINAL
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.PlatformConfigMap)
                   */
{
 public:
  inline PlatformConfigMap() : PlatformConfigMap(nullptr){};
  virtual ~PlatformConfigMap();

  PlatformConfigMap(const PlatformConfigMap& from);
  PlatformConfigMap(PlatformConfigMap&& from) noexcept : PlatformConfigMap() {
    *this = ::std::move(from);
  }

  inline PlatformConfigMap& operator=(const PlatformConfigMap& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlatformConfigMap& operator=(PlatformConfigMap&& from) noexcept {
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
  static const PlatformConfigMap& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlatformConfigMap* internal_default_instance() {
    return reinterpret_cast<const PlatformConfigMap*>(
        &_PlatformConfigMap_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 2;

  friend void swap(PlatformConfigMap& a, PlatformConfigMap& b) { a.Swap(&b); }
  inline void Swap(PlatformConfigMap* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PlatformConfigMap* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlatformConfigMap* New() const final {
    return CreateMaybeMessage<PlatformConfigMap>(nullptr);
  }

  PlatformConfigMap* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlatformConfigMap>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlatformConfigMap& from);
  void MergeFrom(const PlatformConfigMap& from);
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
  void InternalSwap(PlatformConfigMap* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.serving.PlatformConfigMap";
  }

 protected:
  explicit PlatformConfigMap(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto);
    return ::
        descriptor_table_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
            .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPlatformConfigsFieldNumber = 1,
  };
  // map<string, .tensorflow.serving.PlatformConfig> platform_configs = 1;
  int platform_configs_size() const;

 private:
  int _internal_platform_configs_size() const;

 public:
  void clear_platform_configs();

 private:
  const ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                                     ::tensorflow::serving::PlatformConfig>&
  _internal_platform_configs() const;
  ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                               ::tensorflow::serving::PlatformConfig>*
  _internal_mutable_platform_configs();

 public:
  const ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                                     ::tensorflow::serving::PlatformConfig>&
  platform_configs() const;
  ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                               ::tensorflow::serving::PlatformConfig>*
  mutable_platform_configs();

  // @@protoc_insertion_point(class_scope:tensorflow.serving.PlatformConfigMap)
 private:
  class _Internal;

  template <typename T>
  friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      PlatformConfigMap_PlatformConfigsEntry_DoNotUse, std::string,
      ::tensorflow::serving::PlatformConfig,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE, 0>
      platform_configs_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::
      TableStruct_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto;
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlatformConfig

// .google.protobuf.Any source_adapter_config = 1;
inline bool PlatformConfig::_internal_has_source_adapter_config() const {
  return this != internal_default_instance() &&
         source_adapter_config_ != nullptr;
}
inline bool PlatformConfig::has_source_adapter_config() const {
  return _internal_has_source_adapter_config();
}
inline const PROTOBUF_NAMESPACE_ID::Any&
PlatformConfig::_internal_source_adapter_config() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = source_adapter_config_;
  return p != nullptr ? *p
                      : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
                            &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& PlatformConfig::source_adapter_config()
    const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.PlatformConfig.source_adapter_config)
  return _internal_source_adapter_config();
}
inline void PlatformConfig::unsafe_arena_set_allocated_source_adapter_config(
    PROTOBUF_NAMESPACE_ID::Any* source_adapter_config) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(
        source_adapter_config_);
  }
  source_adapter_config_ = source_adapter_config;
  if (source_adapter_config) {
  } else {
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.serving.PlatformConfig.source_adapter_config)
}
inline PROTOBUF_NAMESPACE_ID::Any*
PlatformConfig::release_source_adapter_config() {
  auto temp = unsafe_arena_release_source_adapter_config();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any*
PlatformConfig::unsafe_arena_release_source_adapter_config() {
  // @@protoc_insertion_point(field_release:tensorflow.serving.PlatformConfig.source_adapter_config)

  PROTOBUF_NAMESPACE_ID::Any* temp = source_adapter_config_;
  source_adapter_config_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any*
PlatformConfig::_internal_mutable_source_adapter_config() {
  if (source_adapter_config_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArena());
    source_adapter_config_ = p;
  }
  return source_adapter_config_;
}
inline PROTOBUF_NAMESPACE_ID::Any*
PlatformConfig::mutable_source_adapter_config() {
  // @@protoc_insertion_point(field_mutable:tensorflow.serving.PlatformConfig.source_adapter_config)
  return _internal_mutable_source_adapter_config();
}
inline void PlatformConfig::set_allocated_source_adapter_config(
    PROTOBUF_NAMESPACE_ID::Any* source_adapter_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(
        source_adapter_config_);
  }
  if (source_adapter_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(
            source_adapter_config)
            ->GetArena();
    if (message_arena != submessage_arena) {
      source_adapter_config =
          ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
              message_arena, source_adapter_config, submessage_arena);
    }

  } else {
  }
  source_adapter_config_ = source_adapter_config;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.serving.PlatformConfig.source_adapter_config)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// PlatformConfigMap

// map<string, .tensorflow.serving.PlatformConfig> platform_configs = 1;
inline int PlatformConfigMap::_internal_platform_configs_size() const {
  return platform_configs_.size();
}
inline int PlatformConfigMap::platform_configs_size() const {
  return _internal_platform_configs_size();
}
inline void PlatformConfigMap::clear_platform_configs() {
  platform_configs_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map<
    std::string, ::tensorflow::serving::PlatformConfig>&
PlatformConfigMap::_internal_platform_configs() const {
  return platform_configs_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map<
    std::string, ::tensorflow::serving::PlatformConfig>&
PlatformConfigMap::platform_configs() const {
  // @@protoc_insertion_point(field_map:tensorflow.serving.PlatformConfigMap.platform_configs)
  return _internal_platform_configs();
}
inline ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                                    ::tensorflow::serving::PlatformConfig>*
PlatformConfigMap::_internal_mutable_platform_configs() {
  return platform_configs_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map<std::string,
                                    ::tensorflow::serving::PlatformConfig>*
PlatformConfigMap::mutable_platform_configs() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.serving.PlatformConfigMap.platform_configs)
  return _internal_mutable_platform_configs();
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5fserving_2fconfig_2fplatform_5fconfig_2eproto
