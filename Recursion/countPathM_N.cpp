//Exponential
#include<bits/stdc++.h>
using namespace std;
int NumberofWays(int n, int m) {
	if (m == 1 || n == 1) {
		return 1;
	}
	return NumberofWays(n - 1, m) + NumberofWays(n, m - 1);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	cout << NumberofWays(n, m);
}
