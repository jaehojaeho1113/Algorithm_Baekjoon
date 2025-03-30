#include <iostream>
using namespace std;

int main() {
	int n, A = 100, B = 100, a, b;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b;
		if (a > b)
			B -= a;
		else if (a < b)
			A -= b;
	}
	cout << A << endl << B;
}