#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;
deque<int>dq;

int main() {
	int n,k;
	cin >> n;
	if (n == 0)	cout << 0;
	double a = n * 0.15;
	int b= round(a);
	
	
	for (int i = 0;i < n;i++) {
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.end());
	for (int i : v) dq.push_back(i);

	for (int i = 0;i < b;i++) {
		dq.pop_front();
		dq.pop_back();
	}
	double sum = 0;
	int length = dq.size();
	for (int i : dq) sum += i;
	sum /= length;
	int value = round(sum);
	if(n!=0) cout << value;

	return 0;
}