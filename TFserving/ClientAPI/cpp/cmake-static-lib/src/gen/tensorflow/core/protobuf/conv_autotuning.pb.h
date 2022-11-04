// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/conv_autotuning.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto

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

#include "tensorflow/stream_executor/dnn.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto {
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
    descriptor_table_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto;
namespace tensorflow {
class ConvolutionProto;
class ConvolutionProtoDefaultTypeInternal;
extern ConvolutionProtoDefaultTypeInternal _ConvolutionProto_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template <>
::tensorflow::ConvolutionProto*
Arena::CreateMaybeMessage<::tensorflow::ConvolutionProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class ConvolutionProto PROTOBUF_FINAL
    : public ::PROTOBUF_NAMESPACE_ID::
          Message /* @@protoc_insertion_point(class_definition:tensorflow.ConvolutionProto)
                   */
{
 public:
  inline ConvolutionProto() : ConvolutionProto(nullptr){};
  virtual ~ConvolutionProto();

  ConvolutionProto(const ConvolutionProto& from);
  ConvolutionProto(ConvolutionProto&& from) noexcept : ConvolutionProto() {
    *this = ::std::move(from);
  }

  inline ConvolutionProto& operator=(const ConvolutionProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConvolutionProto& operator=(ConvolutionProto&& from) noexcept {
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
  static const ConvolutionProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConvolutionProto* internal_default_instance() {
    return reinterpret_cast<const ConvolutionProto*>(
        &_ConvolutionProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;

  friend void swap(ConvolutionProto& a, ConvolutionProto& b) { a.Swap(&b); }
  inline void Swap(ConvolutionProto* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConvolutionProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConvolutionProto* New() const final {
    return CreateMaybeMessage<ConvolutionProto>(nullptr);
  }

  ConvolutionProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConvolutionProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ConvolutionProto& from);
  void MergeFrom(const ConvolutionProto& from);
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
  void InternalSwap(ConvolutionProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.ConvolutionProto";
  }

 protected:
  explicit ConvolutionProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);

 public:
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

 private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
        &::descriptor_table_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto);
    return ::
        descriptor_table_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto
            .file_level_metadata[kIndexInFileMessages];
  }

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInputFieldNumber = 2,
    kFilterFieldNumber = 3,
    kOutputFieldNumber = 4,
    kConvDescFieldNumber = 5,
    kKindFieldNumber = 1,
    kActivationFieldNumber = 8,
    kConvScaleFieldNumber = 6,
    kSideValueScaleFieldNumber = 7,
    kInputAddressFieldNumber = 9,
    kFilterAddressFieldNumber = 10,
    kOutputAddressFieldNumber = 11,
    kBiasAddressFieldNumber = 12,
    kSideInputAddressFieldNumber = 13,
  };
  // .stream_executor.dnn.TensorDescriptorProto input = 2;
  bool has_input() const;

 private:
  bool _internal_has_input() const;

 public:
  void clear_input();
  const ::stream_executor::dnn::TensorDescriptorProto& input() const;
  ::stream_executor::dnn::TensorDescriptorProto* release_input();
  ::stream_executor::dnn::TensorDescriptorProto* mutable_input();
  void set_allocated_input(
      ::stream_executor::dnn::TensorDescriptorProto* input);

 private:
  const ::stream_executor::dnn::TensorDescriptorProto& _internal_input() const;
  ::stream_executor::dnn::TensorDescriptorProto* _internal_mutable_input();

 public:
  void unsafe_arena_set_allocated_input(
      ::stream_executor::dnn::TensorDescriptorProto* input);
  ::stream_executor::dnn::TensorDescriptorProto* unsafe_arena_release_input();

  // .stream_executor.dnn.TensorDescriptorProto filter = 3;
  bool has_filter() const;

 private:
  bool _internal_has_filter() const;

 public:
  void clear_filter();
  const ::stream_executor::dnn::TensorDescriptorProto& filter() const;
  ::stream_executor::dnn::TensorDescriptorProto* release_filter();
  ::stream_executor::dnn::TensorDescriptorProto* mutable_filter();
  void set_allocated_filter(
      ::stream_executor::dnn::TensorDescriptorProto* filter);

 private:
  const ::stream_executor::dnn::TensorDescriptorProto& _internal_filter() const;
  ::stream_executor::dnn::TensorDescriptorProto* _internal_mutable_filter();

 public:
  void unsafe_arena_set_allocated_filter(
      ::stream_executor::dnn::TensorDescriptorProto* filter);
  ::stream_executor::dnn::TensorDescriptorProto* unsafe_arena_release_filter();

  // .stream_executor.dnn.TensorDescriptorProto output = 4;
  bool has_output() const;

 private:
  bool _internal_has_output() const;

 public:
  void clear_output();
  const ::stream_executor::dnn::TensorDescriptorProto& output() const;
  ::stream_executor::dnn::TensorDescriptorProto* release_output();
  ::stream_executor::dnn::TensorDescriptorProto* mutable_output();
  void set_allocated_output(
      ::stream_executor::dnn::TensorDescriptorProto* output);

 private:
  const ::stream_executor::dnn::TensorDescriptorProto& _internal_output() const;
  ::stream_executor::dnn::TensorDescriptorProto* _internal_mutable_output();

 public:
  void unsafe_arena_set_allocated_output(
      ::stream_executor::dnn::TensorDescriptorProto* output);
  ::stream_executor::dnn::TensorDescriptorProto* unsafe_arena_release_output();

  // .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
  bool has_conv_desc() const;

 private:
  bool _internal_has_conv_desc() const;

 public:
  void clear_conv_desc();
  const ::stream_executor::dnn::ConvolutionDescriptorProto& conv_desc() const;
  ::stream_executor::dnn::ConvolutionDescriptorProto* release_conv_desc();
  ::stream_executor::dnn::ConvolutionDescriptorProto* mutable_conv_desc();
  void set_allocated_conv_desc(
      ::stream_executor::dnn::ConvolutionDescriptorProto* conv_desc);

 private:
  const ::stream_executor::dnn::ConvolutionDescriptorProto&
  _internal_conv_desc() const;
  ::stream_executor::dnn::ConvolutionDescriptorProto*
  _internal_mutable_conv_desc();

 public:
  void unsafe_arena_set_allocated_conv_desc(
      ::stream_executor::dnn::ConvolutionDescriptorProto* conv_desc);
  ::stream_executor::dnn::ConvolutionDescriptorProto*
  unsafe_arena_release_conv_desc();

  // .stream_executor.dnn.ConvolutionKind kind = 1;
  void clear_kind();
  ::stream_executor::dnn::ConvolutionKind kind() const;
  void set_kind(::stream_executor::dnn::ConvolutionKind value);

 private:
  ::stream_executor::dnn::ConvolutionKind _internal_kind() const;
  void _internal_set_kind(::stream_executor::dnn::ConvolutionKind value);

 public:
  // .stream_executor.dnn.ActivationMode activation = 8;
  void clear_activation();
  ::stream_executor::dnn::ActivationMode activation() const;
  void set_activation(::stream_executor::dnn::ActivationMode value);

 private:
  ::stream_executor::dnn::ActivationMode _internal_activation() const;
  void _internal_set_activation(::stream_executor::dnn::ActivationMode value);

 public:
  // double conv_scale = 6;
  void clear_conv_scale();
  double conv_scale() const;
  void set_conv_scale(double value);

 private:
  double _internal_conv_scale() const;
  void _internal_set_conv_scale(double value);

 public:
  // double side_value_scale = 7;
  void clear_side_value_scale();
  double side_value_scale() const;
  void set_side_value_scale(double value);

 private:
  double _internal_side_value_scale() const;
  void _internal_set_side_value_scale(double value);

 public:
  // int64 input_address = 9;
  void clear_input_address();
  ::PROTOBUF_NAMESPACE_ID::int64 input_address() const;
  void set_input_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_input_address() const;
  void _internal_set_input_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // int64 filter_address = 10;
  void clear_filter_address();
  ::PROTOBUF_NAMESPACE_ID::int64 filter_address() const;
  void set_filter_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_filter_address() const;
  void _internal_set_filter_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // int64 output_address = 11;
  void clear_output_address();
  ::PROTOBUF_NAMESPACE_ID::int64 output_address() const;
  void set_output_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_output_address() const;
  void _internal_set_output_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // int64 bias_address = 12;
  void clear_bias_address();
  ::PROTOBUF_NAMESPACE_ID::int64 bias_address() const;
  void set_bias_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_bias_address() const;
  void _internal_set_bias_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // int64 side_input_address = 13;
  void clear_side_input_address();
  ::PROTOBUF_NAMESPACE_ID::int64 side_input_address() const;
  void set_side_input_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_side_input_address() const;
  void _internal_set_side_input_address(::PROTOBUF_NAMESPACE_ID::int64 value);

 public:
  // @@protoc_insertion_point(class_scope:tensorflow.ConvolutionProto)
 private:
  class _Internal;

  template <typename T>
  friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::stream_executor::dnn::TensorDescriptorProto* input_;
  ::stream_executor::dnn::TensorDescriptorProto* filter_;
  ::stream_executor::dnn::TensorDescriptorProto* output_;
  ::stream_executor::dnn::ConvolutionDescriptorProto* conv_desc_;
  int kind_;
  int activation_;
  double conv_scale_;
  double side_value_scale_;
  ::PROTOBUF_NAMESPACE_ID::int64 input_address_;
  ::PROTOBUF_NAMESPACE_ID::int64 filter_address_;
  ::PROTOBUF_NAMESPACE_ID::int64 output_address_;
  ::PROTOBUF_NAMESPACE_ID::int64 bias_address_;
  ::PROTOBUF_NAMESPACE_ID::int64 side_input_address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::
      TableStruct_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto;
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConvolutionProto

// .stream_executor.dnn.ConvolutionKind kind = 1;
inline void ConvolutionProto::clear_kind() { kind_ = 0; }
inline ::stream_executor::dnn::ConvolutionKind
ConvolutionProto::_internal_kind() const {
  return static_cast<::stream_executor::dnn::ConvolutionKind>(kind_);
}
inline ::stream_executor::dnn::ConvolutionKind ConvolutionProto::kind() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.kind)
  return _internal_kind();
}
inline void ConvolutionProto::_internal_set_kind(
    ::stream_executor::dnn::ConvolutionKind value) {
  kind_ = value;
}
inline void ConvolutionProto::set_kind(
    ::stream_executor::dnn::ConvolutionKind value) {
  _internal_set_kind(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.kind)
}

