#include "Strategy.h"

int main() {
	Strategy* A = new ConcreteStrategyA();
	Strategy* B = new ConcreteStrategyB();
	Strategy* C = new ConcreteStrategyC();

	Context context;

	context.strategy = A;
	context.ContextInterface();

	context.strategy = B;
	context.ContextInterface();

	context.strategy = C;
	context.ContextInterface();

	delete A;
	delete B;
	delete C;

	return 0;
}