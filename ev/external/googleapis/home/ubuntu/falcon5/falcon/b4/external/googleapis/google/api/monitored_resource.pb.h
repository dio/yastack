// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitored_resource.proto

#ifndef PROTOBUF_google_2fapi_2fmonitored_5fresource_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fmonitored_5fresource_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/label.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fapi_2fmonitored_5fresource_2eproto {
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
void InitDefaultsMonitoredResourceDescriptorImpl();
void InitDefaultsMonitoredResourceDescriptor();
void InitDefaultsMonitoredResource_LabelsEntry_DoNotUseImpl();
void InitDefaultsMonitoredResource_LabelsEntry_DoNotUse();
void InitDefaultsMonitoredResourceImpl();
void InitDefaultsMonitoredResource();
inline void InitDefaults() {
  InitDefaultsMonitoredResourceDescriptor();
  InitDefaultsMonitoredResource_LabelsEntry_DoNotUse();
  InitDefaultsMonitoredResource();
}
}  // namespace protobuf_google_2fapi_2fmonitored_5fresource_2eproto
namespace google {
namespace api {
class MonitoredResource;
class MonitoredResourceDefaultTypeInternal;
extern MonitoredResourceDefaultTypeInternal _MonitoredResource_default_instance_;
class MonitoredResourceDescriptor;
class MonitoredResourceDescriptorDefaultTypeInternal;
extern MonitoredResourceDescriptorDefaultTypeInternal _MonitoredResourceDescriptor_default_instance_;
class MonitoredResource_LabelsEntry_DoNotUse;
class MonitoredResource_LabelsEntry_DoNotUseDefaultTypeInternal;
extern MonitoredResource_LabelsEntry_DoNotUseDefaultTypeInternal _MonitoredResource_LabelsEntry_DoNotUse_default_instance_;
}  // namespace api
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class MonitoredResourceDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.MonitoredResourceDescriptor) */ {
 public:
  MonitoredResourceDescriptor();
  virtual ~MonitoredResourceDescriptor();

  MonitoredResourceDescriptor(const MonitoredResourceDescriptor& from);

  inline MonitoredResourceDescriptor& operator=(const MonitoredResourceDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MonitoredResourceDescriptor(MonitoredResourceDescriptor&& from) noexcept
    : MonitoredResourceDescriptor() {
    *this = ::std::move(from);
  }

  inline MonitoredResourceDescriptor& operator=(MonitoredResourceDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const MonitoredResourceDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MonitoredResourceDescriptor* internal_default_instance() {
    return reinterpret_cast<const MonitoredResourceDescriptor*>(
               &_MonitoredResourceDescriptor_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(MonitoredResourceDescriptor* other);
  void Swap(MonitoredResourceDescriptor* other);
  friend void swap(MonitoredResourceDescriptor& a, MonitoredResourceDescriptor& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MonitoredResourceDescriptor* New() const PROTOBUF_FINAL { return New(NULL); }

  MonitoredResourceDescriptor* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MonitoredResourceDescriptor& from);
  void MergeFrom(const MonitoredResourceDescriptor& from);
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
  void InternalSwap(MonitoredResourceDescriptor* other);
  protected:
  explicit MonitoredResourceDescriptor(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.api.LabelDescriptor labels = 4;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 4;
  const ::google::api::LabelDescriptor& labels(int index) const;
  ::google::api::LabelDescriptor* mutable_labels(int index);
  ::google::api::LabelDescriptor* add_labels();
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
      mutable_labels();
  const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
      labels() const;

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_type();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_type(
      ::std::string* type);

  // string display_name = 2;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 2;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_display_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_display_name(
      ::std::string* display_name);

  // string description = 3;
  void clear_description();
  static const int kDescriptionFieldNumber = 3;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_description();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_description(
      ::std::string* description);

  // string name = 5;
  void clear_name();
  static const int kNameFieldNumber = 5;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // @@protoc_insertion_point(class_scope:google.api.MonitoredResourceDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor > labels_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fapi_2fmonitored_5fresource_2eproto::TableStruct;
  friend void ::protobuf_google_2fapi_2fmonitored_5fresource_2eproto::InitDefaultsMonitoredResourceDescriptorImpl();
};
// -------------------------------------------------------------------

class MonitoredResource_LabelsEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<MonitoredResource_LabelsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<MonitoredResource_LabelsEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  MonitoredResource_LabelsEntry_DoNotUse();
  MonitoredResource_LabelsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const MonitoredResource_LabelsEntry_DoNotUse& other);
  static const MonitoredResource_LabelsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const MonitoredResource_LabelsEntry_DoNotUse*>(&_MonitoredResource_LabelsEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class MonitoredResource : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.MonitoredResource) */ {
 public:
  MonitoredResource();
  virtual ~MonitoredResource();

  MonitoredResource(const MonitoredResource& from);

  inline MonitoredResource& operator=(const MonitoredResource& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MonitoredResource(MonitoredResource&& from) noexcept
    : MonitoredResource() {
    *this = ::std::move(from);
  }

  inline MonitoredResource& operator=(MonitoredResource&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const MonitoredResource& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MonitoredResource* internal_default_instance() {
    return reinterpret_cast<const MonitoredResource*>(
               &_MonitoredResource_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(MonitoredResource* other);
  void Swap(MonitoredResource* other);
  friend void swap(MonitoredResource& a, MonitoredResource& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MonitoredResource* New() const PROTOBUF_FINAL { return New(NULL); }

  MonitoredResource* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MonitoredResource& from);
  void MergeFrom(const MonitoredResource& from);
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
  void InternalSwap(MonitoredResource* other);
  protected:
  explicit MonitoredResource(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> labels = 2;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      labels() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_labels();

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_type();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_type(
      ::std::string* type);

  // @@protoc_insertion_point(class_scope:google.api.MonitoredResource)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::MapField<
      MonitoredResource_LabelsEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > labels_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fapi_2fmonitored_5fresource_2eproto::TableStruct;
  friend void ::protobuf_google_2fapi_2fmonitored_5fresource_2eproto::InitDefaultsMonitoredResourceImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MonitoredResourceDescriptor

// string name = 5;
inline void MonitoredResourceDescriptor::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MonitoredResourceDescriptor::name() const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResourceDescriptor.name)
  return name_.Get();
}
inline void MonitoredResourceDescriptor::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.MonitoredResourceDescriptor.name)
}
#if LANG_CXX11
inline void MonitoredResourceDescriptor::set_name(::std::string&& value) {
  
  name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.MonitoredResourceDescriptor.name)
}
#endif
inline void MonitoredResourceDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.MonitoredResourceDescriptor.name)
}
inline void MonitoredResourceDescriptor::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.MonitoredResourceDescriptor.name)
}
inline ::std::string* MonitoredResourceDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResourceDescriptor.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MonitoredResourceDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:google.api.MonitoredResourceDescriptor.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.MonitoredResourceDescriptor.name)
}
inline ::std::string* MonitoredResourceDescriptor::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.MonitoredResourceDescriptor.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.MonitoredResourceDescriptor.name)
}

