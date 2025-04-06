#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0,M=0;
	for (int i = 0;i < 10;i++) {
		cin >> a >> b;
		c = c - a + b;
		if (c > M) {
			M = c;
		}
	}
	cout << M;
}