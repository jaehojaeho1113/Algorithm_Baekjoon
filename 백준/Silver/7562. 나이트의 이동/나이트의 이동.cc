#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

int visited[300][300];
int adj[300][300];
int N, M, I, ax, ay, x, y;
int dy[] = {-2,-1,1,2,2,1,-1,-2};
int dx[] = { 1,2,2,1,-1,-2,-2,-1};

void bfs(int x1, int y1,int  x2,int  y2) {
	visited[y1][x1] = 1;
	queue<pair<int,int>> q;
	q.push({ x1,y1 });
	while (q.size()) {
		tie(x, y) = q.front(); q.pop();
		for (int i = 0;i < 8;i++) {
			ay = y + dy[i];
			ax = x + dx[i];
			if (ay < 0 || ax < 0 || ay >= M || ax >= M) continue;
			if (!visited[ay][ax]) {
				visited[ay][ax] = visited[y][x] + 1;
				q.push({ ax,ay });
			}
		}
	}
	

}

int main() {
	cin >> N;
	int x1, y1,x2,y2;
	for (int i = 0;i < N;i++) {
		cin >> M;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		fill(&visited[0][0], &visited[0][0] + 300 * 300, 0);
		bfs(x1, y1, x2, y2);
		cout << visited[y2][x2]-1 << '\n';
	}
}