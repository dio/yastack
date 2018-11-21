// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/keys.proto

#include "google/spanner/v1/keys.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace google {
namespace spanner {
namespace v1 {
class KeyRangeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<KeyRange>
      _instance;
  const ::google::protobuf::ListValue* start_closed_;
  const ::google::protobuf::ListValue* start_open_;
  const ::google::protobuf::ListValue* end_closed_;
  const ::google::protobuf::ListValue* end_open_;
} _KeyRange_default_instance_;
class KeySetDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<KeySet>
      _instance;
} _KeySet_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google
namespace protobuf_google_2fspanner_2fv1_2fkeys_2eproto {
void InitDefaultsKeyRangeImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2fstruct_2eproto::InitDefaultsListValue();
  {
    void* ptr = &::google::spanner::v1::_KeyRange_default_instance_;
    new (ptr) ::google::spanner::v1::KeyRange();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::spanner::v1::KeyRange::InitAsDefaultInstance();
}

void InitDefaultsKeyRange() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsKeyRangeImpl);
}

void InitDefaultsKeySetImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2fstruct_2eproto::InitDefaultsListValue();
  protobuf_google_2fspanner_2fv1_2fkeys_2eproto::InitDefaultsKeyRange();
  {
    void* ptr = &::google::spanner::v1::_KeySet_default_instance_;
    new (ptr) ::google::spanner::v1::KeySet();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::spanner::v1::KeySet::InitAsDefaultInstance();
}

