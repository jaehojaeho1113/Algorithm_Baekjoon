#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n,a;
	stack<int>stk;
	vector<int>v1,v2;
	vector<char>v3;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a;
		v1.push_back(a);
		v2.push_back(i + 1);
	}
	int j = 0;
	for (int i = 0;i < n;i++) {
		
		while (true) {
            if (j > n) {
			cout << "NO";
			return 0;
		}
			if (stk.size() && stk.top() == v1[i]) {
				v3.push_back('-');
				stk.pop();
				break;
			}
			else {
				v3.push_back('+');
				stk.push(v2[j]);
				j++;
			}
		}
		
	}
	for (char a : v3) {
		cout << a << '\n';
	}
}