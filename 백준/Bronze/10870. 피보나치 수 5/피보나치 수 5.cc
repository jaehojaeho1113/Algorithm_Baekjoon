#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, a = 0, b = 1,c=0;
	cin >> n;
	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		for (int i = 0;i < n - 1;i++) {
			c = a + b;
			a = b;
			b = c;
		}
		cout << c;
		
	}
	
}