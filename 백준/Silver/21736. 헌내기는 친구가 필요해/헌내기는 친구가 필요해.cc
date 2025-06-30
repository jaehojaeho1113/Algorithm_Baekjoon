#include <iostream>
#include <vector>
using namespace std;

int N, M,cnt=0,ay,ax;
string s;
vector<char>v[600];
bool visited[600][600];
int dy[] = { 1,0,-1,0 };
int dx[] = { 0,1,0,-1 };

void go(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		ay = y + dy[i];
		ax = x + dx[i];
		if (ax < 0 || ay < 0 || ax >= M || ay >= N) continue;
		if (v[ay][ax] != 'X' && !visited[ay][ax]) {
			if (v[ay][ax] == 'P') cnt++;
			go(ay, ax);
		}
	}
}


int main() {
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> s;
		for (int j = 0;j < M;j++) {
			v[i].push_back(s[j]);
		}
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (v[i][j] == 'I') {
				go(i, j);
			}
		}
	}
	if (cnt == 0) cout << "TT";
	else cout << cnt;
}