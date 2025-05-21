#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M,a;
	vector <int> v;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> a;
		v.push_back(a);
	}
	int sum = 0;
	for (int i = 0;i < v.size();i++) {
		for (int j = i + 1;j < v.size();j++) {
			if (v[i] + v[j] == M) sum++;
		}
	}
	cout << sum;
}