#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,scnt,cnt,ax,ay;
string s;
vector<char>v[25];
vector<int>sum;
int visited[25][25];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void go(int y, int x) {
	visited[y][x] = 1;
	cnt++;
	for (int i = 0;i < 4;i++) {
		ay = y + dy[i];
		ax = x + dx[i];
		if (ay < 0 || ax < 0 || ay >= N || ax >= N) continue;
		if (!visited[ay][ax] && v[ay][ax] == '1') {
			go(ay, ax);
		}
	}
}


int main() {
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> s;
		for(int k=0;k<N;k++) v[i].push_back(s[k]);
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++){
			if (!visited[i][j]&&v[i][j]=='1') {
				scnt++;
				cnt = 0;
				go(i, j);
				sum.push_back(cnt);
			}
		}
	}
	sort(sum.begin(), sum.end());
	cout << scnt << '\n';
	for (int i : sum) {
		cout << i << '\n';
	}
}