// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/longrunning/operations.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2flongrunning_2foperations_2eproto__INCLUDED
#define GRPC_google_2flongrunning_2foperations_2eproto__INCLUDED

#include "google/longrunning/operations.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace longrunning {

// Manages long-running operations with an API service.
//
// When an API method normally takes long time to complete, it can be designed
// to return [Operation][google.longrunning.Operation] to the client, and the client can use this
// interface to receive the real response asynchronously by polling the
// operation resource, or pass the operation resource to another API (such as
// Google Cloud Pub/Sub API) to receive the response.  Any API service that
// returns long-running operations should implement the `Operations` interface
// so developers can have a consistent client experience.
class Operations final {
 public:
  static constexpr char const* service_full_name() {
    return "google.longrunning.Operations";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Lists operations that match the specified filter in the request. If the
    // server doesn't support this method, it returns `UNIMPLEMENTED`.
    //
    // NOTE: the `name` binding below allows API services to override the binding
    // to use different resource name schemes, such as `users/*/operations`.
    virtual ::grpc::Status ListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::google::longrunning::ListOperationsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>> AsyncListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>>(AsyncListOperationsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>> PrepareAsyncListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>>(PrepareAsyncListOperationsRaw(context, request, cq));
    }
    // Gets the latest state of a long-running operation.  Clients can use this
    // method to poll the operation result at intervals as recommended by the API
    // service.
    virtual ::grpc::Status GetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncGetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncGetOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> PrepareAsyncGetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(PrepareAsyncGetOperationRaw(context, request, cq));
    }
    // Deletes a long-running operation. This method indicates that the client is
    // no longer interested in the operation result. It does not cancel the
    // operation. If the server doesn't support this method, it returns
    // `google.rpc.Code.UNIMPLEMENTED`.
    virtual ::grpc::Status DeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncDeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncDeleteOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncDeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncDeleteOperationRaw(context, request, cq));
    }
    // Starts asynchronous cancellation on a long-running operation.  The server
    // makes a best effort to cancel the operation, but success is not
    // guaranteed.  If the server doesn't support this method, it returns
    // `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
    // [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
    // other methods to check whether the cancellation succeeded or whether the
    // operation completed despite cancellation. On successful cancellation,
    // the operation is not deleted; instead, it becomes an operation with
    // an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
    // corresponding to `Code.CANCELLED`.
    virtual ::grpc::Status CancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncCancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncCancelOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> PrepareAsyncCancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(PrepareAsyncCancelOperationRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>* AsyncListOperationsRaw(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::ListOperationsResponse>* PrepareAsyncListOperationsRaw(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncGetOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* PrepareAsyncGetOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncDeleteOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncDeleteOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncCancelOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* PrepareAsyncCancelOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::google::longrunning::ListOperationsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>> AsyncListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>>(AsyncListOperationsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>> PrepareAsyncListOperations(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>>(PrepareAsyncListOperationsRaw(context, request, cq));
    }
    ::grpc::Status GetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncGetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncGetOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> PrepareAsyncGetOperation(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(PrepareAsyncGetOperationRaw(context, request, cq));
    }
    ::grpc::Status DeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncDeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncDeleteOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncDeleteOperation(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncDeleteOperationRaw(context, request, cq));
    }
    ::grpc::Status CancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncCancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncCancelOperationRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> PrepareAsyncCancelOperation(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(PrepareAsyncCancelOperationRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>* AsyncListOperationsRaw(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::ListOperationsResponse>* PrepareAsyncListOperationsRaw(::grpc::ClientContext* context, const ::google::longrunning::ListOperationsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncGetOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* PrepareAsyncGetOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::GetOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncDeleteOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncDeleteOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::DeleteOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncCancelOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* PrepareAsyncCancelOperationRaw(::grpc::ClientContext* context, const ::google::longrunning::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ListOperations_;
    const ::grpc::internal::RpcMethod rpcmethod_GetOperation_;
    const ::grpc::internal::RpcMethod rpcmethod_DeleteOperation_;
    const ::grpc::internal::RpcMethod rpcmethod_CancelOperation_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Lists operations that match the specified filter in the request. If the
    // server doesn't support this method, it returns `UNIMPLEMENTED`.
    //
    // NOTE: the `name` binding below allows API services to override the binding
    // to use different resource name schemes, such as `users/*/operations`.
    virtual ::grpc::Status ListOperations(::grpc::ServerContext* context, const ::google::longrunning::ListOperationsRequest* request, ::google::longrunning::ListOperationsResponse* response);
    // Gets the latest state of a long-running operation.  Clients can use this
    // method to poll the operation result at intervals as recommended by the API
    // service.
    virtual ::grpc::Status GetOperation(::grpc::ServerContext* context, const ::google::longrunning::GetOperationRequest* request, ::google::longrunning::Operation* response);
    // Deletes a long-running operation. This method indicates that the client is
    // no longer interested in the operation result. It does not cancel the
    // operation. If the server doesn't support this method, it returns
    // `google.rpc.Code.UNIMPLEMENTED`.
    virtual ::grpc::Status DeleteOperation(::grpc::ServerContext* context, const ::google::longrunning::DeleteOperationRequest* request, ::google::protobuf::Empty* response);
    // Starts asynchronous cancellation on a long-running operation.  The server
    // makes a best effort to cancel the operation, but success is not
    // guaranteed.  If the server doesn't support this method, it returns
    // `google.rpc.Code.UNIMPLEMENTED`.  Clients can use
    // [Operations.GetOperation][google.longrunning.Operations.GetOperation] or
    // other methods to check whether the cancellation succeeded or whether the
    // operation completed despite cancellation. On successful cancellation,
    // the operation is not deleted; instead, it becomes an operation with
    // an [Operation.error][google.longrunning.Operation.error] value with a [google.rpc.Status.code][google.rpc.Status.code] of 1,
    // corresponding to `Code.CANCELLED`.
    virtual ::grpc::Status CancelOperation(::grpc::ServerContext* context, const ::google::longrunning::CancelOperationRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ListOperations : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListOperations() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ListOperations() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListOperations(::grpc::ServerContext* context, const ::google::longrunning::ListOperationsRequest* request, ::google::longrunning::ListOperationsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListOperations(::grpc::ServerContext* context, ::google::longrunning::ListOperationsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::ListOperationsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetOperation() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOperation(::grpc::ServerContext* context, const ::google::longrunning::GetOperationRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetOperation(::grpc::ServerContext* context, ::google::longrunning::GetOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DeleteOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DeleteOperation() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_DeleteOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteOperation(::grpc::ServerContext* context, const ::google::longrunning::DeleteOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDeleteOperation(::grpc::ServerContext* context, ::google::longrunning::DeleteOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CancelOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CancelOperation() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_CancelOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOperation(::grpc::ServerContext* context, const ::google::longrunning::CancelOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelOperation(::grpc::ServerContext* context, ::google::longrunning::CancelOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ListOperations<WithAsyncMethod_GetOperation<WithAsyncMethod_DeleteOperation<WithAsyncMethod_CancelOperation<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ListOperations : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListOperations() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ListOperations() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListOperations(::grpc::ServerContext* context, const ::google::longrunning::ListOperationsRequest* request, ::google::longrunning::ListOperationsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetOperation() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetOperation(::grpc::ServerContext* context, const ::google::longrunning::GetOperationRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DeleteOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DeleteOperation() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_DeleteOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteOperation(::grpc::ServerContext* context, const ::google::longrunning::DeleteOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CancelOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CancelOperation() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_CancelOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOperation(::grpc::ServerContext* context, const ::google::longrunning::CancelOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListOperations : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ListOperations() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::longrunning::ListOperationsRequest, ::google::longrunning::ListOperationsResponse>(std::bind(&WithStreamedUnaryMethod_ListOperations<BaseClass>::StreamedListOperations, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ListOperations() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListOperations(::grpc::ServerContext* context, const ::google::longrunning::ListOperationsRequest* request, ::google::longrunning::ListOperationsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListOperations(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::longrunning::ListOperationsRequest,::google::longrunning::ListOperationsResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetOperation() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::longrunning::GetOperationRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_GetOperation<BaseClass>::StreamedGetOperation, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetOperation(::grpc::ServerContext* context, const ::google::longrunning::GetOperationRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetOperation(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::longrunning::GetOperationRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DeleteOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DeleteOperation() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::google::longrunning::DeleteOperationRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_DeleteOperation<BaseClass>::StreamedDeleteOperation, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DeleteOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DeleteOperation(::grpc::ServerContext* context, const ::google::longrunning::DeleteOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDeleteOperation(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::longrunning::DeleteOperationRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CancelOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CancelOperation() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::internal::StreamedUnaryHandler< ::google::longrunning::CancelOperationRequest, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_CancelOperation<BaseClass>::StreamedCancelOperation, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CancelOperation() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CancelOperation(::grpc::ServerContext* context, const ::google::longrunning::CancelOperationRequest* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCancelOperation(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::longrunning::CancelOperationRequest,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ListOperations<WithStreamedUnaryMethod_GetOperation<WithStreamedUnaryMethod_DeleteOperation<WithStreamedUnaryMethod_CancelOperation<Service > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ListOperations<WithStreamedUnaryMethod_GetOperation<WithStreamedUnaryMethod_DeleteOperation<WithStreamedUnaryMethod_CancelOperation<Service > > > > StreamedService;
};

}  // namespace longrunning
}  // namespace google


#endif  // GRPC_google_2flongrunning_2foperations_2eproto__INCLUDED
