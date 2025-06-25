#include <iostream>
#include <queue>
using namespace std;

int main() {
	int a,N,M,b;
	cin >> a;
	for (int i = 0;i < a;i++) {
		queue<pair<int, int>>q;
		priority_queue<int>pq;
		int cnt = 0;
		cin >> N >> M;
		for (int j = 0;j < N;j++) {
			cin >> b;
			q.push({ j,b });
			pq.push(b);
		}
		while (q.size()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			
			if (value == pq.top()) {
				cnt++;
				pq.pop();
				if (index == M) {
					cout << cnt<<'\n';
					break;
				}
			}
			else {
				q.push({ index,value });
			}
			
		}


	}
}