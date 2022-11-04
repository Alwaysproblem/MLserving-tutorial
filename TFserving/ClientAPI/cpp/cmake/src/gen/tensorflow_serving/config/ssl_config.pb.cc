// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/config/ssl_config.proto

#include "tensorflow_serving/config/ssl_config.pb.h"

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
class SSLConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SSLConfig> _instance;
} _SSLConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
static void
InitDefaultsscc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_SSLConfig_default_instance_;
    new (ptr)::tensorflow::serving::SSLConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::SSLConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto = {
        {ATOMIC_VAR_INIT(
             ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
         0, 0,
         InitDefaultsscc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto},
        {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto::offsets
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SSLConfig,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SSLConfig,
                                  server_key_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SSLConfig,
                                  server_cert_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SSLConfig, custom_ca_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::serving::SSLConfig,
                                  client_verify_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::serving::SSLConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::serving::_SSLConfig_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n*tensorflow_serving/config/ssl_config.p"
            "roto\022\022tensorflow.serving\"^\n\tSSLConfig\022\022\n"
            "\nserver_key\030\001 \001(\t\022\023\n\013server_cert\030\002 "
            "\001(\t\022\021"
            "\n\tcustom_ca\030\003 \001(\t\022\025\n\rclient_verify\030\004 "
            "\001(\010"
            "B\003\370\001\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_deps
        [1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_sccs
        [1] = {
            &scc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto,
        "tensorflow_serving/config/ssl_config.proto",
        173,
        &descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_once,
        descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_sccs,
        descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto_deps,
        1,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto::
            offsets,
        file_level_metadata_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto,
        file_level_service_descriptors_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto)),
     true);
namespace tensorflow {
namespace serving {

// ===================================================================

void SSLConfig::InitAsDefaultInstance() {}
class SSLConfig::_Internal {
 public:
};

SSLConfig::SSLConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.serving.SSLConfig)
}
SSLConfig::SSLConfig(const SSLConfig& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  server_key_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_server_key().empty()) {
    server_key_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_server_key(), GetArena());
  }
  server_cert_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_server_cert().empty()) {
    server_cert_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_server_cert(), GetArena());
  }
  custom_ca_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_custom_ca().empty()) {
    custom_ca_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_custom_ca(), GetArena());
  }
  client_verify_ = from.client_verify_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.SSLConfig)
}

void SSLConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto
           .base);
  server_key_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  server_cert_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  custom_ca_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  client_verify_ = false;
}

SSLConfig::~SSLConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.SSLConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SSLConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  server_key_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  server_cert_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  custom_ca_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SSLConfig::ArenaDtor(void* object) {
  SSLConfig* _this = reinterpret_cast<SSLConfig*>(object);
  (void)_this;
}
void SSLConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void SSLConfig::SetCachedSize(int size) const { _cached_size_.Set(size); }
const SSLConfig& SSLConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_SSLConfig_tensorflow_5fserving_2fconfig_2fssl_5fconfig_2eproto
           .base);
  return *internal_default_instance();
}

void SSLConfig::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.serving.SSLConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  server_key_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  server_cert_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  custom_ca_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  client_verify_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SSLConfig::_InternalParse(
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
      // string server_key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_server_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.serving.SSLConfig.server_key"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string server_cert = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_server_cert();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.serving.SSLConfig.server_cert"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string custom_ca = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_custom_ca();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.serving.SSLConfig.custom_ca"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool client_verify = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          client_verify_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SSLConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.SSLConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // string server_key = 1;
  if (this->server_key().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_server_key().data(),
        static_cast<int>(this->_internal_server_key().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.serving.SSLConfig.server_key");
    target = stream->WriteStringMaybeAliased(1, this->_internal_server_key(),
                                             target);
  }

  // string server_cert = 2;
  if (this->server_cert().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_server_cert().data(),
        static_cast<int>(this->_internal_server_cert().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.serving.SSLConfig.server_cert");
    target = stream->WriteStringMaybeAliased(2, this->_internal_server_cert(),
                                             target);
  }

  // string custom_ca = 3;
  if (this->custom_ca().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_custom_ca().data(),
        static_cast<int>(this->_internal_custom_ca().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.serving.SSLConfig.custom_ca");
    target =
        stream->WriteStringMaybeAliased(3, this->_internal_custom_ca(), target);
  }

  // bool client_verify = 4;
  if (this->client_verify() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(
            4, this->_internal_client_verify(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.SSLConfig)
  return target;
}

size_t SSLConfig::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.SSLConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // string server_key = 1;
  if (this->server_key().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_server_key());
  }

  // string server_cert = 2;
  if (this->server_cert().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_server_cert());
  }

  // string custom_ca = 3;
  if (this->custom_ca().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_custom_ca());
  }

  // bool client_verify = 4;
  if (this->client_verify() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SSLConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.SSLConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const SSLConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SSLConfig>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.SSLConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.SSLConfig)
    MergeFrom(*source);
  }
}

void SSLConfig::MergeFrom(const SSLConfig& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.SSLConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.server_key().size() > 0) {
    _internal_set_server_key(from._internal_server_key());
  }
  if (from.server_cert().size() > 0) {
    _internal_set_server_cert(from._internal_server_cert());
  }
  if (from.custom_ca().size() > 0) {
    _internal_set_custom_ca(from._internal_custom_ca());
  }
  if (from.client_verify() != 0) {
    _internal_set_client_verify(from._internal_client_verify());
  }
}

void SSLConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.SSLConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SSLConfig::CopyFrom(const SSLConfig& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.SSLConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSLConfig::IsInitialized() const { return true; }

void SSLConfig::InternalSwap(SSLConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  server_key_.Swap(
      &other->server_key_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  server_cert_.Swap(
      &other->server_cert_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  custom_ca_.Swap(
      &other->custom_ca_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  swap(client_verify_, other->client_verify_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SSLConfig::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::serving::SSLConfig*
Arena::CreateMaybeMessage<::tensorflow::serving::SSLConfig>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::serving::SSLConfig>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
