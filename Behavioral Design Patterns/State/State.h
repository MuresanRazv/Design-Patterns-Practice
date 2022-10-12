#pragma once
#include <iostream>

using std::cout;

class State {
public:
	virtual ~State();

	virtual void Handle() = 0;
};

class ConcreteStateA : public State {
public:
	ConcreteStateA();

	virtual void Handle();

	~ConcreteStateA();
};

class ConcreteStateB : public State {
public:
	ConcreteStateB();

	virtual void Handle();

	~ConcreteStateB();
};

class Context {
public:
	Context();

	State* state = nullptr;
	void Request();

	~Context();
};