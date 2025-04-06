#include <iostream>
using namespace std;

int main() {
	int a, b;
	pair<int, int>result;
	for (int i = 0;i < 5;i++) {
		b = 0;
		for (int j = 0;j < 4;j++) {
			cin >> a;
			b += a;
		}
		if (result.second < b) {
			result.second = b;
			result.first = i+1;
		}
	}
	cout << result.first << " " << result.second;
}