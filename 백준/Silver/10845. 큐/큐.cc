#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int N, b;
	string a;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if (a == "push") {
			cin >> b;
			q.push(b);
		}
		else if (a == "pop") {
			if (q.size() != 0) {
				cout << q.front() << '\n';
				q.pop();
			}
			else cout << -1 << '\n';
		}
		else if (a == "size") cout << q.size() << '\n';
		else if (a == "empty") cout << q.empty() << '\n';
		else if (a == "front") {
			if (q.size() != 0) {
				cout << q.front() << '\n';
			}
			else cout << -1 << '\n';

		}
		else if (a == "back") {
			if (q.size() != 0) {
				cout << q.back() << '\n';
			}
			else cout << -1<< '\n';
		}
	}
}