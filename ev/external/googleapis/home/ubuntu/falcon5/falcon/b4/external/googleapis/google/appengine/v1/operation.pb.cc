// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/v1/operation.proto

#include "google/appengine/v1/operation.pb.h"

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
namespace appengine {
namespace v1 {
class OperationMetadataV1DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OperationMetadataV1>
      _instance;
} _OperationMetadataV1_default_instance_;
}  // namespace v1
}  // namespace appengine
}  // namespace google
namespace protobuf_google_2fappengine_2fv1_2foperation_2eproto {
void InitDefaultsOperationMetadataV1Impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaultsTimestamp();
  {
    void* ptr = &::google::appengine::v1::_OperationMetadataV1_default_instance_;
    new (ptr) ::google::appengine::v1::OperationMetadataV1();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::appengine::v1::OperationMetadataV1::InitAsDefaultInstance();
}

void InitDefaultsOperationMetadataV1() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOperationMetadataV1Impl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, method_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, insert_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, end_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, user_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::appengine::v1::OperationMetadataV1, target_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::appengine::v1::OperationMetadataV1)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::appengine::v1::_OperationMetadataV1_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/appengine/v1/operation.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n#google/appengine/v1/operation.proto\022\023g"
      "oogle.appengine.v1\032\034google/api/annotatio"
      "ns.proto\032\037google/protobuf/timestamp.prot"
      "o\"\242\001\n\023OperationMetadataV1\022\016\n\006method\030\001 \001("
      "\t\022/\n\013insert_time\030\002 \001(\0132\032.google.protobuf"
      ".Timestamp\022,\n\010end_time\030\003 \001(\0132\032.google.pr"
      "otobuf.Timestamp\022\014\n\004user\030\004 \001(\t\022\016\n\006target"
      "\030\005 \001(\tBi\n\027com.google.appengine.v1B\016Opera"
      "tionProtoP\001Z<google.golang.org/genproto/"
      "googleapis/appengine/v1;appengineb\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 401);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/appengine/v1/operation.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fappengine_2fv1_2foperation_2eproto
namespace google {
namespace appengine {
namespace v1 {

// ===================================================================

void OperationMetadataV1::InitAsDefaultInstance() {
  ::google::appengine::v1::_OperationMetadataV1_default_instance_._instance.get_mutable()->insert_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::google::appengine::v1::_OperationMetadataV1_default_instance_._instance.get_mutable()->end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void OperationMetadataV1::clear_insert_time() {
  if (GetArenaNoVirtual() == NULL && insert_time_ != NULL) {
    delete insert_time_;
  }
  insert_time_ = NULL;
}
void OperationMetadataV1::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationMetadataV1::kMethodFieldNumber;
const int OperationMetadataV1::kInsertTimeFieldNumber;
const int OperationMetadataV1::kEndTimeFieldNumber;
const int OperationMetadataV1::kUserFieldNumber;
const int OperationMetadataV1::kTargetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationMetadataV1::OperationMetadataV1()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fappengine_2fv1_2foperation_2eproto::InitDefaultsOperationMetadataV1();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.appengine.v1.OperationMetadataV1)
}
OperationMetadataV1::OperationMetadataV1(const OperationMetadataV1& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.method().size() > 0) {
    method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
  }
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user().size() > 0) {
    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_insert_time()) {
    insert_time_ = new ::google::protobuf::Timestamp(*from.insert_time_);
  } else {
    insert_time_ = NULL;
  }
  if (from.has_end_time()) {
    end_time_ = new ::google::protobuf::Timestamp(*from.end_time_);
  } else {
    end_time_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.appengine.v1.OperationMetadataV1)
}

void OperationMetadataV1::SharedCtor() {
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&insert_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_time_) -
      reinterpret_cast<char*>(&insert_time_)) + sizeof(end_time_));
  _cached_size_ = 0;
}

OperationMetadataV1::~OperationMetadataV1() {
  // @@protoc_insertion_point(destructor:google.appengine.v1.OperationMetadataV1)
  SharedDtor();
}

