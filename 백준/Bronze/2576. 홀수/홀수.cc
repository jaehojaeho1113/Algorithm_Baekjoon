#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b=0,m=0;
	for (int i = 0;i < 7;i++) {
		cin >> a;
		if (a % 2 != 0) {
			b += a;
			if (m == 0) {
				m = a;
			}
			else if(m>a){
				m = a;
			}
		}
	}
	if (b == 0) {
		cout << -1;
	}
	else {
		cout << b << '\n' << m;
	}	
}