// .stream_executor.dnn.TensorDescriptorProto input = 2;
inline bool ConvolutionProto::_internal_has_input() const {
  return this != internal_default_instance() && input_ != nullptr;
}
inline bool ConvolutionProto::has_input() const {
  return _internal_has_input();
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::_internal_input() const {
  const ::stream_executor::dnn::TensorDescriptorProto* p = input_;
  return p != nullptr
             ? *p
             : *reinterpret_cast<
                   const ::stream_executor::dnn::TensorDescriptorProto*>(
                   &::stream_executor::dnn::
                       _TensorDescriptorProto_default_instance_);
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::input() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.input)
  return _internal_input();
}
inline void ConvolutionProto::unsafe_arena_set_allocated_input(
    ::stream_executor::dnn::TensorDescriptorProto* input) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_);
  }
  input_ = input;
  if (input) {
  } else {
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ConvolutionProto.input)
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::release_input() {
  auto temp = unsafe_arena_release_input();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::unsafe_arena_release_input() {
  // @@protoc_insertion_point(field_release:tensorflow.ConvolutionProto.input)

  ::stream_executor::dnn::TensorDescriptorProto* temp = input_;
  input_ = nullptr;
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::_internal_mutable_input() {
  if (input_ == nullptr) {
    auto* p = CreateMaybeMessage<::stream_executor::dnn::TensorDescriptorProto>(
        GetArena());
    input_ = p;
  }
  return input_;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::mutable_input() {
  // @@protoc_insertion_point(field_mutable:tensorflow.ConvolutionProto.input)
  return _internal_mutable_input();
}
inline void ConvolutionProto::set_allocated_input(
    ::stream_executor::dnn::TensorDescriptorProto* input) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(input_);
  }
  if (input) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(input)
            ->GetArena();
    if (message_arena != submessage_arena) {
      input = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, input, submessage_arena);
    }

  } else {
  }
  input_ = input;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ConvolutionProto.input)
}

