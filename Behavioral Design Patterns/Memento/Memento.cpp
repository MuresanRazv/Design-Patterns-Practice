#include "Memento.h"

Memento::Memento()
{
	this->setState("");
}

Memento::Memento(string state)
{
	this->setState(state);
	cout << "Memento has been created.\n";
}

string Memento::GetState()
{
	return this->state;
}

void Memento::setState(string state)
{
	this->state = state;
}

Memento::~Memento()
{
	cout << "Memento has been deleted.\n";
}

Originator::Originator()
{
	cout << "Originator has been created.\n";
}

void Originator::SetMemento(Memento* m)
{
	this->state = m->GetState();
}

Memento* Originator::CreateMemento()
{
	return new Memento(this->state);
}

Originator::~Originator()
{
	cout << "Originator has been deleted.\n";
}

CareTaker::CareTaker()
{
	cout << "CareTaker has been created.\n";
}

void CareTaker::addMemento(Memento* memento)
{
	this->memento.push_back(memento);
}

void CareTaker::getStates()
{
	cout << "States in order of creation:\n";
	for (auto it = memento.begin(); it != memento.end(); ++it)
		cout << (*it)->GetState();
}

CareTaker::~CareTaker()
{
	for (auto it = memento.begin(); it != memento.end(); ++it)
		delete* it;
	cout << "CareTaker has been deleted.\n";
}
