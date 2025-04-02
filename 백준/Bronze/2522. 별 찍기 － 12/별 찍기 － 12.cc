#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1;i < N;i++) {
		cout << string(N - i, ' ') << string(i, '*') << "\n";
	}
	for (int j = 1;j < N + 1;j++) {
		cout << string(j - 1, ' ') << string(N + 1 - j, '*') << "\n";
	}
}