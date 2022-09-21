#include "Command.h"

Receiver::Receiver()
{
	cout << "Receiver has been created.\n";
}

void Receiver::Action()
{
	cout << "Receiver has made an action.\n";
}

Receiver::~Receiver()
{
	cout << "Receiver has been deleted.\n";
}

ConcreteCommand::ConcreteCommand()
{
	receiver = nullptr;
	cout << "Concrete Command has been created.\n";
}

ConcreteCommand::ConcreteCommand(Receiver* receiver)
{
	this->receiver = receiver;
	cout << "Concrete command has been created.\n";
}

void ConcreteCommand::Execute()
{
	cout << "Command will deal with the request now by calling the required action.\n";
	receiver->Action();
	cout << "Concrete Command has been executed.\n";
}

ConcreteCommand::~ConcreteCommand()
{
	delete receiver;
	cout << "Concrete Command has been deleted.\n";
}

Invoker::Invoker()
{
	command = nullptr;
	cout << "Invoker has been created.\n";
}

void Invoker::carryOutRequest()
{
	cout << "Invoker will try to invoke a command...\n";
	command->Execute();
}

void Invoker::setCommand(Command* command)
{
	this->command = command;
}

Invoker::~Invoker()
{
	delete command;
	cout << "Invoker has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	Receiver* receiver = new Receiver();
	Command* command = new ConcreteCommand(receiver);

	Invoker* invoker = new Invoker();
	invoker->setCommand(command);

	invoker->carryOutRequest();

	delete invoker;
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}

Command::~Command()
{
}
