// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: MultiplicationOperation.proto
#ifndef GRPC_MultiplicationOperation_2eproto__INCLUDED
#define GRPC_MultiplicationOperation_2eproto__INCLUDED

#include "MultiplicationOperation.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class MultiplicationOperationService final {
 public:
  static constexpr char const* service_full_name() {
    return "MultiplicationOperationService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::OperationResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>> AsyncCalculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>>(AsyncCalculateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>> PrepareAsyncCalculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>>(PrepareAsyncCalculateRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>* AsyncCalculateRaw(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::OperationResponse>* PrepareAsyncCalculateRaw(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::OperationResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::OperationResponse>> AsyncCalculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::OperationResponse>>(AsyncCalculateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::OperationResponse>> PrepareAsyncCalculate(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::OperationResponse>>(PrepareAsyncCalculateRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, std::function<void(::grpc::Status)>) override;
      void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Calculate(::grpc::ClientContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Calculate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::OperationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::OperationResponse>* AsyncCalculateRaw(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::OperationResponse>* PrepareAsyncCalculateRaw(::grpc::ClientContext* context, const ::MultiplicationRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Calculate_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Calculate(::grpc::ServerContext* context, const ::MultiplicationRequest* request, ::OperationResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Calculate() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalculate(::grpc::ServerContext* context, ::MultiplicationRequest* request, ::grpc::ServerAsyncResponseWriter< ::OperationResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Calculate<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Calculate() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::MultiplicationRequest, ::OperationResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::MultiplicationRequest* request, ::OperationResponse* response) { return this->Calculate(context, request, response); }));}
    void SetMessageAllocatorFor_Calculate(
        ::grpc::experimental::MessageAllocator< ::MultiplicationRequest, ::OperationResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::MultiplicationRequest, ::OperationResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Calculate(
      ::grpc::CallbackServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Calculate(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Calculate<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Calculate<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Calculate() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Calculate() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCalculate(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Calculate() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Calculate(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Calculate(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Calculate(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Calculate : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Calculate() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::MultiplicationRequest, ::OperationResponse>(std::bind(&WithStreamedUnaryMethod_Calculate<BaseClass>::StreamedCalculate, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Calculate() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Calculate(::grpc::ServerContext* /*context*/, const ::MultiplicationRequest* /*request*/, ::OperationResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCalculate(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::MultiplicationRequest,::OperationResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Calculate<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Calculate<Service > StreamedService;
};


#endif  // GRPC_MultiplicationOperation_2eproto__INCLUDED
