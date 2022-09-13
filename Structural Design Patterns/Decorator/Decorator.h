#pragma once
#include <iostream>

using std::cout;

class Component {
public:
	Component();

	virtual void Operation() = 0;

	~Component();
};

class ConcreteComponent : public Component {
public:
	ConcreteComponent();

	virtual void Operation();

	~ConcreteComponent();
};

class Decorator : public Component {
private:
	Component* component = new ConcreteComponent();

public:
	Decorator();

	virtual void Operation();

	~Decorator();
};

class ConcreteDecoratorA : public Decorator {
private:
	bool addedState = true;

public:
	ConcreteDecoratorA();

	void Operation();

	~ConcreteDecoratorA();
};

class ConcreteDecoratorB : public Decorator {
public:
	ConcreteDecoratorB();

	void Operation();
	void AddedBehavior();

	~ConcreteDecoratorB();
};