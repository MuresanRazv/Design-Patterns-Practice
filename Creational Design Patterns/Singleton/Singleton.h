#pragma once
#include <iostream>

using std::cout;

class Singleton {
public:
	static Singleton* Instance();

protected:
	Singleton();

private:
	static Singleton* _instance;
};