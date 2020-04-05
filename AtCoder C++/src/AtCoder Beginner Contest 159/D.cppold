#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int A[N+1];
	int C[N+1];
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
		C[A[i]]++;
	}
	for (int k = 1; k <= N; k++) {
		C[k]--;
		int cnt = 0;
		for (int i = 1; i <= N; i++) {
			cnt += C[i]*(C[i]-1)/2;
		}
		cout << cnt << endl;
		C[k]++;
	}
	return 0;
}
