#include "Prototype.h"

Prototype::Prototype()
{
	cout << "Constructed prototype.\n";
}

Prototype::~Prototype()
{
	cout << "Deleted prototype.\n";
}

ConcretePrototype1::ConcretePrototype1()
{
	cout << "Constructed concrete prototype of type 1.\n";
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& other)
{
	cout << "Cloned concrete prototype of type 1.\n";
}

Prototype* ConcretePrototype1::Clone()
{
	return new ConcretePrototype1(*this);
}

ConcretePrototype1::~ConcretePrototype1()
{
	cout << "Delete concrete prototype of type 1.\n";
}

ConcretePrototype2::ConcretePrototype2()
{
	cout << "Constructed concrete prototype of type 2.\n";
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& other)
{
	cout << "Cloned concrete prototype of type 2.\n";
}

Prototype* ConcretePrototype2::Clone()
{
	return new ConcretePrototype2(*this);
}

ConcretePrototype2::~ConcretePrototype2()
{
	cout << "Deleted concrete prototype of type 2.\n";
}

Client::Client()
{
	cout << "Constructed client.\n";
}

void Client::Operation()
{
	Prototype* p = p1->Clone();
	p = p2->Clone();
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
