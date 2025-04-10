# include <iostream>
# include <algorithm>
using namespace std;


int main() {
	int x[8],sum=0,a[8],b[5];
	for (int j = 0;j < 8;j++) {
		cin >> x[j];
		a[j] = x[j];
	}
	sort(x, x + 8);
	for(int i=3;i<8;i++){
		sum += x[i];
	}
	cout << sum << "\n";
	for (int i = 3;i < 8;i++) {
		for (int j = 0;j < 8;j++) {
			if (x[i] == a[j]) {
				b[i-3]= j+1;
				break;
			}
		}
	}
	sort(b, b + 5);
	for (int i = 0;i < 5;i++) {
		cout << b[i] << " ";
	}
}