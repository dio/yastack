// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/position.proto

#ifndef PROTOBUF_google_2fgenomics_2fv1_2fposition_2eproto__INCLUDED
#define PROTOBUF_google_2fgenomics_2fv1_2fposition_2eproto__INCLUDED

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

namespace protobuf_google_2fgenomics_2fv1_2fposition_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPositionImpl();
void InitDefaultsPosition();
inline void InitDefaults() {
  InitDefaultsPosition();
}
}  // namespace protobuf_google_2fgenomics_2fv1_2fposition_2eproto
namespace google {
namespace genomics {
namespace v1 {
class Position;
class PositionDefaultTypeInternal;
extern PositionDefaultTypeInternal _Position_default_instance_;
}  // namespace v1
}  // namespace genomics
}  // namespace google
namespace google {
namespace genomics {
namespace v1 {

// ===================================================================

class Position : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.genomics.v1.Position) */ {
 public:
  Position();
  virtual ~Position();

  Position(const Position& from);

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Position(Position&& from) noexcept
    : Position() {
    *this = ::std::move(from);
  }

  inline Position& operator=(Position&& from) noexcept {
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
  static const Position& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Position* internal_default_instance() {
    return reinterpret_cast<const Position*>(
               &_Position_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(Position* other);
  void Swap(Position* other);
  friend void swap(Position& a, Position& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Position* New() const PROTOBUF_FINAL { return New(NULL); }

  Position* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Position& from);
  void MergeFrom(const Position& from);
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
  void InternalSwap(Position* other);
  protected:
  explicit Position(::google::protobuf::Arena* arena);
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

  // string reference_name = 1;
  void clear_reference_name();
  static const int kReferenceNameFieldNumber = 1;
  const ::std::string& reference_name() const;
  void set_reference_name(const ::std::string& value);
  #if LANG_CXX11
  void set_reference_name(::std::string&& value);
  #endif
  void set_reference_name(const char* value);
  void set_reference_name(const char* value, size_t size);
  ::std::string* mutable_reference_name();
  ::std::string* release_reference_name();
  void set_allocated_reference_name(::std::string* reference_name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_reference_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_reference_name(
      ::std::string* reference_name);

  // int64 position = 2;
  void clear_position();
  static const int kPositionFieldNumber = 2;
  ::google::protobuf::int64 position() const;
  void set_position(::google::protobuf::int64 value);

  // bool reverse_strand = 3;
  void clear_reverse_strand();
  static const int kReverseStrandFieldNumber = 3;
  bool reverse_strand() const;
  void set_reverse_strand(bool value);

  // @@protoc_insertion_point(class_scope:google.genomics.v1.Position)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr reference_name_;
  ::google::protobuf::int64 position_;
  bool reverse_strand_;
  mutable int _cached_size_;
  friend struct ::protobuf_google_2fgenomics_2fv1_2fposition_2eproto::TableStruct;
  friend void ::protobuf_google_2fgenomics_2fv1_2fposition_2eproto::InitDefaultsPositionImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Position

// string reference_name = 1;
inline void Position::clear_reference_name() {
  reference_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& Position::reference_name() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.reference_name)
  return reference_name_.Get();
}
inline void Position::set_reference_name(const ::std::string& value) {
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.reference_name)
}
#if LANG_CXX11
inline void Position::set_reference_name(::std::string&& value) {
  
  reference_name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.Position.reference_name)
}
#endif
inline void Position::set_reference_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.Position.reference_name)
}
inline void Position::set_reference_name(const char* value,
    size_t size) {
  
  reference_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.Position.reference_name)
}
inline ::std::string* Position::mutable_reference_name() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.Position.reference_name)
  return reference_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Position::release_reference_name() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.Position.reference_name)
  
  return reference_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void Position::set_allocated_reference_name(::std::string* reference_name) {
  if (reference_name != NULL) {
    
  } else {
    
  }
  reference_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.Position.reference_name)
}
inline ::std::string* Position::unsafe_arena_release_reference_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.Position.reference_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return reference_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void Position::unsafe_arena_set_allocated_reference_name(
    ::std::string* reference_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (reference_name != NULL) {
    
  } else {
    
  }
  reference_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      reference_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.Position.reference_name)
}

// int64 position = 2;
inline void Position::clear_position() {
  position_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Position::position() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.position)
  return position_;
}
inline void Position::set_position(::google::protobuf::int64 value) {
  
  position_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.position)
}

// bool reverse_strand = 3;
inline void Position::clear_reverse_strand() {
  reverse_strand_ = false;
}
inline bool Position::reverse_strand() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.Position.reverse_strand)
  return reverse_strand_;
}
inline void Position::set_reverse_strand(bool value) {
  
  reverse_strand_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.Position.reverse_strand)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace genomics
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fgenomics_2fv1_2fposition_2eproto__INCLUDED
