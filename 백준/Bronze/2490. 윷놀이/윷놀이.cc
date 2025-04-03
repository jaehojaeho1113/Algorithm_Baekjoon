#include <iostream>
using namespace std;

int main() {
	int arr[4];
	for (int i = 0;i < 3;i++) {
		int a = 0;
		for (int i = 0;i < 4;i++) {
			cin >> arr[i];
			if (arr[i] == 1) {
				a += 1;
			}
		}
		if (a == 4) 
			cout << "E" << '\n';
		else if(a==3)
			cout << "A" << '\n';
		else if (a == 2)
			cout << "B" << '\n';
		else if (a == 1)
			cout << "C" << '\n';
		else
			cout << "D" << '\n';
	}
}