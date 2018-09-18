#include "B-level.h"

using namespace std;

Points::Points() {
	srand(time(0));
	n = rand() % 15 + 2;
	cout << n << " Points were created:" << endl;
	for (int i = 0; i < n; ++i) {
		A[i][0] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 20));
		A[i][1] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 20));
		cout << A[i][0] << " " << A[i][1] << endl;
	}
}

Points::Points(Points& pts) {
	n = pts.n;
	for (int i = 0; i < n; ++i) {
		A[i][0] = -pts.A[i][0];
		A[i][1] = -pts.A[i][1];
		cout << A[i][0] << " " << A[i][1] << endl;
	}
	cout << n << " Points were copied." << endl;
}

void Points::divider() {
	vector<vector<float> > ad(n, vector<float>(2));
	for (int i = 0; i < n; ++i) {
		//ad.push_back(vector<float>(2));
		//ad[i].push_back(A[i][0]);
		//ad[i].push_back(A[i][1]);
		ad[i][0] = A[i][0];
		ad[i][1] = A[i][1];
	}
	sort(ad.begin(), ad.end());
	int i = n / 2;
	float x1, x2, y1, y2;
	if (n % 2 == 0) {
		int j = i - 1;
		x1 = ad[j][0];
		x2 = ad[i][0];
		y1 = ad[j][1];
		y2 = ad[i][1];
	}
	else {
		x1 = ad[i][0];
		y1 = ad[i][1];
		x2 = (ad[i - 1][0] + ad[i + 1][0]) / 2;
		y2 = (ad[i - 1][1] + ad[i + 1][1]) / 2;

	}
	cout << "Rivniannia priamoi:" << endl;
	cout << "y = x * (" << (y2 - y1) / (x2 - x1) << ") - (" << x1 * (y2 - y1) / (x2 - x1) + y1 << ")" << endl;
}
/*
Points::~Points() {
	if (A) {
		cout << "Deleting..." << endl;
		//delete[] A;
	}
}
*/