// .stream_executor.dnn.TensorDescriptorProto filter = 3;
inline bool ConvolutionProto::_internal_has_filter() const {
  return this != internal_default_instance() && filter_ != nullptr;
}
inline bool ConvolutionProto::has_filter() const {
  return _internal_has_filter();
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::_internal_filter() const {
  const ::stream_executor::dnn::TensorDescriptorProto* p = filter_;
  return p != nullptr
             ? *p
             : *reinterpret_cast<
                   const ::stream_executor::dnn::TensorDescriptorProto*>(
                   &::stream_executor::dnn::
                       _TensorDescriptorProto_default_instance_);
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::filter() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.filter)
  return _internal_filter();
}
inline void ConvolutionProto::unsafe_arena_set_allocated_filter(
    ::stream_executor::dnn::TensorDescriptorProto* filter) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(filter_);
  }
  filter_ = filter;
  if (filter) {
  } else {
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ConvolutionProto.filter)
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::release_filter() {
  auto temp = unsafe_arena_release_filter();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::unsafe_arena_release_filter() {
  // @@protoc_insertion_point(field_release:tensorflow.ConvolutionProto.filter)

  ::stream_executor::dnn::TensorDescriptorProto* temp = filter_;
  filter_ = nullptr;
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::_internal_mutable_filter() {
  if (filter_ == nullptr) {
    auto* p = CreateMaybeMessage<::stream_executor::dnn::TensorDescriptorProto>(
        GetArena());
    filter_ = p;
  }
  return filter_;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::mutable_filter() {
  // @@protoc_insertion_point(field_mutable:tensorflow.ConvolutionProto.filter)
  return _internal_mutable_filter();
}
inline void ConvolutionProto::set_allocated_filter(
    ::stream_executor::dnn::TensorDescriptorProto* filter) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(filter_);
  }
  if (filter) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(filter)
            ->GetArena();
    if (message_arena != submessage_arena) {
      filter = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, filter, submessage_arena);
    }

  } else {
  }
  filter_ = filter;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ConvolutionProto.filter)
}

