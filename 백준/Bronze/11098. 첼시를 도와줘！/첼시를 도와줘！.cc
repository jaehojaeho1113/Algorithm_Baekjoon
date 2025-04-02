#include <iostream>
using namespace std;

int main() {
	int n, p, a;
	string b,max_b;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> p;
		int max_a = 0;
		for (int j = 0;j < p;j++) {
			cin >> a >> b;
			if (a > max_a) {
				max_a = a;
				max_b = b;
			}
		}
		cout << max_b << endl;
	}
}