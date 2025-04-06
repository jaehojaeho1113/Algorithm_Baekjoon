#include <iostream>
using namespace std;

int main() {
	int A, B, c[1001], d = 0;
	for (int i = 1;i < 100;i++) {
		for (int j = 1;j < i + 1;j++) {
			c[d] = i;
			d++;
			if (d == 1000) {
				break;
			}
		}
		if (d == 1000) {
			break;
		}
	}
	int sum = 0;
	cin >> A >> B;
	for (int i = A-1;i <= B-1;i++) {
		sum += c[i];
	}
	cout << sum;
}