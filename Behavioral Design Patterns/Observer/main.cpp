#include "Observer.h"

int main() {
	ConcreteSubject* subject = new ConcreteSubject();

	Observer* obs1 = new ConcreteObserver(subject);
	Observer* obs2 = new ConcreteObserver(subject);
	Observer* obs3 = new ConcreteObserver(subject);

	subject->Attach(obs1);
	subject->Attach(obs2);
	subject->Attach(obs3);

	subject->setState("First State");

	obs1->Display();
	obs2->Display();
	obs3->Display();

	subject->Notify();

	obs1->Display();
	obs2->Display();
	obs3->Display();

	subject->setState("Second State");

	subject->Notify();

	obs1->Display();
	obs2->Display();
	obs3->Display();

	delete subject;

	return 0;
}