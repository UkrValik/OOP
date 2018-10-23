#include "B-level.h"
#include <string>

using namespace std;

int main() {
	srand(time(NULL));

	string str;
	cout << "Valentyn Krasniukevych. IP-71. Variant 11" << endl;
	cout << "Continue?" << endl;
	cin >> str;
	while (str == "y" || str == "yes") {
		Fraction f1;
		Fraction f2;
		Fraction f3 = f1 + f2;
		f1.print();
		cout << "+";
		f2.print();
		cout << "=";
		f3.print();
		cout << endl;

		f3 = f1 - f2;
		f1.print();
		cout << "-";
		f2.print();
		cout << "=";
		f3.print();
		cout << endl;

		f3 = f1 * f2;
		f1.print();
		cout << "*";
		f2.print();
		cout << "=";
		f3.print();
		cout << endl;

		f3 = f1 / f2;
		f1.print();
		cout << "/";
		f2.print();
		cout << "=";
		f3.print();
		cout << endl;
		cout << f3 << endl;
		cout << "One more time?" << endl;
		cin >> str;
	}
	system("pause");
}