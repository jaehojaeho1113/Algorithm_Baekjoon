#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C;
	cin >> D;
	A += D / 3600;
	B += D % 3600/60;
	C += D % 60;
	if (C >= 60) {
		B += 1;
		C %= 60;
	}
	if (B >= 60) {
		A += 1;
		B %= 60;
	}
	if (A >= 24) {
		A %= 24;
	}

	cout << A <<" "<< B << " " <<C;

	return 0;
}