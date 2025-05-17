#include <iostream>
using namespace std;

int main() {
	int N;
	int a[26] = { 0, };
	string s;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s;
		int j = s[0]-'a';
		a[j]++;
	}
	int n = 0;
	for (int i = 0;i < 26;i++) {
		if (a[i] >= 5) {
			char k = 'a' + i;
			cout << k;
			n = 1;
			k = 0;
		}
	}
	if (n == 0) {
		cout << "PREDAJA";
	}
}