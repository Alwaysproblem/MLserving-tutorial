// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/cluster.proto

#include "tensorflow/core/protobuf/cluster.pb.h"

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
        scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
        scc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto;
namespace tensorflow {
class JobDef_TasksEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<
      JobDef_TasksEntry_DoNotUse>
      _instance;
} _JobDef_TasksEntry_DoNotUse_default_instance_;
class JobDefDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JobDef> _instance;
} _JobDef_default_instance_;
class ClusterDefDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ClusterDef>
      _instance;
} _ClusterDef_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_ClusterDef_default_instance_;
    new (ptr)::tensorflow::ClusterDef();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ClusterDef::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
    scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto = {
        {ATOMIC_VAR_INIT(
             ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
         1, 0,
         InitDefaultsscc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto},
        {
            &scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
                 .base,
        }};

static void
InitDefaultsscc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_JobDef_default_instance_;
    new (ptr)::tensorflow::JobDef();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::JobDef::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
    scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto = {
        {ATOMIC_VAR_INIT(
             ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
         1, 0,
         InitDefaultsscc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto},
        {
            &scc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
                 .base,
        }};

static void
InitDefaultsscc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_JobDef_TasksEntry_DoNotUse_default_instance_;
    new (ptr)::tensorflow::JobDef_TasksEntry_DoNotUse();
  }
  ::tensorflow::JobDef_TasksEntry_DoNotUse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          0, 0,
          InitDefaultsscc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto},
         {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::offsets
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse,
                                  _has_bits_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse,
                                  key_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse,
                                  value_),
            0,
            1,
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef, _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef, name_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::JobDef, tasks_),
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::ClusterDef,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::ClusterDef, job_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 7, sizeof(::tensorflow::JobDef_TasksEntry_DoNotUse)},
        {9, -1, sizeof(::tensorflow::JobDef)},
        {16, -1, sizeof(::tensorflow::ClusterDef)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_JobDef_TasksEntry_DoNotUse_default_instance_),
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_JobDef_default_instance_),
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_ClusterDef_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n&tensorflow/core/protobuf/cluster.proto"
            "\022\ntensorflow\"r\n\006JobDef\022\014\n\004name\030\001 "
            "\001(\t\022,\n\005"
            "tasks\030\002 \003(\0132\035.tensorflow.JobDef.TasksEnt"
            "ry\032,\n\nTasksEntry\022\013\n\003key\030\001 "
            "\001(\005\022\r\n\005value\030\002"
            " \001(\t:\0028\001\"-\n\nClusterDef\022\037\n\003job\030\001 "
            "\003(\0132\022.te"
            "nsorflow.JobDefB\207\001\n\032org.tensorflow.distr"
            "untimeB\rClusterProtosP\001ZUgithub.com/tens"
            "orflow/tensorflow/tensorflow/go/core/pro"
            "tobuf/for_core_protos_go_proto\370\001\001b\006proto"
            "3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_deps[1] =
        {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_sccs[3] = {
        &scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
             .base,
        &scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto.base,
        &scc_info_JobDef_TasksEntry_DoNotUse_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
             .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
        "tensorflow/core/protobuf/cluster.proto",
        361,
        &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_deps,
        3,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::offsets,
        file_level_metadata_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
        3,
        file_level_enum_descriptors_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto)),
     true);
namespace tensorflow {

// ===================================================================

JobDef_TasksEntry_DoNotUse::JobDef_TasksEntry_DoNotUse() {}
JobDef_TasksEntry_DoNotUse::JobDef_TasksEntry_DoNotUse(
    ::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void JobDef_TasksEntry_DoNotUse::MergeFrom(
    const JobDef_TasksEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata JobDef_TasksEntry_DoNotUse::GetMetadata()
    const {
  return GetMetadataStatic();
}
void JobDef_TasksEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}

// ===================================================================

void JobDef::InitAsDefaultInstance() {}
class JobDef::_Internal {
 public:
};

JobDef::JobDef(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena), tasks_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.JobDef)
}
JobDef::JobDef(const JobDef& from) : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  tasks_.MergeFrom(from.tasks_);
  name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
              from._internal_name(), GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.JobDef)
}

void JobDef::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto.base);
  name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

JobDef::~JobDef() {
  // @@protoc_insertion_point(destructor:tensorflow.JobDef)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void JobDef::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void JobDef::ArenaDtor(void* object) {
  JobDef* _this = reinterpret_cast<JobDef*>(object);
  (void)_this;
}
void JobDef::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void JobDef::SetCachedSize(int size) const { _cached_size_.Set(size); }
const JobDef& JobDef::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_JobDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto.base);
  return *internal_default_instance();
}

