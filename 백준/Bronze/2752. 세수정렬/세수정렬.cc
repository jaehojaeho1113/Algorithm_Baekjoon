#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[3], b;
	for (int i = 0;i < 3;i++) {
		cin >> b;
		a[i] = b;
	}
	sort(a, a + 3);
	for (int i = 0;i < 3;i++) {
		cout << a[i]<<" ";
	}
}