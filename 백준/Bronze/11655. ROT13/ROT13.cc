#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	for (int i = 0;i < a.length();i++) {
		if (a[i] >= 'A' && a[i] < 'N') {
			a[i] += 13;
		}
		else if (a[i] >= 'N' && a[i] <= 'Z') {
			a[i] -= 13;
		}
		else if (a[i] >= 'a' && a[i] < 'n') {
			a[i] += 13;
		}
		else if (a[i] >= 'n' && a[i] <= 'z') {
			a[i] -= 13;
		}
	}
	for (int i = 0;i < a.length();i++) {
		cout << a[i];
	}
}