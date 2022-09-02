#pragma once
#include <iostream>

using std::cout;

class Prototype {
public:
	Prototype();

	virtual Prototype* Clone() = 0;

	~Prototype();
};

class ConcretePrototype1 : public Prototype {
public:
	ConcretePrototype1();
	ConcretePrototype1(const ConcretePrototype1& other);

	virtual Prototype* Clone();

	~ConcretePrototype1();
};

class ConcretePrototype2 : public Prototype {
public:
	ConcretePrototype2();
	ConcretePrototype2(const ConcretePrototype2& other);

	virtual Prototype* Clone();

	~ConcretePrototype2();
};

class Client {
private:
	Prototype* p1 = new ConcretePrototype1();
	Prototype* p2 = new ConcretePrototype2();
public:
	Client();

	void Operation();

	~Client();
};