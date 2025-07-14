#include <iostream>
using namespace std;

int N, M, j,a,l=1,r;
int cnt = 0;
int visited[11];

void go(int x) {
	if (l<=x && r>=x) {
		return;
	}
	else if(l>x){
		cnt+=l-x;
		l = x;
		r = l + M - 1;
		go(x);
	}
	else if (l < x) {
		cnt += x - r;
		r = x;
		l = r - M + 1;
		go(x);
	}
}

int main() {
	cin >> N >> M>>j;
	for (int i = 0;i < j;i++) {
		r = l + M - 1;
		cin >> a;
		go(a);
	}
	cout << cnt;
}