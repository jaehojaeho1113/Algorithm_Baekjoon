#include <iostream>
#include <string>
using namespace std;

int main() {
	int N,b;
	string a,c,A,B;
	cin >> N >> a;
	b = a.find('*');
	A = a.substr(0, b);
	B = a.substr(b + 1);
	for (int i = 0;i < N;i++) {
		cin >> c;
		if (c.size() < A.size() + B.size()) {
			cout << "NE"<<'\n';
		}
		else {
			if (A == c.substr(0, A.size()) && B == c.substr(c.size() - B.size())) {
				cout << "DA" << '\n';
			}
			else cout << "NE" << '\n';
		}
		
	}
}