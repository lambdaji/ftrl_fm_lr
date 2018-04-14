// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xysample.proto

#ifndef PROTOBUF_xysample_2eproto__INCLUDED
#define PROTOBUF_xysample_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_xysample_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsFeatureImpl();
void InitDefaultsFeature();
void InitDefaultsxySampleImpl();
void InitDefaultsxySample();
void InitDefaultsxySamplesImpl();
void InitDefaultsxySamples();
inline void InitDefaults() {
  InitDefaultsFeature();
  InitDefaultsxySample();
  InitDefaultsxySamples();
}
}  // namespace protobuf_xysample_2eproto
namespace lambda_sparse {
class Feature;
class FeatureDefaultTypeInternal;
extern FeatureDefaultTypeInternal _Feature_default_instance_;
class xySample;
class xySampleDefaultTypeInternal;
extern xySampleDefaultTypeInternal _xySample_default_instance_;
class xySamples;
class xySamplesDefaultTypeInternal;
extern xySamplesDefaultTypeInternal _xySamples_default_instance_;
}  // namespace lambda_sparse
namespace lambda_sparse {

// ===================================================================

class Feature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lambda_sparse.Feature) */ {
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Feature(Feature&& from) noexcept
    : Feature() {
    *this = ::std::move(from);
  }