void InitDefaultsKeySet() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsKeySetImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeyRange, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeyRange, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::google::spanner::v1::KeyRangeDefaultTypeInternal, start_closed_),
  offsetof(::google::spanner::v1::KeyRangeDefaultTypeInternal, start_open_),
  offsetof(::google::spanner::v1::KeyRangeDefaultTypeInternal, end_closed_),
  offsetof(::google::spanner::v1::KeyRangeDefaultTypeInternal, end_open_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeyRange, start_key_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeyRange, end_key_type_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeySet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeySet, keys_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeySet, ranges_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::spanner::v1::KeySet, all_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::spanner::v1::KeyRange)},
  { 11, -1, sizeof(::google::spanner::v1::KeySet)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::spanner::v1::_KeyRange_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::spanner::v1::_KeySet_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/spanner/v1/keys.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034google/spanner/v1/keys.proto\022\021google.s"
      "panner.v1\032\034google/api/annotations.proto\032"
      "\034google/protobuf/struct.proto\"\364\001\n\010KeyRan"
      "ge\0222\n\014start_closed\030\001 \001(\0132\032.google.protob"
      "uf.ListValueH\000\0220\n\nstart_open\030\002 \001(\0132\032.goo"
      "gle.protobuf.ListValueH\000\0220\n\nend_closed\030\003"
      " \001(\0132\032.google.protobuf.ListValueH\001\022.\n\010en"
      "d_open\030\004 \001(\0132\032.google.protobuf.ListValue"
      "H\001B\020\n\016start_key_typeB\016\n\014end_key_type\"l\n\006"
      "KeySet\022(\n\004keys\030\001 \003(\0132\032.google.protobuf.L"
      "istValue\022+\n\006ranges\030\002 \003(\0132\033.google.spanne"
      "r.v1.KeyRange\022\013\n\003all\030\003 \001(\010Bx\n\025com.google"
      ".spanner.v1B\tKeysProtoP\001Z8google.golang."
      "org/genproto/googleapis/spanner/v1;spann"
      "er\252\002\027Google.Cloud.Spanner.V1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 596);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/spanner/v1/keys.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fstruct_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fspanner_2fv1_2fkeys_2eproto
namespace google {
namespace spanner {
namespace v1 {

// ===================================================================

void KeyRange::InitAsDefaultInstance() {
  ::google::spanner::v1::_KeyRange_default_instance_.start_closed_ = const_cast< ::google::protobuf::ListValue*>(
      ::google::protobuf::ListValue::internal_default_instance());
  ::google::spanner::v1::_KeyRange_default_instance_.start_open_ = const_cast< ::google::protobuf::ListValue*>(
      ::google::protobuf::ListValue::internal_default_instance());
  ::google::spanner::v1::_KeyRange_default_instance_.end_closed_ = const_cast< ::google::protobuf::ListValue*>(
      ::google::protobuf::ListValue::internal_default_instance());
  ::google::spanner::v1::_KeyRange_default_instance_.end_open_ = const_cast< ::google::protobuf::ListValue*>(
      ::google::protobuf::ListValue::internal_default_instance());
}
void KeyRange::set_allocated_start_closed(::google::protobuf::ListValue* start_closed) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_start_key_type();
  if (start_closed) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(start_closed)->GetArena();
    if (message_arena != submessage_arena) {
      start_closed = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, start_closed, submessage_arena);
    }
    set_has_start_closed();
    start_key_type_.start_closed_ = start_closed;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.start_closed)
}
void KeyRange::clear_start_closed() {
  if (has_start_closed()) {
    delete start_key_type_.start_closed_;
    clear_has_start_key_type();
  }
}
void KeyRange::set_allocated_start_open(::google::protobuf::ListValue* start_open) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_start_key_type();
  if (start_open) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(start_open)->GetArena();
    if (message_arena != submessage_arena) {
      start_open = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, start_open, submessage_arena);
    }
    set_has_start_open();
    start_key_type_.start_open_ = start_open;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.start_open)
}
void KeyRange::clear_start_open() {
  if (has_start_open()) {
    delete start_key_type_.start_open_;
    clear_has_start_key_type();
  }
}
void KeyRange::set_allocated_end_closed(::google::protobuf::ListValue* end_closed) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_end_key_type();
  if (end_closed) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(end_closed)->GetArena();
    if (message_arena != submessage_arena) {
      end_closed = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, end_closed, submessage_arena);
    }
    set_has_end_closed();
    end_key_type_.end_closed_ = end_closed;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.end_closed)
}
void KeyRange::clear_end_closed() {
  if (has_end_closed()) {
    delete end_key_type_.end_closed_;
    clear_has_end_key_type();
  }
}
void KeyRange::set_allocated_end_open(::google::protobuf::ListValue* end_open) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_end_key_type();
  if (end_open) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(end_open)->GetArena();
    if (message_arena != submessage_arena) {
      end_open = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, end_open, submessage_arena);
    }
    set_has_end_open();
    end_key_type_.end_open_ = end_open;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.end_open)
}
void KeyRange::clear_end_open() {
  if (has_end_open()) {
    delete end_key_type_.end_open_;
    clear_has_end_key_type();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeyRange::kStartClosedFieldNumber;
const int KeyRange::kStartOpenFieldNumber;
const int KeyRange::kEndClosedFieldNumber;
const int KeyRange::kEndOpenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeyRange::KeyRange()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::InitDefaultsKeyRange();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.spanner.v1.KeyRange)
}
KeyRange::KeyRange(const KeyRange& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_start_key_type();
  switch (from.start_key_type_case()) {
    case kStartClosed: {
      mutable_start_closed()->::google::protobuf::ListValue::MergeFrom(from.start_closed());
      break;
    }
    case kStartOpen: {
      mutable_start_open()->::google::protobuf::ListValue::MergeFrom(from.start_open());
      break;
    }
    case START_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  clear_has_end_key_type();
  switch (from.end_key_type_case()) {
    case kEndClosed: {
      mutable_end_closed()->::google::protobuf::ListValue::MergeFrom(from.end_closed());
      break;
    }
    case kEndOpen: {
      mutable_end_open()->::google::protobuf::ListValue::MergeFrom(from.end_open());
      break;
    }
    case END_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:google.spanner.v1.KeyRange)
}

void KeyRange::SharedCtor() {
  clear_has_start_key_type();
  clear_has_end_key_type();
  _cached_size_ = 0;
}

KeyRange::~KeyRange() {
  // @@protoc_insertion_point(destructor:google.spanner.v1.KeyRange)
  SharedDtor();
}

void KeyRange::SharedDtor() {
  if (has_start_key_type()) {
    clear_start_key_type();
  }
  if (has_end_key_type()) {
    clear_end_key_type();
  }
}

void KeyRange::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KeyRange::descriptor() {
  ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const KeyRange& KeyRange::default_instance() {
  ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::InitDefaultsKeyRange();
  return *internal_default_instance();
}

KeyRange* KeyRange::New(::google::protobuf::Arena* arena) const {
  KeyRange* n = new KeyRange;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KeyRange::clear_start_key_type() {
// @@protoc_insertion_point(one_of_clear_start:google.spanner.v1.KeyRange)
  switch (start_key_type_case()) {
    case kStartClosed: {
      delete start_key_type_.start_closed_;
      break;
    }
    case kStartOpen: {
      delete start_key_type_.start_open_;
      break;
    }
    case START_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = START_KEY_TYPE_NOT_SET;
}

void KeyRange::clear_end_key_type() {
// @@protoc_insertion_point(one_of_clear_start:google.spanner.v1.KeyRange)
  switch (end_key_type_case()) {
    case kEndClosed: {
      delete end_key_type_.end_closed_;
      break;
    }
    case kEndOpen: {
      delete end_key_type_.end_open_;
      break;
    }
    case END_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[1] = END_KEY_TYPE_NOT_SET;
}


void KeyRange::Clear() {
// @@protoc_insertion_point(message_clear_start:google.spanner.v1.KeyRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_start_key_type();
  clear_end_key_type();
  _internal_metadata_.Clear();
}

bool KeyRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.spanner.v1.KeyRange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.ListValue start_closed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start_closed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.ListValue start_open = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start_open()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.ListValue end_closed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_closed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.ListValue end_open = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_open()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.spanner.v1.KeyRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.spanner.v1.KeyRange)
  return false;
#undef DO_
}

void KeyRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.spanner.v1.KeyRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.ListValue start_closed = 1;
  if (has_start_closed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *start_key_type_.start_closed_, output);
  }

  // .google.protobuf.ListValue start_open = 2;
  if (has_start_open()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *start_key_type_.start_open_, output);
  }

  // .google.protobuf.ListValue end_closed = 3;
  if (has_end_closed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *end_key_type_.end_closed_, output);
  }

  // .google.protobuf.ListValue end_open = 4;
  if (has_end_open()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *end_key_type_.end_open_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.spanner.v1.KeyRange)
}

