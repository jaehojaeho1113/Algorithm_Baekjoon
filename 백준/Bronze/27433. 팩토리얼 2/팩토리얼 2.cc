#include<iostream>
using namespace std;

long long fact(int n) {
	if (n <= 1) return 1;
	return n * fact(n - 1);
}

int main() {
	int N;
	cin >> N;
	cout << fact(N);
}