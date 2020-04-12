#pragma once

#include "helloworld.grpc.pb.h"

using grpc::ServerContext;
using grpc::Status;

using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;

class CGreeterServiceImpl final : public helloworld::Greeter::Service {

public:
    CGreeterServiceImpl() {}

    Status SayHello(ServerContext* context, const HelloRequest* request,
        HelloReply* reply) override;
};