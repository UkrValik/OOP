#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Fraction {
	int m, n;
	int binary_gcd(int, int);
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction&);
	void print();
	Fraction operator +(const Fraction&);
	Fraction operator -(const Fraction&);
	Fraction operator *(const Fraction&);
	Fraction operator /(const Fraction&);
	friend ostream& operator<<(ostream&, const Fraction&);
};