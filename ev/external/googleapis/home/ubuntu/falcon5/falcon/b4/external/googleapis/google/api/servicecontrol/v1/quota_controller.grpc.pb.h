// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/api/servicecontrol/v1/quota_controller.proto
// Original file comments:
// Copyright 2017 Google Inc.
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
#ifndef GRPC_google_2fapi_2fservicecontrol_2fv1_2fquota_5fcontroller_2eproto__INCLUDED
#define GRPC_google_2fapi_2fservicecontrol_2fv1_2fquota_5fcontroller_2eproto__INCLUDED

#include "google/api/servicecontrol/v1/quota_controller.pb.h"

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
namespace api {
namespace servicecontrol {
namespace v1 {

// [Google Quota Control API](/service-control/overview)
//
// Allows clients to allocate and release quota against a [managed
// service](https://cloud.google.com/service-management/reference/rpc/google.api/servicemanagement.v1#google.api.servicemanagement.v1.ManagedService).
class QuotaController final {
 public:
  static constexpr char const* service_full_name() {
    return "google.api.servicecontrol.v1.QuotaController";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Attempts to allocate quota for the specified consumer. It should be called
    // before the operation is executed.
    //
    // This method requires the `servicemanagement.services.quota`
    // permission on the specified service. For more information, see
    // [Cloud IAM](https://cloud.google.com/iam).
    //
    // **NOTE:** The client **must** fail-open on server errors `INTERNAL`,
    // `UNKNOWN`, `DEADLINE_EXCEEDED`, and `UNAVAILABLE`. To ensure system
    // reliability, the server may inject these errors to prohibit any hard
    // dependency on the quota functionality.
    virtual ::grpc::Status AllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>> AsyncAllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>>(AsyncAllocateQuotaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>> PrepareAsyncAllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>>(PrepareAsyncAllocateQuotaRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>* AsyncAllocateQuotaRaw(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::api::servicecontrol::v1::AllocateQuotaResponse>* PrepareAsyncAllocateQuotaRaw(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>> AsyncAllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>>(AsyncAllocateQuotaRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>> PrepareAsyncAllocateQuota(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>>(PrepareAsyncAllocateQuotaRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>* AsyncAllocateQuotaRaw(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::api::servicecontrol::v1::AllocateQuotaResponse>* PrepareAsyncAllocateQuotaRaw(::grpc::ClientContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AllocateQuota_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Attempts to allocate quota for the specified consumer. It should be called
    // before the operation is executed.
    //
    // This method requires the `servicemanagement.services.quota`
    // permission on the specified service. For more information, see
    // [Cloud IAM](https://cloud.google.com/iam).
    //
    // **NOTE:** The client **must** fail-open on server errors `INTERNAL`,
    // `UNKNOWN`, `DEADLINE_EXCEEDED`, and `UNAVAILABLE`. To ensure system
    // reliability, the server may inject these errors to prohibit any hard
    // dependency on the quota functionality.
    virtual ::grpc::Status AllocateQuota(::grpc::ServerContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest* request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AllocateQuota : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AllocateQuota() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AllocateQuota() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AllocateQuota(::grpc::ServerContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest* request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAllocateQuota(::grpc::ServerContext* context, ::google::api::servicecontrol::v1::AllocateQuotaRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::api::servicecontrol::v1::AllocateQuotaResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AllocateQuota<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_AllocateQuota : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AllocateQuota() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AllocateQuota() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AllocateQuota(::grpc::ServerContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest* request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AllocateQuota : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AllocateQuota() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::google::api::servicecontrol::v1::AllocateQuotaRequest, ::google::api::servicecontrol::v1::AllocateQuotaResponse>(std::bind(&WithStreamedUnaryMethod_AllocateQuota<BaseClass>::StreamedAllocateQuota, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AllocateQuota() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AllocateQuota(::grpc::ServerContext* context, const ::google::api::servicecontrol::v1::AllocateQuotaRequest* request, ::google::api::servicecontrol::v1::AllocateQuotaResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAllocateQuota(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::api::servicecontrol::v1::AllocateQuotaRequest,::google::api::servicecontrol::v1::AllocateQuotaResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AllocateQuota<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AllocateQuota<Service > StreamedService;
};

}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google


#endif  // GRPC_google_2fapi_2fservicecontrol_2fv1_2fquota_5fcontroller_2eproto__INCLUDED