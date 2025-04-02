#include <iostream>
using namespace std;

int main() {
	int T, N,A;
	float B;
	cin >> T;
	for (int i = 0; i < T;i++) {
		cin >> N;
		int a = 0;
		float b = 0;
		for (int j = 0; j < N;j++) {
			cin >> A >> B;
			a += A;
			b += B*A;
		}
		cout.precision(1);
		cout << fixed;
		cout << a <<" "<< b/a << endl;
	}
}