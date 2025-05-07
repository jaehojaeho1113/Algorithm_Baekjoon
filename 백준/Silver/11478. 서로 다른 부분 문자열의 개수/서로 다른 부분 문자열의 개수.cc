#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	string S,a;
	cin >> S;
	map<string, int>mp;
	for (int i = 0;i < S.length();i++) {
		a = "";
		for (int j = i;j < S.length();j++) {
			a += S[j];
			mp.insert({ a,1 });
		}
	}
	cout << mp.size();
	
}