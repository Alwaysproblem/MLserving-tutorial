// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensorflow_server.proto

#include "tensorflow/core/protobuf/tensorflow_server.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
        scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fdevice_5ffilters_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
        scc_info_ClusterDeviceFilters_tensorflow_2fcore_2fprotobuf_2fdevice_5ffilters_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7>
        scc_info_ConfigProto_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto;
namespace tensorflow {
class ServerDefDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerDef> _instance;
} _ServerDef_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_ServerDef_default_instance_;
    new (ptr)::tensorflow::ServerDef();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ServerDef::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3>
    scc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          3, 0,
          InitDefaultsscc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto},
         {
             &scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
                  .base,
             &scc_info_ConfigProto_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto
                  .base,
             &scc_info_ClusterDeviceFilters_tensorflow_2fcore_2fprotobuf_2fdevice_5ffilters_2eproto
                  .base,
         }};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto
        [1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::
        offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, cluster_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, job_name_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, task_index_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef,
                                  default_session_config_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, protocol_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef, port_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::ServerDef,
                                  cluster_device_filters_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::ServerDef)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_ServerDef_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n0tensorflow/core/protobuf/tensorflow_se"
            "rver.proto\022\ntensorflow\032&tensorflow/core/"
            "protobuf/cluster.proto\032%tensorflow/core/"
            "protobuf/config.proto\032-tensorflow/core/p"
            "rotobuf/device_filters.proto\"\365\001\n\tServerD"
            "ef\022\'\n\007cluster\030\001 \001(\0132\026.tensorflow.Cluster"
            "Def\022\020\n\010job_name\030\002 "
            "\001(\t\022\022\n\ntask_index\030\003 \001("
            "\005\0227\n\026default_session_config\030\004 \001(\0132\027.tens"
            "orflow.ConfigProto\022\020\n\010protocol\030\005 "
            "\001(\t\022\014\n\004"
            "port\030\006 \001(\005\022@\n\026cluster_device_filters\030\007 "
            "\001"
            "(\0132 .tensorflow.ClusterDeviceFiltersB\206\001\n"
            "\032org.tensorflow.distruntimeB\014ServerProto"
            "sP\001ZUgithub.com/tensorflow/tensorflow/te"
            "nsorflow/go/core/protobuf/for_core_proto"
            "s_go_proto\370\001\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_deps
        [3] = {
            &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
            &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto,
            &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fdevice_5ffilters_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_sccs
        [1] = {
            &scc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
        "tensorflow/core/protobuf/tensorflow_server.proto",
        581,
        &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto_deps,
        1,
        3,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::
            offsets,
        file_level_metadata_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto)),
     true);
