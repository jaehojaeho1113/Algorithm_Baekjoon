#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a;
	cin >> a;
	string b = a;
	reverse(a.begin(), a.end());
	if (a == b) cout << 1;
	else cout << 0;
}