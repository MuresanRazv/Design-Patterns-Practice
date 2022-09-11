#include "Bridge.h"

Implementor::Implementor()
{
	cout << "Implementor has been created.\n";
}

Implementor::~Implementor()
{
	cout << "Implementor has been deleted.\n";
}

ConcreteImplementorA::ConcreteImplementorA()
{
	cout << "Concrete Implementor of type A has been created.\n";
}

void ConcreteImplementorA::OperationImp()
{
	cout << "Concrete implementor of type A has done an operation.\n";
}

ConcreteImplementorA::~ConcreteImplementorA()
{
	cout << "Concrete Implementor of type A has been deleted.\n";
}

ConcreteImplementorB::ConcreteImplementorB()
{
	cout << "Concrete Implementor of type B has been created.\n";
}

void ConcreteImplementorB::OperationImp()
{
	cout << "Concrete Implementor of type B has made an operation.\n";
}

ConcreteImplementorB::~ConcreteImplementorB()
{
	cout << "Concrete implementor of type B has been deleted.\n";
}

Abstraction::Abstraction()
{
	cout << "Abstraction has been created.\n";
}

Abstraction::Abstraction(Implementor* imp)
{
	cout << "Abstraction has been created using and implementor.\n";
	this->imp = imp;
}

void Abstraction::Operation()
{
	cout << "Abstraction will make an operation using an implementor.\n";
	imp->OperationImp();
}

Abstraction::~Abstraction()
{
	cout << "Abstraction has been deleted.\n";
}

RefinedAbstraction::RefinedAbstraction(Implementor* imp)
{
	cout << "Refine Abstraction has been created using an Implementor.\n";
	this->imp = imp;
}

void RefinedAbstraction::Operation()
{
	cout << "Refined Abstraction has made an operation using an implementor.\n";
	imp->OperationImp();
}

RefinedAbstraction::~RefinedAbstraction()
{
	cout << "Refined Abstraction has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	cout << "Client is using an Abstraction.\n";
	abs->Operation();
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
	delete abs;
}
