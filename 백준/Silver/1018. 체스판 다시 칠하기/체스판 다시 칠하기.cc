#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N, M,cnt=0;
	vector<string>v;
	vector<int>v2;
	string s;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> s;
		v.push_back(s);

	}
	for (int i = 7;i < N;i++) {
		for (int j = 7;j < M;j++) {
			for (int k = i - 7;k <= i;k++) {
				for (int l = j - 7;l <= j;l++) {
					if ((k + l)%2 && v[k][l]=='B') {
						cnt++;
					}
					else if ((k + l) % 2==0 && v[k][l] == 'W') {
						cnt++;
					}
				}
				
			}
			v2.push_back(cnt);
			cnt = 0;
		}
	}
	for (int i = 7;i < N;i++) {
		for (int j = 7;j < M;j++) {
			for (int k = i - 7;k <= i;k++) {
				for (int l = j - 7;l <= j;l++) {
					if ((k + l) % 2 && v[k][l] == 'W') {
						cnt++;
					}
					else if ((k + l) % 2 == 0 && v[k][l] == 'B') {
						cnt++;
					}
				}
				
			}
			v2.push_back(cnt);
			cnt = 0;
		}
	}
	sort(v2.begin(),v2.end());
	cout << v2[0];
}