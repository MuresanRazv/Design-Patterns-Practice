#include "Visitor.h"

Visitor::~Visitor()
{
}

ConcreteVisitors::ConcreteVisitors()
{
	cout << "Concrete Visitors has been created.\n";
}

void ConcreteVisitors::visit(ConcreteElementA* e)
{
	e->featureA();
	cout << "Visited concrete element of type A.\n";
}

void ConcreteVisitors::visit(ConcreteElementB* e)
{
	e->featureB();
	cout << "Visited concrete element of type B.\n";
}

ConcreteVisitors::~ConcreteVisitors()
{
	cout << "Concrete Visitors has been deleted.\n";
}

Element::~Element()
{
}

ConcreteElementA::ConcreteElementA()
{
	cout << "Concrete Element of type A has been created.\n";
}

void ConcreteElementA::featureA()
{
	cout << "Showcase of feature A.\n";
}

void ConcreteElementA::accept(Visitor* v)
{
	v->visit(this);
}

ConcreteElementA::~ConcreteElementA()
{
	cout << "Concrete element of type A has been deleted.\n";
}

ConcreteElementB::ConcreteElementB()
{
	cout << "Concrete element of type B has been created.\n";
}

void ConcreteElementB::featureB()
{
	cout << "Showcase of feature B.\n";
}

void ConcreteElementB::accept(Visitor* v)
{
	v->visit(this);
}

ConcreteElementB::~ConcreteElementB()
{
	cout << "Concrete element of type B has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

Client::~Client()
{
	delete visitors;
	delete A;
	delete B;
	cout << "Client has been deleted.\n";
}
