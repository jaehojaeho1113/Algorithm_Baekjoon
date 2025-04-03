#include <iostream>
using namespace std;

int main() {
	int T, N, a,b;
	cin >> T;
	for (int i = 0;i < T;i++) {
		a = 0;
		cin >> N;
		for (int j = 0;j < N;j++) {
			cin >> b;
			a += b;
		}
		cout << a << '\n';
	}
}