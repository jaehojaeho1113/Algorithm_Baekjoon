#include <iostream>
using namespace std;

int main() {
	int T, N,L,M_l=0;
	string S;
	string M_s;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> N;
		for (int j = 0;j < N;j++) {
			cin >> S >> L;
			if (L > M_l) {
				M_l = L;
				M_s = S;
			}
		}
		cout << M_s << endl;
	}
}