#pragma once
#include <iostream>
using std::cout;

class Product {
public:
	Product();

	~Product();
};

class Builder {
public:
	Builder();

	virtual void BuildPart() = 0;

	virtual ~Builder();
};

class ConcreteBuilder: public Builder {
private:
	Product* part;

public:
	ConcreteBuilder();

	virtual void BuildPart();
	Product* getResult();

	~ConcreteBuilder();
};

class Director {
private:
	Builder* builder; // Normally it would be a data structure storing Builders

public:
	Director(Builder* builder);

	void construct();

	~Director();
};