#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0,M=0;
	for (int i = 0;i < 4;i++) {
		cin >> a >> b;
		c = c + b - a;
		if (c > M) {
			M = c;
		}
	}
	cout << M;
}