// .stream_executor.dnn.TensorDescriptorProto output = 4;
inline bool ConvolutionProto::_internal_has_output() const {
  return this != internal_default_instance() && output_ != nullptr;
}
inline bool ConvolutionProto::has_output() const {
  return _internal_has_output();
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::_internal_output() const {
  const ::stream_executor::dnn::TensorDescriptorProto* p = output_;
  return p != nullptr
             ? *p
             : *reinterpret_cast<
                   const ::stream_executor::dnn::TensorDescriptorProto*>(
                   &::stream_executor::dnn::
                       _TensorDescriptorProto_default_instance_);
}
inline const ::stream_executor::dnn::TensorDescriptorProto&
ConvolutionProto::output() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.output)
  return _internal_output();
}
inline void ConvolutionProto::unsafe_arena_set_allocated_output(
    ::stream_executor::dnn::TensorDescriptorProto* output) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(output_);
  }
  output_ = output;
  if (output) {
  } else {
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ConvolutionProto.output)
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::release_output() {
  auto temp = unsafe_arena_release_output();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::unsafe_arena_release_output() {
  // @@protoc_insertion_point(field_release:tensorflow.ConvolutionProto.output)

  ::stream_executor::dnn::TensorDescriptorProto* temp = output_;
  output_ = nullptr;
  return temp;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::_internal_mutable_output() {
  if (output_ == nullptr) {
    auto* p = CreateMaybeMessage<::stream_executor::dnn::TensorDescriptorProto>(
        GetArena());
    output_ = p;
  }
  return output_;
}
inline ::stream_executor::dnn::TensorDescriptorProto*
ConvolutionProto::mutable_output() {
  // @@protoc_insertion_point(field_mutable:tensorflow.ConvolutionProto.output)
  return _internal_mutable_output();
}
inline void ConvolutionProto::set_allocated_output(
    ::stream_executor::dnn::TensorDescriptorProto* output) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(output_);
  }
  if (output) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(output)
            ->GetArena();
    if (message_arena != submessage_arena) {
      output = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, output, submessage_arena);
    }

  } else {
  }
  output_ = output;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ConvolutionProto.output)
}

