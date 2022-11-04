// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/verifier_config.proto

#include "tensorflow/core/protobuf/verifier_config.pb.h"

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
class VerifierConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VerifierConfig>
      _instance;
} _VerifierConfig_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_VerifierConfig_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_VerifierConfig_default_instance_;
    new (ptr)::tensorflow::VerifierConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::VerifierConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_VerifierConfig_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          0, 0,
          InitDefaultsscc_info_VerifierConfig_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto},
         {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
        [1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
    file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
        [1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto::
        offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::VerifierConfig,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::VerifierConfig,
                                  verification_timeout_in_ms_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::VerifierConfig,
                                  structure_verifier_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::VerifierConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_VerifierConfig_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n.tensorflow/core/protobuf/verifier_conf"
            "ig.proto\022\ntensorflow\"\233\001\n\016VerifierConfig\022"
            "\"\n\032verification_timeout_in_ms\030\001 \001(\003\022=\n\022s"
            "tructure_verifier\030\002 \001(\0162!.tensorflow.Ver"
            "ifierConfig.Toggle\"&\n\006Toggle\022\013\n\007DEFAULT\020"
            "\000\022\006\n\002ON\020\001\022\007\n\003OFF\020\002B\214\001\n"
            "\030org.tensorflow.fr"
            "ameworkB\024VerifierConfigProtosP\001ZUgithub."
            "com/tensorflow/tensorflow/tensorflow/go/"
            "core/protobuf/for_core_protos_go_proto\370\001"
            "\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_deps
        [1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_sccs
        [1] = {
            &scc_info_VerifierConfig_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto,
        "tensorflow/core/protobuf/verifier_config.proto",
        369,
        &descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto_deps,
        1,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto::
            offsets,
        file_level_metadata_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto)),
     true);
namespace tensorflow {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
VerifierConfig_Toggle_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto);
  return file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
      [0];
}
bool VerifierConfig_Toggle_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr VerifierConfig_Toggle VerifierConfig::DEFAULT;
constexpr VerifierConfig_Toggle VerifierConfig::ON;
constexpr VerifierConfig_Toggle VerifierConfig::OFF;
constexpr VerifierConfig_Toggle VerifierConfig::Toggle_MIN;
constexpr VerifierConfig_Toggle VerifierConfig::Toggle_MAX;
constexpr int VerifierConfig::Toggle_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void VerifierConfig::InitAsDefaultInstance() {}
class VerifierConfig::_Internal {
 public:
};

VerifierConfig::VerifierConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.VerifierConfig)
}
VerifierConfig::VerifierConfig(const VerifierConfig& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::memcpy(&verification_timeout_in_ms_, &from.verification_timeout_in_ms_,
           static_cast<size_t>(
               reinterpret_cast<char*>(&structure_verifier_) -
               reinterpret_cast<char*>(&verification_timeout_in_ms_)) +
               sizeof(structure_verifier_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.VerifierConfig)
}

void VerifierConfig::SharedCtor() {
  ::memset(&verification_timeout_in_ms_, 0,
           static_cast<size_t>(
               reinterpret_cast<char*>(&structure_verifier_) -
               reinterpret_cast<char*>(&verification_timeout_in_ms_)) +
               sizeof(structure_verifier_));
}

VerifierConfig::~VerifierConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.VerifierConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VerifierConfig::SharedDtor() { GOOGLE_DCHECK(GetArena() == nullptr); }

void VerifierConfig::ArenaDtor(void* object) {
  VerifierConfig* _this = reinterpret_cast<VerifierConfig*>(object);
  (void)_this;
}
void VerifierConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void VerifierConfig::SetCachedSize(int size) const { _cached_size_.Set(size); }
const VerifierConfig& VerifierConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_VerifierConfig_tensorflow_2fcore_2fprotobuf_2fverifier_5fconfig_2eproto
           .base);
  return *internal_default_instance();
}

void VerifierConfig::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.VerifierConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  ::memset(&verification_timeout_in_ms_, 0,
           static_cast<size_t>(
               reinterpret_cast<char*>(&structure_verifier_) -
               reinterpret_cast<char*>(&verification_timeout_in_ms_)) +
               sizeof(structure_verifier_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VerifierConfig::_InternalParse(
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
      // int64 verification_timeout_in_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          verification_timeout_in_ms_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.VerifierConfig.Toggle structure_verifier = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_structure_verifier(
              static_cast<::tensorflow::VerifierConfig_Toggle>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* VerifierConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.VerifierConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 verification_timeout_in_ms = 1;
  if (this->verification_timeout_in_ms() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            1, this->_internal_verification_timeout_in_ms(), target);
  }

  // .tensorflow.VerifierConfig.Toggle structure_verifier = 2;
  if (this->structure_verifier() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
            2, this->_internal_structure_verifier(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.VerifierConfig)
  return target;
}

size_t VerifierConfig::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.VerifierConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // int64 verification_timeout_in_ms = 1;
  if (this->verification_timeout_in_ms() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_verification_timeout_in_ms());
  }

  // .tensorflow.VerifierConfig.Toggle structure_verifier = 2;
  if (this->structure_verifier() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
                this->_internal_structure_verifier());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VerifierConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.VerifierConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const VerifierConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VerifierConfig>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.VerifierConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.VerifierConfig)
    MergeFrom(*source);
  }
}

void VerifierConfig::MergeFrom(const VerifierConfig& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.VerifierConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.verification_timeout_in_ms() != 0) {
    _internal_set_verification_timeout_in_ms(
        from._internal_verification_timeout_in_ms());
  }
  if (from.structure_verifier() != 0) {
    _internal_set_structure_verifier(from._internal_structure_verifier());
  }
}

void VerifierConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.VerifierConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VerifierConfig::CopyFrom(const VerifierConfig& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.VerifierConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VerifierConfig::IsInitialized() const { return true; }

void VerifierConfig::InternalSwap(VerifierConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VerifierConfig, structure_verifier_) +
      sizeof(VerifierConfig::structure_verifier_) -
      PROTOBUF_FIELD_OFFSET(VerifierConfig, verification_timeout_in_ms_)>(
      reinterpret_cast<char*>(&verification_timeout_in_ms_),
      reinterpret_cast<char*>(&other->verification_timeout_in_ms_));
}

::PROTOBUF_NAMESPACE_ID::Metadata VerifierConfig::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::VerifierConfig*
Arena::CreateMaybeMessage<::tensorflow::VerifierConfig>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::VerifierConfig>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>