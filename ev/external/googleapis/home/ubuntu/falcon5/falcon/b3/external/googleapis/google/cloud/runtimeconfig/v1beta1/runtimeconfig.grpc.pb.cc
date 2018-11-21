// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/runtimeconfig/v1beta1/runtimeconfig.proto

#include "google/cloud/runtimeconfig/v1beta1/runtimeconfig.pb.h"
#include "google/cloud/runtimeconfig/v1beta1/runtimeconfig.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace runtimeconfig {
namespace v1beta1 {

static const char* RuntimeConfigManager_method_names[] = {
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/ListConfigs",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/GetConfig",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/CreateConfig",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/UpdateConfig",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/DeleteConfig",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/ListVariables",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/GetVariable",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/WatchVariable",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/CreateVariable",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/UpdateVariable",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/DeleteVariable",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/ListWaiters",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/GetWaiter",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/CreateWaiter",
  "/google.cloud.runtimeconfig.v1beta1.RuntimeConfigManager/DeleteWaiter",
};

std::unique_ptr< RuntimeConfigManager::Stub> RuntimeConfigManager::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RuntimeConfigManager::Stub> stub(new RuntimeConfigManager::Stub(channel));
  return stub;
}

RuntimeConfigManager::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListConfigs_(RuntimeConfigManager_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfig_(RuntimeConfigManager_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateConfig_(RuntimeConfigManager_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateConfig_(RuntimeConfigManager_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteConfig_(RuntimeConfigManager_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListVariables_(RuntimeConfigManager_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetVariable_(RuntimeConfigManager_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WatchVariable_(RuntimeConfigManager_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateVariable_(RuntimeConfigManager_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateVariable_(RuntimeConfigManager_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteVariable_(RuntimeConfigManager_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListWaiters_(RuntimeConfigManager_method_names[11], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetWaiter_(RuntimeConfigManager_method_names[12], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateWaiter_(RuntimeConfigManager_method_names[13], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteWaiter_(RuntimeConfigManager_method_names[14], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RuntimeConfigManager::Stub::ListConfigs(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListConfigsRequest& request, ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListConfigs_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse>* RuntimeConfigManager::Stub::AsyncListConfigsRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfigs_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse>* RuntimeConfigManager::Stub::PrepareAsyncListConfigsRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse>::Create(channel_.get(), cq, rpcmethod_ListConfigs_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::GetConfig(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetConfigRequest& request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::AsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_GetConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::PrepareAsyncGetConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_GetConfig_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::CreateConfig(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateConfigRequest& request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::AsyncCreateConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_CreateConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::PrepareAsyncCreateConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_CreateConfig_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::UpdateConfig(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateConfigRequest& request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::AsyncUpdateConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_UpdateConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>* RuntimeConfigManager::Stub::PrepareAsyncUpdateConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>::Create(channel_.get(), cq, rpcmethod_UpdateConfig_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::DeleteConfig(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteConfigRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteConfig_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::AsyncDeleteConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::PrepareAsyncDeleteConfigRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteConfig_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::ListVariables(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListVariablesRequest& request, ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListVariables_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse>* RuntimeConfigManager::Stub::AsyncListVariablesRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListVariablesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse>::Create(channel_.get(), cq, rpcmethod_ListVariables_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse>* RuntimeConfigManager::Stub::PrepareAsyncListVariablesRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListVariablesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse>::Create(channel_.get(), cq, rpcmethod_ListVariables_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::GetVariable(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetVariableRequest& request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetVariable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::AsyncGetVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_GetVariable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::PrepareAsyncGetVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_GetVariable_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::WatchVariable(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::WatchVariableRequest& request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_WatchVariable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::AsyncWatchVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::WatchVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_WatchVariable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::PrepareAsyncWatchVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::WatchVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_WatchVariable_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::CreateVariable(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateVariableRequest& request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateVariable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::AsyncCreateVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_CreateVariable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::PrepareAsyncCreateVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_CreateVariable_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::UpdateVariable(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateVariableRequest& request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateVariable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::AsyncUpdateVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_UpdateVariable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Variable>* RuntimeConfigManager::Stub::PrepareAsyncUpdateVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Variable>::Create(channel_.get(), cq, rpcmethod_UpdateVariable_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::DeleteVariable(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteVariableRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteVariable_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::AsyncDeleteVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteVariable_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::PrepareAsyncDeleteVariableRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteVariableRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteVariable_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::ListWaiters(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListWaitersRequest& request, ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListWaiters_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse>* RuntimeConfigManager::Stub::AsyncListWaitersRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListWaitersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse>::Create(channel_.get(), cq, rpcmethod_ListWaiters_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse>* RuntimeConfigManager::Stub::PrepareAsyncListWaitersRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListWaitersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse>::Create(channel_.get(), cq, rpcmethod_ListWaiters_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::GetWaiter(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetWaiterRequest& request, ::google::cloud::runtimeconfig::v1beta1::Waiter* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetWaiter_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Waiter>* RuntimeConfigManager::Stub::AsyncGetWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Waiter>::Create(channel_.get(), cq, rpcmethod_GetWaiter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::runtimeconfig::v1beta1::Waiter>* RuntimeConfigManager::Stub::PrepareAsyncGetWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::runtimeconfig::v1beta1::Waiter>::Create(channel_.get(), cq, rpcmethod_GetWaiter_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::CreateWaiter(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateWaiterRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateWaiter_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* RuntimeConfigManager::Stub::AsyncCreateWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateWaiter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* RuntimeConfigManager::Stub::PrepareAsyncCreateWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateWaiter_, context, request, false);
}

::grpc::Status RuntimeConfigManager::Stub::DeleteWaiter(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteWaiterRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteWaiter_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::AsyncDeleteWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteWaiter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* RuntimeConfigManager::Stub::PrepareAsyncDeleteWaiterRaw(::grpc::ClientContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteWaiterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteWaiter_, context, request, false);
}

RuntimeConfigManager::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::ListConfigsRequest, ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse>(
          std::mem_fn(&RuntimeConfigManager::Service::ListConfigs), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::GetConfigRequest, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>(
          std::mem_fn(&RuntimeConfigManager::Service::GetConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::CreateConfigRequest, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>(
          std::mem_fn(&RuntimeConfigManager::Service::CreateConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::UpdateConfigRequest, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig>(
          std::mem_fn(&RuntimeConfigManager::Service::UpdateConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::DeleteConfigRequest, ::google::protobuf::Empty>(
          std::mem_fn(&RuntimeConfigManager::Service::DeleteConfig), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::ListVariablesRequest, ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse>(
          std::mem_fn(&RuntimeConfigManager::Service::ListVariables), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::GetVariableRequest, ::google::cloud::runtimeconfig::v1beta1::Variable>(
          std::mem_fn(&RuntimeConfigManager::Service::GetVariable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::WatchVariableRequest, ::google::cloud::runtimeconfig::v1beta1::Variable>(
          std::mem_fn(&RuntimeConfigManager::Service::WatchVariable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::CreateVariableRequest, ::google::cloud::runtimeconfig::v1beta1::Variable>(
          std::mem_fn(&RuntimeConfigManager::Service::CreateVariable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::UpdateVariableRequest, ::google::cloud::runtimeconfig::v1beta1::Variable>(
          std::mem_fn(&RuntimeConfigManager::Service::UpdateVariable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::DeleteVariableRequest, ::google::protobuf::Empty>(
          std::mem_fn(&RuntimeConfigManager::Service::DeleteVariable), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[11],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::ListWaitersRequest, ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse>(
          std::mem_fn(&RuntimeConfigManager::Service::ListWaiters), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[12],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::GetWaiterRequest, ::google::cloud::runtimeconfig::v1beta1::Waiter>(
          std::mem_fn(&RuntimeConfigManager::Service::GetWaiter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[13],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::CreateWaiterRequest, ::google::longrunning::Operation>(
          std::mem_fn(&RuntimeConfigManager::Service::CreateWaiter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RuntimeConfigManager_method_names[14],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RuntimeConfigManager::Service, ::google::cloud::runtimeconfig::v1beta1::DeleteWaiterRequest, ::google::protobuf::Empty>(
          std::mem_fn(&RuntimeConfigManager::Service::DeleteWaiter), this)));
}

RuntimeConfigManager::Service::~Service() {
}

::grpc::Status RuntimeConfigManager::Service::ListConfigs(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListConfigsRequest* request, ::google::cloud::runtimeconfig::v1beta1::ListConfigsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::GetConfig(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetConfigRequest* request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::CreateConfig(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateConfigRequest* request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::UpdateConfig(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateConfigRequest* request, ::google::cloud::runtimeconfig::v1beta1::RuntimeConfig* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::DeleteConfig(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteConfigRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::ListVariables(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListVariablesRequest* request, ::google::cloud::runtimeconfig::v1beta1::ListVariablesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::GetVariable(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetVariableRequest* request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::WatchVariable(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::WatchVariableRequest* request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::CreateVariable(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateVariableRequest* request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::UpdateVariable(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::UpdateVariableRequest* request, ::google::cloud::runtimeconfig::v1beta1::Variable* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::DeleteVariable(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteVariableRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::ListWaiters(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::ListWaitersRequest* request, ::google::cloud::runtimeconfig::v1beta1::ListWaitersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::GetWaiter(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::GetWaiterRequest* request, ::google::cloud::runtimeconfig::v1beta1::Waiter* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::CreateWaiter(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::CreateWaiterRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RuntimeConfigManager::Service::DeleteWaiter(::grpc::ServerContext* context, const ::google::cloud::runtimeconfig::v1beta1::DeleteWaiterRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace runtimeconfig
}  // namespace v1beta1

