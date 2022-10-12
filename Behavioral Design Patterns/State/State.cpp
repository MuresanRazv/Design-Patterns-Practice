#include "State.h"

State::~State()
{
}

ConcreteStateA::ConcreteStateA()
{
	cout << "Concrete state of type A has been created.\n";
}

void ConcreteStateA::Handle()
{
	cout << "Concrete state of type A is handling a request.\n";
}

ConcreteStateA::~ConcreteStateA()
{
	cout << "Concrete state of type A has been deleted.\n";
}

ConcreteStateB::ConcreteStateB()
{
	cout << "Concrete state of type B has been created.\n";
}

void ConcreteStateB::Handle()
{
	cout << "Concrete state of type B is handling a request.\n";
}

ConcreteStateB::~ConcreteStateB()
{
	cout << "Concrete state of type B has been deleted.\n";
}

Context::Context()
{
	cout << "Context has been created.\n";
}

void Context::Request()
{
	state->Handle();
}

Context::~Context()
{
	delete state;
	cout << "Context has been deleted.\n";
}
