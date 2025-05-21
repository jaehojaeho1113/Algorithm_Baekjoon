#include <iostream>
#include <map>
using namespace std;

int main() {
	int T, n;
	string a, b;
	map<string,int>mp;
	cin >> T;
	for (int j = 0;j < T;j++) {
		cin >> n;
		for (int i = 0;i < n;i++) {
			cin >> a >> b;
			if (mp[b] == 0) {
				mp[b]=1;
			}
			else {
				mp[b]++;
			}
		}
		int ch = 1;
		for (auto k : mp) {
			ch *= (k.second + 1);
		}
		cout << ch - 1 << '\n';
		mp.clear();
	}
}