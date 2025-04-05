#include <iostream>
#include <string>
using namespace std;

int main() {
	int yyyy, mm, dd, n;
	string name;
	cin >> n >> name >> dd >> mm >> yyyy;
	string a=name, b=name;
	int o_y=yyyy, o_m=mm, o_d=dd;
	int y_y=yyyy, y_m=mm, y_d=dd;
	
	for (int i = 0;i < n - 1;i++) {
		cin >> name>>dd >> mm >> yyyy;
		if (yyyy > o_y) {
			o_y = yyyy;
			o_m = mm;
			o_d = dd;
			a = name;
		}
		else if (yyyy == o_y) {
			if (mm > o_m) {
				o_y = yyyy;
				o_m = mm;
				o_d = dd;
				a = name;
			}
			else if (mm == o_m) {
				if (dd > o_d) {
					o_y = yyyy;
					o_m = mm;
					o_d = dd;
					a = name;
				}
			}
		}

		if (yyyy < y_y) {
			y_y = yyyy;
			y_m = mm;
			y_d = dd;
			b = name;
		}
		else if (yyyy == y_y) {
			if (mm < y_m) {
				y_y = yyyy;
				y_m = mm;
				y_d = dd;
				b = name;
			}
			else if (mm == y_m) {
				if (dd < y_d) {
					y_y = yyyy;
					y_m = mm;
					y_d = dd;
					b = name;
				}
			}
		}
	}
	cout << a << '\n'<<b;
}


