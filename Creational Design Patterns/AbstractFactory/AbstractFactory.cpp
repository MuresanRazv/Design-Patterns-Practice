#include "AbstractFactory.h"
#include <iostream>
using std::cout;

AbstractFactory::AbstractFactory()
{
	cout << "Created abstract factory!\n";
}

AbstractProductA* AbstractFactory::CreateProductA()
{
	return new AbstractProductA();
}

AbstractProductB* AbstractFactory::CreateProductB()
{
	return new AbstractProductB();
}

AbstractFactory::~AbstractFactory()
{
}

ConcreteFactory1::ConcreteFactory1()
{
	cout << "Concrete factory of type 1 was created.\n";
}

ProductA1* ConcreteFactory1::CreateProductA()
{
	return new ProductA1();
}

ProductB1* ConcreteFactory1::CreateProductB()
{
	return new ProductB1();
}

ConcreteFactory1::~ConcreteFactory1()
{
	cout << "Concrete factory of type 1 was deleted.\n";
}

ConcreteFactory2::ConcreteFactory2()
{
	cout << "Concrete factory of type 2 was created.\n";
}

ProductA2* ConcreteFactory2::CreateProductA()
{
	return new ProductA2();
}

ProductB2* ConcreteFactory2::CreateProductB()
{
	return new ProductB2();
}

ConcreteFactory2::~ConcreteFactory2()
{
	cout << "Concrete factory of type 2 was deleted.\n";
}

AbstractProductA::AbstractProductA()
{
	cout << "Abstract product of type A was created.\n";
}

AbstractProductA::~AbstractProductA()
{
	cout << "Abstract product of type A was deleted.\n";
}

AbstractProductB::AbstractProductB()
{
	cout << "Abstract product of type B was created.\n";
}

AbstractProductB::~AbstractProductB()
{
	cout << "Abstract product of type B was deleted.\n";
}

ProductA1::ProductA1()
{
	cout << "Product of type A1 was created.\n";
}

ProductA1::~ProductA1()
{
	cout << "Product of type A1 was deleted.\n";
}

ProductA2::ProductA2()
{
	cout << "Product of type A2 was created.\n";
}

ProductA2::~ProductA2()
{
	cout << "Product of type A2 was deleted.\n";
}

ProductB1::ProductB1()
{
	cout << "Product of type B1 was created.\n";
}

ProductB1::~ProductB1()
{
	cout << "Product of type B1 was deleted.\n";
}

ProductB2::ProductB2()
{
	cout << "Product of type B2 was created.\n";
}

ProductB2::~ProductB2()
{
	cout << "Product of type B2 was deleted.\n";
}
