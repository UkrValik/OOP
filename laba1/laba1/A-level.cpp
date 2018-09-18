#include "A-level.h"

using namespace std;

Rectangle::Rectangle() {
	int a, b;
	cout << "input Rectangle Elements: ";
	cin >> a >> b;
	this->a = a;
	this->b = b;
}

Rectangle::Rectangle(Rectangle&& tmp) : a(tmp.a), b(tmp.b) {
	cout << "Move Constructor" << endl;
	tmp.a = tmp.b = 0;
}

Rectangle::Rectangle(Rectangle& copy) : a(max(copy.a, copy.b)), b(max(copy.a, copy.b)) {
	cout << "Copy Constructor" << endl;
}

void Rectangle::getElements() {
	cout << "Rectangle elements: " << a << " " << b << endl;
}

int Rectangle::square() {
	return a * b;
}