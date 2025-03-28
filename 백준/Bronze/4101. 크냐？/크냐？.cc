#include <iostream>
using namespace std;

int main() {
	int A, B;
	while (true) {
		cin >> A >> B;
		if (max(A, B) == A && max(A, B) != B) {
			cout << "Yes" << endl;
		}
		else if (A == 0 && B == 0) {
			break;
		}
		else {
			cout << "No" << endl;
		}
	}
}
	