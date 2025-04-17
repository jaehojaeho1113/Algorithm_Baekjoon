#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string a, b;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a >> b;
		int* arr = new int[a.length()];
		for (int j = 0;j < a.length();j++) {
			if (a[j] <= b[j]) {
				arr[j] =  b[j]-a[j];
			}
			else {
				arr[j] = b[j] + 26 - a[j];
			}
		}
		cout << "Distances: ";
		for (int i = 0;i < a.length();i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
}