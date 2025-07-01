#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M=1,ax,ay,cnt;
int dy[] = { 1,0,-1,0 };
int dx[] = { 0,1,0,-1 };
int adj[100][100];
int adjj[100][100];
int visited[100][100];
vector<int>v;

void go(int a, int y, int x) {
	visited[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		ay = y + dy[i];
		ax = x + dx[i];
		if (ay < 0 || ax < 0 || ay >= N || ax >= N) continue;
		if (!visited[ay][ax] && adj[ay][ax] > a) {
			go(a, ay, ax);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> adjj[i][j];
			if (adjj[i][j] > M) M = adjj[i][j];
		}
	}
	for (int k = 0;k < M;k++) {
		cnt = 0;
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < N;j++) {
				adj[i][j] = adjj[i][j];
			}
		}

		fill(&visited[0][0], &visited[0][0] + 100*100, 0);
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < N;j++) {
				if (!visited[i][j] && adj[i][j] > k) {
					go(k, i, j);
					cnt++;
				}
				
			}
		}
		v.push_back(cnt);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1];
}