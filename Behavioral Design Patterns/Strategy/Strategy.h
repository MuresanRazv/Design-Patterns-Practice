#pragma once
#include <iostream>

using std::cout;

class Strategy {
public:

	virtual ~Strategy();
	
	virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
	ConcreteStrategyA();

	virtual void AlgorithmInterface();

	~ConcreteStrategyA();
};

class ConcreteStrategyB : public Strategy {
public:
	ConcreteStrategyB();

	virtual void AlgorithmInterface();

	~ConcreteStrategyB();
};

class ConcreteStrategyC : public Strategy {
public:
	ConcreteStrategyC();

	virtual void AlgorithmInterface();

	~ConcreteStrategyC();
};

class Context {
public:
	Context();

	Strategy* strategy = nullptr;
	void ContextInterface();

	~Context();
};