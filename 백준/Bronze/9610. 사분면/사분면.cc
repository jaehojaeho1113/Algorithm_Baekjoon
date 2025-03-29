#include <iostream>
using namespace std;

int main() {
	int n,A,B,a=0,b=0,c=0,d=0,e=0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> A >> B;
		if (A ==0 || B==0) {
			e++;
		}
		else if(A>0){
			if (B > 0) {
				a++;
			}
			else {
				d++;
			}
		}
		else {
			if (B > 0) {
				b++;
			}
			else {
				c++;
			}
		}
	}
	cout << "Q1: " << a << endl << "Q2: " << b << endl << "Q3: " << c << endl << "Q4: " << d << endl << "AXIS: " << e;
}