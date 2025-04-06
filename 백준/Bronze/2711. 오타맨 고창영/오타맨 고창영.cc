#include <iostream>
#include <string>
using namespace std;

int main() {
	int T,a;
	cin >> T;
	string b;
	for (int i = 0;i < T;i++) {
		cin >> a >> b;
		b.erase(a-1, 1);
		cout << b<<'\n';
	}
}