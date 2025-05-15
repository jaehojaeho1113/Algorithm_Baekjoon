#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int N, a;
	queue<int>q;
	stack <int> stk;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		q.push(a);
	}
	a = 1;
	while (a != N) {
		if (!q.empty()) {
			if (q.front() == a) {
				q.pop();
				a++;
			}
			else if (!stk.empty()){
				if(stk.top() == a) {
					stk.pop();
					a++;
				}
				else {
					stk.push(q.front());
					q.pop();
				}
			}	
			else {
				stk.push(q.front());
				q.pop();
			}
		}
		else if (q.empty()) {
			if (stk.top() == a) {
				stk.pop();
				a++;
			}
			else {
				cout << "Sad";
				break;
			}
		}
	}
	if(a==N) cout << "Nice";
}