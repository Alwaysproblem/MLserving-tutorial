// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow/core/protobuf/eager_service.proto

#include "tensorflow/core/protobuf/eager_service.grpc.pb.h"

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

#include "tensorflow/core/protobuf/eager_service.pb.h"
namespace tensorflow {
namespace eager {

static const char* EagerService_method_names[] = {
    "/tensorflow.eager.EagerService/CreateContext",
    "/tensorflow.eager.EagerService/UpdateContext",
    "/tensorflow.eager.EagerService/Enqueue",
    "/tensorflow.eager.EagerService/StreamingEnqueue",
    "/tensorflow.eager.EagerService/WaitQueueDone",
    "/tensorflow.eager.EagerService/RunComponentFunction",
    "/tensorflow.eager.EagerService/KeepAlive",
    "/tensorflow.eager.EagerService/CloseContext",
};

std::unique_ptr<EagerService::Stub> EagerService::NewStub(
    const std::shared_ptr<::grpc::ChannelInterface>& channel,
    const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr<EagerService::Stub> stub(new EagerService::Stub(channel));
  return stub;
}

EagerService::Stub::Stub(
    const std::shared_ptr<::grpc::ChannelInterface>& channel)
    : channel_(channel),
      rpcmethod_CreateContext_(EagerService_method_names[0],
                               ::grpc::internal::RpcMethod::NORMAL_RPC,
                               channel),
      rpcmethod_UpdateContext_(EagerService_method_names[1],
                               ::grpc::internal::RpcMethod::NORMAL_RPC,
                               channel),
      rpcmethod_Enqueue_(EagerService_method_names[2],
                         ::grpc::internal::RpcMethod::NORMAL_RPC, channel),
      rpcmethod_StreamingEnqueue_(EagerService_method_names[3],
                                  ::grpc::internal::RpcMethod::BIDI_STREAMING,
                                  channel),
      rpcmethod_WaitQueueDone_(EagerService_method_names[4],
                               ::grpc::internal::RpcMethod::NORMAL_RPC,
                               channel),
      rpcmethod_RunComponentFunction_(EagerService_method_names[5],
                                      ::grpc::internal::RpcMethod::NORMAL_RPC,
                                      channel),
      rpcmethod_KeepAlive_(EagerService_method_names[6],
                           ::grpc::internal::RpcMethod::NORMAL_RPC, channel),
      rpcmethod_CloseContext_(EagerService_method_names[7],
                              ::grpc::internal::RpcMethod::NORMAL_RPC,
                              channel) {}

::grpc::Status EagerService::Stub::CreateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CreateContextRequest& request,
    ::tensorflow::eager::CreateContextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_CreateContext_, context, request, response);
}

void EagerService::Stub::experimental_async::CreateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CreateContextRequest* request,
    ::tensorflow::eager::CreateContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_CreateContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::CreateContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::CreateContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_CreateContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::CreateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CreateContextRequest* request,
    ::tensorflow::eager::CreateContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_CreateContext_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::CreateContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::CreateContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_CreateContext_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::CreateContextResponse>*
EagerService::Stub::AsyncCreateContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CreateContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::CreateContextResponse>::
      Create(channel_.get(), cq, rpcmethod_CreateContext_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::CreateContextResponse>*
EagerService::Stub::PrepareAsyncCreateContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CreateContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::CreateContextResponse>::
      Create(channel_.get(), cq, rpcmethod_CreateContext_, context, request,
             false);
}

::grpc::Status EagerService::Stub::UpdateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::UpdateContextRequest& request,
    ::tensorflow::eager::UpdateContextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_UpdateContext_, context, request, response);
}

void EagerService::Stub::experimental_async::UpdateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::UpdateContextRequest* request,
    ::tensorflow::eager::UpdateContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_UpdateContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::UpdateContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::UpdateContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_UpdateContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::UpdateContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::UpdateContextRequest* request,
    ::tensorflow::eager::UpdateContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_UpdateContext_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::UpdateContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::UpdateContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_UpdateContext_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::UpdateContextResponse>*
