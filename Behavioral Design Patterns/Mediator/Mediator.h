#pragma once
#include <iostream>

using std::cout;

class Mediator {
public:
	virtual void doSomething() = 0;
	virtual ~Mediator();
};

class Colleague {
protected:
	Mediator* mediator = nullptr;
public:
	virtual ~Colleague();
};

class ConcreteColleague1 : public Colleague {
public:
	ConcreteColleague1();
	ConcreteColleague1(Mediator* mediator);

	void doSomething();

	~ConcreteColleague1();
};

class ConcreteColleague2 : public Colleague {
public:
	ConcreteColleague2();
	ConcreteColleague2(Mediator* mediator);

	void doSomething();

	~ConcreteColleague2();
};

class ConcreteMediator : public Mediator {
public:
	ConcreteColleague1* fColleague = new ConcreteColleague1();
	ConcreteColleague2* sColleague = new ConcreteColleague2();

	ConcreteMediator();

	virtual void doSomething();

	~ConcreteMediator();
};