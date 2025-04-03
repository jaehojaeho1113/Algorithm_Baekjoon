#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int M, N, a = 0, b = 0;
	cin >> M >> N;
	for (int i = M;i < N+1;i++) {
		int j = 1;
		while(j<=i){
			if (j * j == i) {
				a += j*j;
				if (b == 0) {
					b = j*j;
				}
				else if (b > j*j) {
					b = j*j;
				}
				break;
			}
			j++;
		}
	}
	if (a == 0) {
		cout << -1;
	}
	else {
		cout << a << '\n' << b;
	}	
}