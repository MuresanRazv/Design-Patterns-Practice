#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Component {
public:
	virtual void Operation() = 0;
	virtual void Add(Component* component) = 0;
	virtual void Remove(Component* component) = 0;
	virtual Component* GetChild(int nr) = 0;
};

class Composite : public Component {
private:
	vector<Component*> children;

public:
	Composite();

	virtual void Operation();
	virtual void Add(Component* component);
	virtual void Remove(Component* component);
	virtual Component* GetChild(int nr);

	~Composite();
};

class Leaf : public Component {
public:
	Leaf();

	virtual void Operation();
	virtual void Add(Component* component);
	virtual void Remove(Component* component);
	virtual Component* GetChild(int nr);

	~Leaf();
};

class Client {
private:
	Component* component = new Composite();

public:
	Client();

	void doSomething();

	~Client();
};

