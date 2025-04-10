# include <iostream>
# include <algorithm>
using namespace std;


int main() {
	int t, n;
	cin >> t;
	for (int j = 0;j < t;j++) {
		cin >> n;
		int* x = new int[n];
		for (int i = 0;i < n;i++) {
			cin >> x[i];
		}
		int k = (*max_element(x, x + n) - *min_element(x, x + n)) * 2;
		cout << k<<'\n';
	}
}