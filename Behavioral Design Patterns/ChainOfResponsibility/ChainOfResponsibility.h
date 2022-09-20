#pragma once
#include <iostream>

using std::cout;

class Handler {
protected:
	Handler* successor;
public:
	virtual void HandleRequest(int type) = 0;

	virtual ~Handler();
};

class ConcreteHandler1 : public Handler {
public:
	ConcreteHandler1();

	virtual void HandleRequest(int type);

	~ConcreteHandler1();
};

class ConcreteHandler2 : public Handler {
public:
	ConcreteHandler2();

	virtual void HandleRequest(int type);

	~ConcreteHandler2();
};

class Client {
private:
	Handler* handler = new ConcreteHandler1();
public:
	Client();

	void doSomething();

	~Client();
};