void JobDef::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.JobDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  tasks_.Clear();
  name_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* JobDef::_InternalParse(
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
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.JobDef.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // map<int32, string> tasks = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&tasks_, ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* JobDef::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.JobDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_name().data(),
        static_cast<int>(this->_internal_name().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.JobDef.name");
    target = stream->WriteStringMaybeAliased(1, this->_internal_name(), target);
  }

  // map<int32, string> tasks = 2;
  if (!this->_internal_tasks().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map<::PROTOBUF_NAMESPACE_ID::int32,
                                         std::string>::const_pointer ConstPtr;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::SortItem<
        ::PROTOBUF_NAMESPACE_ID::int32, ConstPtr>
        SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByFirstField<SortItem>
        Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            p->second.data(), static_cast<int>(p->second.length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
            "tensorflow.JobDef.TasksEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_tasks().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_tasks().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map<::PROTOBUF_NAMESPACE_ID::int32,
                                           std::string>::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map<::PROTOBUF_NAMESPACE_ID::int32,
                                        std::string>::const_iterator it =
               this->_internal_tasks().begin();
           it != this->_internal_tasks().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = JobDef_TasksEntry_DoNotUse::Funcs::InternalSerialize(
            2, items[static_cast<ptrdiff_t>(i)].second->first,
            items[static_cast<ptrdiff_t>(i)].second->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)].second));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map<::PROTOBUF_NAMESPACE_ID::int32,
                                        std::string>::const_iterator it =
               this->_internal_tasks().begin();
           it != this->_internal_tasks().end(); ++it) {
        target = JobDef_TasksEntry_DoNotUse::Funcs::InternalSerialize(
            2, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.JobDef)
  return target;
}

size_t JobDef::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.JobDef)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // map<int32, string> tasks = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(
                        this->_internal_tasks_size());
  for (::PROTOBUF_NAMESPACE_ID::Map<::PROTOBUF_NAMESPACE_ID::int32,
                                    std::string>::const_iterator it =
           this->_internal_tasks().begin();
       it != this->_internal_tasks().end(); ++it) {
    total_size +=
        JobDef_TasksEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JobDef::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.JobDef)
  GOOGLE_DCHECK_NE(&from, this);
  const JobDef* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JobDef>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.JobDef)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.JobDef)
    MergeFrom(*source);
  }
}

void JobDef::MergeFrom(const JobDef& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.JobDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  tasks_.MergeFrom(from.tasks_);
  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
}

void JobDef::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JobDef::CopyFrom(const JobDef& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JobDef::IsInitialized() const { return true; }

void JobDef::InternalSwap(JobDef* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  tasks_.Swap(&other->tasks_);
  name_.Swap(&other->name_,
             &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
             GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata JobDef::GetMetadata() const {
  return GetMetadataStatic();
}

// ===================================================================

void ClusterDef::InitAsDefaultInstance() {}
class ClusterDef::_Internal {
 public:
};

ClusterDef::ClusterDef(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena), job_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ClusterDef)
}
ClusterDef::ClusterDef(const ClusterDef& from)
    : ::PROTOBUF_NAMESPACE_ID::Message(), job_(from.job_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.ClusterDef)
}

void ClusterDef::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto.base);
}

ClusterDef::~ClusterDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ClusterDef)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ClusterDef::SharedDtor() { GOOGLE_DCHECK(GetArena() == nullptr); }

void ClusterDef::ArenaDtor(void* object) {
  ClusterDef* _this = reinterpret_cast<ClusterDef*>(object);
  (void)_this;
}
void ClusterDef::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void ClusterDef::SetCachedSize(int size) const { _cached_size_.Set(size); }
const ClusterDef& ClusterDef::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_ClusterDef_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
           .base);
  return *internal_default_instance();
}

void ClusterDef::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.ClusterDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  job_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ClusterDef::_InternalParse(
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
      // repeated .tensorflow.JobDef job = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_job(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* ClusterDef::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ClusterDef)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .tensorflow.JobDef job = 1;
  for (unsigned int i = 0,
                    n = static_cast<unsigned int>(this->_internal_job_size());
       i < n; i++) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            1, this->_internal_job(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ClusterDef)
  return target;
}

size_t ClusterDef::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.ClusterDef)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // repeated .tensorflow.JobDef job = 1;
  total_size += 1UL * this->_internal_job_size();
  for (const auto& msg : this->job_) {
    total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ClusterDef::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ClusterDef)
  GOOGLE_DCHECK_NE(&from, this);
  const ClusterDef* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ClusterDef>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ClusterDef)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ClusterDef)
    MergeFrom(*source);
  }
}

void ClusterDef::MergeFrom(const ClusterDef& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ClusterDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  job_.MergeFrom(from.job_);
}

void ClusterDef::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClusterDef::CopyFrom(const ClusterDef& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClusterDef::IsInitialized() const { return true; }

void ClusterDef::InternalSwap(ClusterDef* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  job_.InternalSwap(&other->job_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClusterDef::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::JobDef_TasksEntry_DoNotUse*
Arena::CreateMaybeMessage<::tensorflow::JobDef_TasksEntry_DoNotUse>(
    Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::JobDef_TasksEntry_DoNotUse>(
      arena);
}
template <>
PROTOBUF_NOINLINE ::tensorflow::JobDef*
Arena::CreateMaybeMessage<::tensorflow::JobDef>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::JobDef>(arena);
}
template <>
PROTOBUF_NOINLINE ::tensorflow::ClusterDef*
Arena::CreateMaybeMessage<::tensorflow::ClusterDef>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::ClusterDef>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
