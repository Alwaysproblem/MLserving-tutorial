// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/saved_model.proto

#include "tensorflow/core/protobuf/saved_model.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fmeta_5fgraph_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7>
        scc_info_MetaGraphDef_tensorflow_2fcore_2fprotobuf_2fmeta_5fgraph_2eproto;
namespace tensorflow {
class SavedModelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SavedModel>
      _instance;
} _SavedModel_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_SavedModel_default_instance_;
    new (ptr)::tensorflow::SavedModel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::SavedModel::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
    scc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto = {
        {ATOMIC_VAR_INIT(
             ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
         1, 0,
         InitDefaultsscc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto},
        {
            &scc_info_MetaGraphDef_tensorflow_2fcore_2fprotobuf_2fmeta_5fgraph_2eproto
                 .base,
        }};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto::offsets
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::SavedModel,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::SavedModel,
                                  saved_model_schema_version_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::SavedModel, meta_graphs_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::SavedModel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_SavedModel_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n*tensorflow/core/protobuf/saved_model.p"
            "roto\022\ntensorflow\032)tensorflow/core/protob"
            "uf/meta_graph.proto\"_\n\nSavedModel\022\"\n\032sav"
            "ed_model_schema_version\030\001 \001(\003\022-\n\013meta_gr"
            "aphs\030\002 \003(\0132\030.tensorflow.MetaGraphDefB\210\001\n"
            "\030org.tensorflow.frameworkB\020SavedModelPro"
            "tosP\001ZUgithub.com/tensorflow/tensorflow/"
            "tensorflow/go/core/protobuf/for_core_pro"
            "tos_go_proto\370\001\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_deps
        [1] = {
            &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fmeta_5fgraph_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_sccs
        [1] = {
            &scc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto,
        "tensorflow/core/protobuf/saved_model.proto",
        343,
        &descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto_deps,
        1,
        1,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto::
            offsets,
        file_level_metadata_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto)),
     true);
namespace tensorflow {

// ===================================================================

void SavedModel::InitAsDefaultInstance() {}
class SavedModel::_Internal {
 public:
};

void SavedModel::clear_meta_graphs() { meta_graphs_.Clear(); }
SavedModel::SavedModel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena), meta_graphs_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.SavedModel)
}
SavedModel::SavedModel(const SavedModel& from)
    : ::PROTOBUF_NAMESPACE_ID::Message(), meta_graphs_(from.meta_graphs_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  saved_model_schema_version_ = from.saved_model_schema_version_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.SavedModel)
}

void SavedModel::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
           .base);
  saved_model_schema_version_ = PROTOBUF_LONGLONG(0);
}

SavedModel::~SavedModel() {
  // @@protoc_insertion_point(destructor:tensorflow.SavedModel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SavedModel::SharedDtor() { GOOGLE_DCHECK(GetArena() == nullptr); }

void SavedModel::ArenaDtor(void* object) {
  SavedModel* _this = reinterpret_cast<SavedModel*>(object);
  (void)_this;
}
void SavedModel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void SavedModel::SetCachedSize(int size) const { _cached_size_.Set(size); }
const SavedModel& SavedModel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_SavedModel_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto
           .base);
  return *internal_default_instance();
}

void SavedModel::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.SavedModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  meta_graphs_.Clear();
  saved_model_schema_version_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SavedModel::_InternalParse(
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
      // int64 saved_model_schema_version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          saved_model_schema_version_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .tensorflow.MetaGraphDef meta_graphs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_meta_graphs(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* SavedModel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.SavedModel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 saved_model_schema_version = 1;
  if (this->saved_model_schema_version() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            1, this->_internal_saved_model_schema_version(), target);
  }

  // repeated .tensorflow.MetaGraphDef meta_graphs = 2;
  for (unsigned int i = 0, n = static_cast<unsigned int>(
                               this->_internal_meta_graphs_size());
       i < n; i++) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            2, this->_internal_meta_graphs(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.SavedModel)
  return target;
}

size_t SavedModel::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.SavedModel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // repeated .tensorflow.MetaGraphDef meta_graphs = 2;
  total_size += 1UL * this->_internal_meta_graphs_size();
  for (const auto& msg : this->meta_graphs_) {
    total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int64 saved_model_schema_version = 1;
  if (this->saved_model_schema_version() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_saved_model_schema_version());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SavedModel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.SavedModel)
  GOOGLE_DCHECK_NE(&from, this);
  const SavedModel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SavedModel>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.SavedModel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.SavedModel)
    MergeFrom(*source);
  }
}

void SavedModel::MergeFrom(const SavedModel& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.SavedModel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  meta_graphs_.MergeFrom(from.meta_graphs_);
  if (from.saved_model_schema_version() != 0) {
    _internal_set_saved_model_schema_version(
        from._internal_saved_model_schema_version());
  }
}

void SavedModel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.SavedModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SavedModel::CopyFrom(const SavedModel& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.SavedModel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SavedModel::IsInitialized() const { return true; }

void SavedModel::InternalSwap(SavedModel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  meta_graphs_.InternalSwap(&other->meta_graphs_);
  swap(saved_model_schema_version_, other->saved_model_schema_version_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SavedModel::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::SavedModel*
Arena::CreateMaybeMessage<::tensorflow::SavedModel>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::SavedModel>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
