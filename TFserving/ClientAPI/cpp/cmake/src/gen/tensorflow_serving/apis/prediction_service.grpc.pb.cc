// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow_serving/apis/prediction_service.proto

#include "tensorflow_serving/apis/prediction_service.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

#include <functional>

#include "tensorflow_serving/apis/prediction_service.pb.h"
namespace tensorflow {
namespace serving {

static const char* PredictionService_method_names[] = {
    "/tensorflow.serving.PredictionService/Classify",
    "/tensorflow.serving.PredictionService/Regress",
    "/tensorflow.serving.PredictionService/Predict",
    "/tensorflow.serving.PredictionService/MultiInference",
    "/tensorflow.serving.PredictionService/GetModelMetadata",
};

std::unique_ptr<PredictionService::Stub> PredictionService::NewStub(
    const std::shared_ptr< ::grpc::ChannelInterface>& channel,
    const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr<PredictionService::Stub> stub(
      new PredictionService::Stub(channel));
  return stub;
}

PredictionService::Stub::Stub(
    const std::shared_ptr< ::grpc::ChannelInterface>& channel)
    : channel_(channel),
      rpcmethod_Classify_(PredictionService_method_names[0],
                          ::grpc::internal::RpcMethod::NORMAL_RPC, channel),
      rpcmethod_Regress_(PredictionService_method_names[1],
                         ::grpc::internal::RpcMethod::NORMAL_RPC, channel),
      rpcmethod_Predict_(PredictionService_method_names[2],
                         ::grpc::internal::RpcMethod::NORMAL_RPC, channel),
      rpcmethod_MultiInference_(PredictionService_method_names[3],
                                ::grpc::internal::RpcMethod::NORMAL_RPC,
                                channel),
      rpcmethod_GetModelMetadata_(PredictionService_method_names[4],
                                  ::grpc::internal::RpcMethod::NORMAL_RPC,
                                  channel) {}

::grpc::Status PredictionService::Stub::Classify(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::ClassificationRequest& request,
    ::tensorflow::serving::ClassificationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_Classify_, context, request, response);
}

void PredictionService::Stub::experimental_async::Classify(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::ClassificationRequest* request,
    ::tensorflow::serving::ClassificationResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Classify_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Classify(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::ClassificationResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Classify_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Classify(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::ClassificationRequest* request,
    ::tensorflow::serving::ClassificationResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Classify_, context, request,
      response, reactor);
}

void PredictionService::Stub::experimental_async::Classify(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::ClassificationResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Classify_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::ClassificationResponse>*
PredictionService::Stub::AsyncClassifyRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::ClassificationRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::ClassificationResponse>::
      Create(channel_.get(), cq, rpcmethod_Classify_, context, request, true);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::ClassificationResponse>*
PredictionService::Stub::PrepareAsyncClassifyRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::ClassificationRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::ClassificationResponse>::
      Create(channel_.get(), cq, rpcmethod_Classify_, context, request, false);
}

::grpc::Status PredictionService::Stub::Regress(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::RegressionRequest& request,
    ::tensorflow::serving::RegressionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Regress_,
                                             context, request, response);
}

void PredictionService::Stub::experimental_async::Regress(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::RegressionRequest* request,
    ::tensorflow::serving::RegressionResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Regress_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Regress(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::RegressionResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Regress_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Regress(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::RegressionRequest* request,
    ::tensorflow::serving::RegressionResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Regress_, context, request,
      response, reactor);
}

void PredictionService::Stub::experimental_async::Regress(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::RegressionResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Regress_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::RegressionResponse>*
PredictionService::Stub::AsyncRegressRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::RegressionRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::RegressionResponse>::Create(channel_.get(), cq,
                                                         rpcmethod_Regress_,
                                                         context, request,
                                                         true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::RegressionResponse>*
PredictionService::Stub::PrepareAsyncRegressRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::RegressionRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::RegressionResponse>::Create(channel_.get(), cq,
                                                         rpcmethod_Regress_,
                                                         context, request,
                                                         false);
}

::grpc::Status PredictionService::Stub::Predict(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::PredictRequest& request,
    ::tensorflow::serving::PredictResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Predict_,
                                             context, request, response);
}

void PredictionService::Stub::experimental_async::Predict(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::PredictRequest* request,
    ::tensorflow::serving::PredictResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Predict_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Predict(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::PredictResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Predict_, context,
                                           request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::Predict(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::PredictRequest* request,
    ::tensorflow::serving::PredictResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request,
      response, reactor);
}

void PredictionService::Stub::experimental_async::Predict(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::PredictResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Predict_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::PredictResponse>*
PredictionService::Stub::AsyncPredictRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::PredictRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::PredictResponse>::Create(channel_.get(), cq,
                                                      rpcmethod_Predict_,
                                                      context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::PredictResponse>*
PredictionService::Stub::PrepareAsyncPredictRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::PredictRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::PredictResponse>::Create(channel_.get(), cq,
                                                      rpcmethod_Predict_,
                                                      context, request, false);
}

::grpc::Status PredictionService::Stub::MultiInference(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::MultiInferenceRequest& request,
    ::tensorflow::serving::MultiInferenceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_MultiInference_, context, request, response);
}

void PredictionService::Stub::experimental_async::MultiInference(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::MultiInferenceRequest* request,
    ::tensorflow::serving::MultiInferenceResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_MultiInference_, context, request,
      response, std::move(f));
}

void PredictionService::Stub::experimental_async::MultiInference(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::MultiInferenceResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_MultiInference_, context, request,
      response, std::move(f));
}

void PredictionService::Stub::experimental_async::MultiInference(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::MultiInferenceRequest* request,
    ::tensorflow::serving::MultiInferenceResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_MultiInference_, context, request,
      response, reactor);
}

