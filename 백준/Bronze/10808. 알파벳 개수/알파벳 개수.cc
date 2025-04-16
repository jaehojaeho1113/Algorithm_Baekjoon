#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[26] = { 0, };
	string S;
	cin >> S;
	for (int i = 0;i < S.length(); i++) {
		a[S[i] - 'a'] += 1;
	}
	for (int i = 0;i < 26;i++) {
		cout << a[i] << ' ';
	}
}