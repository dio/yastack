// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/iam/v1/iam_policy.proto
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
#ifndef GRPC_google_2fiam_2fv1_2fiam_5fpolicy_2eproto__INCLUDED
#define GRPC_google_2fiam_2fv1_2fiam_5fpolicy_2eproto__INCLUDED

#include "google/iam/v1/iam_policy.pb.h"

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
namespace iam {
namespace v1 {

// ## API Overview
//
// Manages Identity and Access Management (IAM) policies.
//
// Any implementation of an API that offers access control features
// implements the google.iam.v1.IAMPolicy interface.
//
// ## Data model
//
// Access control is applied when a principal (user or service account), takes
// some action on a resource exposed by a service. Resources, identified by
// URI-like names, are the unit of access control specification. Service
// implementations can choose the granularity of access control and the
// supported permissions for their resources.
// For example one database service may allow access control to be
// specified only at the Table level, whereas another might allow access control
// to also be specified at the Column level.
//
// ## Policy Structure
//
// See google.iam.v1.Policy
//
// This is intentionally not a CRUD style API because access control policies
// are created and deleted implicitly with the resources to which they are
// attached.
class IAMPolicy final {
 public:
  static constexpr char const* service_full_name() {
    return "google.iam.v1.IAMPolicy";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sets the access control policy on the specified resource. Replaces any
    // existing policy.
    virtual ::grpc::Status SetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::google::iam::v1::Policy* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>> AsyncSetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>>(AsyncSetIamPolicyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>> PrepareAsyncSetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>>(PrepareAsyncSetIamPolicyRaw(context, request, cq));
    }
    // Gets the access control policy for a resource.
    // Returns an empty policy if the resource exists and does not have a policy
    // set.
    virtual ::grpc::Status GetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::google::iam::v1::Policy* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>> AsyncGetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>>(AsyncGetIamPolicyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>> PrepareAsyncGetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>>(PrepareAsyncGetIamPolicyRaw(context, request, cq));
    }
    // Returns permissions that a caller has on the specified resource.
    // If the resource does not exist, this will return an empty set of
    // permissions, not a NOT_FOUND error.
    virtual ::grpc::Status TestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::google::iam::v1::TestIamPermissionsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>> AsyncTestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>>(AsyncTestIamPermissionsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>> PrepareAsyncTestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>>(PrepareAsyncTestIamPermissionsRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>* AsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>* PrepareAsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>* AsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::Policy>* PrepareAsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>* AsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::iam::v1::TestIamPermissionsResponse>* PrepareAsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::google::iam::v1::Policy* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>> AsyncSetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>>(AsyncSetIamPolicyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>> PrepareAsyncSetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>>(PrepareAsyncSetIamPolicyRaw(context, request, cq));
    }
    ::grpc::Status GetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::google::iam::v1::Policy* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>> AsyncGetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>>(AsyncGetIamPolicyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>> PrepareAsyncGetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>>(PrepareAsyncGetIamPolicyRaw(context, request, cq));
    }
    ::grpc::Status TestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::google::iam::v1::TestIamPermissionsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>> AsyncTestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>>(AsyncTestIamPermissionsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>> PrepareAsyncTestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>>(PrepareAsyncTestIamPermissionsRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* AsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* PrepareAsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* AsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* PrepareAsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* AsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* PrepareAsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SetIamPolicy_;
    const ::grpc::internal::RpcMethod rpcmethod_GetIamPolicy_;
    const ::grpc::internal::RpcMethod rpcmethod_TestIamPermissions_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sets the access control policy on the specified resource. Replaces any
    // existing policy.
    virtual ::grpc::Status SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response);
    // Gets the access control policy for a resource.
    // Returns an empty policy if the resource exists and does not have a policy
    // set.
    virtual ::grpc::Status GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response);
    // Returns permissions that a caller has on the specified resource.
    // If the resource does not exist, this will return an empty set of
    // permissions, not a NOT_FOUND error.
    virtual ::grpc::Status TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SetIamPolicy() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetIamPolicy(::grpc::ServerContext* context, ::google::iam::v1::SetIamPolicyRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::iam::v1::Policy>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetIamPolicy() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetIamPolicy(::grpc::ServerContext* context, ::google::iam::v1::GetIamPolicyRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::iam::v1::Policy>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_TestIamPermissions : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_TestIamPermissions() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_TestIamPermissions() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTestIamPermissions(::grpc::ServerContext* context, ::google::iam::v1::TestIamPermissionsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::iam::v1::TestIamPermissionsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SetIamPolicy<WithAsyncMethod_GetIamPolicy<WithAsyncMethod_TestIamPermissions<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SetIamPolicy() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetIamPolicy() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_TestIamPermissions : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_TestIamPermissions() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_TestIamPermissions() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SetIamPolicy() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::iam::v1::SetIamPolicyRequest, ::google::iam::v1::Policy>(std::bind(&WithStreamedUnaryMethod_SetIamPolicy<BaseClass>::StreamedSetIamPolicy, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetIamPolicy(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::iam::v1::SetIamPolicyRequest,::google::iam::v1::Policy>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetIamPolicy : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetIamPolicy() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::google::iam::v1::GetIamPolicyRequest, ::google::iam::v1::Policy>(std::bind(&WithStreamedUnaryMethod_GetIamPolicy<BaseClass>::StreamedGetIamPolicy, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetIamPolicy() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetIamPolicy(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::iam::v1::GetIamPolicyRequest,::google::iam::v1::Policy>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_TestIamPermissions : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_TestIamPermissions() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::google::iam::v1::TestIamPermissionsRequest, ::google::iam::v1::TestIamPermissionsResponse>(std::bind(&WithStreamedUnaryMethod_TestIamPermissions<BaseClass>::StreamedTestIamPermissions, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_TestIamPermissions() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedTestIamPermissions(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::iam::v1::TestIamPermissionsRequest,::google::iam::v1::TestIamPermissionsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SetIamPolicy<WithStreamedUnaryMethod_GetIamPolicy<WithStreamedUnaryMethod_TestIamPermissions<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SetIamPolicy<WithStreamedUnaryMethod_GetIamPolicy<WithStreamedUnaryMethod_TestIamPermissions<Service > > > StreamedService;
};

}  // namespace v1
}  // namespace iam
}  // namespace google


#endif  // GRPC_google_2fiam_2fv1_2fiam_5fpolicy_2eproto__INCLUDED
