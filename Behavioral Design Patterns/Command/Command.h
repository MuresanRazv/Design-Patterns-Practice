#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Receiver {
public:
	Receiver();

	void Action();

	~Receiver();
};

class Command {
public:
	virtual void Execute() = 0;
	virtual ~Command();
};

class ConcreteCommand : public Command {
private:
	Receiver* receiver;
public:
	ConcreteCommand();
	ConcreteCommand(Receiver* receiver);

	virtual void Execute();

	~ConcreteCommand();
};

// The invoker can store commands and execute them whenever we want
class Invoker {
private:
	Command* command;
public:
	Invoker();

	void setCommand(Command* command);
	void carryOutRequest();

	~Invoker();
};

class Client {
public:
	Client();

	void doSomething();

	~Client();
};