// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/clouddebugger/v2/debugger.proto

#include "google/devtools/clouddebugger/v2/debugger.pb.h"
#include "google/devtools/clouddebugger/v2/debugger.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace devtools {
namespace clouddebugger {
namespace v2 {

static const char* Debugger2_method_names[] = {
  "/google.devtools.clouddebugger.v2.Debugger2/SetBreakpoint",
  "/google.devtools.clouddebugger.v2.Debugger2/GetBreakpoint",
  "/google.devtools.clouddebugger.v2.Debugger2/DeleteBreakpoint",
  "/google.devtools.clouddebugger.v2.Debugger2/ListBreakpoints",
  "/google.devtools.clouddebugger.v2.Debugger2/ListDebuggees",
};

std::unique_ptr< Debugger2::Stub> Debugger2::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Debugger2::Stub> stub(new Debugger2::Stub(channel));
  return stub;
}

Debugger2::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetBreakpoint_(Debugger2_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBreakpoint_(Debugger2_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteBreakpoint_(Debugger2_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListBreakpoints_(Debugger2_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListDebuggees_(Debugger2_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Debugger2::Stub::SetBreakpoint(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::SetBreakpointRequest& request, ::google::devtools::clouddebugger::v2::SetBreakpointResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetBreakpoint_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::SetBreakpointResponse>* Debugger2::Stub::AsyncSetBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::SetBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::SetBreakpointResponse>::Create(channel_.get(), cq, rpcmethod_SetBreakpoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::SetBreakpointResponse>* Debugger2::Stub::PrepareAsyncSetBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::SetBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::SetBreakpointResponse>::Create(channel_.get(), cq, rpcmethod_SetBreakpoint_, context, request, false);
}

::grpc::Status Debugger2::Stub::GetBreakpoint(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::GetBreakpointRequest& request, ::google::devtools::clouddebugger::v2::GetBreakpointResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBreakpoint_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::GetBreakpointResponse>* Debugger2::Stub::AsyncGetBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::GetBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::GetBreakpointResponse>::Create(channel_.get(), cq, rpcmethod_GetBreakpoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::GetBreakpointResponse>* Debugger2::Stub::PrepareAsyncGetBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::GetBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::GetBreakpointResponse>::Create(channel_.get(), cq, rpcmethod_GetBreakpoint_, context, request, false);
}

::grpc::Status Debugger2::Stub::DeleteBreakpoint(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::DeleteBreakpointRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteBreakpoint_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Debugger2::Stub::AsyncDeleteBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::DeleteBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteBreakpoint_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Debugger2::Stub::PrepareAsyncDeleteBreakpointRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::DeleteBreakpointRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteBreakpoint_, context, request, false);
}

::grpc::Status Debugger2::Stub::ListBreakpoints(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListBreakpointsRequest& request, ::google::devtools::clouddebugger::v2::ListBreakpointsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListBreakpoints_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::ListBreakpointsResponse>* Debugger2::Stub::AsyncListBreakpointsRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListBreakpointsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::ListBreakpointsResponse>::Create(channel_.get(), cq, rpcmethod_ListBreakpoints_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::ListBreakpointsResponse>* Debugger2::Stub::PrepareAsyncListBreakpointsRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListBreakpointsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::ListBreakpointsResponse>::Create(channel_.get(), cq, rpcmethod_ListBreakpoints_, context, request, false);
}

::grpc::Status Debugger2::Stub::ListDebuggees(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListDebuggeesRequest& request, ::google::devtools::clouddebugger::v2::ListDebuggeesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListDebuggees_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::ListDebuggeesResponse>* Debugger2::Stub::AsyncListDebuggeesRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListDebuggeesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::ListDebuggeesResponse>::Create(channel_.get(), cq, rpcmethod_ListDebuggees_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouddebugger::v2::ListDebuggeesResponse>* Debugger2::Stub::PrepareAsyncListDebuggeesRaw(::grpc::ClientContext* context, const ::google::devtools::clouddebugger::v2::ListDebuggeesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::devtools::clouddebugger::v2::ListDebuggeesResponse>::Create(channel_.get(), cq, rpcmethod_ListDebuggees_, context, request, false);
}

Debugger2::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debugger2_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debugger2::Service, ::google::devtools::clouddebugger::v2::SetBreakpointRequest, ::google::devtools::clouddebugger::v2::SetBreakpointResponse>(
          std::mem_fn(&Debugger2::Service::SetBreakpoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debugger2_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debugger2::Service, ::google::devtools::clouddebugger::v2::GetBreakpointRequest, ::google::devtools::clouddebugger::v2::GetBreakpointResponse>(
          std::mem_fn(&Debugger2::Service::GetBreakpoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debugger2_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debugger2::Service, ::google::devtools::clouddebugger::v2::DeleteBreakpointRequest, ::google::protobuf::Empty>(
          std::mem_fn(&Debugger2::Service::DeleteBreakpoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debugger2_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debugger2::Service, ::google::devtools::clouddebugger::v2::ListBreakpointsRequest, ::google::devtools::clouddebugger::v2::ListBreakpointsResponse>(
          std::mem_fn(&Debugger2::Service::ListBreakpoints), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Debugger2_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Debugger2::Service, ::google::devtools::clouddebugger::v2::ListDebuggeesRequest, ::google::devtools::clouddebugger::v2::ListDebuggeesResponse>(
          std::mem_fn(&Debugger2::Service::ListDebuggees), this)));
}

Debugger2::Service::~Service() {
}

::grpc::Status Debugger2::Service::SetBreakpoint(::grpc::ServerContext* context, const ::google::devtools::clouddebugger::v2::SetBreakpointRequest* request, ::google::devtools::clouddebugger::v2::SetBreakpointResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debugger2::Service::GetBreakpoint(::grpc::ServerContext* context, const ::google::devtools::clouddebugger::v2::GetBreakpointRequest* request, ::google::devtools::clouddebugger::v2::GetBreakpointResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debugger2::Service::DeleteBreakpoint(::grpc::ServerContext* context, const ::google::devtools::clouddebugger::v2::DeleteBreakpointRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debugger2::Service::ListBreakpoints(::grpc::ServerContext* context, const ::google::devtools::clouddebugger::v2::ListBreakpointsRequest* request, ::google::devtools::clouddebugger::v2::ListBreakpointsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Debugger2::Service::ListDebuggees(::grpc::ServerContext* context, const ::google::devtools::clouddebugger::v2::ListDebuggeesRequest* request, ::google::devtools::clouddebugger::v2::ListDebuggeesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace clouddebugger
}  // namespace v2

