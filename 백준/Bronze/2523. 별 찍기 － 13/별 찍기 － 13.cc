#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1;i < N;i++) {
		cout << string(i, '*') << "\n";
	}
	for (int j = 1;j < N + 1;j++) {
		cout << string(N + 1 - j, '*') << "\n";
	}
}