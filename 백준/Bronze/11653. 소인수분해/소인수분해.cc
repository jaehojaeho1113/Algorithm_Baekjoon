#include <iostream>
using namespace std;

int main() {
	int N;
	int i = 2;
	cin >> N;
	while (N!=1) {
		if (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
		else {
			i++;
		}
	}
}