void PredictionService::Stub::experimental_async::MultiInference(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::MultiInferenceResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_MultiInference_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::MultiInferenceResponse>*
PredictionService::Stub::AsyncMultiInferenceRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::MultiInferenceRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::MultiInferenceResponse>::
      Create(channel_.get(), cq, rpcmethod_MultiInference_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::MultiInferenceResponse>*
PredictionService::Stub::PrepareAsyncMultiInferenceRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::MultiInferenceRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::MultiInferenceResponse>::
      Create(channel_.get(), cq, rpcmethod_MultiInference_, context, request,
             false);
}

::grpc::Status PredictionService::Stub::GetModelMetadata(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest& request,
    ::tensorflow::serving::GetModelMetadataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_GetModelMetadata_, context, request, response);
}

void PredictionService::Stub::experimental_async::GetModelMetadata(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest* request,
    ::tensorflow::serving::GetModelMetadataResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_GetModelMetadata_, context,
      request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::GetModelMetadata(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::GetModelMetadataResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_GetModelMetadata_, context,
      request, response, std::move(f));
}

void PredictionService::Stub::experimental_async::GetModelMetadata(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest* request,
    ::tensorflow::serving::GetModelMetadataResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_GetModelMetadata_, context,
      request, response, reactor);
}

void PredictionService::Stub::experimental_async::GetModelMetadata(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::serving::GetModelMetadataResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_GetModelMetadata_, context,
      request, response, reactor);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::GetModelMetadataResponse>*
PredictionService::Stub::AsyncGetModelMetadataRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::GetModelMetadataResponse>::
      Create(channel_.get(), cq, rpcmethod_GetModelMetadata_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::serving::GetModelMetadataResponse>*
PredictionService::Stub::PrepareAsyncGetModelMetadataRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::serving::GetModelMetadataResponse>::
      Create(channel_.get(), cq, rpcmethod_GetModelMetadata_, context, request,
             false);
}

PredictionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          PredictionService::Service,
          ::tensorflow::serving::ClassificationRequest,
          ::tensorflow::serving::ClassificationResponse>(
          [](PredictionService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::serving::ClassificationRequest* req,
             ::tensorflow::serving::ClassificationResponse* resp) {
            return service->Classify(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          PredictionService::Service, ::tensorflow::serving::RegressionRequest,
          ::tensorflow::serving::RegressionResponse>(
          [](PredictionService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::serving::RegressionRequest* req,
             ::tensorflow::serving::RegressionResponse* resp) {
            return service->Regress(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          PredictionService::Service, ::tensorflow::serving::PredictRequest,
          ::tensorflow::serving::PredictResponse>(
          [](PredictionService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::serving::PredictRequest* req,
             ::tensorflow::serving::PredictResponse* resp) {
            return service->Predict(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          PredictionService::Service,
          ::tensorflow::serving::MultiInferenceRequest,
          ::tensorflow::serving::MultiInferenceResponse>(
          [](PredictionService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::serving::MultiInferenceRequest* req,
             ::tensorflow::serving::MultiInferenceResponse* resp) {
            return service->MultiInference(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PredictionService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          PredictionService::Service,
          ::tensorflow::serving::GetModelMetadataRequest,
          ::tensorflow::serving::GetModelMetadataResponse>(
          [](PredictionService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::serving::GetModelMetadataRequest* req,
             ::tensorflow::serving::GetModelMetadataResponse* resp) {
            return service->GetModelMetadata(ctx, req, resp);
          },
          this)));
}

PredictionService::Service::~Service() {}

::grpc::Status PredictionService::Service::Classify(
    ::grpc::ServerContext* context,
    const ::tensorflow::serving::ClassificationRequest* request,
    ::tensorflow::serving::ClassificationResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PredictionService::Service::Regress(
    ::grpc::ServerContext* context,
    const ::tensorflow::serving::RegressionRequest* request,
    ::tensorflow::serving::RegressionResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PredictionService::Service::Predict(
    ::grpc::ServerContext* context,
    const ::tensorflow::serving::PredictRequest* request,
    ::tensorflow::serving::PredictResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PredictionService::Service::MultiInference(
    ::grpc::ServerContext* context,
    const ::tensorflow::serving::MultiInferenceRequest* request,
    ::tensorflow::serving::MultiInferenceResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PredictionService::Service::GetModelMetadata(
    ::grpc::ServerContext* context,
    const ::tensorflow::serving::GetModelMetadataRequest* request,
    ::tensorflow::serving::GetModelMetadataResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

}  // namespace serving
}  // namespace tensorflow
