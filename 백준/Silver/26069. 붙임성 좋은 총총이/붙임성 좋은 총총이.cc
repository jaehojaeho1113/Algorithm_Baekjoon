#include<iostream>
#include <map>
using namespace std;

int main() {
	int N,cnt=0;
	string s1,s2;
	map<string, int> m;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s1>>s2;
		if (m.empty()) {
			if (s1 == "ChongChong") {
				m.insert({ s1,1 });
				m.insert({ s2,1 });
			}
			else if (s2 == "ChongChong") {
				m.insert({ s1,1 });
				m.insert({ s2,1 });
			}
		}
		else {
			if (m[s1] == 1) {
				m[s2]=1;
			}
			else if (m[s2] == 1) {
				m[s1]=1;
			}
		}
		
	}
	for (auto a : m) {
		if (a.second == 1) {
			cnt++;
		}
	}
	cout << cnt;
}