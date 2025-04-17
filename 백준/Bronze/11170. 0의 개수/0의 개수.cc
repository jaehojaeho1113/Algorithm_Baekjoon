#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, N, M;
	cin >> T;
	for (int i = 0;i < T;i++) {
		int sum = 0;
		cin >> N >> M;
		for (int i = N;i <= M;i++) {
			string c=to_string(i);
			for (int j = 0;j < c.length();j++) {
				if (c[j] == '0') {
					sum += 1;
				}
			}
		}
		cout << sum << '\n';
	}
}