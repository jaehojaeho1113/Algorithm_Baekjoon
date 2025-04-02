#include <iostream>
using namespace std;

int main() {
	int N,a;
	cin >> N;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		N -= a;
	}
	cout << N;
}