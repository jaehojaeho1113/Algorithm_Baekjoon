#include <iostream>
using namespace std;

int main() {
	int N,x,y;
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	int* C = new int[N] {0, };
	for (int i = 0;i < N;i++) {
		cin >> A[i] >> B[i];
	}
	for (int i = 0;i < N;i++) {
		for (int j = i+1;j < N;j++) {
			if (A[i] < A[j] && B[i] < B[j]) {
				C[i] += 1;
			}
			if (A[i] > A[j] && B[i] > B[j]) {
				C[j] += 1;
			}
		}
	}
	for (int i = 0;i < N;i++) {
		cout << C[i]+1 << " ";
	}
	return 0;
}