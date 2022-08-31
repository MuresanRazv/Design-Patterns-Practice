#pragma once
// PRODUCTS

class AbstractProductA {
public:
	AbstractProductA();

	~AbstractProductA();
};

class AbstractProductB {
public:
	AbstractProductB();

	~AbstractProductB();
};


class ProductA1 : public AbstractProductA {
public:
	ProductA1();

	~ProductA1();
};

class ProductA2 : public AbstractProductA {
public:
	ProductA2();

	~ProductA2();
};

class ProductB1 : public AbstractProductB {
public:
	ProductB1();

	~ProductB1();
};

class ProductB2 : public AbstractProductB {
public:
	ProductB2();

	~ProductB2();
};

// FACTORIES

class AbstractFactory {
public:
	AbstractFactory();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();

	~AbstractFactory();
};

class ConcreteFactory1 : public AbstractFactory {
public:
	ConcreteFactory1();

	virtual ProductA1* CreateProductA();
	virtual ProductB1* CreateProductB();

	~ConcreteFactory1();
};

class ConcreteFactory2 : public AbstractFactory {
public:
	ConcreteFactory2();

	virtual ProductA2* CreateProductA();
	virtual ProductB2* CreateProductB();

	~ConcreteFactory2();
};
