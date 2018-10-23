#include "B-level.h"

using namespace std;

Fraction::Fraction() {
	m = rand() % 201 - 100;
	n = rand() % 100 + 1;
	cout << "Fraction created: " << m << "/" << n << endl;
}

Fraction::Fraction(int m1, int n1) {
	m = m1;
	n = n1;
	//cout << "Fraction created:" << m << "/" << n << endl;
}

Fraction::Fraction(const Fraction& frc) {
	m = frc.m;
	n = frc.n;
}

void Fraction::print() {
	cout << "(" << m << "/" << n << ")";
}

int Fraction::binary_gcd(int m1, int m2) {
	int n1 = abs(m1);
	int n2 = abs(m2);
	bool en1 = n1 | 0;
	bool en2 = n2 | 0;
	if (!en1 && en2) return n2;
	else if (en1 && !en2) return n1;
	else if (n1 == n2) return n1;
	else if (n1 == 1 || n2 == 1) return 1;
	else if (n1 % 2 == 0 && n2 % 2 == 0) return binary_gcd(n1 >> 1, n2 >> 1) << 1;
	else if (n1 % 2 == 0 && n2 % 2 == 1) return binary_gcd(n1 >> 1, n2);
	else if (n1 % 2 == 1 && n2 % 2 == 0) return binary_gcd(n1, n2 >> 1);
	else if (n1 % 2 == 1 && n2 % 2 == 1 && n1 > n2) return binary_gcd((n1 - n2) >> 1, n2);
	else if (n1 % 2 == 1 && n2 % 2 == 1 && n1 < n2) return binary_gcd((n2 - n1) >> 1, n1);
}

Fraction Fraction::operator+(const Fraction& frc) {
	int n1 = binary_gcd(n, frc.n);
	n1 = n * frc.n / n1;
	int m1 = m * n1 / n + frc.m * n1 / frc.n;
	int gcd = abs(binary_gcd(m1, n1));
	cout << m1 << " " << n1 << " " << gcd << endl;
	n1 /= gcd;
	m1 /= gcd;
	return Fraction(m1, n1);
}

Fraction Fraction::operator-(const Fraction& frc) {
	int n1 = binary_gcd(n, frc.n);
	n1 = n * frc.n / n1;
	int m1 = m * n1 / n - frc.m * n1 / frc.n;
	int gcd = abs(binary_gcd(m1, n1));
	cout << m1 << " " << n1 << " " << gcd << endl;
	n1 /= gcd;
	m1 /= gcd;
	return Fraction(m1, n1);
}

Fraction Fraction::operator*(const Fraction& frc) {
	int n1 = n * frc.n;
	int m1 = m * frc.m;
	int gcd = abs(binary_gcd(m1, n1));
	cout << m1 << " " << n1 << " " << gcd << endl;
	n1 /= gcd;
	m1 /= gcd;
	return Fraction(m1, n1);
}

Fraction Fraction::operator/(const Fraction& frc) {
	int n1 = n * frc.m;
	int m1 = m * frc.n;
	int gcd = abs(binary_gcd(m1, n1));
	cout << m1 << " " << n1 << " " << gcd << endl;
	n1 /= gcd;
	m1 /= gcd;
	if (n1 < 0) {
		m1 = -m1;
		n1 = -n1;
	}
	Fraction ans(m1, n1);
	return ans;
}

ostream& operator<<(ostream& os, const Fraction& frc) {
	os << frc.m << "/" << frc.n << endl;
	return os;
}