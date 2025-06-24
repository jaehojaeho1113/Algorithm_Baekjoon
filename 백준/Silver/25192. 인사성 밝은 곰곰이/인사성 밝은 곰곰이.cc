#include<iostream>
#include <map>
using namespace std;

int main() {
	int N,cnt=0;
	string s;
	map<string, int> m;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s;
		if (s == "ENTER") {
			m.clear();
			m.insert({ s,1 });
		}
		else if (m["ENTER"]&& m[s]== 0) {
			cnt++;
			m[s] = 1;
		}
    }	
	cout << cnt;
}