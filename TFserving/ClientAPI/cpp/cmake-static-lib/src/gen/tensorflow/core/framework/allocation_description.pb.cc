// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/allocation_description.proto

#include "tensorflow/core/framework/allocation_description.pb.h"

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
class AllocationDescriptionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<
      AllocationDescription>
      _instance;
} _AllocationDescription_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_AllocationDescription_default_instance_;
    new (ptr)::tensorflow::AllocationDescription();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::AllocationDescription::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          0, 0,
          InitDefaultsscc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto},
         {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
        [1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::
        offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  requested_bytes_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  allocated_bytes_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  allocator_name_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  allocation_id_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription,
                                  has_single_reference_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::AllocationDescription, ptr_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::AllocationDescription)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_AllocationDescription_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n6tensorflow/core/framework/allocation_d"
            "escription.proto\022\ntensorflow\"\243\001\n\025Allocat"
            "ionDescription\022\027\n\017requested_bytes\030\001 \001(\003\022"
            "\027\n\017allocated_bytes\030\002 "
            "\001(\003\022\026\n\016allocator_na"
            "me\030\003 \001(\t\022\025\n\rallocation_id\030\004 "
            "\001(\003\022\034\n\024has_s"
            "ingle_reference\030\005 \001(\010\022\013\n\003ptr\030\006 "
            "\001(\004B\233\001\n\030o"
            "rg.tensorflow.frameworkB\033AllocationDescr"
            "iptionProtosP\001Z]github.com/tensorflow/te"
            "nsorflow/tensorflow/go/core/framework/al"
            "location_description_go_proto\370\001\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_deps
        [1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_sccs
        [1] = {
            &scc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto,
        "tensorflow/core/framework/allocation_description.proto",
        400,
        &descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_deps,
        1,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::
            offsets,
        file_level_metadata_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto,
        1,
        file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto)),
     true);
namespace tensorflow {

// ===================================================================

void AllocationDescription::InitAsDefaultInstance() {}
class AllocationDescription::_Internal {
 public:
};

AllocationDescription::AllocationDescription(
    ::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.AllocationDescription)
}
AllocationDescription::AllocationDescription(const AllocationDescription& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  allocator_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_allocator_name().empty()) {
    allocator_name_.Set(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        from._internal_allocator_name(), GetArena());
  }
  ::memcpy(&requested_bytes_, &from.requested_bytes_,
           static_cast<size_t>(reinterpret_cast<char*>(&has_single_reference_) -
                               reinterpret_cast<char*>(&requested_bytes_)) +
               sizeof(has_single_reference_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.AllocationDescription)
}

void AllocationDescription::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
           .base);
  allocator_name_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&requested_bytes_, 0,
           static_cast<size_t>(reinterpret_cast<char*>(&has_single_reference_) -
                               reinterpret_cast<char*>(&requested_bytes_)) +
               sizeof(has_single_reference_));
}

AllocationDescription::~AllocationDescription() {
  // @@protoc_insertion_point(destructor:tensorflow.AllocationDescription)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AllocationDescription::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  allocator_name_.DestroyNoArena(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void AllocationDescription::ArenaDtor(void* object) {
  AllocationDescription* _this =
      reinterpret_cast<AllocationDescription*>(object);
  (void)_this;
}
void AllocationDescription::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AllocationDescription::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AllocationDescription& AllocationDescription::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_AllocationDescription_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
           .base);
  return *internal_default_instance();
}

void AllocationDescription::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.AllocationDescription)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  allocator_name_.ClearToEmpty(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  ::memset(&requested_bytes_, 0,
           static_cast<size_t>(reinterpret_cast<char*>(&has_single_reference_) -
                               reinterpret_cast<char*>(&requested_bytes_)) +
               sizeof(has_single_reference_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AllocationDescription::_InternalParse(
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
      // int64 requested_bytes = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          requested_bytes_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 allocated_bytes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          allocated_bytes_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string allocator_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_allocator_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(
              str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(
              str, "tensorflow.AllocationDescription.allocator_name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 allocation_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          allocation_id_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool has_single_reference = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          has_single_reference_ =
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 ptr = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          ptr_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* AllocationDescription::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.AllocationDescription)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            1, this->_internal_requested_bytes(), target);
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            2, this->_internal_allocated_bytes(), target);
  }

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        this->_internal_allocator_name().data(),
        static_cast<int>(this->_internal_allocator_name().length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "tensorflow.AllocationDescription.allocator_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_allocator_name(), target);
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            4, this->_internal_allocation_id(), target);
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(
            5, this->_internal_has_single_reference(), target);
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(
            6, this->_internal_ptr(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.AllocationDescription)
  return target;
}

size_t AllocationDescription::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.AllocationDescription)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                this->_internal_allocator_name());
  }

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_requested_bytes());
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_allocated_bytes());
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_allocation_id());
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
                this->_internal_ptr());
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
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

void AllocationDescription::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  const AllocationDescription* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AllocationDescription>(
          &from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.AllocationDescription)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.AllocationDescription)
    MergeFrom(*source);
  }
}

void AllocationDescription::MergeFrom(const AllocationDescription& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.allocator_name().size() > 0) {
    _internal_set_allocator_name(from._internal_allocator_name());
  }
  if (from.requested_bytes() != 0) {
    _internal_set_requested_bytes(from._internal_requested_bytes());
  }
  if (from.allocated_bytes() != 0) {
    _internal_set_allocated_bytes(from._internal_allocated_bytes());
  }
  if (from.allocation_id() != 0) {
    _internal_set_allocation_id(from._internal_allocation_id());
  }
  if (from.ptr() != 0) {
    _internal_set_ptr(from._internal_ptr());
  }
  if (from.has_single_reference() != 0) {
    _internal_set_has_single_reference(from._internal_has_single_reference());
  }
}

void AllocationDescription::CopyFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AllocationDescription::CopyFrom(const AllocationDescription& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AllocationDescription::IsInitialized() const { return true; }

void AllocationDescription::InternalSwap(AllocationDescription* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  allocator_name_.Swap(
      &other->allocator_name_,
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AllocationDescription, has_single_reference_) +
      sizeof(AllocationDescription::has_single_reference_) -
      PROTOBUF_FIELD_OFFSET(AllocationDescription, requested_bytes_)>(
      reinterpret_cast<char*>(&requested_bytes_),
      reinterpret_cast<char*>(&other->requested_bytes_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AllocationDescription::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::AllocationDescription*
Arena::CreateMaybeMessage<::tensorflow::AllocationDescription>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::AllocationDescription>(
      arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
