#include "AB-level.h"

using namespace std;

Math_function::Math_function()
{
	cout << "Math_function created.\n";
}

Math_function::~Math_function()
{
	cout << "Math_function deleted.\n";
}

Type1::Type1() 
{
	cout << "Input x, y: ";
	cin >> x >> y;
	cout << "Type1 function created.\n";
}

double Type1::function_meaning()
{
	return x * x + sqrt(3 * y * y * y);
}

Type1::~Type1()
{
	cout << "Type1 deleted.\n";
}

Type2::Type2()
{
	cout << "Input x, y, z: ";
	cin >> x >> y >> z;
	cout << "Type2 function created.\n";
}

double Type2::function_meaning()
{
	return 3 * x * x * pow(z, 1.0 / 3.0) + pow(exp(1.0), sqrt(4 * y));
}

Type2::~Type2()
{
	cout << "Type2 deleted.\n";
}