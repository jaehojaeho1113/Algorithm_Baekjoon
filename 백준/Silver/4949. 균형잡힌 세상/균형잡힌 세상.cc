#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	string a;
	deque<char> dq;

	getline(cin, a);
	while (a != ".") {
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
		if (dq.empty()) cout << "yes" << '\n';
		else cout << "no" << '\n';
		dq.clear();
		getline(cin, a);
	}
}