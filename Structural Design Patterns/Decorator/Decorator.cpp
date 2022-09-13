#include "Decorator.h"

Component::Component()
{
	cout << "Component has been created.\n";
}

Component::~Component()
{
	cout << "Component has been deleted.\n";
}

ConcreteComponent::ConcreteComponent()
{
	cout << "Concrete component has been created.\n";
}

void ConcreteComponent::Operation()
{
	cout << "Concrete component has done an operation.\n";
}

ConcreteComponent::~ConcreteComponent()
{
	cout << "Concrete component has been deleted.\n";
}

Decorator::Decorator()
{
	cout << "Decorator has been created.\n";
}

void Decorator::Operation()
{
	component->Operation();
	cout << "Decorator has made an operation.\n";
}

Decorator::~Decorator()
{
	cout << "Decorator has been deleted.\n";
}

ConcreteDecoratorA::ConcreteDecoratorA()
{
	cout << "Concrete decorator of type A has been created.\n";
}

void ConcreteDecoratorA::Operation()
{
	Decorator::Operation();
	cout << "Concrete decorator of type A has made an operation.\n";
}

ConcreteDecoratorA::~ConcreteDecoratorA()
{
	cout << "Concrete decorator of type A has been deleted.\n";
}

ConcreteDecoratorB::ConcreteDecoratorB()
{
	cout << "Concrete decorator of type B has been created.\n";
}

void ConcreteDecoratorB::Operation()
{
	Decorator::Operation();
	AddedBehavior();
	cout << "Concrete decorator of type B has made an operation.\n";
}

void ConcreteDecoratorB::AddedBehavior()
{
	cout << "Decorator of type B has added some behavior.\n";
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{
	cout << "Concrete decorator of type B has been deleted.\n";
}
