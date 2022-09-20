#pragma once
#include <iostream>
#include <string>
#include <map>

using std::string;
using std::map;
using std::cout;

class Flyweight {
public:
	virtual void Operation(string extrinsicState) = 0;
	virtual string getState() = 0;
};

class ConcreteFlyweight : public Flyweight {
private:
	string intrinsicState;
public:
	ConcreteFlyweight();

	virtual void Operation(string extrinsicState);

	virtual string getState();

	~ConcreteFlyweight();
};

class UnsharedConcreteFlyweight : public Flyweight {
private:
	string allState;
public:
	UnsharedConcreteFlyweight();

	virtual void Operation(string extrinsicState);

	virtual string getState();

	~UnsharedConcreteFlyweight();
};

class FlyweightFactory {
private:
	map<string, Flyweight*> flyweights;
public:
	FlyweightFactory();

	Flyweight* GetFlyweight(string key);

	~FlyweightFactory();
};

class Client {
private:
	FlyweightFactory factory = FlyweightFactory();

public:
	Client();

	void doSomething();

	~Client();
};