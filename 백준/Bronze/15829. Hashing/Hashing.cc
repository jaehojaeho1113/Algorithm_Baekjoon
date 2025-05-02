#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N,sum=0;
	cin >> N;
	char *a = new char [N];
	for (int i = 0;i < N;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < N;i++)
	{
		sum += (a[i] - 96) * pow(31, i);
	}
	cout << sum;

	return 0;
}