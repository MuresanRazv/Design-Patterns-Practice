#include "Observer.h"

Observer::~Observer()
{
}

ConcreteObserver::ConcreteObserver()
{
	cout << "Concrete Observer has been created.\n";
}

ConcreteObserver::ConcreteObserver(ConcreteSubject* subject)
{
	this->subject = subject;
	cout << "Concrete Observer has been created.\n";
}

void ConcreteObserver::Update()
{
	this->observerState = this->subject->getState();
}

void ConcreteObserver::Display()
{
	cout << this->observerState << "\n";
}

ConcreteObserver::~ConcreteObserver()
{
	cout << "Concrete Observer has been deleted.\n";
}

Subject::Subject()
{
	cout << "Subject has been created.\n";
}

void Subject::Attach(Observer* observer)
{
	observers.push_back(observer);
}

void Subject::Detach(Observer* observer)
{
	for (auto it = observers.begin(); it != observers.end(); ++it)
		if ((*it) == observer)
			observers.erase(it);
}

void Subject::Notify()
{
	for (auto it = observers.begin(); it != observers.end(); ++it)
		(*it)->Update();
}

Subject::~Subject()
{
	for (auto it = observers.begin(); it != observers.end(); ++it)
		delete (*it);
	cout << "Subject has been deleted.\n";
}

ConcreteSubject::ConcreteSubject()
{
	cout << "Concrete Subject has been created.\n";
}

string ConcreteSubject::getState()
{
	return this->subjectState;
}

void ConcreteSubject::setState(string subjectState)
{
	this->subjectState = subjectState;
}

ConcreteSubject::~ConcreteSubject()
{
	cout << "Concrete Subject has been deleted.\n";
}
