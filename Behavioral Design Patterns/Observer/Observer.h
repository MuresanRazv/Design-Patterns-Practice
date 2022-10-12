#pragma once
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

class Observer {
public:
	virtual ~Observer();

	virtual void Update() = 0;
	virtual void Display() = 0;
};

class Subject {
private:
	vector<Observer*> observers;
public:
	Subject();

	void Attach(Observer* observer);
	void Detach(Observer* observer);
	void Notify();

	virtual ~Subject();
};

class ConcreteSubject : public Subject {
private:
	string subjectState;
public:
	ConcreteSubject();

	string getState();
	void setState(string subjectState);

	~ConcreteSubject();
};

class ConcreteObserver : public Observer {
private:
	ConcreteSubject* subject;
	string observerState;
public:
	ConcreteObserver();
	ConcreteObserver(ConcreteSubject* subject);

	virtual void Update();
	virtual void Display();

	virtual ~ConcreteObserver();
};