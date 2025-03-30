#include <iostream>
using namespace std;

int main() {
	int T, Y = 0, K = 0, y, k;
	cin >> T;
	for (int i = 0;i < T;i++) {
		for (int j = 0;j < 9;j++) {
			cin >> y >> k;
			Y += y;
			K += k;
		}
		if (Y > K)
			cout << "Yonsei"<<endl;
		else if (Y < K)
			cout << "Korea"<<endl;
		else
			cout << "Draw"<<endl;
		Y = 0, K = 0;
	}
}