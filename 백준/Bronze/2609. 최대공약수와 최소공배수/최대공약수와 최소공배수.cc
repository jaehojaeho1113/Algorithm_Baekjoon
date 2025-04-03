#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b,M=0;
	cin >> a >> b;
	for (int i = 1;i <= min(a, b);i++) {
		if (a % i == 0 && b % i == 0) {
			M = i;
		}
	}
	cout << M << '\n';
	int i = max(a, b);
	while (true) {		
		if (i % a == 0 && i % b == 0) {
			cout << i;
			break;
		}
		i += max(a,b);
	}
}