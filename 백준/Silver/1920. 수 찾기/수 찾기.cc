#include <map>
#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N,M;
	long long a;
	cin >> N;
	map<long long, int>mp;
	for (int i = 0;i < N;i++) {
		cin >> a;
		mp.insert({ a,1 });
	}
	cin >> M;
	for (int i = 0;i < M;i++) {
		cin >> a;
		cout << mp[a] << '\n';
	}
}