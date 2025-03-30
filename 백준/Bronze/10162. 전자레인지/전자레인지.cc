#include <iostream>
using namespace std;

int main() {
	int T, A = 300, B = 60, C = 10, a, b, c;
	cin >> T;
	a = T / A;
	T %= A;
	b = T / B;
	T %= B;
	c = T / C;
	T %= C;
	if (T != 0) {
		cout << -1;
	}
	else {
		cout << a << " " << b << " " << c;
	}
}