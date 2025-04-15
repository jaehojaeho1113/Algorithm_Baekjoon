#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T, a;
	cin >> T;
	for (int i = 0;i < T;i++) {
		int sum = 0;
		int arr[7] = { 0, };
		for (int j = 0;j < 7;j++) {
			cin >> a;
			if (a % 2 == 0) {
				sum += a;
				arr[j]=a;
			}
		}
		sort(arr, arr + 7);
		cout << sum<< ' ';
		for (int i = 0;i < 7;i++) {
			if (arr[i] != 0) {
				cout << arr[i] << '\n';
				break;
			}
		}
	}
}