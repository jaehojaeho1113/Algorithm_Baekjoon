#include <iostream>
using namespace std;

int main() {
	int N, a[100], b = 0, c = 0;
	cin >> N >> a[0];
	if (a[0] == 1) {
		b++;
		c += b;
	}
	for (int i = 1;i < N;i++) {
		cin >> a[i];
		if (a[i] == 1) {
			if (a[i - 1] == 1) {
				b++;
				c += b;
			}
			else {
				b++;
				c += a[i];
			}
		}
		else {
			b = 0;
		}

	}
	cout << c;

}