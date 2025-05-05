#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
	long long N, a;
	map<int, int>k;
	cin >> N;
	for (long long i = 0;i < N;i++) {
		cin >> a;
		k.insert({ a,1 });
	}
	cin >> N;
	for (long long i = 0;i < N;i++) {
		cin >> a;
		if (k[a] == 1) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
}