#include<bits/stdc++.h>
using namespace std;
int TrailingZerosInFact(int n) {
	int res = 0;
	for (int i = 5; i <= n; i *= 5) {
		res += n / i;
	}
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << TrailingZerosInFact(n);
}
