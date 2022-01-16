#include<bits/stdc++.h>
using namespace std;
int trailingZero(int n) {
	bitset<64>bits;
	bits |= n;
	// cout << bits << endl;
	int zero = 0;
	for (int i = 0; i < 64; i++) {
		cout << bits[i] << endl;
		if (bits[i] == 0) {
			zero++;
		}
		else {
			break;
		}
	}
	return zero;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << trailingZero(n) << endl;
}
