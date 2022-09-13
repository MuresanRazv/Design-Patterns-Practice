#include "Decorator.h"

int main() {
	Component* decorator = new ConcreteDecoratorB();
	decorator->Operation();

	return 0;
}