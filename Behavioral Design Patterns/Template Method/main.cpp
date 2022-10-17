#include "TemplateMethod.h"

int main() {
	AbstractClass* a = new ConcreteClass();

	a->TemplateMethod();

	delete a;

	return 0;
}