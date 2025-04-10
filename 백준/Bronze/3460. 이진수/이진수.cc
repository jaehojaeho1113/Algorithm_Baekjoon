#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,a,b;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a;
		b = 0;
		while (1) {
			if (a % 2 == 1) {
				cout << b << " ";
			}
			if (a == 1) {
				break;
			}
			a /= 2;
			b++;
		}
	}
}