#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A[10], T;
	cin >> T;
	for (int i = 0;i < T;i++) {
		for (int j = 0;j < 10;j++) {
			cin >> A[j];
		}
		sort(A, A + 10);
		cout << A[7]<<'\n';
	}
}