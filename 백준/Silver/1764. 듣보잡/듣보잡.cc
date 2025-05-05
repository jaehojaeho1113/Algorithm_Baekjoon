#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int>list;
	map<string, int>list2;
	int N, M;
	string a, b;
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		cin >> a;
		list.insert({ a,1 });
	}
	for (int i = 0;i < M;i++) {
		cin >> b;
		if (list[b] == 1) {
			list2.insert({ b,1 });
		}
	}
	cout << list2.size()<<'\n';
	for (auto i : list2) cout << i.first << '\n';

}