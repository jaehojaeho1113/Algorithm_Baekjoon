#include <iostream>
using namespace std;

int main() {
	int a[9], b=0,j,i,m,n;
	for (i = 0;i < 9;i++) {
		cin >> a[i];
		b += a[i];
	}
	for (i = 0;i < 9;i++) {
		for (j = i + 1;j < 9;j++) {
			if (a[i] + a[j] == b - 100) {
                m=i;
                n=j;
			}
		}
	}
	for (int k = 0;k < 9;k++) {
		if (k != m && k != n) {
			cout << a[k] << '\n';
		}
	}
}