// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/tensor_slice.proto

#include "tensorflow/core/framework/tensor_slice.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto ::
    PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
        scc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto;
namespace tensorflow {
class TensorSliceProto_ExtentDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<
      TensorSliceProto_Extent>
      _instance;
  ::PROTOBUF_NAMESPACE_ID::int64 length_;
} _TensorSliceProto_Extent_default_instance_;
class TensorSliceProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TensorSliceProto>
      _instance;
} _TensorSliceProto_default_instance_;
}  // namespace tensorflow
static void
InitDefaultsscc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_TensorSliceProto_default_instance_;
    new (ptr)::tensorflow::TensorSliceProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::TensorSliceProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1>
    scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          1, 0,
          InitDefaultsscc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto},
         {
             &scc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
                  .base,
         }};

static void
InitDefaultsscc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_TensorSliceProto_Extent_default_instance_;
    new (ptr)::tensorflow::TensorSliceProto_Extent();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::TensorSliceProto_Extent::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto =
        {{ATOMIC_VAR_INIT(
              ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
          0, 0,
          InitDefaultsscc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto},
         {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata
    file_level_metadata_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
        [2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const**
    file_level_enum_descriptors_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto =
        nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const**
    file_level_service_descriptors_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto =
        nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32
    TableStruct_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto::offsets
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto_Extent,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto_Extent,
                                  _oneof_case_[0]),
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto_Extent,
                                  start_),
            offsetof(::tensorflow::TensorSliceProto_ExtentDefaultTypeInternal,
                     length_),
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto_Extent,
                                  has_length_),
            ~0u,  // no _has_bits_
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto,
                                  _internal_metadata_),
            ~0u,  // no _extensions_
            ~0u,  // no _oneof_case_
            ~0u,  // no _weak_field_map_
            PROTOBUF_FIELD_OFFSET(::tensorflow::TensorSliceProto, extent_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, sizeof(::tensorflow::TensorSliceProto_Extent)},
        {8, -1, sizeof(::tensorflow::TensorSliceProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] =
    {
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_TensorSliceProto_Extent_default_instance_),
        reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(
            &::tensorflow::_TensorSliceProto_default_instance_),
};

const char
    descriptor_table_protodef_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
        [] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
            "\n,tensorflow/core/framework/tensor_slice"
            ".proto\022\ntensorflow\"\200\001\n\020TensorSliceProto\022"
            "3\n\006extent\030\001 \003(\0132#.tensorflow.TensorSlice"
            "Proto.Extent\0327\n\006Extent\022\r\n\005start\030\001 "
            "\001(\003\022\020\n"
            "\006length\030\002 "
            "\001(\003H\000B\014\n\nhas_lengthB\207\001\n\030org.te"
            "nsorflow.frameworkB\021TensorSliceProtosP\001Z"
            "Sgithub.com/tensorflow/tensorflow/tensor"
            "flow/go/core/framework/tensor_slice_go_p"
            "roto\370\001\001b\006proto3";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const
    descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_deps
        [1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const
    descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_sccs
        [2] = {
            &scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
                 .base,
            &scc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
                 .base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag
    descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto = {
        false,
        false,
        descriptor_table_protodef_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
        "tensorflow/core/framework/tensor_slice.proto",
        335,
        &descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_once,
        descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_sccs,
        descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto_deps,
        2,
        0,
        schemas,
        file_default_instances,
        TableStruct_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto::
            offsets,
        file_level_metadata_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
        2,
        file_level_enum_descriptors_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
        file_level_service_descriptors_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto =
    (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(
         &descriptor_table_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto)),
     true);
namespace tensorflow {

// ===================================================================

void TensorSliceProto_Extent::InitAsDefaultInstance() {
  ::tensorflow::_TensorSliceProto_Extent_default_instance_.length_ =
      PROTOBUF_LONGLONG(0);
}
class TensorSliceProto_Extent::_Internal {
 public:
};

TensorSliceProto_Extent::TensorSliceProto_Extent(
    ::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.TensorSliceProto.Extent)
}
TensorSliceProto_Extent::TensorSliceProto_Extent(
    const TensorSliceProto_Extent& from)
    : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  start_ = from.start_;
  clear_has_has_length();
  switch (from.has_length_case()) {
    case kLength: {
      _internal_set_length(from._internal_length());
      break;
    }
    case HAS_LENGTH_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.TensorSliceProto.Extent)
}

void TensorSliceProto_Extent::SharedCtor() {
  start_ = PROTOBUF_LONGLONG(0);
  clear_has_has_length();
}

TensorSliceProto_Extent::~TensorSliceProto_Extent() {
  // @@protoc_insertion_point(destructor:tensorflow.TensorSliceProto.Extent)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TensorSliceProto_Extent::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (has_has_length()) {
    clear_has_length();
  }
}

