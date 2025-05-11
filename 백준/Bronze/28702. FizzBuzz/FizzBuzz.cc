#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int b;
	for (int i = 1;i <= 3;i++) {
		cin >> a;
		if (atoi(a.c_str())!=0){
			 b=stoi(a.c_str())+(4-i);
		}
	}
	if (b % 3 == 0) {
		if (b % 5 == 0) cout << "FizzBuzz";
		else cout << "Fizz";
	}
	else if (b % 5 == 0) {
		cout << "Buzz";
	}
	else cout << b;
}