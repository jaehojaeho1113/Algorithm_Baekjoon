#include <iostream>
using namespace std;

int main() {
	int N, r, e, c;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> r >> e >> c;
		if (e > r + c) {
			cout << "advertise" << endl;
		}
		else if (e < r + c) {
			cout << "do not advertise" << endl;
		}
		else {
			cout << "does not matter"  << endl;
		}
	}
}