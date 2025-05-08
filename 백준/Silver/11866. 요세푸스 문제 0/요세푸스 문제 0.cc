#include<iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int N, k;
	cin >> N >> k;
	int* a = new int[N];
	for (int i = 0;i < N;i++) {
		q.push(i + 1);
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < k - 1;j++) {
			q.push(q.front());
			q.pop();
		}
		a[i]=q.front();
		q.pop();
	}
	cout << "<";
	for (int i = 0;i < N - 1;i++) {
		cout << a[i] << ", ";
	}
	cout << a[N-1]<<">";
}