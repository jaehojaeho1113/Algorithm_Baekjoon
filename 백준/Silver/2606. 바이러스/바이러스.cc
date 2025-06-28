#include <iostream>
#include <vector>
using namespace std;
int N, M;
int cnt = 0;
vector<int> v[101];
int v2[101];

void go(int x) {
	v2[x] = 1;
	cnt++;
	for (int y : v[x]) {
		if (v2[y] == 1) continue;
		go(y);
	}
	return;
}


int main() {
	cin >> N;
	cin >> M;
	for (int i = 0;i < M;i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	go(1);
	cout << cnt-1;
	return 0;
}