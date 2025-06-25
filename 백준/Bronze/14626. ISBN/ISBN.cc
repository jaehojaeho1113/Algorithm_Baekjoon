#include <iostream>
using namespace std;
int main() {
	int k = 0,a;
	string s;
	cin >> s;
	for (int i = 0;i < 13;i++) {
		if (s[i] != '*') {
			if (i % 2) {
				k += (s[i] - '0')*3;
			}
			else {
				k += s[i] - '0';
			}
		}
		else {
			a = i;
		}
	}
	
	int ans = 10 - k % 10;
	if (ans == 10) {
		cout << 0;
	}
	else if(a%2){
		cout << (k*3%10);
	}
	else {
		cout << ans;
	}
}