namespace tensorflow {

// ===================================================================

void ServerDef::InitAsDefaultInstance() {
  ::tensorflow::_ServerDef_default_instance_._instance.get_mutable()->cluster_ =
      const_cast<::tensorflow::ClusterDef*>(
          ::tensorflow::ClusterDef::internal_default_instance());
  ::tensorflow::_ServerDef_default_instance_._instance.get_mutable()
      ->default_session_config_ = const_cast<::tensorflow::ConfigProto*>(
      ::tensorflow::ConfigProto::internal_default_instance());
  ::tensorflow::_ServerDef_default_instance_._instance.get_mutable()
      ->cluster_device_filters_ =
      const_cast<::tensorflow::ClusterDeviceFilters*>(
          ::tensorflow::ClusterDeviceFilters::internal_default_instance());
}
class ServerDef::_Internal {
 public:
  static const ::tensorflow::ClusterDef& cluster(const ServerDef* msg);
  static const ::tensorflow::ConfigProto& default_session_config(
      const ServerDef* msg);
  static const ::tensorflow::ClusterDeviceFilters& cluster_device_filters(
      const ServerDef* msg);
};

const ::tensorflow::ClusterDef& ServerDef::_Internal::cluster(
    const ServerDef* msg) {
  return *msg->cluster_;
}
const ::tensorflow::ConfigProto& ServerDef::_Internal::default_session_config(
    const ServerDef* msg) {
  return *msg->default_session_config_;
}
const ::tensorflow::ClusterDeviceFilters&
ServerDef::_Internal::cluster_device_filters(const ServerDef* msg) {
  return *msg->cluster_device_filters_;
}
void ServerDef::clear_cluster() {
  if (GetArena() == nullptr && cluster_ != nullptr) {
    delete cluster_;
  }
  cluster_ = nullptr;
}
void ServerDef::clear_default_session_config() {
  if (GetArena() == nullptr && default_session_config_ != nullptr) {
    delete default_session_config_;
  }
  default_session_config_ = nullptr;
}
void ServerDef::clear_cluster_device_filters() {
  if (GetArena() == nullptr && cluster_device_filters_ != nullptr) {
    delete cluster_device_filters_;
  }
  cluster_device_filters_ = nullptr;
}
ServerDef::ServerDef(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ServerDef)
}
ServerDef::ServerDef(const ServerDef& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  job_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_job_name().empty()) {
    job_name_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_job_name(), GetArena());
  }
  protocol_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_protocol().empty()) {
    protocol_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_protocol(), GetArena());
  }
  if (from._internal_has_cluster()) {
    cluster_ = new ::tensorflow::ClusterDef(*from.cluster_);
  } else {
    cluster_ = nullptr;
  }
  if (from._internal_has_default_session_config()) {
    default_session_config_ =
        new ::tensorflow::ConfigProto(*from.default_session_config_);
  } else {
    default_session_config_ = nullptr;
  }
  if (from._internal_has_cluster_device_filters()) {
    cluster_device_filters_ =
        new ::tensorflow::ClusterDeviceFilters(*from.cluster_device_filters_);
  } else {
    cluster_device_filters_ = nullptr;
  }
  ::memcpy(&task_index_, &from.task_index_,
           static_cast<size_t>(reinterpret_cast<char*>(&port_) -
                               reinterpret_cast<char*>(&task_index_)) +
               sizeof(port_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ServerDef)
}

void ServerDef::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto
           .base);
  job_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  protocol_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&cluster_, 0,
           static_cast<size_t>(reinterpret_cast<char*>(&port_) -
                               reinterpret_cast<char*>(&cluster_)) +
               sizeof(port_));
}

ServerDef::~ServerDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ServerDef)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ServerDef::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  job_name_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  protocol_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete cluster_;
  if (this != internal_default_instance()) delete default_session_config_;
  if (this != internal_default_instance()) delete cluster_device_filters_;
}

void ServerDef::ArenaDtor(void* object) {
  ServerDef* _this = reinterpret_cast<ServerDef*>(object);
  (void)_this;
}
void ServerDef::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void ServerDef::SetCachedSize(int size) const { _cached_size_.Set(size); }
const ServerDef& ServerDef::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_ServerDef_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto
           .base);
  return *internal_default_instance();
}

