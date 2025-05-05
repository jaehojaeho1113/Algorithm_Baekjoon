#include <iostream>
#include <map>
using namespace std;

int main() {
	int N,M,sum=0;
	string a;
	map<string, int>k;
	cin >> N>>M;
	for (int i = 0;i < N;i++) {
		cin >> a;
		k.insert({ a,1 });
	}
	for (int i = 0;i < M;i++) {
		cin >> a;
		if (k[a] == 1) {
			sum++;
		}
	}
	cout << sum;
}