EagerService::Stub::AsyncUpdateContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::UpdateContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::UpdateContextResponse>::
      Create(channel_.get(), cq, rpcmethod_UpdateContext_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::UpdateContextResponse>*
EagerService::Stub::PrepareAsyncUpdateContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::UpdateContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::UpdateContextResponse>::
      Create(channel_.get(), cq, rpcmethod_UpdateContext_, context, request,
             false);
}

::grpc::Status EagerService::Stub::Enqueue(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::EnqueueRequest& request,
    ::tensorflow::eager::EnqueueResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Enqueue_,
                                             context, request, response);
}

void EagerService::Stub::experimental_async::Enqueue(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::EnqueueRequest* request,
    ::tensorflow::eager::EnqueueResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Enqueue_, context,
                                           request, response, std::move(f));
}

void EagerService::Stub::experimental_async::Enqueue(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::EnqueueResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_Enqueue_, context,
                                           request, response, std::move(f));
}

void EagerService::Stub::experimental_async::Enqueue(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::EnqueueRequest* request,
    ::tensorflow::eager::EnqueueResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Enqueue_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::Enqueue(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::EnqueueResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_Enqueue_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::EnqueueResponse>*
EagerService::Stub::AsyncEnqueueRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::EnqueueRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::EnqueueResponse>::Create(channel_.get(), cq,
                                                    rpcmethod_Enqueue_, context,
                                                    request, true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::EnqueueResponse>*
EagerService::Stub::PrepareAsyncEnqueueRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::EnqueueRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::EnqueueResponse>::Create(channel_.get(), cq,
                                                    rpcmethod_Enqueue_, context,
                                                    request, false);
}

::grpc::ClientReaderWriter<::tensorflow::eager::EnqueueRequest,
                           ::tensorflow::eager::EnqueueResponse>*
EagerService::Stub::StreamingEnqueueRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory<
      ::tensorflow::eager::EnqueueRequest,
      ::tensorflow::eager::EnqueueResponse>::Create(channel_.get(),
                                                    rpcmethod_StreamingEnqueue_,
                                                    context);
}

void EagerService::Stub::experimental_async::StreamingEnqueue(
    ::grpc::ClientContext* context,
    ::grpc::experimental::ClientBidiReactor<
        ::tensorflow::eager::EnqueueRequest,
        ::tensorflow::eager::EnqueueResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory<
      ::tensorflow::eager::EnqueueRequest,
      ::tensorflow::eager::EnqueueResponse>::
      Create(stub_->channel_.get(), stub_->rpcmethod_StreamingEnqueue_, context,
             reactor);
}

::grpc::ClientAsyncReaderWriter<::tensorflow::eager::EnqueueRequest,
                                ::tensorflow::eager::EnqueueResponse>*
EagerService::Stub::AsyncStreamingEnqueueRaw(::grpc::ClientContext* context,
                                             ::grpc::CompletionQueue* cq,
                                             void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory<
      ::tensorflow::eager::EnqueueRequest,
      ::tensorflow::eager::EnqueueResponse>::Create(channel_.get(), cq,
                                                    rpcmethod_StreamingEnqueue_,
                                                    context, true, tag);
}

::grpc::ClientAsyncReaderWriter<::tensorflow::eager::EnqueueRequest,
                                ::tensorflow::eager::EnqueueResponse>*
EagerService::Stub::PrepareAsyncStreamingEnqueueRaw(
    ::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory<
      ::tensorflow::eager::EnqueueRequest,
      ::tensorflow::eager::EnqueueResponse>::Create(channel_.get(), cq,
                                                    rpcmethod_StreamingEnqueue_,
                                                    context, false, nullptr);
}

::grpc::Status EagerService::Stub::WaitQueueDone(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest& request,
    ::tensorflow::eager::WaitQueueDoneResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_WaitQueueDone_, context, request, response);
}