void OperationMetadataV1::SharedDtor() {
  method_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete insert_time_;
  if (this != internal_default_instance()) delete end_time_;
}

void OperationMetadataV1::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationMetadataV1::descriptor() {
  ::protobuf_google_2fappengine_2fv1_2foperation_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fappengine_2fv1_2foperation_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OperationMetadataV1& OperationMetadataV1::default_instance() {
  ::protobuf_google_2fappengine_2fv1_2foperation_2eproto::InitDefaultsOperationMetadataV1();
  return *internal_default_instance();
}

OperationMetadataV1* OperationMetadataV1::New(::google::protobuf::Arena* arena) const {
  OperationMetadataV1* n = new OperationMetadataV1;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationMetadataV1::Clear() {
// @@protoc_insertion_point(message_clear_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && insert_time_ != NULL) {
    delete insert_time_;
  }
  insert_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
  _internal_metadata_.Clear();
}

bool OperationMetadataV1::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.appengine.v1.OperationMetadataV1)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string method = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->method().data(), static_cast<int>(this->method().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.method"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp insert_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_insert_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp end_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string user = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user().data(), static_cast<int>(this->user().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.user"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string target = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.appengine.v1.OperationMetadataV1.target"));
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
  // @@protoc_insertion_point(parse_success:google.appengine.v1.OperationMetadataV1)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.appengine.v1.OperationMetadataV1)
  return false;
#undef DO_
}

void OperationMetadataV1::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string method = 1;
  if (this->method().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method().data(), static_cast<int>(this->method().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.method");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->method(), output);
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->insert_time_, output);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->end_time_, output);
  }

  // string user = 4;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.user");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->user(), output);
  }

  // string target = 5;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->target(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.appengine.v1.OperationMetadataV1)
}

::google::protobuf::uint8* OperationMetadataV1::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.appengine.v1.OperationMetadataV1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string method = 1;
  if (this->method().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method().data(), static_cast<int>(this->method().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.method");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->method(), target);
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *this->insert_time_, deterministic, target);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, *this->end_time_, deterministic, target);
  }

  // string user = 4;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.user");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->user(), target);
  }

  // string target = 5;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.appengine.v1.OperationMetadataV1.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->target(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.appengine.v1.OperationMetadataV1)
  return target;
}

size_t OperationMetadataV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.appengine.v1.OperationMetadataV1)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string method = 1;
  if (this->method().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->method());
  }

  // string user = 4;
  if (this->user().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user());
  }

  // string target = 5;
  if (this->target().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // .google.protobuf.Timestamp insert_time = 2;
  if (this->has_insert_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->insert_time_);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->end_time_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationMetadataV1::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.appengine.v1.OperationMetadataV1)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationMetadataV1* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationMetadataV1>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.appengine.v1.OperationMetadataV1)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.appengine.v1.OperationMetadataV1)
    MergeFrom(*source);
  }
}

void OperationMetadataV1::MergeFrom(const OperationMetadataV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.appengine.v1.OperationMetadataV1)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.method().size() > 0) {

    method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
  }
  if (from.user().size() > 0) {

    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.has_insert_time()) {
    mutable_insert_time()->::google::protobuf::Timestamp::MergeFrom(from.insert_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
}

void OperationMetadataV1::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.appengine.v1.OperationMetadataV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationMetadataV1::CopyFrom(const OperationMetadataV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.appengine.v1.OperationMetadataV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationMetadataV1::IsInitialized() const {
  return true;
}

void OperationMetadataV1::Swap(OperationMetadataV1* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationMetadataV1::InternalSwap(OperationMetadataV1* other) {
  using std::swap;
  method_.Swap(&other->method_);
  user_.Swap(&other->user_);
  target_.Swap(&other->target_);
  swap(insert_time_, other->insert_time_);
  swap(end_time_, other->end_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationMetadataV1::GetMetadata() const {
  protobuf_google_2fappengine_2fv1_2foperation_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fappengine_2fv1_2foperation_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace appengine
}  // namespace google

// @@protoc_insertion_point(global_scope)
