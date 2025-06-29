#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, M, N, K, X, Y;
int cnt, ax, ay;
int v[50][50];
int adj[50][50];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };


void go(int y, int x) {
	adj[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		ay = y + dy[i];
		ax = x + dx[i];
		if (ay < 0 || ax < 0 || ay >= M || ax >= N) continue;
		if (v[ay][ax]==1 && !adj[ay][ax]) {
			go(ay, ax);
		}


	}
	return;
}

int main() {
	cin >> T;
	for (int i = 0;i < T;i++) {
		cnt = 0;
		fill(&v[0][0], &v[0][0]+2500, 0);
		fill(&adj[0][0],&adj[0][0]+2500, 0);
		cin >> M >> N >> K;
		for (int j = 0;j < K;j++) {
			cin >> X >> Y;
			v[X][Y] = 1;
		}
		for (int j2 = 0;j2 < M;j2++) {
			for (int j3 = 0;j3 < N;j3++) {

				if (v[j2][j3]==1 && !adj[j2][j3]) {
					cnt++;
					go(j2, j3);
				}


			}
		}
		cout << cnt << '\n';
	}

}