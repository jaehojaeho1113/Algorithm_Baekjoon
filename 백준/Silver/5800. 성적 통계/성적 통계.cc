#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int K, N;
	cin >> K;
	for (int i = 0;i < K;i++) {
		cin >> N;
		int* arr = new int[N];
		for (int j = 0;j < N;j++) {
			cin >> arr[j];
		}
		sort(arr, arr + N);
		int k_min = 0;
		for (int k = 0;k < N-1;k++) {
			if (arr[k + 1] - arr[k] > k_min) {
				k_min = arr[k + 1] - arr[k];
			}
		}
		cout << "Class " << i+1 << '\n';
		cout << "Max " << arr[N-1] << ", Min " << arr[0] << ", Largest gap " << k_min<<'\n';
	}
	
}