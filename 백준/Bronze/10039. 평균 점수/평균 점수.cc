#include <iostream>
using namespace std;

int main() {
	int a[5];
	int b = 0;
	for (int i = 0;i < 5;i++) {
		cin >> a[i];
		if (a[i] >= 40) {
			b += a[i];
		}
		else {
			b += 40;
		}
	}
	cout << b / 5;
}