void TensorSliceProto_Extent::ArenaDtor(void* object) {
  TensorSliceProto_Extent* _this =
      reinterpret_cast<TensorSliceProto_Extent*>(object);
  (void)_this;
}
void TensorSliceProto_Extent::RegisterArenaDtor(
    ::PROTOBUF_NAMESPACE_ID::Arena*) {}
void TensorSliceProto_Extent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TensorSliceProto_Extent& TensorSliceProto_Extent::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_TensorSliceProto_Extent_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
           .base);
  return *internal_default_instance();
}

void TensorSliceProto_Extent::clear_has_length() {
  // @@protoc_insertion_point(one_of_clear_start:tensorflow.TensorSliceProto.Extent)
  switch (has_length_case()) {
    case kLength: {
      // No need to clear
      break;
    }
    case HAS_LENGTH_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = HAS_LENGTH_NOT_SET;
}

void TensorSliceProto_Extent::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.TensorSliceProto.Extent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  start_ = PROTOBUF_LONGLONG(0);
  clear_has_length();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TensorSliceProto_Extent::_InternalParse(
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
      // int64 start = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          start_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 length = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _internal_set_length(
              ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* TensorSliceProto_Extent::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.TensorSliceProto.Extent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 start = 1;
  if (this->start() != 0) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            1, this->_internal_start(), target);
  }

  // int64 length = 2;
  if (_internal_has_length()) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(
            2, this->_internal_length(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.TensorSliceProto.Extent)
  return target;
}

size_t TensorSliceProto_Extent::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.TensorSliceProto.Extent)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // int64 start = 1;
  if (this->start() != 0) {
    total_size +=
        1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                this->_internal_start());
  }

  switch (has_length_case()) {
    // int64 length = 2;
    case kLength: {
      total_size +=
          1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
                  this->_internal_length());
      break;
    }
    case HAS_LENGTH_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TensorSliceProto_Extent::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.TensorSliceProto.Extent)
  GOOGLE_DCHECK_NE(&from, this);
  const TensorSliceProto_Extent* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TensorSliceProto_Extent>(
          &from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.TensorSliceProto.Extent)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.TensorSliceProto.Extent)
    MergeFrom(*source);
  }
}

void TensorSliceProto_Extent::MergeFrom(const TensorSliceProto_Extent& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.TensorSliceProto.Extent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.start() != 0) {
    _internal_set_start(from._internal_start());
  }
  switch (from.has_length_case()) {
    case kLength: {
      _internal_set_length(from._internal_length());
      break;
    }
    case HAS_LENGTH_NOT_SET: {
      break;
    }
  }
}

