#include<iostream>
#include <stack>
using namespace std;

int main() {
	int N,cnt=0;
	string s;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s;
		stack <char> stk;
		for (char a : s) {
			if (stk.size() && stk.top() == a) {
				stk.pop();
			}
			else {
				stk.push(a);
			}
		}
		if (stk.empty()) cnt++;
	}
	cout << cnt;
}