// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source:
// tensorflow_serving/sources/storage_path/static_storage_path_source.proto

#include "tensorflow_serving/sources/storage_path/static_storage_path_source.pb.h"

#include <google/protobuf/descriptor.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/wire_format_lite.h>

#include <algorithm>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace tensorflow {
namespace serving {
class StaticStoragePathSourceConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<
      StaticStoragePathSourceConfig>
      _instance;
} _StaticStoragePathSourceConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void
InitDefaultsscc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::
                    _StaticStoragePathSourceConfig_default_instance_;
    new (ptr)::tensorflow::serving::StaticStoragePathSourceConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::StaticStoragePathSourceConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          0, 0,
          InitDefaultsscc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto},
         {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
        [1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto::
        offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(
                ::tensorflow::serving::StaticStoragePathSourceConfig,
                _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(
                ::tensorflow::serving::StaticStoragePathSourceConfig,
                servable_name_),
            PROTOBUF_FIELD_OFFSET(
                ::tensorflow::serving::StaticStoragePathSourceConfig,
                version_num_),
            PROTOBUF_FIELD_OFFSET(
                ::tensorflow::serving::StaticStoragePathSourceConfig,
                version_path_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::serving::StaticStoragePathSourceConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::serving::
                _StaticStoragePathSourceConfig_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\nHtensorflow_serving/sources/storage_pat"
            "h/static_storage_path_source.proto\022\022tens"
            "orflow.serving\"a\n\035StaticStoragePathSourc"
            "eConfig\022\025\n\rservable_name\030\001 "
            "\001(\t\022\023\n\013versio"
            "n_num\030\002 \001(\003\022\024\n\014version_path\030\003 "
            "\001(\tb\006proto"
            "3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_deps
        [1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_sccs
        [1] = {
            &scc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto,
        "tensorflow_serving/sources/storage_path/"
        "static_storage_path_source.proto",
        201,
        &descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_once,
        descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_sccs,
        descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto_deps,
        1,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto::
            offsets,
        file_level_metadata_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto,
        file_level_service_descriptors_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto)),
     true);
namespace tensorflow {
namespace serving {

// ===================================================================

void StaticStoragePathSourceConfig::InitAsDefaultInstance() {}
class StaticStoragePathSourceConfig::_Internal {
 public:
};

StaticStoragePathSourceConfig::StaticStoragePathSourceConfig(
    ::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.StaticStoragePathSourceConfig)
}
StaticStoragePathSourceConfig::StaticStoragePathSourceConfig(
    const StaticStoragePathSourceConfig& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  servable_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_servable_name().empty()) {
    servable_name_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_servable_name(), GetArena());
  }
  version_path_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_version_path().empty()) {
    version_path_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_version_path(), GetArena());
  }
  version_num_ = from.version_num_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.StaticStoragePathSourceConfig)
}

void StaticStoragePathSourceConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
           .base);
  servable_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  version_path_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  version_num_ = PROTOBUF_LONGLONG(0);
}

StaticStoragePathSourceConfig::~StaticStoragePathSourceConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.StaticStoragePathSourceConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void StaticStoragePathSourceConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  servable_name_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  version_path_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StaticStoragePathSourceConfig::ArenaDtor(void* object) {
  StaticStoragePathSourceConfig* _this =
      reinterpret_cast<StaticStoragePathSourceConfig*>(object);
  (void)_this;
}
void StaticStoragePathSourceConfig::RegisterArenaDtor(
    ::PROTOBUF_NAMESPACE_ID::Arena*) {}
void StaticStoragePathSourceConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StaticStoragePathSourceConfig&
StaticStoragePathSourceConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_StaticStoragePathSourceConfig_tensorflow_5fserving_2fsources_2fstorage_5fpath_2fstatic_5fstorage_5fpath_5fsource_2eproto
           .base);
  return *internal_default_instance();
}

void StaticStoragePathSourceConfig::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.serving.StaticStoragePathSourceConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  servable_name_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  version_path_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  version_num_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StaticStoragePathSourceConfig::_InternalParse(
    const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) \
  if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
  (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string servable_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_servable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str,
              "tensorflow.serving.StaticStoragePathSourceConfig.servable_"
              "name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 version_num = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          version_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string version_path = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_version_path();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str,
              "tensorflow.serving.StaticStoragePathSourceConfig.version_path"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
                                _internal_metadata_.mutable_unknown_fields<
                                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                                ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }    // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8*
StaticStoragePathSourceConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.StaticStoragePathSourceConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // string servable_name = 1;
  if (this->servable_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_servable_name().data(),
        static_cast<int>(this->_internal_servable_name().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.serving.StaticStoragePathSourceConfig.servable_name");
    target = stream->WriteStringMaybeAliased(1, this->_internal_servable_name(),
                                             target);
  }

  // int64 version_num = 2;
  if (this->version_num() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            2, this->_internal_version_num(), target);
  }

  // string version_path = 3;
  if (this->version_path().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_version_path().data(),
        static_cast<int>(this->_internal_version_path().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.serving.StaticStoragePathSourceConfig.version_path");
    target = stream->WriteStringMaybeAliased(3, this->_internal_version_path(),
                                             target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.StaticStoragePathSourceConfig)
  return target;
}

size_t StaticStoragePathSourceConfig::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.StaticStoragePathSourceConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // string servable_name = 1;
  if (this->servable_name().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_servable_name());
  }

  // string version_path = 3;
  if (this->version_path().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_version_path());
  }

  // int64 version_num = 2;
  if (this->version_num() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_version_num());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StaticStoragePathSourceConfig::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.StaticStoragePathSourceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const StaticStoragePathSourceConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<
          StaticStoragePathSourceConfig>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.StaticStoragePathSourceConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.StaticStoragePathSourceConfig)
    MergeFrom(*source);
  }
}

void StaticStoragePathSourceConfig::MergeFrom(
    const StaticStoragePathSourceConfig& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.StaticStoragePathSourceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.servable_name().size() > 0) {
    _internal_set_servable_name(from._internal_servable_name());
  }
  if (from.version_path().size() > 0) {
    _internal_set_version_path(from._internal_version_path());
  }
  if (from.version_num() != 0) {
    _internal_set_version_num(from._internal_version_num());
  }
}

void StaticStoragePathSourceConfig::CopyFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.StaticStoragePathSourceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StaticStoragePathSourceConfig::CopyFrom(
    const StaticStoragePathSourceConfig& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.StaticStoragePathSourceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StaticStoragePathSourceConfig::IsInitialized() const { return true; }

void StaticStoragePathSourceConfig::InternalSwap(
    StaticStoragePathSourceConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  servable_name_.Swap(
      &other->servable_name_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  version_path_.Swap(
      &other->version_path_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  swap(version_num_, other->version_num_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StaticStoragePathSourceConfig::GetMetadata()
    const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::serving::StaticStoragePathSourceConfig*
Arena::CreateMaybeMessage<::tensorflow::serving::StaticStoragePathSourceConfig>(
    Arena* arena) {
  return Arena::CreateMessageInternal<
      ::tensorflow::serving::StaticStoragePathSourceConfig>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
