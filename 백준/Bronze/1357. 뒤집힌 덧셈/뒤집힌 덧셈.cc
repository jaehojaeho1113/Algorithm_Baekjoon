#include <iostream>
#include <string>
using namespace std;

int main() {
	int X, Y,flag=0;
	string a, b;
	string A, B;
	cin >> X >> Y;
	a = to_string(X);
	b = to_string(Y);
	for (int i = a.length()-1;i >= 0;i--) {
		if (a[i] != '0'||flag==1) {
			A += a[i];
			flag = 1;
		}
	}
	flag = 0;
	for (int i = b.length() - 1;i >= 0;i--) {
		if (b[i] != '0'||flag==1) {
			B += b[i];
			flag = 1;
		}
	}
	X = stoi(A);
	Y = stoi(B);
	int C = X + Y;
	string c,k;
	c = to_string(C);
	flag = 0;
	for (int i = c.length() - 1;i >= 0;i--) {
		if (c[i] != '0'||flag==1) {
			 k+= c[i];
			 flag = 1;
		}
	}

	cout << stoi(k);
}