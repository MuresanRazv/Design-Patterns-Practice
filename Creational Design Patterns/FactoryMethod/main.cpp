#include "FactoryMethod.h"

int main() {
	Creator* creator = new ConcreteCreator();

	creator->FactoryMethod();
	creator->AnOperation();
}