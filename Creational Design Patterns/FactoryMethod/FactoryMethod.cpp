#include "FactoryMethod.h"

Product::Product()
{
	cout << "Product has been constructed.\n";
}

Product::~Product()
{
	cout << "Product has been deleted.\n";
}

ConcreteProduct::ConcreteProduct()
{
	cout << "Concrete Product has been constructed.\n";
}

ConcreteProduct::~ConcreteProduct()
{
	cout << "Concrete Product has been deleted.\n";
}

Creator::Creator()
{
	cout << "Creator has been constructed.\n";
}

void Creator::AnOperation()
{
	// Here, AnOperation represents a function that could run a larger set of instructions
	// rather than just creating a product. For example, it could create a product and add it to a database.
	product = FactoryMethod();
	cout << "Creator has constructed and registered product.\n";
}

Creator::~Creator()
{
	cout << "Creator has been deleted.\n";
}

ConcreteCreator::ConcreteCreator()
{
	cout << "Concrete Creator has been constructed.\n";
}

Product* ConcreteCreator::FactoryMethod()
{
	return new ConcreteProduct();
}

ConcreteCreator::~ConcreteCreator()
{
	cout << "Concrete Creator has been deleted.\n";
}
