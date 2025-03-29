#include <iostream>
using namespace std;

int main() {
	int N,a=0,b=0,c;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> c;
		if (c==1) {
			a++;
		}
		else {
			b++;
		}
	}
	if (a > b)
		cout << "Junhee is cute!";
	else if (a < b)
		cout << "Junhee is not cute!";
}