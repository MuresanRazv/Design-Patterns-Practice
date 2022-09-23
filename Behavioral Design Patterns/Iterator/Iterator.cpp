#include "Iterator.h"

Iterator::~Iterator()
{
}

ConcreteIterator::ConcreteIterator()
{
	cout << "Concrete Iterator has been created.\n";
}

ConcreteIterator::ConcreteIterator(ConcreteAggregate* aggregate)
{
	this->aggregate = aggregate;
}

void ConcreteIterator::First()
{
	cout << "Returned first element from the content of the aggregate object.\n";
}

void ConcreteIterator::Next()
{
	cout << "Returned next element from the content of the aggregate object.\n";
}

void ConcreteIterator::isDone()
{
	cout << "Returns true if we've fully traversed the contents of the aggregate object.\n";
}

void ConcreteIterator::CurrentItem()
{
	cout << "Returns the content where the iterator is currently.\n";
}

ConcreteIterator::~ConcreteIterator()
{
	cout << "Concrete Iterator has been deleted.\n";
}

Aggregate::~Aggregate()
{
}

ConcreteAggregate::ConcreteAggregate()
{
	cout << "Concrete Aggregate has been created.\n";
}

Iterator* ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}

ConcreteAggregate::~ConcreteAggregate()
{
	cout << "Concrete Aggregate has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	Aggregate* aggregate = new ConcreteAggregate();

	Iterator* it = aggregate->CreateIterator();
	
	it->CurrentItem();
	it->First();
	it->isDone();
	it->Next();

	delete aggregate;
	delete it;
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