::google::protobuf::uint8* KeyRange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.spanner.v1.KeyRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.ListValue start_closed = 1;
  if (has_start_closed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *start_key_type_.start_closed_, deterministic, target);
  }

  // .google.protobuf.ListValue start_open = 2;
  if (has_start_open()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *start_key_type_.start_open_, deterministic, target);
  }

  // .google.protobuf.ListValue end_closed = 3;
  if (has_end_closed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, *end_key_type_.end_closed_, deterministic, target);
  }

  // .google.protobuf.ListValue end_open = 4;
  if (has_end_open()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, *end_key_type_.end_open_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.spanner.v1.KeyRange)
  return target;
}

size_t KeyRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.spanner.v1.KeyRange)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  switch (start_key_type_case()) {
    // .google.protobuf.ListValue start_closed = 1;
    case kStartClosed: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *start_key_type_.start_closed_);
      break;
    }
    // .google.protobuf.ListValue start_open = 2;
    case kStartOpen: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *start_key_type_.start_open_);
      break;
    }
    case START_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  switch (end_key_type_case()) {
    // .google.protobuf.ListValue end_closed = 3;
    case kEndClosed: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *end_key_type_.end_closed_);
      break;
    }
    // .google.protobuf.ListValue end_open = 4;
    case kEndOpen: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *end_key_type_.end_open_);
      break;
    }
    case END_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KeyRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.spanner.v1.KeyRange)
  GOOGLE_DCHECK_NE(&from, this);
  const KeyRange* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const KeyRange>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.spanner.v1.KeyRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.spanner.v1.KeyRange)
    MergeFrom(*source);
  }
}

void KeyRange::MergeFrom(const KeyRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.spanner.v1.KeyRange)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.start_key_type_case()) {
    case kStartClosed: {
      mutable_start_closed()->::google::protobuf::ListValue::MergeFrom(from.start_closed());
      break;
    }
    case kStartOpen: {
      mutable_start_open()->::google::protobuf::ListValue::MergeFrom(from.start_open());
      break;
    }
    case START_KEY_TYPE_NOT_SET: {
      break;
    }
  }
  switch (from.end_key_type_case()) {
    case kEndClosed: {
      mutable_end_closed()->::google::protobuf::ListValue::MergeFrom(from.end_closed());
      break;
    }
    case kEndOpen: {
      mutable_end_open()->::google::protobuf::ListValue::MergeFrom(from.end_open());
      break;
    }
    case END_KEY_TYPE_NOT_SET: {
      break;
    }
  }
}

void KeyRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.spanner.v1.KeyRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyRange::CopyFrom(const KeyRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.spanner.v1.KeyRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyRange::IsInitialized() const {
  return true;
}

void KeyRange::Swap(KeyRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeyRange::InternalSwap(KeyRange* other) {
  using std::swap;
  swap(start_key_type_, other->start_key_type_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  swap(end_key_type_, other->end_key_type_);
  swap(_oneof_case_[1], other->_oneof_case_[1]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KeyRange::GetMetadata() const {
  protobuf_google_2fspanner_2fv1_2fkeys_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void KeySet::InitAsDefaultInstance() {
}
void KeySet::clear_keys() {
  keys_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KeySet::kKeysFieldNumber;
const int KeySet::kRangesFieldNumber;
const int KeySet::kAllFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KeySet::KeySet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::InitDefaultsKeySet();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.spanner.v1.KeySet)
}
KeySet::KeySet(const KeySet& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      keys_(from.keys_),
      ranges_(from.ranges_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  all_ = from.all_;
  // @@protoc_insertion_point(copy_constructor:google.spanner.v1.KeySet)
}

void KeySet::SharedCtor() {
  all_ = false;
  _cached_size_ = 0;
}

KeySet::~KeySet() {
  // @@protoc_insertion_point(destructor:google.spanner.v1.KeySet)
  SharedDtor();
}

void KeySet::SharedDtor() {
}

void KeySet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KeySet::descriptor() {
  ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const KeySet& KeySet::default_instance() {
  ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::InitDefaultsKeySet();
  return *internal_default_instance();
}

KeySet* KeySet::New(::google::protobuf::Arena* arena) const {
  KeySet* n = new KeySet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KeySet::Clear() {
// @@protoc_insertion_point(message_clear_start:google.spanner.v1.KeySet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  keys_.Clear();
  ranges_.Clear();
  all_ = false;
  _internal_metadata_.Clear();
}

bool KeySet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.spanner.v1.KeySet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.protobuf.ListValue keys = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_keys()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.spanner.v1.KeyRange ranges = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_ranges()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool all = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &all_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.spanner.v1.KeySet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.spanner.v1.KeySet)
  return false;
#undef DO_
}

void KeySet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.spanner.v1.KeySet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.ListValue keys = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->keys_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->keys(static_cast<int>(i)), output);
  }

  // repeated .google.spanner.v1.KeyRange ranges = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ranges_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->ranges(static_cast<int>(i)), output);
  }

  // bool all = 3;
  if (this->all() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->all(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.spanner.v1.KeySet)
}

::google::protobuf::uint8* KeySet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.spanner.v1.KeySet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.ListValue keys = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->keys_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->keys(static_cast<int>(i)), deterministic, target);
  }

  // repeated .google.spanner.v1.KeyRange ranges = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ranges_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->ranges(static_cast<int>(i)), deterministic, target);
  }

  // bool all = 3;
  if (this->all() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->all(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.spanner.v1.KeySet)
  return target;
}

size_t KeySet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.spanner.v1.KeySet)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .google.protobuf.ListValue keys = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->keys_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->keys(static_cast<int>(i)));
    }
  }

  // repeated .google.spanner.v1.KeyRange ranges = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->ranges_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->ranges(static_cast<int>(i)));
    }
  }

  // bool all = 3;
  if (this->all() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KeySet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.spanner.v1.KeySet)
  GOOGLE_DCHECK_NE(&from, this);
  const KeySet* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const KeySet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.spanner.v1.KeySet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.spanner.v1.KeySet)
    MergeFrom(*source);
  }
}

void KeySet::MergeFrom(const KeySet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.spanner.v1.KeySet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  keys_.MergeFrom(from.keys_);
  ranges_.MergeFrom(from.ranges_);
  if (from.all() != 0) {
    set_all(from.all());
  }
}

void KeySet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.spanner.v1.KeySet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeySet::CopyFrom(const KeySet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.spanner.v1.KeySet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeySet::IsInitialized() const {
  return true;
}

void KeySet::Swap(KeySet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KeySet::InternalSwap(KeySet* other) {
  using std::swap;
  keys_.InternalSwap(&other->keys_);
  ranges_.InternalSwap(&other->ranges_);
  swap(all_, other->all_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KeySet::GetMetadata() const {
  protobuf_google_2fspanner_2fv1_2fkeys_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fspanner_2fv1_2fkeys_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace spanner
}  // namespace google

// @@protoc_insertion_point(global_scope)
