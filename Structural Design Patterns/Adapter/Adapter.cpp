#include "Adapter.h"

Adaptee::Adaptee()
{
	cout << "Adaptee has been constructed.\n";
}

void Adaptee::SpecificRequest()
{
	cout << "Made a specific request from Adaptee.\n";
}

Adaptee::~Adaptee()
{
	cout << "Adaptee has been deleted.\n";
}

Target::Target()
{
	cout << "Target has been created.\n";
}

Target::~Target()
{
	cout << "Target has been deleted.\n";
}

Adapter::Adapter()
{
	cout << "Adapter has been created.\n";
}

void Adapter::Request()
{
	cout << "Adapter has made a request.\n";
	SpecificRequest();
}

Adapter::~Adapter()
{
	cout << "Adapter has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	cout << "Client has used target to make a request.\n";
	target->Request();
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
