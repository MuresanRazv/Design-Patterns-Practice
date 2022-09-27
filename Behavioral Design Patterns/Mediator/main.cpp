#include "Mediator.h"

int main() {
	ConcreteMediator* mediator = new ConcreteMediator();

	mediator->doSomething();

	delete mediator;

	return 0;
}