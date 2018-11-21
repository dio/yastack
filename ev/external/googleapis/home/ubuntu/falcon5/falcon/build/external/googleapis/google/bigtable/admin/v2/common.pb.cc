// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/v2/common.proto

#include "google/bigtable/admin/v2/common.pb.h"

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
namespace bigtable {
namespace admin {
namespace v2 {
}  // namespace v2
}  // namespace admin
}  // namespace bigtable
}  // namespace google
namespace protobuf_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/bigtable/admin/v2/common.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n%google/bigtable/admin/v2/common.proto\022"
      "\030google.bigtable.admin.v2\032\034google/api/an"
      "notations.proto\032\037google/protobuf/timesta"
      "mp.proto*=\n\013StorageType\022\034\n\030STORAGE_TYPE_"
      "UNSPECIFIED\020\000\022\007\n\003SSD\020\001\022\007\n\003HDD\020\002B\215\001\n\034com."
      "google.bigtable.admin.v2B\013CommonProtoP\001Z"
      "=google.golang.org/genproto/googleapis/b"
      "igtable/admin/v2;admin\252\002\036Google.Cloud.Bi"
      "gtable.Admin.V2b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 343);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/bigtable/admin/v2/common.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto
namespace google {
namespace bigtable {
namespace admin {
namespace v2 {
const ::google::protobuf::EnumDescriptor* StorageType_descriptor() {
  protobuf_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto::file_level_enum_descriptors[0];
}
bool StorageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace admin
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)
