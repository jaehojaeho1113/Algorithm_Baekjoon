#include <iostream>
using namespace std;

int main() {
	int T, c, v;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> c >> v;
		cout << v-c+2 << '\n';
	}
}