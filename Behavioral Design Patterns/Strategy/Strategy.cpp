#include "Strategy.h"

Strategy::~Strategy()
{
}

ConcreteStrategyA::ConcreteStrategyA()
{
	cout << "Concrete strategy of type A has been created.\n";
}

void ConcreteStrategyA::AlgorithmInterface()
{
	cout << "Used type A strategy.\n";
}

ConcreteStrategyA::~ConcreteStrategyA()
{
	cout << "Concrete strategy of type A has been deleted.\n";
}

ConcreteStrategyB::ConcreteStrategyB()
{
	cout << "Concrete strategy of type B has been created.\n";
}

void ConcreteStrategyB::AlgorithmInterface()
{
	cout << "Used type B strategy.\n";
}

ConcreteStrategyB::~ConcreteStrategyB()
{
	cout << "Concrete strategy of type B has been deleted.\n";
}

ConcreteStrategyC::ConcreteStrategyC()
{
	cout << "Concrete strategy of type C has been created.\n";
}

void ConcreteStrategyC::AlgorithmInterface()
{
	cout << "Used type C strategy.\n";
}

ConcreteStrategyC::~ConcreteStrategyC()
{
	cout << "Concrete strategy of type C has been deleted.\n";
}

Context::Context()
{
	cout << "Context has been created.\n";
}

void Context::ContextInterface()
{
	strategy->AlgorithmInterface();
}

Context::~Context()
{
	cout << "Context has been deleted.\n";
}
