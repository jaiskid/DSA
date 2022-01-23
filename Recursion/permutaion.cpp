// Time complexity O(n*n!)
#include<bits/stdc++.h>
using namespace std;
void permutation(string s, int l, int r) {
	if (l == r) {
		cout << s << endl;
	}
	for (int i = l; i <= r; i++) {
		swap(s[l],s[i]);
		permutation(s, i + 1, r);
		swap(s[l],s[i]);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	permutation(s, 0, s.length());
}
