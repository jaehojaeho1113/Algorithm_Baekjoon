#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	string a;
	int T;
	deque<char> dq;
	cin >> T;
	cin.ignore();
	for(int k=0;k<T;k++){
		getline(cin, a);
		for (int i = 0;i < a.length();i++) {
			if (a[i] == '(' || a[i] == '[') {
				dq.push_back(a[i]);
			}
			else if (a[i] == ')' && !dq.empty()) {
				if (dq.back() == '(') dq.pop_back();
				else break;
			}
			else if (a[i] == ']' && !dq.empty()) {
				if (dq.back() == '[') dq.pop_back();
				else break;
			}
			else if ((a[i] == ')' || a[i] == ']') && dq.empty()) {
				dq.push_back(a[i]);
				break;
			}
		}
		if (dq.empty()) cout << "YES" << '\n';
		else cout << "NO" << '\n';
		dq.clear();
	}
}