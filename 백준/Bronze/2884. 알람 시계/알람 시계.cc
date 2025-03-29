#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	if (M >= 45) {
		cout << N << " " << M - 45;
	}
	else
		if (N != 0) {
			cout << N - 1 << " " << M + 15;
		}
		else {
			cout << 23 << " " << M + 15;
		}
}