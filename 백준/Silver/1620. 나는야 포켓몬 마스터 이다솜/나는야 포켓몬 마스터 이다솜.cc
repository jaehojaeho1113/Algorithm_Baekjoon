#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
	map<string, int> list;
	int N, M;
	string a;
	cin >> N >> M;
	string* b = new string[N];
	for (int i = 0;i < N;i++) {
		cin >> a;
		list.insert({ a,i+1 });
		b[i] = a;
	}
	for (int j = 0;j < M;j++) {
		cin >> a;
		if (atoi(a.c_str()) == 0) {
			cout << list[a] << '\n';
		}
		else {
			cout << b[atoi(a.c_str())-1] << '\n';
		}
	}
	delete[]b;
	return 0;
}