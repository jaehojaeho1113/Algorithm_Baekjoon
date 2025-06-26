#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M,a;
	long long A, B;
	cin >> N >> M;
	vector<long long>v;
	vector<long long>v_sum;
	for (int i = 0;i < N;i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0;i <= N;i++) {
		if (i == 0) {
			v_sum.push_back(0);
		}
		else {
			v_sum.push_back(v_sum[i - 1] + v[i-1]);
		}
	}
	for (int i = 0;i < M;i++) {
		cin >> A >> B;
		cout << v_sum[B] - v_sum[A - 1]<<'\n';
	}
}