#include <iostream>
#include <string>
using namespace std;

int cnt=1;

int fell(string &s, int a, int b) {
	if (a >= b) return 1;
	else if (s[a] != s[b]) return 0;
	else {
		cnt++;
		return fell(s, a + 1, b - 1);
	}
}

int main() {
	int T;
	string s;
	cin >> T;
	for (int i = 0;i < T;i++) {
		cin >> s;
		cnt = 1;
		cout << fell(s, 0, s.length() - 1)<<" ";
		cout << cnt<<'\n';
	}
}