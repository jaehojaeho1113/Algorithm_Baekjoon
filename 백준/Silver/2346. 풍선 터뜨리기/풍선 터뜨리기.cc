#include<iostream>
#include <deque>
using namespace std;
int main() {
	int N,a;
	deque<pair<int,int>> dq;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		dq.push_back({ a,i + 1 });
	}
	cout << dq.front().second << " ";
	for (int i = 0;i < N-1;i++) {
		
		int b = dq.front().first;
		dq.pop_front();
		if (b > 0) {
			for (int j = 0;j < b - 1;j++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int j = 0;j < b * -1;j++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
		cout << dq.front().second << " ";
	}
}
