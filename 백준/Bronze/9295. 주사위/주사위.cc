#include <iostream>
using namespace std;

int main() {
	int T, c, v;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> c >> v;
		cout << "Case " << i+1 << ": " << c + v << '\n';
	}
}