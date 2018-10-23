#include "C-level.h"

using namespace std;

Points::Points() {
	srand(time(0));
	n = rand() % 15 + 2;
	A.resize(n);
	f = new int[n];
	for (int i = 0; i < n; ++i) {
		A[i].first = rand() % 31 - 15;
		A[i].second = rand() % 31 - 15;
		f[i] = i;
		cout << A[i].first << " " << A[i].second << " " << f[i] << endl;
	}
	cout << "Object Points has been created." << endl;
}

Points::Points(const Points& pts) {
	n = pts.n;
	A.resize(n);
	f = new int[n];
	for (int i = 0; i < n; ++i) {
		A[i].first = -pts.A[i].first;
		A[i].second = -pts.A[i].second;
		f[i] = pts.f[i];
		cout << f[i] << " ";
	}
	cout << "\nObject Points has been copied." << endl;
}

void Points::divider() {
	vector<pair<int, int> > arr(n);
	for (int i = 0; i < n; ++i) {
		arr[i].first = A[i].first;
		arr[i].second = A[i].second;
	}
	sort(arr.begin(), arr.end());
	float x1, y1, x2, y2;
	int i = n / 2;
	if (n % 2) {
		x1 = static_cast<float>(arr[i].first - 0.01);
		y1 = static_cast<float>(arr[i].second + 1);
		x2 = static_cast<float>(arr[i].first);
		y2 = static_cast<float>(arr[i].second);
	}
	else {
		x1 = static_cast<float>(arr[i].first - 0.01);
		y1 = static_cast<float>(arr[i].second + 1);
		x2 = static_cast<float>(arr[i].first);
		y2 = static_cast<float>(arr[i].second - 0.5);
	}
	cout << endl;
	cout << x1 << " " << y1 << endl;
	cout << x2 << " " << y2 << endl;
	cout << endl;
	cout << "Rivniannia shukanoi priamoi: ";
	cout << "y = x * (" << (y2 - y1) / (x2 - x1) << ") - (" << x1 * (y2 - y1) / (x2 - x1) + y1 << ")" << endl;
}

void Points::print() {
	cout << this->n << endl;
	for (int i = 0; i < n; ++i) {
		cout << this->A[i].first << " " << this->A[i].second << endl;
	}
}

Points::~Points() {
	if (f) {
		delete f;
		cout << "Object deleted\n";
	}
}