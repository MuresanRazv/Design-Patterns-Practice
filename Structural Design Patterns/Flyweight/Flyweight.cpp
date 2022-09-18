#include "Flyweight.h"

ConcreteFlyweight::ConcreteFlyweight()
{
	cout << "Concrete Flyweight has been created.\n";
	this->intrinsicState = "Some Intrinsic State which can be shared";
}

void ConcreteFlyweight::Operation(string extrinsicState)
{
	cout << "A concrete flyweight with the current intrinsic state: \n"
		<< intrinsicState << "\n has made an operation, having the following extrinsic state:\n" << extrinsicState << "\n";
}

string ConcreteFlyweight::getState()
{
	return intrinsicState;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
	cout << "Concrete flyweight has been deleted.\n";
}

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight()
{
	cout << "Unshared Concrete Flyweight has been created.\n";
	this->allState = "Some state that cannot be shared.";
}

void UnsharedConcreteFlyweight::Operation(string extrinsicState)
{
	cout << "A unshared concrete flyweight with the current unshared state: \n"
		<< allState << "\n has made an operation, having the following extrinsic state:\n" << extrinsicState << "\n";
}

string UnsharedConcreteFlyweight::getState()
{
	return allState;
}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight()
{
	cout << "Unshared Concrete Flyweight has been deleted.\n";
}

FlyweightFactory::FlyweightFactory()
{
	cout << "Flyweight Factory has been created.\n";
}

Flyweight* FlyweightFactory::GetFlyweight(string key)
{
	if (flyweights.find(key) != flyweights.end()) {
		return flyweights[key];
	}
	else {
		// The flyweights are mapped like this just as an example
		// Shared flyweights can have their intrinsic state as key in the map since they are shared
		// Unshared flyweights should have custom keys and do not necessarily need a state since they can't be shared
		// For this example we are using simple flyweights
		Flyweight* newFlyweight = new ConcreteFlyweight();
		flyweights.insert(std::pair<string, Flyweight*>(key, newFlyweight));
		return newFlyweight;
	}
}

FlyweightFactory::~FlyweightFactory()
{
	cout << "Flyweight factory has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	string instrinsicState = "Some Intrinsic State which can be shared";
	factory.GetFlyweight(instrinsicState)->Operation("Row");
	factory.GetFlyweight(instrinsicState)->Operation("Column");
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
