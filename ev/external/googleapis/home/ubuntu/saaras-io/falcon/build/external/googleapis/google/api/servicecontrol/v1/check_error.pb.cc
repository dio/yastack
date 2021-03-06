// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/check_error.proto

#include "google/api/servicecontrol/v1/check_error.pb.h"

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
namespace api {
namespace servicecontrol {
namespace v1 {
class CheckErrorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CheckError>
      _instance;
} _CheckError_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
namespace protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto {
void InitDefaultsCheckErrorImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::google::api::servicecontrol::v1::_CheckError_default_instance_;
    new (ptr) ::google::api::servicecontrol::v1::CheckError();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::servicecontrol::v1::CheckError::InitAsDefaultInstance();
}

void InitDefaultsCheckError() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsCheckErrorImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::servicecontrol::v1::CheckError, detail_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::servicecontrol::v1::CheckError)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::api::servicecontrol::v1::_CheckError_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/servicecontrol/v1/check_error.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n.google/api/servicecontrol/v1/check_err"
      "or.proto\022\034google.api.servicecontrol.v1\032\034"
      "google/api/annotations.proto\"\202\004\n\nCheckEr"
      "ror\022;\n\004code\030\001 \001(\0162-.google.api.serviceco"
      "ntrol.v1.CheckError.Code\022\016\n\006detail\030\002 \001(\t"
      "\"\246\003\n\004Code\022\032\n\026ERROR_CODE_UNSPECIFIED\020\000\022\r\n"
      "\tNOT_FOUND\020\005\022\025\n\021PERMISSION_DENIED\020\007\022\026\n\022R"
      "ESOURCE_EXHAUSTED\020\010\022\031\n\025SERVICE_NOT_ACTIV"
      "ATED\020h\022\024\n\020BILLING_DISABLED\020k\022\023\n\017PROJECT_"
      "DELETED\020l\022\023\n\017PROJECT_INVALID\020r\022\026\n\022IP_ADD"
      "RESS_BLOCKED\020m\022\023\n\017REFERER_BLOCKED\020n\022\026\n\022C"
      "LIENT_APP_BLOCKED\020o\022\023\n\017API_KEY_INVALID\020i"
      "\022\023\n\017API_KEY_EXPIRED\020p\022\025\n\021API_KEY_NOT_FOU"
      "ND\020q\022!\n\034NAMESPACE_LOOKUP_UNAVAILABLE\020\254\002\022"
      "\037\n\032SERVICE_STATUS_UNAVAILABLE\020\255\002\022\037\n\032BILL"
      "ING_STATUS_UNAVAILABLE\020\256\002B\204\001\n com.google"
      ".api.servicecontrol.v1B\017CheckErrorProtoP"
      "\001ZJgoogle.golang.org/genproto/googleapis"
      "/api/servicecontrol/v1;servicecontrol\370\001\001"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 768);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/servicecontrol/v1/check_error.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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
}  // namespace protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
const ::google::protobuf::EnumDescriptor* CheckError_Code_descriptor() {
  protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::file_level_enum_descriptors[0];
}
bool CheckError_Code_IsValid(int value) {
  switch (value) {
    case 0:
    case 5:
    case 7:
    case 8:
    case 104:
    case 105:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 300:
    case 301:
    case 302:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CheckError_Code CheckError::ERROR_CODE_UNSPECIFIED;
const CheckError_Code CheckError::NOT_FOUND;
const CheckError_Code CheckError::PERMISSION_DENIED;
const CheckError_Code CheckError::RESOURCE_EXHAUSTED;
const CheckError_Code CheckError::SERVICE_NOT_ACTIVATED;
const CheckError_Code CheckError::BILLING_DISABLED;
const CheckError_Code CheckError::PROJECT_DELETED;
const CheckError_Code CheckError::PROJECT_INVALID;
const CheckError_Code CheckError::IP_ADDRESS_BLOCKED;
const CheckError_Code CheckError::REFERER_BLOCKED;
const CheckError_Code CheckError::CLIENT_APP_BLOCKED;
const CheckError_Code CheckError::API_KEY_INVALID;
const CheckError_Code CheckError::API_KEY_EXPIRED;
const CheckError_Code CheckError::API_KEY_NOT_FOUND;
const CheckError_Code CheckError::NAMESPACE_LOOKUP_UNAVAILABLE;
const CheckError_Code CheckError::SERVICE_STATUS_UNAVAILABLE;
const CheckError_Code CheckError::BILLING_STATUS_UNAVAILABLE;
const CheckError_Code CheckError::Code_MIN;
const CheckError_Code CheckError::Code_MAX;
const int CheckError::Code_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void CheckError::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckError::kCodeFieldNumber;
const int CheckError::kDetailFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckError::CheckError()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::InitDefaultsCheckError();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.servicecontrol.v1.CheckError)
}
CheckError::CheckError(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::InitDefaultsCheckError();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.api.servicecontrol.v1.CheckError)
}
CheckError::CheckError(const CheckError& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  detail_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.detail().size() > 0) {
    detail_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.detail(),
      GetArenaNoVirtual());
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:google.api.servicecontrol.v1.CheckError)
}