// .stream_executor.dnn.ConvolutionDescriptorProto conv_desc = 5;
inline bool ConvolutionProto::_internal_has_conv_desc() const {
  return this != internal_default_instance() && conv_desc_ != nullptr;
}
inline bool ConvolutionProto::has_conv_desc() const {
  return _internal_has_conv_desc();
}
inline const ::stream_executor::dnn::ConvolutionDescriptorProto&
ConvolutionProto::_internal_conv_desc() const {
  const ::stream_executor::dnn::ConvolutionDescriptorProto* p = conv_desc_;
  return p != nullptr
             ? *p
             : *reinterpret_cast<
                   const ::stream_executor::dnn::ConvolutionDescriptorProto*>(
                   &::stream_executor::dnn::
                       _ConvolutionDescriptorProto_default_instance_);
}
inline const ::stream_executor::dnn::ConvolutionDescriptorProto&
ConvolutionProto::conv_desc() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.conv_desc)
  return _internal_conv_desc();
}
inline void ConvolutionProto::unsafe_arena_set_allocated_conv_desc(
    ::stream_executor::dnn::ConvolutionDescriptorProto* conv_desc) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(conv_desc_);
  }
  conv_desc_ = conv_desc;
  if (conv_desc) {
  } else {
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ConvolutionProto.conv_desc)
}
inline ::stream_executor::dnn::ConvolutionDescriptorProto*
ConvolutionProto::release_conv_desc() {
  auto temp = unsafe_arena_release_conv_desc();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::stream_executor::dnn::ConvolutionDescriptorProto*
ConvolutionProto::unsafe_arena_release_conv_desc() {
  // @@protoc_insertion_point(field_release:tensorflow.ConvolutionProto.conv_desc)

  ::stream_executor::dnn::ConvolutionDescriptorProto* temp = conv_desc_;
  conv_desc_ = nullptr;
  return temp;
}
inline ::stream_executor::dnn::ConvolutionDescriptorProto*
ConvolutionProto::_internal_mutable_conv_desc() {
  if (conv_desc_ == nullptr) {
    auto* p =
        CreateMaybeMessage<::stream_executor::dnn::ConvolutionDescriptorProto>(
            GetArena());
    conv_desc_ = p;
  }
  return conv_desc_;
}
inline ::stream_executor::dnn::ConvolutionDescriptorProto*
ConvolutionProto::mutable_conv_desc() {
  // @@protoc_insertion_point(field_mutable:tensorflow.ConvolutionProto.conv_desc)
  return _internal_mutable_conv_desc();
}
inline void ConvolutionProto::set_allocated_conv_desc(
    ::stream_executor::dnn::ConvolutionDescriptorProto* conv_desc) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(conv_desc_);
  }
  if (conv_desc) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(conv_desc)
            ->GetArena();
    if (message_arena != submessage_arena) {
      conv_desc = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, conv_desc, submessage_arena);
    }

  } else {
  }
  conv_desc_ = conv_desc;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ConvolutionProto.conv_desc)
}

