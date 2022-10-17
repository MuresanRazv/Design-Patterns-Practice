#pragma once
#include <iostream>

using std::cout;

class AbstractClass {
public:
	AbstractClass();

	void TemplateMethod();

	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;

	virtual ~AbstractClass();
};

class ConcreteClass : public AbstractClass {
public:
	ConcreteClass();
	
	void PrimitiveOperation1();
	void PrimitiveOperation2();

	~ConcreteClass();
};