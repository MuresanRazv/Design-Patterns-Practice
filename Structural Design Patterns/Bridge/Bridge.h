#pragma once
#include <iostream>

using std::cout;

class Implementor {
public:
	Implementor();

	virtual void OperationImp() = 0;

	~Implementor();
};

class ConcreteImplementorA : public Implementor {
public:
	ConcreteImplementorA();

	virtual void OperationImp();

	~ConcreteImplementorA();
};

class ConcreteImplementorB : public Implementor {
public:
	ConcreteImplementorB();

	virtual void OperationImp();

	~ConcreteImplementorB();
};

class Abstraction {
protected:
	Implementor* imp;

public:
	Abstraction();
	Abstraction(Implementor* imp);

	virtual void Operation();

	~Abstraction();
};

// Here Abstraction could have children classes that could use
// implementor to do more refined operations

class RefinedAbstraction: public Abstraction {
public:
	RefinedAbstraction(Implementor* imp);

	virtual void Operation();

	~RefinedAbstraction();
};

class Client {
private:
	Abstraction* abs = new RefinedAbstraction(new ConcreteImplementorB);

public:
	Client();

	void doSomething();

	~Client();
};