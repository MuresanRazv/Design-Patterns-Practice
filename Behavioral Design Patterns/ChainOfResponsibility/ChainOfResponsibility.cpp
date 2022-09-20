#include "ChainOfResponsibility.h"

ConcreteHandler1::ConcreteHandler1()
{
	successor = new ConcreteHandler2();
	cout << "Concrete Handler of type 1 has been created.\n";
}

void ConcreteHandler1::HandleRequest(int type)
{
	cout << "Concrete Handler of type 1 is handling request...\n";
	if (type == 1) {
		cout << "Request has been handled by Concrete Handler of type 1.\n";
	}
	else if (successor) {
		successor->HandleRequest(type);
	}
	else {
		cout << "There is no handler for this type of action.\n";
	}
}

ConcreteHandler1::~ConcreteHandler1()
{
	cout << "Concrete Handler of type 1 has been deleted.\n";
	delete successor;
}

ConcreteHandler2::ConcreteHandler2()
{
	cout << "Concrete Handler of type 2 has been created.\n";
}

void ConcreteHandler2::HandleRequest(int type)
{
	cout << "Concrete Handler of type 2 is handling request...\n";
	if (type == 2) {
		cout << "Request has been handled by Concrete Handler of type 2.\n";
	}
	else if (successor) {
		successor->HandleRequest(type);
	}
	else {
		cout << "There is no handler for this type of action.\n";
	}
}

ConcreteHandler2::~ConcreteHandler2()
{
	cout << "Concrete Handler of type 2 has been deleted.\n";
	delete successor;
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	handler->HandleRequest(1);
	handler->HandleRequest(2);
	handler->HandleRequest(3);
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
	delete handler;
}

Handler::~Handler()
{
}
