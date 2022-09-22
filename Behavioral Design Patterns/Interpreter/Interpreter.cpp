#include "Interpreter.h"

AbstractExpression::~AbstractExpression()
{
}

TerminalExpression::TerminalExpression()
{
	cout << "Terminal Expression has been created.\n";
}

void TerminalExpression::Interpret()
{
	cout << "Terminal Expression has been interpreted.\n";
}

TerminalExpression::~TerminalExpression()
{
	cout << "Terminal Expression has been deleted.\n";
}

NonterminalExpression::NonterminalExpression()
{
	cout << "Nonterminal Expression has been created.\n";
}

void NonterminalExpression::addExpression(AbstractExpression* expression)
{
	expressions.push_back(expression);
}

void NonterminalExpression::Interpret()
{
	for (auto it = expressions.begin(); it != expressions.end(); ++it)
		(*it)->Interpret();
}

NonterminalExpression::~NonterminalExpression()
{
	for (auto it = expressions.begin(); it != expressions.end(); ++it)
		delete* it;
	cout << "Nonterminal Expression has been deleted.\n";
}

Client::Client()
{
	cout << "Client has been created.\n";
}

void Client::doSomething()
{
	AbstractExpression* sentence = new NonterminalExpression();
	AbstractExpression* subsentence = new NonterminalExpression();

	AbstractExpression* endOfSentence = new TerminalExpression();
	AbstractExpression* endOfSubsentence = new TerminalExpression();

	// Normally you would identify sentences and letters from the context but for this simple example I'm not using a context
	dynamic_cast<NonterminalExpression*>(subsentence)->addExpression(endOfSubsentence);
	dynamic_cast<NonterminalExpression*>(sentence)->addExpression(subsentence);
	dynamic_cast<NonterminalExpression*>(sentence)->addExpression(endOfSentence);

	sentence->Interpret();

	delete sentence;
}

Client::~Client()
{
	cout << "Client has been deleted.\n";
}
