#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, k,a,max;
	vector <int> v;
	cin >> N >> k;
	
	for (int i = 0;i < N;i++) {
		cin >> a;
		v.push_back(a);
	}
	max = *min_element(v.begin(), v.end()) * k;
	for (int i = k - 1;i < N;i++) {
		int sum = 0;
		for (int j = i - (k-1);j <= i;j++) {
			sum += v[j];
		}
		if (sum > max) max = sum;
	}
	cout << max;
}