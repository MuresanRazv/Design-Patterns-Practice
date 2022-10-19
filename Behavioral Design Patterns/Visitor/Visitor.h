#pragma once
#include <iostream>

using std::cout;

class ConcreteElementA;
class ConcreteElementB;

class Visitor {
public:

	virtual ~Visitor();

	virtual void visit(ConcreteElementA* e) = 0;
	virtual void visit(ConcreteElementB* e) = 0;
};



class ConcreteVisitors : public Visitor {
public:
	ConcreteVisitors();

	void visit(ConcreteElementA* e);
	void visit(ConcreteElementB* e);

	~ConcreteVisitors();
};

class Element {
public:

	virtual ~Element();

	virtual void accept(Visitor* v) = 0;
};

class ConcreteElementA : public Element {
public:
	ConcreteElementA();

	void featureA();
	void accept(Visitor* v);

	~ConcreteElementA();
};

class ConcreteElementB : public Element {
public:
	ConcreteElementB();

	void featureB();
	void accept(Visitor* v);

	~ConcreteElementB();
};

class Client {
public:
	Client();

	Visitor* visitors = new ConcreteVisitors();
	Element* A = new ConcreteElementA();
	Element* B = new ConcreteElementB();

	~Client();
};