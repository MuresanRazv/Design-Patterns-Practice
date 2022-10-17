#include "TemplateMethod.h"

AbstractClass::AbstractClass()
{
	cout << "Abstract Class has been created.\n";
}

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}

AbstractClass::~AbstractClass()
{
	cout << "Abstract Class has been deleted.\n";
}

ConcreteClass::ConcreteClass()
{
	cout << "Concrete Class has been created.\n";
}

void ConcreteClass::PrimitiveOperation1()
{
	cout << "Primitive Operation 1 of Concrete Class has been called.\n";
}

void ConcreteClass::PrimitiveOperation2()
{
	cout << "Primitive Operation 2 of Concrete Class has been called.\n";
}

ConcreteClass::~ConcreteClass()
{
	cout << "Concrete Class has been deleted.\n";
}