void ServerDef::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.ServerDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  job_name_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  protocol_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  if (GetArena() == nullptr && cluster_ != nullptr) {
    delete cluster_;
  }
  cluster_ = nullptr;
  if (GetArena() == nullptr && default_session_config_ != nullptr) {
    delete default_session_config_;
  }
  default_session_config_ = nullptr;
  if (GetArena() == nullptr && cluster_device_filters_ != nullptr) {
    delete cluster_device_filters_;
  }
  cluster_device_filters_ = nullptr;
  ::memset(&task_index_, 0,
           static_cast<size_t>(reinterpret_cast<char*>(&port_) -
                               reinterpret_cast<char*>(&task_index_)) +
               sizeof(port_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServerDef::_InternalParse(
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
      // .tensorflow.ClusterDef cluster = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_cluster(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string job_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_job_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.ServerDef.job_name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 task_index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          task_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.ConfigProto default_session_config = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_default_session_config(),
                                  ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string protocol = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_protocol();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.ServerDef.protocol"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 port = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_cluster_device_filters(),
                                  ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ServerDef::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ServerDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // .tensorflow.ClusterDef cluster = 1;
  if (this->has_cluster()) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            1, _Internal::cluster(this), target, stream);
  }

  // string job_name = 2;
  if (this->job_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_job_name().data(),
        static_cast<int>(this->_internal_job_name().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.ServerDef.job_name");
    target =
        stream->WriteStringMaybeAliased(2, this->_internal_job_name(), target);
  }

  // int32 task_index = 3;
  if (this->task_index() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(
            3, this->_internal_task_index(), target);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->has_default_session_config()) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            4, _Internal::default_session_config(this), target, stream);
  }

  // string protocol = 5;
  if (this->protocol().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_protocol().data(),
        static_cast<int>(this->_internal_protocol().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.ServerDef.protocol");
    target =
        stream->WriteStringMaybeAliased(5, this->_internal_protocol(), target);
  }

  // int32 port = 6;
  if (this->port() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(
            6, this->_internal_port(), target);
  }

  // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
  if (this->has_cluster_device_filters()) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            7, _Internal::cluster_device_filters(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ServerDef)
  return target;
}

size_t ServerDef::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.ServerDef)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // string job_name = 2;
  if (this->job_name().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_job_name());
  }

  // string protocol = 5;
  if (this->protocol().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_protocol());
  }

  // .tensorflow.ClusterDef cluster = 1;
  if (this->has_cluster()) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
                *cluster_);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->has_default_session_config()) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
                *default_session_config_);
  }

  // .tensorflow.ClusterDeviceFilters cluster_device_filters = 7;
  if (this->has_cluster_device_filters()) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
                *cluster_device_filters_);
  }

  // int32 task_index = 3;
  if (this->task_index() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
                this->_internal_task_index());
  }

  // int32 port = 6;
  if (this->port() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
                this->_internal_port());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerDef::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ServerDef)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerDef* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServerDef>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ServerDef)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ServerDef)
    MergeFrom(*source);
  }
}

void ServerDef::MergeFrom(const ServerDef& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ServerDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.job_name().size() > 0) {
    _internal_set_job_name(from._internal_job_name());
  }
  if (from.protocol().size() > 0) {
    _internal_set_protocol(from._internal_protocol());
  }
  if (from.has_cluster()) {
    _internal_mutable_cluster()->::tensorflow::ClusterDef::MergeFrom(
        from._internal_cluster());
  }
  if (from.has_default_session_config()) {
    _internal_mutable_default_session_config()
        ->::tensorflow::ConfigProto::MergeFrom(
            from._internal_default_session_config());
  }
  if (from.has_cluster_device_filters()) {
    _internal_mutable_cluster_device_filters()
        ->::tensorflow::ClusterDeviceFilters::MergeFrom(
            from._internal_cluster_device_filters());
  }
  if (from.task_index() != 0) {
    _internal_set_task_index(from._internal_task_index());
  }
  if (from.port() != 0) {
    _internal_set_port(from._internal_port());
  }
}

void ServerDef::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ServerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerDef::CopyFrom(const ServerDef& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ServerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerDef::IsInitialized() const { return true; }

void ServerDef::InternalSwap(ServerDef* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  job_name_.Swap(
      &other->job_name_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  protocol_.Swap(
      &other->protocol_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ServerDef, port_) + sizeof(ServerDef::port_) -
      PROTOBUF_FIELD_OFFSET(ServerDef, cluster_)>(
      reinterpret_cast<char*>(&cluster_),
      reinterpret_cast<char*>(&other->cluster_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerDef::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::ServerDef*
Arena::CreateMaybeMessage<::tensorflow::ServerDef>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::ServerDef>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>