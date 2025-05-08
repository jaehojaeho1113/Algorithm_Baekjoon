#include<iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		q.push(i + 1);
	}
	for (int i = 0;i < N-1;i++) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}