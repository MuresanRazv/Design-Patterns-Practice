#pragma once
#include <iostream>

using std::cout;

class Adaptee {
public:
	Adaptee();

	void SpecificRequest();

	~Adaptee();
};

class Target {
public:
	Target();

	virtual void Request() = 0;

	~Target();
};


// This is a class adapter
// There is also object adapter which is really simillar the only difference being that Adapter would be composed of Adaptee's 
// instead of inheriting from them
class Adapter: public Target, private Adaptee {
public:
	Adapter();

	virtual void Request();

	~Adapter();
};


class Client {
private:
	Target* target = new Adapter();

public:
	Client();

	void doSomething();

	~Client();
};