#pragma once
#include <vector>
#include <string>
#include <ctime>
#include <iostream>
#include <algorithm>

using namespace std;

class Points {
private:
	int n;
	vector<pair<int, int> > A;
	int *f;
public:
	Points();
	Points(const Points&);
	void divider();
	void print();
	~Points();
};