// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/usage.proto

#ifndef PROTOBUF_google_2fapi_2fusage_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fusage_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fapi_2fusage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsUsageImpl();
void InitDefaultsUsage();
void InitDefaultsUsageRuleImpl();
void InitDefaultsUsageRule();
inline void InitDefaults() {
  InitDefaultsUsage();
  InitDefaultsUsageRule();
}
}  // namespace protobuf_google_2fapi_2fusage_2eproto
namespace google {
namespace api {
class Usage;
class UsageDefaultTypeInternal;
extern UsageDefaultTypeInternal _Usage_default_instance_;
class UsageRule;
class UsageRuleDefaultTypeInternal;
extern UsageRuleDefaultTypeInternal _UsageRule_default_instance_;
}  // namespace api
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class Usage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Usage) */ {
 public:
  Usage();
  virtual ~Usage();

  Usage(const Usage& from);

  inline Usage& operator=(const Usage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Usage(Usage&& from) noexcept
    : Usage() {
    *this = ::std::move(from);
  }

  inline Usage& operator=(Usage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Usage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Usage* internal_default_instance() {
    return reinterpret_cast<const Usage*>(
               &_Usage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Usage* other);
  friend void swap(Usage& a, Usage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Usage* New() const PROTOBUF_FINAL { return New(NULL); }

  Usage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Usage& from);
  void MergeFrom(const Usage& from);
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
  void InternalSwap(Usage* other);
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

  // repeated string requirements = 1;
  int requirements_size() const;
  void clear_requirements();
  static const int kRequirementsFieldNumber = 1;
  const ::std::string& requirements(int index) const;
  ::std::string* mutable_requirements(int index);
  void set_requirements(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_requirements(int index, ::std::string&& value);
  #endif
  void set_requirements(int index, const char* value);
  void set_requirements(int index, const char* value, size_t size);
  ::std::string* add_requirements();
  void add_requirements(const ::std::string& value);
  #if LANG_CXX11
  void add_requirements(::std::string&& value);
  #endif
  void add_requirements(const char* value);
  void add_requirements(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& requirements() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_requirements();

  // repeated .google.api.UsageRule rules = 6;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 6;
  const ::google::api::UsageRule& rules(int index) const;
  ::google::api::UsageRule* mutable_rules(int index);
  ::google::api::UsageRule* add_rules();
  ::google::protobuf::RepeatedPtrField< ::google::api::UsageRule >*
      mutable_rules();
  const ::google::protobuf::RepeatedPtrField< ::google::api::UsageRule >&
      rules() const;

  // string producer_notification_channel = 7;
  void clear_producer_notification_channel();
  static const int kProducerNotificationChannelFieldNumber = 7;
  const ::std::string& producer_notification_channel() const;
  void set_producer_notification_channel(const ::std::string& value);
  #if LANG_CXX11
  void set_producer_notification_channel(::std::string&& value);
  #endif
  void set_producer_notification_channel(const char* value);
  void set_producer_notification_channel(const char* value, size_t size);
  ::std::string* mutable_producer_notification_channel();
  ::std::string* release_producer_notification_channel();
  void set_allocated_producer_notification_channel(::std::string* producer_notification_channel);

  // @@protoc_insertion_point(class_scope:google.api.Usage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> requirements_;
  ::google::protobuf::RepeatedPtrField< ::google::api::UsageRule > rules_;
  ::google::protobuf::internal::ArenaStringPtr producer_notification_channel_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fapi_2fusage_2eproto::TableStruct;
  friend void ::protobuf_google_2fapi_2fusage_2eproto::InitDefaultsUsageImpl();
};
// -------------------------------------------------------------------

class UsageRule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.UsageRule) */ {
 public:
  UsageRule();
  virtual ~UsageRule();

  UsageRule(const UsageRule& from);

  inline UsageRule& operator=(const UsageRule& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UsageRule(UsageRule&& from) noexcept
    : UsageRule() {
    *this = ::std::move(from);
  }

  inline UsageRule& operator=(UsageRule&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UsageRule& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UsageRule* internal_default_instance() {
    return reinterpret_cast<const UsageRule*>(
               &_UsageRule_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(UsageRule* other);
  friend void swap(UsageRule& a, UsageRule& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UsageRule* New() const PROTOBUF_FINAL { return New(NULL); }

  UsageRule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UsageRule& from);
  void MergeFrom(const UsageRule& from);
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
  void InternalSwap(UsageRule* other);
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

  // string selector = 1;
  void clear_selector();
  static const int kSelectorFieldNumber = 1;
  const ::std::string& selector() const;
  void set_selector(const ::std::string& value);
  #if LANG_CXX11
  void set_selector(::std::string&& value);
  #endif
  void set_selector(const char* value);
  void set_selector(const char* value, size_t size);
  ::std::string* mutable_selector();
  ::std::string* release_selector();
  void set_allocated_selector(::std::string* selector);

  // bool allow_unregistered_calls = 2;
  void clear_allow_unregistered_calls();
  static const int kAllowUnregisteredCallsFieldNumber = 2;
  bool allow_unregistered_calls() const;
  void set_allow_unregistered_calls(bool value);

  // bool skip_service_control = 3;
  void clear_skip_service_control();
  static const int kSkipServiceControlFieldNumber = 3;
  bool skip_service_control() const;
  void set_skip_service_control(bool value);

  // @@protoc_insertion_point(class_scope:google.api.UsageRule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr selector_;
  bool allow_unregistered_calls_;
  bool skip_service_control_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fapi_2fusage_2eproto::TableStruct;
  friend void ::protobuf_google_2fapi_2fusage_2eproto::InitDefaultsUsageRuleImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Usage

// repeated string requirements = 1;
inline int Usage::requirements_size() const {
  return requirements_.size();
}
inline void Usage::clear_requirements() {
  requirements_.Clear();
}
inline const ::std::string& Usage::requirements(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Usage.requirements)
  return requirements_.Get(index);
}
inline ::std::string* Usage::mutable_requirements(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Usage.requirements)
  return requirements_.Mutable(index);
}
inline void Usage::set_requirements(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Usage.requirements)
  requirements_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Usage::set_requirements(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Usage.requirements)
  requirements_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Usage::set_requirements(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  requirements_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Usage.requirements)
}
inline void Usage::set_requirements(int index, const char* value, size_t size) {
  requirements_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Usage.requirements)
}
inline ::std::string* Usage::add_requirements() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Usage.requirements)
  return requirements_.Add();
}
inline void Usage::add_requirements(const ::std::string& value) {
  requirements_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Usage.requirements)
}
#if LANG_CXX11
inline void Usage::add_requirements(::std::string&& value) {
  requirements_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Usage.requirements)
}
#endif
inline void Usage::add_requirements(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  requirements_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Usage.requirements)
}
inline void Usage::add_requirements(const char* value, size_t size) {
  requirements_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Usage.requirements)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Usage::requirements() const {
  // @@protoc_insertion_point(field_list:google.api.Usage.requirements)
  return requirements_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Usage::mutable_requirements() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Usage.requirements)
  return &requirements_;
}

