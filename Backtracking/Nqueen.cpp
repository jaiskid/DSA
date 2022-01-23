#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>>&Queen, int row, int col) {
	int i, j;
	for (i = 0; i < col; i++) {
		if (Queen[row][i] == 'Q') {
			return false;
		}
	}
	for (i = row, j = col ; i >= 0 && j >= 0; i--, j--) {
		if (Queen[i][j] == 'Q') {
			return false;
		}
	}
	for (i = row, j = col; i < Queen.size() && j >= 0; i++, j--) {
		if (Queen[i][j] == 'Q') {
			return false;
		}
	}
	return true;
}
bool Nqueen(vector <vector < char>>&Queen, int row) {
	if (row >= Queen.size()) {
		for (int i = 0; i < Queen.size(); i++) {
			for (int j = 0; j < Queen[i].size(); j++) {
				cout << Queen[i][j];
			}
			cout << endl;
		}
		return true;
	}
	for (int col = 0; col < Queen.size(); col++) {
		if (isSafe(Queen, row, col)) {
			Queen[row][col] = 'Q';
			if (Nqueen(Queen, row + 1)) {
				return true;
			}
			Queen[row][col] = '.';
		}
	}
	return false;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<vector<char>> Queen(n, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> Queen[i][j];
		}
	}
	Nqueen(Queen, 0);
}
