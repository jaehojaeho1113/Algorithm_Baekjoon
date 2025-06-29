#include <iostream>
using namespace std;

long long go(int N) {
	long long a[101];
	a[1] = 1, a[2] = 1, a[3] = 1, a[4] = 2,a[5]=2;
	for (int i = 6;i <= N;i++) {
		a[i] = a[i - 1] + a[i - 5];
	}
	return a[N];
}

int main() {
	int T,N;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> N;
		cout<< go(N)<<'\n';
	}
	return 0;
}