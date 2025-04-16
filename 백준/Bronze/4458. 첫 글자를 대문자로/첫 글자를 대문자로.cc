#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string a;
	cin.ignore();
	for (int i = 0;i < N;i++) {
		getline(cin,a);
		if (a[0] >= 'a' && a[0] <= 'z') {
			a[0] += -32;
		}
		
		cout <<a<<'\n';
	}
}