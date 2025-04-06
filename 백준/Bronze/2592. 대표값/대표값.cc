#include <iostream>
using namespace std;

int main() {
	int str[1001]={0,}, a, sum = 0;
	pair<int, int> b;
	for (int i = 0;i < 10;i++) {
		cin >> a;
		sum += a;
		str[a]++;
		if (b.first < str[a]) {
			b.first = str[a];
			b.second = a;
		}
	}
	cout << sum / 10 << '\n' << b.second;
}