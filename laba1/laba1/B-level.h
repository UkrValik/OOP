#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>

class Points {
	int n, A[][2];
public:
	Points();
	Points(Points&);
	void divider();
	//~Points();
};