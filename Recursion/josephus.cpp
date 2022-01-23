//Time Complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int josephus(int n, int k) {
	if(n == 1) {
		return 0;
	}
	return (josephus(n - 1, k) + k) % n;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	cout << josephus(n, k);
}