void EagerService::Stub::experimental_async::WaitQueueDone(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest* request,
    ::tensorflow::eager::WaitQueueDoneResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_WaitQueueDone_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::WaitQueueDone(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::WaitQueueDoneResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_WaitQueueDone_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::WaitQueueDone(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest* request,
    ::tensorflow::eager::WaitQueueDoneResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_WaitQueueDone_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::WaitQueueDone(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::WaitQueueDoneResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_WaitQueueDone_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::WaitQueueDoneResponse>*
EagerService::Stub::AsyncWaitQueueDoneRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::WaitQueueDoneResponse>::
      Create(channel_.get(), cq, rpcmethod_WaitQueueDone_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::WaitQueueDoneResponse>*
EagerService::Stub::PrepareAsyncWaitQueueDoneRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::WaitQueueDoneResponse>::
      Create(channel_.get(), cq, rpcmethod_WaitQueueDone_, context, request,
             false);
}

::grpc::Status EagerService::Stub::RunComponentFunction(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest& request,
    ::tensorflow::eager::RunComponentFunctionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(),
                                             rpcmethod_RunComponentFunction_,
                                             context, request, response);
}

void EagerService::Stub::experimental_async::RunComponentFunction(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest* request,
    ::tensorflow::eager::RunComponentFunctionResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_RunComponentFunction_, context,
      request, response, std::move(f));
}

void EagerService::Stub::experimental_async::RunComponentFunction(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::RunComponentFunctionResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_RunComponentFunction_, context,
      request, response, std::move(f));
}

void EagerService::Stub::experimental_async::RunComponentFunction(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest* request,
    ::tensorflow::eager::RunComponentFunctionResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_RunComponentFunction_, context,
      request, response, reactor);
}

void EagerService::Stub::experimental_async::RunComponentFunction(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::RunComponentFunctionResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_RunComponentFunction_, context,
      request, response, reactor);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::eager::RunComponentFunctionResponse>*
EagerService::Stub::AsyncRunComponentFunctionRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::RunComponentFunctionResponse>::
      Create(channel_.get(), cq, rpcmethod_RunComponentFunction_, context,
             request, true);
}

::grpc::ClientAsyncResponseReader<
    ::tensorflow::eager::RunComponentFunctionResponse>*
EagerService::Stub::PrepareAsyncRunComponentFunctionRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::RunComponentFunctionResponse>::
      Create(channel_.get(), cq, rpcmethod_RunComponentFunction_, context,
             request, false);
}

::grpc::Status EagerService::Stub::KeepAlive(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::KeepAliveRequest& request,
    ::tensorflow::eager::KeepAliveResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_KeepAlive_, context, request, response);
}

void EagerService::Stub::experimental_async::KeepAlive(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::KeepAliveRequest* request,
    ::tensorflow::eager::KeepAliveResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_KeepAlive_, context,
                                           request, response, std::move(f));
}

void EagerService::Stub::experimental_async::KeepAlive(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::KeepAliveResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(),
                                           stub_->rpcmethod_KeepAlive_, context,
                                           request, response, std::move(f));
}

void EagerService::Stub::experimental_async::KeepAlive(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::KeepAliveRequest* request,
    ::tensorflow::eager::KeepAliveResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_KeepAlive_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::KeepAlive(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::KeepAliveResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_KeepAlive_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::KeepAliveResponse>*
EagerService::Stub::AsyncKeepAliveRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::KeepAliveRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::KeepAliveResponse>::Create(channel_.get(), cq,
                                                      rpcmethod_KeepAlive_,
                                                      context, request, true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::KeepAliveResponse>*
EagerService::Stub::PrepareAsyncKeepAliveRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::KeepAliveRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::KeepAliveResponse>::Create(channel_.get(), cq,
                                                      rpcmethod_KeepAlive_,
                                                      context, request, false);
}

::grpc::Status EagerService::Stub::CloseContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CloseContextRequest& request,
    ::tensorflow::eager::CloseContextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(
      channel_.get(), rpcmethod_CloseContext_, context, request, response);
}

void EagerService::Stub::experimental_async::CloseContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CloseContextRequest* request,
    ::tensorflow::eager::CloseContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_CloseContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::CloseContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::CloseContextResponse* response,
    std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(
      stub_->channel_.get(), stub_->rpcmethod_CloseContext_, context, request,
      response, std::move(f));
}

void EagerService::Stub::experimental_async::CloseContext(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CloseContextRequest* request,
    ::tensorflow::eager::CloseContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_CloseContext_, context, request,
      response, reactor);
}

