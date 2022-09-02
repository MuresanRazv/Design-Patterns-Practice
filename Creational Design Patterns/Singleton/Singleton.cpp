#include "Singleton.h"

Singleton* Singleton::_instance = 0;

Singleton* Singleton::Instance()
{
	if (_instance == 0) {
		_instance = new Singleton;
	}
	cout << "Returned instance.\n";
	return _instance;
}

Singleton::Singleton()
{
	cout << "Constructed singleton.\n";
}
