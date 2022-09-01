#include "Builder.h"

Product::Product()
{
	cout << "Product has been constructed.\n";
}

Product::~Product()
{
	cout << "Product has been deleted.\n";
}

ConcreteBuilder::ConcreteBuilder()
{
	cout << "Concrete Builder has been constructed.\n";
}

void ConcreteBuilder::BuildPart()
{
	part = new Product();
}

Product* ConcreteBuilder::getResult()
{
	return part;
}

ConcreteBuilder::~ConcreteBuilder()
{
	cout << "Concrete Builder has been deleted.\n";
}

Director::Director(Builder* builder)
{
	this->builder = builder;
}

void Director::construct()
{
	builder->BuildPart();
}

Director::~Director()
{
	cout << "Director has been deleted.\n";
}

Builder::Builder()
{
	cout << "Builder has been constructed.\n";
}

Builder::~Builder()
{
	cout << "Builder has been deleted.\n";
}
