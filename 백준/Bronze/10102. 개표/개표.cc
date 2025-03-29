#include <iostream>
using namespace std;

int main() {
	int V,a=0,b=0;
	string k;
	cin >> V >> k;
	for (int i = 0;i < V;i++) {
		if (k[i] == 'A') {
			a++;
		}
		else {
			b++;
		}
	}
	if (a > b)
		cout << "A";
	else if (a < b)
		cout << "B";
	else
		cout << "Tie";
}