#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, b;
	cin >> N;
	int* a = new int[N];
	for (int i = 0;i < N;i++) {
		cin >> a[i];
	}
	b = *max_element(a, a + N) * *min_element(a, a + N);
	cout << b;
}