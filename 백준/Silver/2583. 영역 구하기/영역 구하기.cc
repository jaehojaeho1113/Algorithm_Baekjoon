#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int M, N, K,ax,ay,cnt,scnt=0;
int a1, b1, a2, b2;
int adj[100][100];
int visited[100][100];
int dy[] = { 1,0,-1,0 };
int dx[] = { 0,1,0,-1 };
vector<int>v;

void go(int y, int x) {
	cnt++;
	visited[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		ay = y + dy[i];
		ax = x + dx[i];
		if (ay < 0 || ax < 0 || ay >= M || ax >= N) continue;
		if (!visited[ay][ax] && adj[ay][ax]) {
			go(ay, ax);
		}
	}
}

int main() {
	cin >> M >> N >> K;
	fill(&adj[0][0] , &adj[0][0] + 100 * 100, 1);
	for (int i = 0;i < K;i++) {
		cin >> a1 >> b1 >> a2 >> b2;
		for (int j = b1;j < b2;j++) {
			for (int k = a1;k < a2;k++) {
				adj[j][k] = 0;
			}
		}
	}
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			if (adj[i][j] == 1 && !visited[i][j]) {
				cnt = 0;
				go(i, j);
				scnt++;
				v.push_back(cnt);
			}
		}
	}
	cout << scnt<<'\n';
	sort(v.begin(), v.end());
	for (int i : v) {
		cout << i << " ";
	}
}