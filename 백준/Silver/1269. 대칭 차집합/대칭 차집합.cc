#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int,int>ka;
	int Na, Nb,a,b,sum=0,dsum=0;
	cin >> Na >> Nb;
	for (int i = 0;i < Na;i++) {
		cin >> a;
		ka.insert({ a,1 });
	}
	for (int i = 0;i < Nb;i++) {
		cin >> b;
		if (ka[b] == 0) {
			sum++;
		}
		else {
			dsum++;
		}
	}
	cout << sum + Na - dsum;

}