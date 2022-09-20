#pragma once
#include <iostream>

using std::cout;

class Subject {
public:
	virtual void Request() = 0;
};

class RealSubject : public Subject {
public:
	RealSubject();

	virtual void Request();

	~RealSubject();
};

class Proxy : public Subject {
private:
	Subject* realSubject;

public:
	Proxy();

	virtual void Request();

	~Proxy();
};

class Client {
private:
	Subject* subject = new Proxy();

public:
	Client();

	void doSomething();

	~Client();

};