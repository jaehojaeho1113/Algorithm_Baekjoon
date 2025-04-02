#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i < N + 1; i++) {
		cout <<string(i-1,' ') << string(N + 1 - i, '*') << endl;
	}
}