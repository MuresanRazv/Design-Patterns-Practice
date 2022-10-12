#include "Memento.h"

int main() {
	Originator originator;
	CareTaker caretaker;
	Memento* memento = new Memento("first state\n");

	originator.SetMemento(memento);
	caretaker.addMemento(originator.CreateMemento());

	memento->setState("second state\n");

	originator.SetMemento(memento);
	caretaker.addMemento(originator.CreateMemento());

	caretaker.getStates();
	delete memento;

	return 0;
}