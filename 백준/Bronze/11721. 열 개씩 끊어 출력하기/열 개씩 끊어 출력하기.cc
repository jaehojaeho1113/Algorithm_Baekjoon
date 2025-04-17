#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0;i < a.length();i++) {
		if (i % 10 == 0 && i!=0) {
			cout << '\n';
		}
		cout << a[i];
	}
}