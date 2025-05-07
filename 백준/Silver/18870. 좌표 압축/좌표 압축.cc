#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> k;
	int N, a, b;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		k.push_back(a);
	}
	vector<int> t = k;
	sort(k.begin(), k.end());
	k.erase(unique(k.begin(), k.end()), k.end());
	for(int x :t) cout << lower_bound(k.begin(), k.end(), x) - k.begin()<<" ";

}