#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::vector;


// Normally, expressions are interpreted based on the information of a context, but this being a simple example we won't need a context
class AbstractExpression {
public:
	virtual void Interpret() = 0;
	virtual ~AbstractExpression();
};

class TerminalExpression : public AbstractExpression {
public:
	TerminalExpression();

	virtual void Interpret();

	~TerminalExpression();
};

class NonterminalExpression : public AbstractExpression {
private:
	vector<AbstractExpression*> expressions;
public:
	NonterminalExpression();

	void addExpression(AbstractExpression* expression);
	virtual void Interpret();

	~NonterminalExpression();
};

class Client {
public:
	Client();

	void doSomething();

	~Client();
};