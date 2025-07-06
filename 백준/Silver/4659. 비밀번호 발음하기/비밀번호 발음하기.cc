#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	while (true) {
		int flag = 0;
		int cnta = 0;
		int cntb = 0;
		cin >> a;
		if (a == "end") break;
		else if (a.size() == 1) {
			if (a == "a" || a == "e" || a == "i" || a == "o" || a == "u") {
				cout << "<" << a << "> is acceptable." << '\n';
				continue;
			}
			else {
				cout << "<" << a << "> is not acceptable." << '\n';
				continue;
			}
		}
		for (int i = 0;i < a.size();i++) {
			

			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
				flag = 1;
				cnta++;
				cntb = 0;
				if (cnta == 3) {
					cout << "<" << a << "> is not acceptable." << '\n';
					break;
				}
				else if (i > 0 && a[i - 1] == a[i]) {
					if (a[i] != 'e' && a[i] != 'o') {
						cout << "<" << a << "> is not acceptable." << '\n';
						break;
					}
					else {
						if (i == a.size() - 1) {
							cout << "<" << a << "> is acceptable." << '\n';
							break;
						}
					}
				}
				else if (i == a.size() - 1) {
					if (flag == 1) {
						cout << "<" << a << "> is acceptable." << '\n';
						break;
					}
					else {
						cout << "<" << a << "> is not acceptable." << '\n';
						break;
					}

				}
			}
			else {
				cntb++;
				cnta = 0;
				if (cntb == 3) {
					cout << "<" << a << "> is not acceptable." << '\n';
					break;
				}
				else if (i > 0 && a[i - 1] == a[i]) {
						cout << "<" << a << "> is not acceptable." << '\n';
						break;
				}
				else if (i == a.size() - 1) {
					if (flag == 1) {
						cout << "<" << a << "> is acceptable." << '\n';
						break;
					}
					else {
						cout << "<" << a << "> is not acceptable." << '\n';
						break;
					}
					
				}
			}
		}
	}
}