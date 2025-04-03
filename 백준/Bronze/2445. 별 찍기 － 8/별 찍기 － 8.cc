#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1;i < N;i++) {
		cout << string(i, '*') << string(N - i, ' ') << string(N - i, ' ') << string(i, '*') << endl;
	}
	for (int i = 0;i < N;i++) {
		cout << string(N-i, '*') << string(i, ' ') << string(i, ' ') << string(N-i, '*') << endl;
	}
}