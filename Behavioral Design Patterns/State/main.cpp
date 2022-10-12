#include "State.h"

int main() {
	Context context;

	context.state = new ConcreteStateA();
	context.Request();

	context.state = new ConcreteStateB();
	context.Request();

	return 0;
}