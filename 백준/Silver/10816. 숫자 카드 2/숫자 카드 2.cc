#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
	int N,a,M,k;
	map<int, int> list;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if (list.find(a)==list.end()) {
			list.insert({ a,1 });
		}
		else {
			int b = list[a];
			list[a] = b + 1;
		}
	}
	cin >> M;
	for (int i = 0;i < M;i++) {
		cin >> k;
		cout << list[k] << " ";
	}
	
}