#include "AbstractFactory.h"

int main() {
	AbstractFactory* myFactory1 = new ConcreteFactory1();
	AbstractFactory* myFactory2 = new ConcreteFactory2();

	myFactory1->CreateProductA();
	myFactory2->CreateProductB();

	return 0;
}