// string type = 1;
inline void MonitoredResourceDescriptor::clear_type() {
  type_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MonitoredResourceDescriptor::type() const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResourceDescriptor.type)
  return type_.Get();
}
inline void MonitoredResourceDescriptor::set_type(const ::std::string& value) {
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.MonitoredResourceDescriptor.type)
}
#if LANG_CXX11
inline void MonitoredResourceDescriptor::set_type(::std::string&& value) {
  
  type_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.MonitoredResourceDescriptor.type)
}
#endif
inline void MonitoredResourceDescriptor::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.MonitoredResourceDescriptor.type)
}
inline void MonitoredResourceDescriptor::set_type(const char* value,
    size_t size) {
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.MonitoredResourceDescriptor.type)
}
inline ::std::string* MonitoredResourceDescriptor::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResourceDescriptor.type)
  return type_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MonitoredResourceDescriptor::release_type() {
  // @@protoc_insertion_point(field_release:google.api.MonitoredResourceDescriptor.type)
  
  return type_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.MonitoredResourceDescriptor.type)
}
inline ::std::string* MonitoredResourceDescriptor::unsafe_arena_release_type() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.MonitoredResourceDescriptor.type)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return type_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::unsafe_arena_set_allocated_type(
    ::std::string* type) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (type != NULL) {
    
  } else {
    
  }
  type_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      type, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.MonitoredResourceDescriptor.type)
}

// string display_name = 2;
inline void MonitoredResourceDescriptor::clear_display_name() {
  display_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MonitoredResourceDescriptor::display_name() const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResourceDescriptor.display_name)
  return display_name_.Get();
}
inline void MonitoredResourceDescriptor::set_display_name(const ::std::string& value) {
  
  display_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.MonitoredResourceDescriptor.display_name)
}
#if LANG_CXX11
inline void MonitoredResourceDescriptor::set_display_name(::std::string&& value) {
  
  display_name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.MonitoredResourceDescriptor.display_name)
}
#endif
inline void MonitoredResourceDescriptor::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.MonitoredResourceDescriptor.display_name)
}
inline void MonitoredResourceDescriptor::set_display_name(const char* value,
    size_t size) {
  
  display_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.MonitoredResourceDescriptor.display_name)
}
inline ::std::string* MonitoredResourceDescriptor::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResourceDescriptor.display_name)
  return display_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MonitoredResourceDescriptor::release_display_name() {
  // @@protoc_insertion_point(field_release:google.api.MonitoredResourceDescriptor.display_name)
  
  return display_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.MonitoredResourceDescriptor.display_name)
}
inline ::std::string* MonitoredResourceDescriptor::unsafe_arena_release_display_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.MonitoredResourceDescriptor.display_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return display_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::unsafe_arena_set_allocated_display_name(
    ::std::string* display_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      display_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.MonitoredResourceDescriptor.display_name)
}