void TensorSliceProto_Extent::CopyFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.TensorSliceProto.Extent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TensorSliceProto_Extent::CopyFrom(const TensorSliceProto_Extent& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.TensorSliceProto.Extent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TensorSliceProto_Extent::IsInitialized() const { return true; }

void TensorSliceProto_Extent::InternalSwap(TensorSliceProto_Extent* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  swap(start_, other->start_);
  swap(has_length_, other->has_length_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata TensorSliceProto_Extent::GetMetadata() const {
  return GetMetadataStatic();
}

// ===================================================================

void TensorSliceProto::InitAsDefaultInstance() {}
class TensorSliceProto::_Internal {
 public:
};

TensorSliceProto::TensorSliceProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : ::PROTOBUF_NAMESPACE_ID::Message(arena), extent_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.TensorSliceProto)
}
TensorSliceProto::TensorSliceProto(const TensorSliceProto& from)
    : ::PROTOBUF_NAMESPACE_ID::Message(), extent_(from.extent_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.TensorSliceProto)
}

void TensorSliceProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
           .base);
}

TensorSliceProto::~TensorSliceProto() {
  // @@protoc_insertion_point(destructor:tensorflow.TensorSliceProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TensorSliceProto::SharedDtor() { GOOGLE_DCHECK(GetArena() == nullptr); }

void TensorSliceProto::ArenaDtor(void* object) {
  TensorSliceProto* _this = reinterpret_cast<TensorSliceProto*>(object);
  (void)_this;
}
void TensorSliceProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {}
void TensorSliceProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TensorSliceProto& TensorSliceProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(
      &::scc_info_TensorSliceProto_tensorflow_2fcore_2fframework_2ftensor_5fslice_2eproto
           .base);
  return *internal_default_instance();
}

void TensorSliceProto::Clear() {
  // @@protoc_insertion_point(message_clear_start:tensorflow.TensorSliceProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  extent_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TensorSliceProto::_InternalParse(
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
      // repeated .tensorflow.TensorSliceProto.Extent extent = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(
                static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_extent(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* TensorSliceProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target,
    ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.TensorSliceProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .tensorflow.TensorSliceProto.Extent extent = 1;
  for (unsigned int i = 0, n = static_cast<unsigned int>(
                               this->_internal_extent_size());
       i < n; i++) {
    target = stream->EnsureSpace(target);
    target =
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessage(
            1, this->_internal_extent(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::
        InternalSerializeUnknownFieldsToArray(
            _internal_metadata_
                .unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
                    ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance),
            target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.TensorSliceProto)
  return target;
}

size_t TensorSliceProto::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:tensorflow.TensorSliceProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  // repeated .tensorflow.TensorSliceProto.Extent extent = 1;
  total_size += 1UL * this->_internal_extent_size();
  for (const auto& msg : this->extent_) {
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

void TensorSliceProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_merge_from_start:tensorflow.TensorSliceProto)
  GOOGLE_DCHECK_NE(&from, this);
  const TensorSliceProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TensorSliceProto>(&from);
  if (source == nullptr) {
    // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.TensorSliceProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
    // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.TensorSliceProto)
    MergeFrom(*source);
  }
}

void TensorSliceProto::MergeFrom(const TensorSliceProto& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.TensorSliceProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  extent_.MergeFrom(from.extent_);
}

void TensorSliceProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  // @@protoc_insertion_point(generalized_copy_from_start:tensorflow.TensorSliceProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TensorSliceProto::CopyFrom(const TensorSliceProto& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.TensorSliceProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TensorSliceProto::IsInitialized() const { return true; }

void TensorSliceProto::InternalSwap(TensorSliceProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      &other->_internal_metadata_);
  extent_.InternalSwap(&other->extent_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TensorSliceProto::GetMetadata() const {
  return GetMetadataStatic();
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::tensorflow::TensorSliceProto_Extent*
Arena::CreateMaybeMessage<::tensorflow::TensorSliceProto_Extent>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::TensorSliceProto_Extent>(
      arena);
}
template <>
PROTOBUF_NOINLINE ::tensorflow::TensorSliceProto*
Arena::CreateMaybeMessage<::tensorflow::TensorSliceProto>(Arena* arena) {
  return Arena::CreateMessageInternal<::tensorflow::TensorSliceProto>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>