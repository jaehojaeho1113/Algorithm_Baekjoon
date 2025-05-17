#include <iostream>
using namespace std;

int main() {
	int A, B, C,a,b;
	int c_a = 0,c_b = 0,c_c = 0;
	cin >> A >> B >> C;
	int arr[101] = { 0, };
	
	for (int i = 0;i < 3;i++) {
		cin >> a >> b;
		for (int j= a;j < b;j++) {
			arr[j]++;
		}
	}
	for (int i = 1;i <= 100;i++) {
		if (arr[i] == 1) c_a++;
		else if (arr[i] == 2) c_b++;
		else if (arr[i] == 3) c_c++;
	}
	cout << A * c_a + B * c_b*2 + C * c_c*3;
}