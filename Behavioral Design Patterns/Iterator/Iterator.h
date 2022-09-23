#pragma once
#include <iostream>

using std::cout;

class Iterator {
public:
	virtual ~Iterator();

	virtual void First() = 0;
	virtual void Next() = 0;
	virtual void isDone() = 0;
	virtual void CurrentItem() = 0;
};

class Aggregate {
public:
	virtual ~Aggregate();
	virtual Iterator* CreateIterator() = 0;
};

class ConcreteAggregate : public Aggregate {
public:
	ConcreteAggregate();

	virtual Iterator* CreateIterator();

	~ConcreteAggregate();
};


class ConcreteIterator : public Iterator {
protected:
	ConcreteAggregate* aggregate;
public:
	ConcreteIterator();
	ConcreteIterator(ConcreteAggregate* aggregate);

	virtual void First();
	virtual void Next();
	virtual void isDone();
	virtual void CurrentItem();

	~ConcreteIterator();
};

class Client {
public:
	Client();

	void doSomething();

	~Client();
};