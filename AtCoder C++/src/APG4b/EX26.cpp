// EX26 - 電卓を作ろう3

#include<bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void cmd_print_vec(vector<int> vec) {
	cout << "[ ";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}
	cout << "]" << endl;
}



void cmd_int() {

}

void cmd_print_int() {

}

void cmd_vec() {

}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		switch (cmd) {
		case "int":

			break;
		case "print_int":
			break;
		case "vec":
			break;
		case "print_vec":
			break;
		}
	}
	return 0;
}
