#include <iostream>
#include <vector>
using namespace std;

int N;
string s;
vector<char>v[64];

string go(int y, int x, int n) {
	if (n == 1) return string(1, v[y][x]);
	char b = v[y][x];
	string ret = "";
	for (int i = y;i < y + n;i++) {
		for (int j = x;j < x + n;j++) {
			if (b != v[i][j]) {
				ret += '(';
				ret += go(y, x, n / 2);
				ret += go(y, x + n / 2, n / 2);
				ret += go(y + n / 2, x, n / 2);
				ret += go(y + n / 2, x + n / 2, n / 2);
				ret += ')';
				return ret;
			}
		}
	}
	return string(1, v[y][x]);

}

int main() {
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s;
		for (char a : s) {
			v[i].push_back(a);
		}
	}
	cout << go(0, 0, N);
}