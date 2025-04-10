#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[5], b;
	for (int i = 0;i < 5;i++) {
		cin >> b;
		a[i] = b;
	}
	cout << *min_element(a, a + 3) + *min_element(a + 3, a + 5) - 50;
}