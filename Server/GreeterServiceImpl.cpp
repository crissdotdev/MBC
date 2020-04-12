#include "GreeterServiceImpl.h"

Status CGreeterServiceImpl::SayHello(ServerContext* context, const HelloRequest* request,
    HelloReply* reply) {

    // std::string prefix("Hello ");

    // in caz de vrem sa trimitem si reply
    // reply->set_message(prefix + request->name());

    std::cout << "Hello " << request->name() << "!\n";
    return Status::OK;
}