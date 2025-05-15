#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	map<int,int>mp;
	for (int i = 1;i <= 20;i++) {
		mp.insert({ i,0 });
	}
	int M, b;
	string a;
	cin >> M;
	for (int i = 0;i < M;i++) {
		cin >> a;
		if (a == "add") {
			cin >> b;
			mp[b]=1;
		}
		else if (a == "remove") {
			cin >> b;
			mp[b]=0;
		}
		else if (a == "toggle") {
			cin >> b;
			if (mp[b] == 0) {
				mp[b] = 1;
			}
			else mp[b] = 0;
		}
		else if (a == "check") {
			cin >> b;
			if (mp[b] == 1) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (a == "all") {
			for (int i = 1;i <= 20;i++) {
				mp[i] = 1;
			}
		}
		else {
			for (int i = 1;i <= 20;i++) {
				mp[i] = 0;
			}
		}
	}
}