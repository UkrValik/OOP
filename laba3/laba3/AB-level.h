#include <cmath>
#include <iostream>
#include <string>

class Math_function {
protected:
	double x, y, z;
public:
	Math_function();
	virtual double function_meaning() = 0;
	virtual ~Math_function();
};

class Type1 : public Math_function {
public:
	Type1();
	double function_meaning();
	~Type1();
};

class Type2 : public Math_function {
public:
	Type2();
	double function_meaning();
	~Type2();
};