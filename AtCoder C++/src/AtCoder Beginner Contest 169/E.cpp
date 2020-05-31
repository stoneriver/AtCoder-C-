#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	vector<int> A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		A.push_back(a);
		B.push_back(b);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	if (N % 2 == 1) {
		cout << B[N - 2] - A[1] + 1 << endl;
	} else {
		cout << 2 * (B[N - 2] - A[1]) + 1 << endl;
	}
	return 0;
}

