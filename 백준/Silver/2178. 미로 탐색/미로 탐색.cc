#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int N, M, ax, ay,x,y;
int dy[] = {1,0,-1,0};
int dx[] = { 0,1,0,-1 };
int visited[100][100];
char adj[100][100];
string s;

void go(int ry, int rx) {
	visited[ry][rx] = 1;
	queue<pair<int, int>>q;
	q.push({ ry,rx });
	while (q.size()) {
		tie(y, x) = q.front(); 
		q.pop();
		for (int i = 0;i < 4;i++) {
			ay = y + dy[i];
			ax = x + dx[i];
			if (ay < 0 || ax < 0 || ay >= N || ax >= M) continue;
			if (!visited[ay][ax] && adj[ay][ax]=='1') {
				visited[ay][ax] = visited[y][x] + 1;
				q.push({ ay,ax });
			}
		}
	}
	return;
}

int main() {
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> s;
		int j = 0;
		for (char a : s) {
			adj[i][j]=a;
			j++;
		}
	}
	go(0, 0);
	cout << visited[N-1][M-1];
	
}