void EagerService::Stub::experimental_async::CloseContext(
    ::grpc::ClientContext* context, const ::grpc::ByteBuffer* request,
    ::tensorflow::eager::CloseContextResponse* response,
    ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(
      stub_->channel_.get(), stub_->rpcmethod_CloseContext_, context, request,
      response, reactor);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::CloseContextResponse>*
EagerService::Stub::AsyncCloseContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CloseContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::CloseContextResponse>::
      Create(channel_.get(), cq, rpcmethod_CloseContext_, context, request,
             true);
}

::grpc::ClientAsyncResponseReader<::tensorflow::eager::CloseContextResponse>*
EagerService::Stub::PrepareAsyncCloseContextRaw(
    ::grpc::ClientContext* context,
    const ::tensorflow::eager::CloseContextRequest& request,
    ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory<
      ::tensorflow::eager::CloseContextResponse>::
      Create(channel_.get(), cq, rpcmethod_CloseContext_, context, request,
             false);
}

EagerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::CreateContextRequest,
          ::tensorflow::eager::CreateContextResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::CreateContextRequest* req,
             ::tensorflow::eager::CreateContextResponse* resp) {
            return service->CreateContext(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::UpdateContextRequest,
          ::tensorflow::eager::UpdateContextResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::UpdateContextRequest* req,
             ::tensorflow::eager::UpdateContextResponse* resp) {
            return service->UpdateContext(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::EnqueueRequest,
          ::tensorflow::eager::EnqueueResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::EnqueueRequest* req,
             ::tensorflow::eager::EnqueueResponse* resp) {
            return service->Enqueue(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[3], ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler<
          EagerService::Service, ::tensorflow::eager::EnqueueRequest,
          ::tensorflow::eager::EnqueueResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             ::grpc_impl::ServerReaderWriter<
                 ::tensorflow::eager::EnqueueResponse,
                 ::tensorflow::eager::EnqueueRequest>* stream) {
            return service->StreamingEnqueue(ctx, stream);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::WaitQueueDoneRequest,
          ::tensorflow::eager::WaitQueueDoneResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::WaitQueueDoneRequest* req,
             ::tensorflow::eager::WaitQueueDoneResponse* resp) {
            return service->WaitQueueDone(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service,
          ::tensorflow::eager::RunComponentFunctionRequest,
          ::tensorflow::eager::RunComponentFunctionResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::RunComponentFunctionRequest* req,
             ::tensorflow::eager::RunComponentFunctionResponse* resp) {
            return service->RunComponentFunction(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::KeepAliveRequest,
          ::tensorflow::eager::KeepAliveResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::KeepAliveRequest* req,
             ::tensorflow::eager::KeepAliveResponse* resp) {
            return service->KeepAlive(ctx, req, resp);
          },
          this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EagerService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler<
          EagerService::Service, ::tensorflow::eager::CloseContextRequest,
          ::tensorflow::eager::CloseContextResponse>(
          [](EagerService::Service* service, ::grpc_impl::ServerContext* ctx,
             const ::tensorflow::eager::CloseContextRequest* req,
             ::tensorflow::eager::CloseContextResponse* resp) {
            return service->CloseContext(ctx, req, resp);
          },
          this)));
}

EagerService::Service::~Service() {}

::grpc::Status EagerService::Service::CreateContext(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::CreateContextRequest* request,
    ::tensorflow::eager::CreateContextResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::UpdateContext(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::UpdateContextRequest* request,
    ::tensorflow::eager::UpdateContextResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::Enqueue(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::EnqueueRequest* request,
    ::tensorflow::eager::EnqueueResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::StreamingEnqueue(
    ::grpc::ServerContext* context,
    ::grpc::ServerReaderWriter<::tensorflow::eager::EnqueueResponse,
                               ::tensorflow::eager::EnqueueRequest>* stream) {
  (void)context;
  (void)stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::WaitQueueDone(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::WaitQueueDoneRequest* request,
    ::tensorflow::eager::WaitQueueDoneResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::RunComponentFunction(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::RunComponentFunctionRequest* request,
    ::tensorflow::eager::RunComponentFunctionResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::KeepAlive(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::KeepAliveRequest* request,
    ::tensorflow::eager::KeepAliveResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EagerService::Service::CloseContext(
    ::grpc::ServerContext* context,
    const ::tensorflow::eager::CloseContextRequest* request,
    ::tensorflow::eager::CloseContextResponse* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

}  // namespace eager
}  // namespace tensorflow
