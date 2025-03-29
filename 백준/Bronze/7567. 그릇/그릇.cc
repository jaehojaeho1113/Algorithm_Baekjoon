#include <iostream>
using namespace std;

int main() {
	int a=10;
	string b;
	cin >> b;
	for (int i = 1; i < 50; i++) {
		if (b[i] != NULL) {
			if (b[i] != b[i - 1]) {
				a += 10;
			}
			else {
				a += 5;
			}
		}
		else {
			break;
		}
	}
	cout << a;
}