// double conv_scale = 6;
inline void ConvolutionProto::clear_conv_scale() { conv_scale_ = 0; }
inline double ConvolutionProto::_internal_conv_scale() const {
  return conv_scale_;
}
inline double ConvolutionProto::conv_scale() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.conv_scale)
  return _internal_conv_scale();
}
inline void ConvolutionProto::_internal_set_conv_scale(double value) {
  conv_scale_ = value;
}
inline void ConvolutionProto::set_conv_scale(double value) {
  _internal_set_conv_scale(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.conv_scale)
}

// double side_value_scale = 7;
inline void ConvolutionProto::clear_side_value_scale() {
  side_value_scale_ = 0;
}
inline double ConvolutionProto::_internal_side_value_scale() const {
  return side_value_scale_;
}
inline double ConvolutionProto::side_value_scale() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.side_value_scale)
  return _internal_side_value_scale();
}
inline void ConvolutionProto::_internal_set_side_value_scale(double value) {
  side_value_scale_ = value;
}
inline void ConvolutionProto::set_side_value_scale(double value) {
  _internal_set_side_value_scale(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.side_value_scale)
}

// .stream_executor.dnn.ActivationMode activation = 8;
inline void ConvolutionProto::clear_activation() { activation_ = 0; }
inline ::stream_executor::dnn::ActivationMode
ConvolutionProto::_internal_activation() const {
  return static_cast<::stream_executor::dnn::ActivationMode>(activation_);
}
inline ::stream_executor::dnn::ActivationMode ConvolutionProto::activation()
    const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.activation)
  return _internal_activation();
}
inline void ConvolutionProto::_internal_set_activation(
    ::stream_executor::dnn::ActivationMode value) {
  activation_ = value;
}
inline void ConvolutionProto::set_activation(
    ::stream_executor::dnn::ActivationMode value) {
  _internal_set_activation(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.activation)
}

// int64 input_address = 9;
inline void ConvolutionProto::clear_input_address() {
  input_address_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64
ConvolutionProto::_internal_input_address() const {
  return input_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::input_address() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.input_address)
  return _internal_input_address();
}
inline void ConvolutionProto::_internal_set_input_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  input_address_ = value;
}
inline void ConvolutionProto::set_input_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_input_address(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.input_address)
}

// int64 filter_address = 10;
inline void ConvolutionProto::clear_filter_address() {
  filter_address_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64
ConvolutionProto::_internal_filter_address() const {
  return filter_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::filter_address() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.filter_address)
  return _internal_filter_address();
}
inline void ConvolutionProto::_internal_set_filter_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  filter_address_ = value;
}
inline void ConvolutionProto::set_filter_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_filter_address(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.filter_address)
}

// int64 output_address = 11;
inline void ConvolutionProto::clear_output_address() {
  output_address_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64
ConvolutionProto::_internal_output_address() const {
  return output_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::output_address() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.output_address)
  return _internal_output_address();
}
inline void ConvolutionProto::_internal_set_output_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  output_address_ = value;
}
inline void ConvolutionProto::set_output_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_output_address(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.output_address)
}

// int64 bias_address = 12;
inline void ConvolutionProto::clear_bias_address() {
  bias_address_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::_internal_bias_address()
    const {
  return bias_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::bias_address() const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.bias_address)
  return _internal_bias_address();
}
inline void ConvolutionProto::_internal_set_bias_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  bias_address_ = value;
}
inline void ConvolutionProto::set_bias_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_bias_address(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.bias_address)
}

// int64 side_input_address = 13;
inline void ConvolutionProto::clear_side_input_address() {
  side_input_address_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64
ConvolutionProto::_internal_side_input_address() const {
  return side_input_address_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ConvolutionProto::side_input_address()
    const {
  // @@protoc_insertion_point(field_get:tensorflow.ConvolutionProto.side_input_address)
  return _internal_side_input_address();
}
inline void ConvolutionProto::_internal_set_side_input_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  side_input_address_ = value;
}
inline void ConvolutionProto::set_side_input_address(
    ::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_side_input_address(value);
  // @@protoc_insertion_point(field_set:tensorflow.ConvolutionProto.side_input_address)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprotobuf_2fconv_5fautotuning_2eproto