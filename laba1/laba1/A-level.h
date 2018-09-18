#pragma once

#include <iostream>
#include <algorithm>

class Rectangle {
	int a, b;
public:
	Rectangle();
	Rectangle(Rectangle&&);
	Rectangle(Rectangle&);
	void getElements();
	int square();
};