void CheckError::SharedCtor() {
  detail_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
  _cached_size_ = 0;
}

CheckError::~CheckError() {
  // @@protoc_insertion_point(destructor:google.api.servicecontrol.v1.CheckError)
  SharedDtor();
}

void CheckError::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  detail_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CheckError::ArenaDtor(void* object) {
  CheckError* _this = reinterpret_cast< CheckError* >(object);
  (void)_this;
}
void CheckError::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void CheckError::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CheckError::descriptor() {
  ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CheckError& CheckError::default_instance() {
  ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::InitDefaultsCheckError();
  return *internal_default_instance();
}

CheckError* CheckError::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<CheckError>(arena);
}

void CheckError::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.servicecontrol.v1.CheckError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  detail_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  code_ = 0;
  _internal_metadata_.Clear();
}

bool CheckError::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.servicecontrol.v1.CheckError)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.api.servicecontrol.v1.CheckError.Code code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_code(static_cast< ::google::api::servicecontrol::v1::CheckError_Code >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string detail = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_detail()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->detail().data(), static_cast<int>(this->detail().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.servicecontrol.v1.CheckError.detail"));
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
  // @@protoc_insertion_point(parse_success:google.api.servicecontrol.v1.CheckError)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.servicecontrol.v1.CheckError)
  return false;
#undef DO_
}

void CheckError::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.servicecontrol.v1.CheckError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  if (this->code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->code(), output);
  }

  // string detail = 2;
  if (this->detail().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->detail().data(), static_cast<int>(this->detail().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.CheckError.detail");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->detail(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.servicecontrol.v1.CheckError)
}

::google::protobuf::uint8* CheckError::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.servicecontrol.v1.CheckError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  if (this->code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->code(), target);
  }

  // string detail = 2;
  if (this->detail().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->detail().data(), static_cast<int>(this->detail().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.CheckError.detail");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->detail(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.servicecontrol.v1.CheckError)
  return target;
}

size_t CheckError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.servicecontrol.v1.CheckError)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string detail = 2;
  if (this->detail().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->detail());
  }

  // .google.api.servicecontrol.v1.CheckError.Code code = 1;
  if (this->code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CheckError::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.servicecontrol.v1.CheckError)
  GOOGLE_DCHECK_NE(&from, this);
  const CheckError* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckError>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.servicecontrol.v1.CheckError)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.servicecontrol.v1.CheckError)
    MergeFrom(*source);
  }
}

void CheckError::MergeFrom(const CheckError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.servicecontrol.v1.CheckError)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.detail().size() > 0) {
    set_detail(from.detail());
  }
  if (from.code() != 0) {
    set_code(from.code());
  }
}

void CheckError::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.servicecontrol.v1.CheckError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckError::CopyFrom(const CheckError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.servicecontrol.v1.CheckError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckError::IsInitialized() const {
  return true;
}

void CheckError::Swap(CheckError* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    CheckError* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void CheckError::UnsafeArenaSwap(CheckError* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void CheckError::InternalSwap(CheckError* other) {
  using std::swap;
  detail_.Swap(&other->detail_);
  swap(code_, other->code_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CheckError::GetMetadata() const {
  protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fapi_2fservicecontrol_2fv1_2fcheck_5ferror_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
