#include <iostream>
using namespace std;

int main() {
	int T, N, a=0;
	cin >> T;
	for (int i = 0;i < 5;i++) {
		cin >> N;
		if (T == N)
			a += 1;
	}
	cout << a;
}