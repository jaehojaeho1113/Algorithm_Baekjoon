#include <iostream>
using namespace std;

int main() {
	int N,s,n;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s >> n;
		for (int i = 0;i < n;i++) {
			int a, b;
			cin >> a >> b;
			s += a * b;
		}
		cout << s << "\n";
	}
}