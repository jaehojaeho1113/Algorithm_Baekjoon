#include <iostream>
using namespace std;

int main() {
	int N,max_a=0,a;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		max_a += a;

	}
	cout << max_a-N+1;
}