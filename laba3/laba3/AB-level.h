#include <cmath>
#include <iostream>
#include <string>

class Math_function {
protected:
	double x = 0, y = 0, z = 0;
public:
	Math_function();
	virtual float function_meaning() = 0;
};

class Type1 : public Math_function {
public:
	Type1();
	float function_meaning();
};

class Type2 : public Math_function {
public:
	Type2();
	float function_meaning();
};