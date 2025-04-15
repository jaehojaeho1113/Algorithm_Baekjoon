#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr_w[10], arr_k[10];
	for (int i = 0;i < 10;i++) {
		cin >> arr_w[i];
	}
	for (int i = 0;i < 10;i++) {
		cin >> arr_k[i];
	}
	sort(arr_w, arr_w + 10);
	sort(arr_k, arr_k + 10);
	cout << arr_w[7] + arr_w[8] + arr_w[9] << ' ' << arr_k[9] + arr_k[8] + arr_k[7];
}