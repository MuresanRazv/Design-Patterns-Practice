#include "Mediator.h"

Mediator::~Mediator()
{
}

Colleague::~Colleague()
{
}

ConcreteColleague1::ConcreteColleague1()
{
	cout << "Concrete Colleague of type 1 has been created.\n";
}

ConcreteColleague1::ConcreteColleague1(Mediator* mediator)
{
	this->mediator = mediator;
	cout << "Concrete Colleague of type 1 has been created.\n";
}

void ConcreteColleague1::doSomething()
{
	cout << "Concrete Colleague of type 1 is doing something.\n";
}

ConcreteColleague1::~ConcreteColleague1()
{
	cout << "Concrete Colleague of type 1 has been deleted.\n";
}

ConcreteColleague2::ConcreteColleague2()
{
	cout << "Concrete Colleague of type 2 has been created.\n";
}

ConcreteColleague2::ConcreteColleague2(Mediator* mediator)
{
	this->mediator = mediator;
	cout << "Concrete Colleague of type 2 has been created.\n";
}

void ConcreteColleague2::doSomething()
{
	cout << "Concrete Colleague of type 2 is doing something.\n";
}

ConcreteColleague2::~ConcreteColleague2()
{
	cout << "Concrete Colleague of type 2 has been deleted.\n";
}

ConcreteMediator::ConcreteMediator()
{
	cout << "Concrete Mediator has been created.\n";
}

void ConcreteMediator::doSomething()
{
	fColleague->doSomething();
	sColleague->doSomething();
	cout << "Concrete Mediator has done something.\n";
}

ConcreteMediator::~ConcreteMediator()
{
	delete fColleague;
	delete sColleague;
	cout << "Concrete Mediator has been deleted.\n";
}
