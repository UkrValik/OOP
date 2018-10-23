#include "C-level.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Krasniukevych Valentyn Oleksandrovych. Variant 11. C-level 11.\n";
	cout << "Would you like to continue?(yes/no)";
	string ans;
	cin >> ans;

	cout << "\n\n";

	while (ans == "yes" || ans == "y") {
		Points pts1;
		Points pts2(pts1);

		pts1.divider();
		pts2.divider();
		cout << "Would you like to launch it again?(yes/no)";
		cin >> ans;
		cout << "\n\n";
	}

	system("pause");
}