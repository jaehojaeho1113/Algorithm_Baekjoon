#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
	stack <int> stk;
	int N, a,b;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if (a == 1){
			cin >> b;
			stk.push(b);
		}
		else if (a == 2) {
			if (stk.size() !=0) {
				cout << stk.top() << '\n';
				stk.pop();
			}
			else cout << -1 << '\n';
		}
		else if (a == 3) {
			cout << stk.size() << '\n';
		}
		else if (a == 4) {
			cout << stk.empty() << '\n';
		}
		else if (a == 5) {
			if (stk.size() != 0) {
				cout << stk.top()<<'\n';
			}
			else cout << -1 << '\n';
		}
	}
}