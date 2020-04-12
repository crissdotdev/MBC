#include <iostream>
//#include <SumOperation.grpc.pb.h>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include "helloworld.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;
using grpc::Status;

using helloworld::HelloRequest;
using helloworld::HelloReply;
using helloworld::Greeter;

int main()
{
	grpc_init();
	ClientContext context;

	auto greeter_stub = Greeter::NewStub(grpc::CreateChannel("localhost:8888",
		grpc::InsecureChannelCredentials()));

	//SumRequest sumRequest;
	//sumRequest.set_firstoperand(10);
	//sumRequest.set_secondoperand(4);
	std::string name;

	std::cout << "Enter your name: ";
	std::cin >> name;

	HelloRequest request;
	request.set_name(name);

	HelloReply reply;

	//OperationResponse response;
	auto status = greeter_stub->SayHello(&context, request, &reply);
	
	// nu citisem initial ca trebuie sa fie afisat pe server

	//if (status.ok()) {
	//	std::cout << reply.message() << "\n";
	//}
}
