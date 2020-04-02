#include <iostream>
using namespace std;

int main() {
	int N, X, Y;
	cin >> N >> X >> Y;
	for (int k = 1; k <= N - 1; k++) {
		int cnt = 0;
		cnt += N - k;	// ノーマルパス（メインストリーム上）分

		// X-Yリンクを使う分
		for (int dx = 0; dx <= k - 1; dx++) {
			int dy = k - 1 - dx;
			int i = X + dx;
			int j = Y + dy;
			if (i < j && 0 <= i && j <= N && 0 <= j && j <= N)
				cnt++;
			j = Y - dy;
			if (i < j && 0 <= i && j <= N && 0 <= j && j <= N)
				cnt++;
			i = X - dy;
			j = Y + dy;
			if (i < j && 0 <= i && j <= N && 0 <= j && j <= N)
				cnt++;
			j = Y - dy;
			if (i < j && 0 <= i && j <= N && 0 <= j && j <= N)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
