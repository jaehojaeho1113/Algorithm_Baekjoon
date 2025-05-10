#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N,a;
	vector<int> v;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int sum = 0,value=0;
	for (int i : v) {
		value += i;
		sum += value;
	}
	cout << sum;
}