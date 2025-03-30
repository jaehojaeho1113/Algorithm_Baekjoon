#include <iostream>
using namespace std;

int main() {
	int T, A, B;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> A >> B;
		int j = max(A, B);
		while (true) {
			if (j % A == 0 && j % B == 0) {
				cout << j << endl;
				break;
			}
			j = j + max(A,B);
		}
	}
}