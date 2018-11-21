// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/language/v1beta2/language_service.proto

#include "google/cloud/language/v1beta2/language_service.pb.h"
#include "google/cloud/language/v1beta2/language_service.grpc.pb.h"

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
namespace language {
namespace v1beta2 {

static const char* LanguageService_method_names[] = {
  "/google.cloud.language.v1beta2.LanguageService/AnalyzeSentiment",
  "/google.cloud.language.v1beta2.LanguageService/AnalyzeEntities",
  "/google.cloud.language.v1beta2.LanguageService/AnalyzeEntitySentiment",
  "/google.cloud.language.v1beta2.LanguageService/AnalyzeSyntax",
  "/google.cloud.language.v1beta2.LanguageService/ClassifyText",
  "/google.cloud.language.v1beta2.LanguageService/AnnotateText",
};

std::unique_ptr< LanguageService::Stub> LanguageService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LanguageService::Stub> stub(new LanguageService::Stub(channel));
  return stub;
}

LanguageService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_AnalyzeSentiment_(LanguageService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AnalyzeEntities_(LanguageService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AnalyzeEntitySentiment_(LanguageService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AnalyzeSyntax_(LanguageService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ClassifyText_(LanguageService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AnnotateText_(LanguageService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LanguageService::Stub::AnalyzeSentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSentimentRequest& request, ::google::cloud::language::v1beta2::AnalyzeSentimentResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AnalyzeSentiment_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeSentimentResponse>* LanguageService::Stub::AsyncAnalyzeSentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeSentimentResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeSentiment_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeSentimentResponse>* LanguageService::Stub::PrepareAsyncAnalyzeSentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSentimentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeSentimentResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeSentiment_, context, request, false);
}

::grpc::Status LanguageService::Stub::AnalyzeEntities(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitiesRequest& request, ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AnalyzeEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse>* LanguageService::Stub::AsyncAnalyzeEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeEntities_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse>* LanguageService::Stub::PrepareAsyncAnalyzeEntitiesRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeEntities_, context, request, false);
}

::grpc::Status LanguageService::Stub::AnalyzeEntitySentiment(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitySentimentRequest& request, ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AnalyzeEntitySentiment_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse>* LanguageService::Stub::AsyncAnalyzeEntitySentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeEntitySentiment_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse>* LanguageService::Stub::PrepareAsyncAnalyzeEntitySentimentRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitySentimentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeEntitySentiment_, context, request, false);
}

::grpc::Status LanguageService::Stub::AnalyzeSyntax(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSyntaxRequest& request, ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AnalyzeSyntax_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse>* LanguageService::Stub::AsyncAnalyzeSyntaxRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeSyntax_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse>* LanguageService::Stub::PrepareAsyncAnalyzeSyntaxRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnalyzeSyntaxRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse>::Create(channel_.get(), cq, rpcmethod_AnalyzeSyntax_, context, request, false);
}

::grpc::Status LanguageService::Stub::ClassifyText(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::ClassifyTextRequest& request, ::google::cloud::language::v1beta2::ClassifyTextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ClassifyText_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::ClassifyTextResponse>* LanguageService::Stub::AsyncClassifyTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::ClassifyTextRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::ClassifyTextResponse>::Create(channel_.get(), cq, rpcmethod_ClassifyText_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::ClassifyTextResponse>* LanguageService::Stub::PrepareAsyncClassifyTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::ClassifyTextRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::ClassifyTextResponse>::Create(channel_.get(), cq, rpcmethod_ClassifyText_, context, request, false);
}

::grpc::Status LanguageService::Stub::AnnotateText(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnnotateTextRequest& request, ::google::cloud::language::v1beta2::AnnotateTextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AnnotateText_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnnotateTextResponse>* LanguageService::Stub::AsyncAnnotateTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnnotateTextResponse>::Create(channel_.get(), cq, rpcmethod_AnnotateText_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::language::v1beta2::AnnotateTextResponse>* LanguageService::Stub::PrepareAsyncAnnotateTextRaw(::grpc::ClientContext* context, const ::google::cloud::language::v1beta2::AnnotateTextRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::cloud::language::v1beta2::AnnotateTextResponse>::Create(channel_.get(), cq, rpcmethod_AnnotateText_, context, request, false);
}

LanguageService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::AnalyzeSentimentRequest, ::google::cloud::language::v1beta2::AnalyzeSentimentResponse>(
          std::mem_fn(&LanguageService::Service::AnalyzeSentiment), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::AnalyzeEntitiesRequest, ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse>(
          std::mem_fn(&LanguageService::Service::AnalyzeEntities), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::AnalyzeEntitySentimentRequest, ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse>(
          std::mem_fn(&LanguageService::Service::AnalyzeEntitySentiment), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::AnalyzeSyntaxRequest, ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse>(
          std::mem_fn(&LanguageService::Service::AnalyzeSyntax), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::ClassifyTextRequest, ::google::cloud::language::v1beta2::ClassifyTextResponse>(
          std::mem_fn(&LanguageService::Service::ClassifyText), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LanguageService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LanguageService::Service, ::google::cloud::language::v1beta2::AnnotateTextRequest, ::google::cloud::language::v1beta2::AnnotateTextResponse>(
          std::mem_fn(&LanguageService::Service::AnnotateText), this)));
}

LanguageService::Service::~Service() {
}

::grpc::Status LanguageService::Service::AnalyzeSentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::AnalyzeSentimentRequest* request, ::google::cloud::language::v1beta2::AnalyzeSentimentResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LanguageService::Service::AnalyzeEntities(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitiesRequest* request, ::google::cloud::language::v1beta2::AnalyzeEntitiesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LanguageService::Service::AnalyzeEntitySentiment(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::AnalyzeEntitySentimentRequest* request, ::google::cloud::language::v1beta2::AnalyzeEntitySentimentResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LanguageService::Service::AnalyzeSyntax(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::AnalyzeSyntaxRequest* request, ::google::cloud::language::v1beta2::AnalyzeSyntaxResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LanguageService::Service::ClassifyText(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::ClassifyTextRequest* request, ::google::cloud::language::v1beta2::ClassifyTextResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LanguageService::Service::AnnotateText(::grpc::ServerContext* context, const ::google::cloud::language::v1beta2::AnnotateTextRequest* request, ::google::cloud::language::v1beta2::AnnotateTextResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace language
}  // namespace v1beta2

