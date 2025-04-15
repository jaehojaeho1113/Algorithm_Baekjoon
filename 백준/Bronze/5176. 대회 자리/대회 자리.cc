#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k,p,M,seat;
	cin >> k;
	for (int i = 0;i < k;i++) {
		cin >> p >> M;
		int* a = new int [M] {0, };
		int b = 0;
		for (int j = 0;j < p;j++) {
			cin >> seat;
			if (seat > M) {
				b++;
			}
			else if (a[seat - 1] != 0) {
				b++;
			}
			else {
				a[seat - 1] = seat;
			}
		}
		cout << b << '\n';

	}
}