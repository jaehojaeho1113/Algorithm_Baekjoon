#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, M;
	map<string, string> mp;
	string a, b;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> a>>b;
		mp.insert({ a,b });
	}
	for (int i = 0;i < M;i++) {
		cin >> a;
		cout << mp[a] << '\n';
	}
}