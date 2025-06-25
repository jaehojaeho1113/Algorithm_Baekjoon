#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main() {
	int N, a;
	vector<int> v;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		v.push_back(a);
	}
	double sum = 0;
	for (int i : v) sum += i;
	if (sum >= 0)	cout << round(sum / N) << '\n';
	else{
		if (round(sum * -1 / N) * -1 == -0) cout << round(sum * -1 / N) << '\n';
		else cout << round(sum * -1 / N) * -1 << '\n';
	}

	sort(v.begin(), v.end());
	cout << v[v.size() / 2] << '\n';

	map<int, int>mp;
	for (int i : v) {
		if (mp[i] == 0) {
			mp[i]=1;
		}
		else {
			mp[i]= mp[i] + 1;
		}
	}
	
	int max = 0;
	vector<int> v2;
	for (auto i : mp) {
		if (i.second > max) {
			v2.clear();
			v2.push_back(i.first);
			max =i.second;
		}
		else if (i.second == max) {
			v2.push_back(i.first);
		}
	}

	sort(v2.begin(), v2.end());
	if (v2.size() >= 2) cout << v2[1] << '\n';
	else cout << v2[0] << '\n';

	cout << abs(v[v.size()-1]-v[0]);
}