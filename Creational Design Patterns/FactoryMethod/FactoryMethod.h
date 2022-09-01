#pragma once
#include <iostream>

using std::cout;

class Product {
public:
	Product();

	~Product();
};

class ConcreteProduct: public Product {
public:
	ConcreteProduct();

	~ConcreteProduct();
};

class Creator {
private:
	Product* product;

public:
	Creator();

	virtual	Product* FactoryMethod() = 0;
	void AnOperation();

	~Creator();
};

class ConcreteCreator: public Creator {
public:
	ConcreteCreator();
	
	virtual Product* FactoryMethod();

	~ConcreteCreator();
};