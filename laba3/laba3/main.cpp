#include "AB-level.h"

using namespace std;

int main()
{
	string s = "yes";
	cout << "Krasniukevych Valentyn. IP-71. AB-level\n";
	while (s == "yes" || s == "y") {
		Math_function *f1, *f2;
		f1 = new Type1();
		cout << f1->function_meaning();
		cout << endl;
		f2 = new Type2();
		cout << f2->function_meaning();
		cout << endl;
		delete f1;
		delete f2;
		cout << "Would you like to execute this one more time? ";
		cin >> s;
	}

	return 0;
}