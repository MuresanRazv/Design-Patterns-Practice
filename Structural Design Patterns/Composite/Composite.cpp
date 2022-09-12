#include "Composite.h"

Composite::Composite()
{
	cout << "Composite has been created.\n";
}

void Composite::Operation()
{
	cout << "Composite has made operations using its children.\n";
	for (auto it = children.begin(); it != children.end(); ++it)
		(*it)->Operation();
}

void Composite::Add(Component* component)
{
	children.push_back(component);
	cout << "Composite has added an component to its children\n";
}

void Composite::Remove(Component* component)
{
	vector<Component*> newChildren;

	for (auto it = children.begin(); it != children.end(); ++it)
		if (*it != component)
			newChildren.push_back(*it);

	children = newChildren;

	cout << "Composite has removed a component from its children.\n";
}

Component* Composite::GetChild(int nr)
{
	return children[nr - 1];
}

Composite::~Composite()
{
	cout << "Composite has been deleted.\n";
}

Leaf::Leaf()
{
	cout << "Leaf has been created.\n";
}

void Leaf::Operation()
{
	cout << "Leaf has made an operation.\n";
}

void Leaf::Add(Component* component)
{
}

void Leaf::Remove(Component* component)
{
}

Component* Leaf::GetChild(int nr)
{
	return nullptr;
}

Leaf::~Leaf()
{
	cout << "Leaf has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	Component* l1 = new Leaf();
	Component* l2 = new Leaf();

	component->Add(l1);
	component->Add(l2);

	component->Operation();
	
	component->Remove(l1);
	component->GetChild(1)->Operation();
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
