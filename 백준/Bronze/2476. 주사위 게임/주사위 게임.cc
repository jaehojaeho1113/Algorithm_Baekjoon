#include <iostream>
using namespace std;

int main() {
	int N, a, b, c;
	int M = 0;
	cin >> N;
	for (int i = 0;i < N; i++) {
		cin >> a >> b >> c;
		if (a == b && b == c && c == a) {
			if (10000+a*1000 > M) {
				M = 10000 + a * 1000;
			}
		}
		else if (a == b) {
			if (1000 + a * 100 > M) {
				M = 1000 + a * 100;
			}
		}
		else if (a == c) {
			if (1000 + a * 100 > M) {
				M = 1000 + a * 100;
			}
		}
		else if (b== c) {
			if (1000 + b * 100 > M) {
				M = 1000 + b * 100;
			}
		}
		else {
			int k = max(a, b);
			int t = max(b, c);
			if (max(k,t) * 100 > M) {
				M = max(k,t) * 100;
			}
		}
	}
	cout << M;
}
	