// string description = 3;
inline void MonitoredResourceDescriptor::clear_description() {
  description_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MonitoredResourceDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResourceDescriptor.description)
  return description_.Get();
}
inline void MonitoredResourceDescriptor::set_description(const ::std::string& value) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.MonitoredResourceDescriptor.description)
}
#if LANG_CXX11
inline void MonitoredResourceDescriptor::set_description(::std::string&& value) {
  
  description_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.MonitoredResourceDescriptor.description)
}
#endif
inline void MonitoredResourceDescriptor::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.MonitoredResourceDescriptor.description)
}
inline void MonitoredResourceDescriptor::set_description(const char* value,
    size_t size) {
  
  description_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.MonitoredResourceDescriptor.description)
}
inline ::std::string* MonitoredResourceDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResourceDescriptor.description)
  return description_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MonitoredResourceDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.MonitoredResourceDescriptor.description)
  
  return description_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.MonitoredResourceDescriptor.description)
}
inline ::std::string* MonitoredResourceDescriptor::unsafe_arena_release_description() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.MonitoredResourceDescriptor.description)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return description_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MonitoredResourceDescriptor::unsafe_arena_set_allocated_description(
    ::std::string* description) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (description != NULL) {
    
  } else {
    
  }
  description_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      description, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.MonitoredResourceDescriptor.description)
}

// repeated .google.api.LabelDescriptor labels = 4;
inline int MonitoredResourceDescriptor::labels_size() const {
  return labels_.size();
}
inline const ::google::api::LabelDescriptor& MonitoredResourceDescriptor::labels(int index) const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResourceDescriptor.labels)
  return labels_.Get(index);
}
inline ::google::api::LabelDescriptor* MonitoredResourceDescriptor::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResourceDescriptor.labels)
  return labels_.Mutable(index);
}
inline ::google::api::LabelDescriptor* MonitoredResourceDescriptor::add_labels() {
  // @@protoc_insertion_point(field_add:google.api.MonitoredResourceDescriptor.labels)
  return labels_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
MonitoredResourceDescriptor::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:google.api.MonitoredResourceDescriptor.labels)
  return &labels_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
MonitoredResourceDescriptor::labels() const {
  // @@protoc_insertion_point(field_list:google.api.MonitoredResourceDescriptor.labels)
  return labels_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// MonitoredResource

// string type = 1;
inline void MonitoredResource::clear_type() {
  type_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MonitoredResource::type() const {
  // @@protoc_insertion_point(field_get:google.api.MonitoredResource.type)
  return type_.Get();
}
inline void MonitoredResource::set_type(const ::std::string& value) {
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.api.MonitoredResource.type)
}
#if LANG_CXX11
inline void MonitoredResource::set_type(::std::string&& value) {
  
  type_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.api.MonitoredResource.type)
}
#endif
inline void MonitoredResource::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.api.MonitoredResource.type)
}
inline void MonitoredResource::set_type(const char* value,
    size_t size) {
  
  type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.api.MonitoredResource.type)
}
inline ::std::string* MonitoredResource::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:google.api.MonitoredResource.type)
  return type_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MonitoredResource::release_type() {
  // @@protoc_insertion_point(field_release:google.api.MonitoredResource.type)
  
  return type_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void MonitoredResource::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.api.MonitoredResource.type)
}
inline ::std::string* MonitoredResource::unsafe_arena_release_type() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.api.MonitoredResource.type)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return type_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MonitoredResource::unsafe_arena_set_allocated_type(
    ::std::string* type) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (type != NULL) {
    
  } else {
    
  }
  type_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      type, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.MonitoredResource.type)
}

// map<string, string> labels = 2;
inline int MonitoredResource::labels_size() const {
  return labels_.size();
}
inline void MonitoredResource::clear_labels() {
  labels_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MonitoredResource::labels() const {
  // @@protoc_insertion_point(field_map:google.api.MonitoredResource.labels)
  return labels_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MonitoredResource::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_map:google.api.MonitoredResource.labels)
  return labels_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fmonitored_5fresource_2eproto__INCLUDED