  inline Feature& operator=(Feature&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Feature& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Feature* internal_default_instance() {
    return reinterpret_cast<const Feature*>(
               &_Feature_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Feature* other);
  friend void swap(Feature& a, Feature& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Feature* New() const PROTOBUF_FINAL { return New(NULL); }

  Feature* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Feature* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 filed_id = 1;
  bool has_filed_id() const;
  void clear_filed_id();
  static const int kFiledIdFieldNumber = 1;
  ::google::protobuf::int64 filed_id() const;
  void set_filed_id(::google::protobuf::int64 value);

  // optional int64 feat_id = 2;
  bool has_feat_id() const;
  void clear_feat_id();
  static const int kFeatIdFieldNumber = 2;
  ::google::protobuf::int64 feat_id() const;
  void set_feat_id(::google::protobuf::int64 value);

  // optional float feat_val = 3;
  bool has_feat_val() const;
  void clear_feat_val();
  static const int kFeatValFieldNumber = 3;
  float feat_val() const;
  void set_feat_val(float value);

  // @@protoc_insertion_point(class_scope:lambda_sparse.Feature)
 private:
  void set_has_filed_id();
  void clear_has_filed_id();
  void set_has_feat_id();
  void clear_has_feat_id();
  void set_has_feat_val();
  void clear_has_feat_val();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 filed_id_;
  ::google::protobuf::int64 feat_id_;
  float feat_val_;
  friend struct ::protobuf_xysample_2eproto::TableStruct;
  friend void ::protobuf_xysample_2eproto::InitDefaultsFeatureImpl();
};
// -------------------------------------------------------------------

class xySample : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lambda_sparse.xySample) */ {
 public:
  xySample();
  virtual ~xySample();

  xySample(const xySample& from);

  inline xySample& operator=(const xySample& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  xySample(xySample&& from) noexcept
    : xySample() {
    *this = ::std::move(from);
  }

  inline xySample& operator=(xySample&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const xySample& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const xySample* internal_default_instance() {
    return reinterpret_cast<const xySample*>(
               &_xySample_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(xySample* other);
  friend void swap(xySample& a, xySample& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline xySample* New() const PROTOBUF_FINAL { return New(NULL); }

  xySample* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const xySample& from);
  void MergeFrom(const xySample& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(xySample* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .lambda_sparse.Feature features = 1;
  int features_size() const;
  void clear_features();
  static const int kFeaturesFieldNumber = 1;
  const ::lambda_sparse::Feature& features(int index) const;
  ::lambda_sparse::Feature* mutable_features(int index);
  ::lambda_sparse::Feature* add_features();
  ::google::protobuf::RepeatedPtrField< ::lambda_sparse::Feature >*
      mutable_features();
  const ::google::protobuf::RepeatedPtrField< ::lambda_sparse::Feature >&
      features() const;

  // optional double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:lambda_sparse.xySample)
 private:
  void set_has_y();
  void clear_has_y();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lambda_sparse::Feature > features_;
  double y_;
  friend struct ::protobuf_xysample_2eproto::TableStruct;
  friend void ::protobuf_xysample_2eproto::InitDefaultsxySampleImpl();
};
// -------------------------------------------------------------------

class xySamples : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lambda_sparse.xySamples) */ {
 public:
  xySamples();
  virtual ~xySamples();

  xySamples(const xySamples& from);

  inline xySamples& operator=(const xySamples& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  xySamples(xySamples&& from) noexcept
    : xySamples() {
    *this = ::std::move(from);
  }

  inline xySamples& operator=(xySamples&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const xySamples& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const xySamples* internal_default_instance() {
    return reinterpret_cast<const xySamples*>(
               &_xySamples_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(xySamples* other);
  friend void swap(xySamples& a, xySamples& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline xySamples* New() const PROTOBUF_FINAL { return New(NULL); }

  xySamples* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const xySamples& from);
  void MergeFrom(const xySamples& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(xySamples* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .lambda_sparse.xySample samples = 1;
  int samples_size() const;
  void clear_samples();
  static const int kSamplesFieldNumber = 1;
  const ::lambda_sparse::xySample& samples(int index) const;
  ::lambda_sparse::xySample* mutable_samples(int index);
  ::lambda_sparse::xySample* add_samples();
  ::google::protobuf::RepeatedPtrField< ::lambda_sparse::xySample >*
      mutable_samples();
  const ::google::protobuf::RepeatedPtrField< ::lambda_sparse::xySample >&
      samples() const;

  // @@protoc_insertion_point(class_scope:lambda_sparse.xySamples)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lambda_sparse::xySample > samples_;
  friend struct ::protobuf_xysample_2eproto::TableStruct;
  friend void ::protobuf_xysample_2eproto::InitDefaultsxySamplesImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Feature

// optional int64 filed_id = 1;
inline bool Feature::has_filed_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Feature::set_has_filed_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Feature::clear_has_filed_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Feature::clear_filed_id() {
  filed_id_ = GOOGLE_LONGLONG(0);
  clear_has_filed_id();
}
inline ::google::protobuf::int64 Feature::filed_id() const {
  // @@protoc_insertion_point(field_get:lambda_sparse.Feature.filed_id)
  return filed_id_;
}
inline void Feature::set_filed_id(::google::protobuf::int64 value) {
  set_has_filed_id();
  filed_id_ = value;
  // @@protoc_insertion_point(field_set:lambda_sparse.Feature.filed_id)
}

// optional int64 feat_id = 2;
inline bool Feature::has_feat_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Feature::set_has_feat_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Feature::clear_has_feat_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Feature::clear_feat_id() {
  feat_id_ = GOOGLE_LONGLONG(0);
  clear_has_feat_id();
}
inline ::google::protobuf::int64 Feature::feat_id() const {
  // @@protoc_insertion_point(field_get:lambda_sparse.Feature.feat_id)
  return feat_id_;
}
inline void Feature::set_feat_id(::google::protobuf::int64 value) {
  set_has_feat_id();
  feat_id_ = value;
  // @@protoc_insertion_point(field_set:lambda_sparse.Feature.feat_id)
}

// optional float feat_val = 3;
inline bool Feature::has_feat_val() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Feature::set_has_feat_val() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Feature::clear_has_feat_val() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Feature::clear_feat_val() {
  feat_val_ = 0;
  clear_has_feat_val();
}
inline float Feature::feat_val() const {
  // @@protoc_insertion_point(field_get:lambda_sparse.Feature.feat_val)
  return feat_val_;
}
inline void Feature::set_feat_val(float value) {
  set_has_feat_val();
  feat_val_ = value;
  // @@protoc_insertion_point(field_set:lambda_sparse.Feature.feat_val)
}

// -------------------------------------------------------------------

// xySample

// repeated .lambda_sparse.Feature features = 1;
inline int xySample::features_size() const {
  return features_.size();
}
inline void xySample::clear_features() {
  features_.Clear();
}
inline const ::lambda_sparse::Feature& xySample::features(int index) const {
  // @@protoc_insertion_point(field_get:lambda_sparse.xySample.features)
  return features_.Get(index);
}
inline ::lambda_sparse::Feature* xySample::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:lambda_sparse.xySample.features)
  return features_.Mutable(index);
}
inline ::lambda_sparse::Feature* xySample::add_features() {
  // @@protoc_insertion_point(field_add:lambda_sparse.xySample.features)
  return features_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::lambda_sparse::Feature >*
xySample::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:lambda_sparse.xySample.features)
  return &features_;
}
inline const ::google::protobuf::RepeatedPtrField< ::lambda_sparse::Feature >&
xySample::features() const {
  // @@protoc_insertion_point(field_list:lambda_sparse.xySample.features)
  return features_;
}

// optional double y = 2;
inline bool xySample::has_y() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void xySample::set_has_y() {
  _has_bits_[0] |= 0x00000001u;
}
inline void xySample::clear_has_y() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void xySample::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double xySample::y() const {
  // @@protoc_insertion_point(field_get:lambda_sparse.xySample.y)
  return y_;
}
inline void xySample::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:lambda_sparse.xySample.y)
}

// -------------------------------------------------------------------

// xySamples

// repeated .lambda_sparse.xySample samples = 1;
inline int xySamples::samples_size() const {
  return samples_.size();
}
inline void xySamples::clear_samples() {
  samples_.Clear();
}
inline const ::lambda_sparse::xySample& xySamples::samples(int index) const {
  // @@protoc_insertion_point(field_get:lambda_sparse.xySamples.samples)
  return samples_.Get(index);
}
inline ::lambda_sparse::xySample* xySamples::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:lambda_sparse.xySamples.samples)
  return samples_.Mutable(index);
}
inline ::lambda_sparse::xySample* xySamples::add_samples() {
  // @@protoc_insertion_point(field_add:lambda_sparse.xySamples.samples)
  return samples_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::lambda_sparse::xySample >*
xySamples::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:lambda_sparse.xySamples.samples)
  return &samples_;
}
inline const ::google::protobuf::RepeatedPtrField< ::lambda_sparse::xySample >&
xySamples::samples() const {
  // @@protoc_insertion_point(field_list:lambda_sparse.xySamples.samples)
  return samples_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace lambda_sparse

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_xysample_2eproto__INCLUDED