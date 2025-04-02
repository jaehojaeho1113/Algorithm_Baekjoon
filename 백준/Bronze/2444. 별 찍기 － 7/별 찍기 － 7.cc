#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1;i < N + 1;i++) {
		cout << string(N - i, ' ') << string(2 *i-1, '*') << endl;
	}
	for (int i = 2;i < N+1;i++) {
		cout << string(i-1, ' ') << string(2 * (N - i)+1, '*') << endl;
	}
}