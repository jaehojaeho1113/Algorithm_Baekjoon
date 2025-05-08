#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack <int> stk;
	int N, b;
	string a;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if(a=="push") cin >> b;
		if (a == "push") {
			stk.push(b);
		}
		else if (a == "pop") {
			if (stk.size() != 0) {
				cout << stk.top()<<'\n';
				stk.pop();
			}
			else cout << -1 << '\n';
		}
		else if (a == "size") {
			cout<< stk.size()<<'\n';
		}
		else if (a == "empty") {
			cout<<stk.empty()<<'\n';
		}
		else if (a == "top") {
			if (stk.size() != 0) {
				cout << stk.top() << '\n';
			}
			else cout << -1 << '\n';
		}
	}
}