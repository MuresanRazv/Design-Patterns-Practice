#include "Visitor.h"

int main() {
	Client* c = new Client();

	c->A->accept(c->visitors);
	c->B->accept(c->visitors);

	delete c;

	return 0;
}