// repeated .google.api.UsageRule rules = 6;
inline int Usage::rules_size() const {
  return rules_.size();
}
inline void Usage::clear_rules() {
  rules_.Clear();
}
inline const ::google::api::UsageRule& Usage::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Usage.rules)
  return rules_.Get(index);
}
inline ::google::api::UsageRule* Usage::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Usage.rules)
  return rules_.Mutable(index);
}
inline ::google::api::UsageRule* Usage::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.Usage.rules)
  return rules_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::UsageRule >*
Usage::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Usage.rules)
  return &rules_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::UsageRule >&
Usage::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Usage.rules)
  return rules_;
}

// string producer_notification_channel = 7;
inline void Usage::clear_producer_notification_channel() {
  producer_notification_channel_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Usage::producer_notification_channel() const {
  // @@protoc_insertion_point(field_get:google.api.Usage.producer_notification_channel)
  return producer_notification_channel_.GetNoArena();
}
inline void Usage::set_producer_notification_channel(const ::std::string& value) {
  
  producer_notification_channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Usage.producer_notification_channel)
}
#if LANG_CXX11
inline void Usage::set_producer_notification_channel(::std::string&& value) {
  
  producer_notification_channel_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Usage.producer_notification_channel)
}
#endif
inline void Usage::set_producer_notification_channel(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  producer_notification_channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Usage.producer_notification_channel)
}
inline void Usage::set_producer_notification_channel(const char* value, size_t size) {
  
  producer_notification_channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Usage.producer_notification_channel)
}
inline ::std::string* Usage::mutable_producer_notification_channel() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Usage.producer_notification_channel)
  return producer_notification_channel_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Usage::release_producer_notification_channel() {
  // @@protoc_insertion_point(field_release:google.api.Usage.producer_notification_channel)
  
  return producer_notification_channel_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Usage::set_allocated_producer_notification_channel(::std::string* producer_notification_channel) {
  if (producer_notification_channel != NULL) {
    
  } else {
    
  }
  producer_notification_channel_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), producer_notification_channel);
  // @@protoc_insertion_point(field_set_allocated:google.api.Usage.producer_notification_channel)
}

// -------------------------------------------------------------------

// UsageRule

// string selector = 1;
inline void UsageRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UsageRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.selector)
  return selector_.GetNoArena();
}
inline void UsageRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.UsageRule.selector)
}
#if LANG_CXX11
inline void UsageRule::set_selector(::std::string&& value) {
  
  selector_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.UsageRule.selector)
}
#endif
inline void UsageRule::set_selector(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.UsageRule.selector)
}
inline void UsageRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.UsageRule.selector)
}
inline ::std::string* UsageRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.UsageRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UsageRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.UsageRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UsageRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.UsageRule.selector)
}

// bool allow_unregistered_calls = 2;
inline void UsageRule::clear_allow_unregistered_calls() {
  allow_unregistered_calls_ = false;
}
inline bool UsageRule::allow_unregistered_calls() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.allow_unregistered_calls)
  return allow_unregistered_calls_;
}
inline void UsageRule::set_allow_unregistered_calls(bool value) {
  
  allow_unregistered_calls_ = value;
  // @@protoc_insertion_point(field_set:google.api.UsageRule.allow_unregistered_calls)
}

// bool skip_service_control = 3;
inline void UsageRule::clear_skip_service_control() {
  skip_service_control_ = false;
}
inline bool UsageRule::skip_service_control() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.skip_service_control)
  return skip_service_control_;
}
inline void UsageRule::set_skip_service_control(bool value) {
  
  skip_service_control_ = value;
  // @@protoc_insertion_point(field_set:google.api.UsageRule.skip_service_control)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fusage_2eproto__INCLUDED
