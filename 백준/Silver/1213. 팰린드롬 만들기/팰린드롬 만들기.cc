#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int arr[26] = { 0, };
	string flag;
	string a,b;
	cin >> a;
	for (int i = 0;i < a.length();i++) {
		int k = a[i] - 'A';
		arr[k]++;
	}
	int cnt = 0;
	for (int i = 0; i<26;i++) {
		if (arr[i] % 2 == 1) {
            for(int j=0;j<(arr[i]/2);j++){
                b += (i + 'A');
            }
			cnt++;
			flag = i+'A';
		}
		else if (arr[i] != 0) {
            for(int j=0;j<(arr[i]/2);j++){
			    b += (i + 'A');
            }
		}
	}
	if (cnt > 1) {
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	string c = b;
	reverse(c.begin(), c.end());
	cout << b + flag + c;
}