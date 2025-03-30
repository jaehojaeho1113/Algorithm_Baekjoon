#include <iostream>
using namespace std;

int main() {
	string S;
	int R, T;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> R >> S;
		int j = 0;
		while (true) {
			for (int k = 0;k < R;k++) {
				cout << S[j];
			}
			j++;
			if (S[j] == NULL) {
				break;
			}
			
		}
		cout << endl;
	}
}