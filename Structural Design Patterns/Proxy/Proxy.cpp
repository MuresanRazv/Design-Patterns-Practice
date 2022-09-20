#include "Proxy.h"

RealSubject::RealSubject()
{
	cout << "Real Subject has been created.\n";
}

void RealSubject::Request()
{
	cout << "Real Subject has made a request.\n";
}

RealSubject::~RealSubject()
{
	cout << "Real Subject has been deleted.\n";
}

Proxy::Proxy()
{
	cout << "Proxy has been created.\n";
}

void Proxy::Request()
{
	realSubject = new RealSubject();
	cout << "Proxy will instantiate a Real Subject and make a request with it...\n";
	realSubject->Request();
}

Proxy::~Proxy()
{
	cout << "Proxy has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	this->subject->Request();
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
