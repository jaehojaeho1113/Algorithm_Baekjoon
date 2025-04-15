#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,arr[5];
	cin >> T;
	for (int i = 0;i < T;i++) {
		for (int j = 0;j < 5;j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 5);
		int b = 0;
		for (int k = 1;k < 4;k++) {
			b += arr[k];
		}
		if (arr[4] - arr[1] >= 4) {
			cout << "KIN"<<'\n';
		}
		else {
			cout << b<<'\n';
		}
	}
}