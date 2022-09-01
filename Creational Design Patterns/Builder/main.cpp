#include "Builder.h"

int main() {
	Director director(new ConcreteBuilder());

	director.construct();

	return 0;
}