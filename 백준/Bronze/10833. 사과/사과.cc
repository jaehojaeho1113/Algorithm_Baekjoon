#include <iostream>
using namespace std;

int main() {
	int N,k=0,a,b;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a >> b;
		k += b % a;
	}
	cout << k;
}