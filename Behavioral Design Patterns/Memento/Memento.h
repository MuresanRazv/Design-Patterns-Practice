#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Memento {
private:
	string state;
public:
	Memento();
	Memento(string state);

	string GetState();
	void setState(string state);

	~Memento();
};

class Originator {
private:
	string state;
public:
	Originator();

	void SetMemento(Memento* m);
	Memento* CreateMemento();

	~Originator();
};

class CareTaker {
private:
	vector<Memento*> memento;
public:
	CareTaker();

	void addMemento(Memento* memento);
	void getStates();

	~CareTaker();
};