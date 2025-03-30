#include <iostream>
using namespace std;

int main() {
	double S;
	int i = 1,N=0;
	cin >> S;
	while (S >= 0) {
		if (S - i >= 0) {
			S -= i;
			i++;
			N++;
		}
		else {
			break;
		}
	}
	cout << N;
}